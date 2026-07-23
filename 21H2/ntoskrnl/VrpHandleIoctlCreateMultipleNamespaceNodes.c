/*
 * XREFs of VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1408829FC
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
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlCreateMultipleNamespaceNodes(
        __int64 a1,
        unsigned int a2,
        KPROCESSOR_MODE a3,
        __int64 a4,
        __int64 a5,
        PVOID Object)
{
  unsigned int v6; // r15d
  _QWORD *v8; // rbx
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rsi
  int v11; // r12d
  int JobSilo; // edi
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  int PermanentSiloContext; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  int v21; // edi
  _QWORD *PoolWithTag; // rax
  void *v23; // r8
  unsigned int v24; // ecx
  _QWORD *i; // rsi
  _QWORD *j; // rsi
  __int64 v27; // rdx
  void *v29; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+48h] [rbp-28h] BYREF
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF
  __int128 v32; // [rsp+60h] [rbp-10h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+58h] BYREF

  v6 = a2;
  Object = 0LL;
  v8 = 0LL;
  v34 = 0LL;
  v9 = 0LL;
  a5 = 0LL;
  v10 = 12LL;
  v11 = 0;
  if ( a2 >= 0xC )
  {
    ObReferenceObjectByHandleWithTag(*(HANDLE *)a1, 6u, (POBJECT_TYPE)PsJobType, a3, 0x52566D43u, &Object, 0LL);
    JobSilo = PsGetJobSilo((__int64)Object);
    if ( JobSilo < 0 )
      goto LABEL_34;
    if ( !PsIsThreadInSilo((__int64)KeGetCurrentThread(), a5) )
    {
      v29 = (void *)v14;
      VRegEnabledInJob((unsigned __int64 *)&v29);
      PermanentSiloContext = PsGetPermanentSiloContext(a5, VrpSiloContextSlot, (unsigned __int64 *)&v34);
      v9 = (unsigned __int64 *)v34;
      JobSilo = PermanentSiloContext;
      if ( PermanentSiloContext < 0 )
        goto LABEL_34;
      VrpLockJobContextExclusive(v34);
      v11 = 1;
      LODWORD(v34) = 0;
      if ( *(_DWORD *)(a1 + 8) )
      {
        do
        {
          v16 = v10 + 12;
          v30 = 0LL;
          v17 = v10 + a1;
          v32 = 0LL;
          v31 = 0LL;
          if ( v10 >= v10 + 12 )
            goto LABEL_29;
          if ( v6 < v16 )
            goto LABEL_29;
          v18 = *(unsigned __int16 *)(v17 + 4);
          if ( (v18 & 1) != 0 )
            goto LABEL_29;
          if ( !(_WORD)v18 )
            goto LABEL_29;
          v19 = v18 + v16;
          if ( v16 > v18 + v16 )
            goto LABEL_29;
          v20 = *(unsigned __int16 *)(v17 + 6);
          if ( (v20 & 1) != 0 )
            goto LABEL_29;
          if ( !(_WORD)v20 )
            goto LABEL_29;
          v10 = v19 + v20;
          if ( v19 > v19 + v20 )
            goto LABEL_29;
          if ( v6 < v10 )
            goto LABEL_29;
          v21 = *(_DWORD *)(v17 + 8);
          *((_QWORD *)&v32 + 1) = v17 + 12;
          WORD1(v32) = v18;
          LOWORD(v32) = v18;
          WORD1(v31) = v20;
          LOWORD(v31) = v20;
          *((_QWORD *)&v31 + 1) = v17 + 2 * (((unsigned __int64)(unsigned int)v18 >> 1) + 6);
          LODWORD(a5) = *(_DWORD *)v17;
          if ( (v21 & 7) != v21 )
          {
LABEL_29:
            JobSilo = -1073741811;
            goto LABEL_34;
          }
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x67655256u);
          if ( !PoolWithTag )
          {
            JobSilo = -1073741670;
            goto LABEL_34;
          }
          v23 = v29;
          *PoolWithTag = v8;
          PoolWithTag[1] = 0LL;
          v8 = PoolWithTag;
          JobSilo = VrpCreateNamespaceNode((__int64)v9, (const void **)&v32, v23, (const void **)&v31, v21, a5, &v30);
          if ( JobSilo < 0 )
            goto LABEL_34;
          v24 = v34 + 1;
          v6 = a2;
          v8[1] = v30;
          LODWORD(v34) = v24;
        }
        while ( v24 < *(_DWORD *)(a1 + 8) );
      }
      for ( i = v8; i; i = (_QWORD *)*i )
      {
        JobSilo = VrpAddNamespaceNodeToList(v9, i[1]);
        if ( JobSilo < 0 )
          goto LABEL_34;
      }
      for ( j = v8; j; j = (_QWORD *)*j )
      {
        JobSilo = VrpCreateNamespaceNodePlaceholderKey(j[1]);
        if ( JobSilo < 0 )
          goto LABEL_34;
      }
      JobSilo = 0;
      goto LABEL_34;
    }
    v9 = (unsigned __int64 *)v34;
    JobSilo = -1073741811;
    v13 = (unsigned int)v14;
  }
  else
  {
    JobSilo = -1073741811;
    v13 = 0LL;
  }
  while ( v13 )
  {
    if ( JobSilo < 0 )
    {
      v27 = *(_QWORD *)(v13 + 8);
      if ( v27 )
        VrpDestroyNamespaceNode(v9, v27);
    }
    ExFreePoolWithTag((PVOID)v13, 0x67655256u);
LABEL_34:
    v13 = (unsigned __int64)v8;
    if ( v8 )
      v8 = (_QWORD *)*v8;
  }
  if ( v11 )
    VrpUnlockJobContextExclusive((__int64)v9);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x52566D43u);
  return (unsigned int)JobSilo;
}
