/*
 * XREFs of NtRemoveProcessDebug @ 0x140935B70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DbgkClearProcessDebugObject @ 0x14067F39C (DbgkClearProcessDebugObject.c)
 *     PsTestProtectedProcessIncompatibility @ 0x14070C774 (PsTestProtectedProcessIncompatibility.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall NtRemoveProcessDebug(ULONG_PTR a1, void *a2)
{
  char PreviousMode; // si
  __int64 result; // rax
  __int64 v5; // rcx
  struct _KPROCESS *v6; // rdi
  int v7; // ebx
  unsigned __int64 SecureHandle; // rbx
  PVOID Object[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v10[14]; // [rsp+50h] [rbp-98h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object[0] = 0LL;
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    LOBYTE(v5) = PreviousMode;
    v6 = (struct _KPROCESS *)Object[0];
    if ( PsTestProtectedProcessIncompatibility(v5, (__int64)KeGetCurrentThread()->ApcState.Process, (__int64)Object[0]) )
    {
      v7 = -1073740014;
    }
    else
    {
      SecureHandle = v6->SecureState.SecureHandle;
      if ( (SecureHandle & 1) == 0
        || (memset(v10, 0, 0x68uLL),
            v10[2] = 0LL,
            v10[1] = SecureHandle,
            v7 = VslpEnterIumSecureMode(2u, 12, 0, (__int64)v10),
            v7 >= 0) )
      {
        Object[0] = 0LL;
        v7 = ObReferenceObjectByHandle(a2, 2u, DbgkDebugObjectType, PreviousMode, Object, 0LL);
        if ( v7 >= 0 )
        {
          v7 = DbgkClearProcessDebugObject(v6, (__int64)Object[0]);
          ObfDereferenceObject(Object[0]);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return (unsigned int)v7;
  }
  return result;
}
