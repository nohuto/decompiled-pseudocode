/*
 * XREFs of VrpHandleIoctlCreateNamespaceNode @ 0x1405D2C9C
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x1405D3110 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     PsGetJobSilo @ 0x140200050 (PsGetJobSilo.c)
 *     PsIsThreadInSilo @ 0x14027DEF8 (PsIsThreadInSilo.c)
 *     PsGetPermanentSiloContext @ 0x1402A4EC0 (PsGetPermanentSiloContext.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     VrpUnlockJobContextExclusive @ 0x1405D2EBC (VrpUnlockJobContextExclusive.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x1405D2EFC (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405D3260 (VrpDestroyNamespaceNode.c)
 *     VrpAddNamespaceNodeToList @ 0x1405D33DC (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1405D34B4 (VrpCreateNamespaceNode.c)
 *     VRegEnabledInJob @ 0x1405D5B40 (VRegEnabledInJob.c)
 *     VrpLockJobContextExclusive @ 0x1405D5E18 (VrpLockJobContextExclusive.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140707F60 (ObReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlCreateNamespaceNode(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  unsigned __int64 v8; // rsi
  int v9; // r15d
  __int64 v10; // rdi
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // edx
  int JobSilo; // ebx
  int v16; // edi
  unsigned __int64 v17; // rax
  int v18; // r14d
  int v19; // eax
  unsigned __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int128 v24; // [rsp+60h] [rbp-10h] BYREF

  Object = 0LL;
  v21 = 0LL;
  a5 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  v11 = *(unsigned __int16 *)(a1 + 8);
  if ( (v11 & 1) != 0 || (v12 = *(unsigned __int16 *)(a1 + 10), (v12 & 1) != 0) )
  {
    JobSilo = -1073741811;
    goto LABEL_25;
  }
  if ( !(_WORD)v11 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v12 )
    return (unsigned int)-1073741811;
  v13 = v11 + 20;
  v14 = v13 + v12;
  if ( v13 > v14 || a2 < v14 )
    return (unsigned int)-1073741811;
  JobSilo = ObReferenceObjectByHandleWithTag(*(HANDLE *)a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
  if ( JobSilo < 0 )
    goto LABEL_19;
  v16 = *(_DWORD *)(a1 + 12);
  *((_QWORD *)&v24 + 1) = a1 + 20;
  v17 = *(unsigned __int16 *)(a1 + 8);
  WORD1(v24) = v17;
  LOWORD(v24) = v17;
  *((_QWORD *)&v23 + 1) = a1 + 2 * ((v17 >> 1) + 10);
  LOWORD(v17) = *(_WORD *)(a1 + 10);
  v18 = *(_DWORD *)(a1 + 16);
  WORD1(v23) = v17;
  LOWORD(v23) = v17;
  if ( (v16 & 7) == v16 )
  {
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_19;
    if ( !PsIsThreadInSilo((__int64)KeGetCurrentThread(), 0LL) )
    {
      v22 = 0LL;
      VRegEnabledInJob(&v22);
      JobSilo = PsGetPermanentSiloContext(0LL, VrpSiloContextSlot, &v21);
      if ( JobSilo < 0 )
        goto LABEL_19;
      v8 = v21;
      VrpLockJobContextExclusive(v21);
      v9 = 1;
      v19 = VrpCreateNamespaceNode(v8, &v24, v22, &v23, v16, v18, &a5);
      v10 = a5;
      JobSilo = v19;
      if ( v19 >= 0 )
      {
        JobSilo = VrpAddNamespaceNodeToList(v8, a5);
        if ( JobSilo >= 0 )
        {
          JobSilo = VrpCreateNamespaceNodePlaceholderKey(v10);
          if ( JobSilo >= 0 )
          {
            JobSilo = 0;
LABEL_18:
            VrpUnlockJobContextExclusive(v8);
            goto LABEL_19;
          }
        }
      }
LABEL_25:
      if ( v10 )
        VrpDestroyNamespaceNode(v8, v10);
      if ( !v9 )
        goto LABEL_19;
      goto LABEL_18;
    }
  }
  JobSilo = -1073741811;
LABEL_19:
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
