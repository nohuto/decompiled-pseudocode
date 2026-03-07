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
  int ProcUniqueLuidAndIndexFromToken; // eax
  __int64 v12; // r8
  int *v13; // rdx
  int *v15; // r9
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  PVOID Object; // [rsp+30h] [rbp-18h] BYREF
  __int64 v18; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+60h] [rbp+18h] BYREF

  v18 = 0LL;
  v19 = 0;
  if ( a3 )
    return (unsigned int)-1073741811;
  if ( !a4 || (SepTokenSingletonAttributesConfig & 3) != 3 )
  {
    v15 = a5;
    *a7 = 0;
    return (unsigned int)SepInternalSetSecurityAttributesToken(a1, a2, 1, v15, a6);
  }
  if ( a2 )
    return (unsigned int)-1073741790;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0x80u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
  if ( v7 >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = (PERESOURCE *)Object;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(v9[6], 1u);
    _InterlockedOr(v16, 0);
    v10 = Object;
    ProcUniqueLuidAndIndexFromToken = SepGetProcUniqueLuidAndIndexFromTokenEx(
                                        1,
                                        (__int64)Object,
                                        (__int64)&v19,
                                        (__int64)&v18);
    v12 = a6;
    v13 = a5;
    if ( ProcUniqueLuidAndIndexFromToken < 0 )
    {
      *a7 = 0;
      v7 = AuthzBasepSetSecurityAttributesToken(v10[97], v13, v12);
      if ( v7 < 0 )
        goto LABEL_10;
    }
    else
    {
      v7 = SepSetSingletonEntry(v19, a5, a6);
      if ( v7 < 0 )
      {
LABEL_10:
        _InterlockedOr(v16, 0);
        ExReleaseResourceLite(v9[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        goto LABEL_11;
      }
      *a7 = 1;
    }
    v10[7] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    goto LABEL_10;
  }
LABEL_11:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return (unsigned int)v7;
}
