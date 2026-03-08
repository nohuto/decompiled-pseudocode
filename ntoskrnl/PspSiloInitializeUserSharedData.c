/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x1409AA8E8
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1409AA0D0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     PsAttachSiloToCurrentThread @ 0x1402993A0 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402993C0 (PsDetachSiloFromCurrentThread.c)
 *     MiMapViewInSystemSpace @ 0x1406A55B8 (MiMapViewInSystemSpace.c)
 *     MmCreateSection @ 0x140711DC0 (MmCreateSection.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x14087B034 (RtlpGetNtProductTypeFromRegistry.c)
 *     PspSiloInitializeSuiteMask @ 0x1409AA6D8 (PspSiloInitializeSuiteMask.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1409AA748 (PspSiloInitializeSystemRootBuffer.c)
 */

__int64 __fastcall PspSiloInitializeUserSharedData(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  PVOID v3; // rbx
  int v4; // edi
  _QWORD *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v6; // r14
  int NtProductTypeFromRegistry; // ebx
  __int64 v8; // rsi
  unsigned __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+88h] [rbp+38h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  __int64 v12; // [rsp+98h] [rbp+48h] BYREF

  v11 = 0LL;
  Object = 0LL;
  v12 = 624LL;
  result = MmCreateSection((int)&Object, 983071LL, 0, &v12, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Object;
    v9 = 0LL;
    v12 = 0LL;
    v4 = MiMapViewInSystemSpace((__int64)Object, &v11, &v9, &v12, 0LL, 0LL);
    if ( v4 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[165] = v11;
      ServerSiloGlobals[166] = v3;
      v6 = PsAttachSiloToCurrentThread(a1);
      *(_DWORD *)ServerSiloGlobals[165] = -1;
      NtProductTypeFromRegistry = PspSiloInitializeSystemRootBuffer((__int64)a1);
      if ( NtProductTypeFromRegistry >= 0 )
      {
        v8 = ServerSiloGlobals[165];
        LODWORD(Object) = 0;
        NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&Object);
        if ( NtProductTypeFromRegistry >= 0 )
        {
          *(_DWORD *)(v8 + 16) = (_DWORD)Object;
          NtProductTypeFromRegistry = PspSiloInitializeSuiteMask(ServerSiloGlobals[165]);
          if ( NtProductTypeFromRegistry >= 0 )
          {
            *(_DWORD *)(ServerSiloGlobals[165] + 24LL) = -1;
            NtProductTypeFromRegistry = 0;
          }
        }
      }
      PsDetachSiloFromCurrentThread(v6);
      return (unsigned int)NtProductTypeFromRegistry;
    }
    else
    {
      ObfDereferenceObject(v3);
      return (unsigned int)v4;
    }
  }
  return result;
}
