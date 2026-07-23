/*
 * XREFs of VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x1405D2FAC
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1405D3110 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsGetJobSilo @ 0x140200050 (PsGetJobSilo.c)
 *     PsIsThreadInSilo @ 0x14027DEF8 (PsIsThreadInSilo.c)
 *     PsGetPermanentSiloContext @ 0x1402A4EC0 (PsGetPermanentSiloContext.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ZwUnloadKey2 @ 0x1403FDEC0 (ZwUnloadKey2.c)
 *     VrpUnlockJobContextExclusive @ 0x1405D2EBC (VrpUnlockJobContextExclusive.c)
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     VrpLockJobContextExclusive @ 0x1405D5E18 (VrpLockJobContextExclusive.c)
 *     VrpCleanupNamespace @ 0x1405D61B0 (VrpCleanupNamespace.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDynamicallyLoadedHives(
        HANDLE *a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        PVOID Object,
        __int64 a6)
{
  int JobSilo; // ebx
  int PermanentSiloContext; // eax
  __int64 v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v14; // rcx
  OBJECT_ATTRIBUTES TargetKey; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  a6 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  JobSilo = ObReferenceObjectByHandleWithTag(*a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo >= 0 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo >= 0 )
    {
      if ( PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
      {
        JobSilo = -1073741811;
      }
      else
      {
        PermanentSiloContext = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, (unsigned __int64 *)&a6);
        JobSilo = PermanentSiloContext;
        if ( PermanentSiloContext < 0 )
        {
          if ( PermanentSiloContext == -1073741275 )
LABEL_15:
            JobSilo = 0;
        }
        else
        {
          v8 = a6;
          VrpLockJobContextExclusive(a6);
          if ( !*(_DWORD *)(v8 + 84) )
          {
            v9 = *(_QWORD *)(v8 + 48);
            v10 = 0LL;
            while ( v10 < v9 )
            {
              v11 = 0LL;
              if ( v10 < v9 )
              {
                if ( !is_mul_ok(*(_QWORD *)(v8 + 40), v10)
                  || (v14 = *(_QWORD *)(v8 + 72),
                      v11 = (__int64 *)(v14 + *(_QWORD *)(v8 + 40) * v10),
                      (unsigned __int64)v11 < v14) )
                {
                  v11 = 0LL;
                }
              }
              v12 = *v11;
              if ( *(int *)(*v11 + 56) < 0 )
              {
                *(&TargetKey.Length + 1) = 0;
                memset(&TargetKey.Attributes + 1, 0, 20);
                TargetKey.RootDirectory = 0LL;
                TargetKey.ObjectName = (PUNICODE_STRING)(v12 + 24);
                TargetKey.Length = 48;
                TargetKey.Attributes = 576;
                ZwUnloadKey2(&TargetKey, 1u);
                VrpDestroyNamespaceNode(v8, v12);
                v9 = *(_QWORD *)(v8 + 48);
              }
              else
              {
                ++v10;
              }
            }
            VrpCleanupNamespace(v8);
            VrpUnlockJobContextExclusive(v8);
            goto LABEL_15;
          }
          JobSilo = -1073741738;
          VrpUnlockJobContextExclusive(v8);
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
