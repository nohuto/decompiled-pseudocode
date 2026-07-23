/*
 * XREFs of SeSetSecurityAttributesTokenEx @ 0x1405977B0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402F50F0 (AuthzBasepSetSecurityAttributesToken.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140595E1C (SepInternalSetSecurityAttributesToken.c)
 *     SepGetProcUniqueLuidAndIndexFromTokenEx @ 0x140597A10 (SepGetProcUniqueLuidAndIndexFromTokenEx.c)
 *     SepSetSingletonEntry @ 0x140597AEC (SepSetSingletonEntry.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall SeSetSecurityAttributesTokenEx(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        char a4,
        int *a5,
        __int64 a6,
        _BYTE *a7)
{
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int ProcUniqueLuidAndIndexFromToken; // eax
  __int64 v13; // r8
  int *v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int *v18; // r9
  signed __int32 v20[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v22; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+60h] [rbp+18h] BYREF

  v22 = 0LL;
  v23 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( !a4 || (SepTokenSingletonAttributesConfig & 3) != 3 )
  {
    v18 = a5;
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, v18, a6);
  }
  if ( a2 )
    return (unsigned int)-1073741790;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = (PERESOURCE *)Object;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)Object + 6), 1u);
    _InterlockedOr(v20, 0);
    v10 = Object;
    LOBYTE(v11) = 1;
    ProcUniqueLuidAndIndexFromToken = SepGetProcUniqueLuidAndIndexFromTokenEx(v11, Object, &v23, &v22);
    v13 = a6;
    v14 = a5;
    if ( ProcUniqueLuidAndIndexFromToken >= 0 )
    {
      v7 = SepSetSingletonEntry(v23, a5, a6);
      if ( v7 >= 0 )
      {
        *a7 = 1;
LABEL_13:
        v10[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      }
    }
    else
    {
      *a7 = 0;
      v7 = AuthzBasepSetSecurityAttributesToken(v10[97], v14, v13);
      if ( v7 >= 0 )
        goto LABEL_13;
    }
    _InterlockedOr(v20, 0);
    ExReleaseResourceLite(v9[6]);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v7;
}
