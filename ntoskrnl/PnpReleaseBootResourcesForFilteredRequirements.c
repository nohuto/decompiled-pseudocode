/*
 * XREFs of PnpReleaseBootResourcesForFilteredRequirements @ 0x14055F1D4
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x140803C88 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpCmResourcesToIoResources @ 0x140804A84 (PnpCmResourcesToIoResources.c)
 *     IopResourceRequirementsListToReqList @ 0x140805448 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x140805E88 (IopCallArbiter.c)
 *     IopFreeReqList @ 0x140806108 (IopFreeReqList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpReleaseBootResourcesForFilteredRequirements(__int64 *a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // ebx
  void *v8; // rdx
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  unsigned int v18; // r8d
  __int64 i; // rdx
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD v25[12]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v26[8]; // [rsp+98h] [rbp+7h] BYREF

  memset(v25, 0, sizeof(v25));
  v2 = 0LL;
  memset(v26, 0, sizeof(v26));
  v4 = *a1;
  if ( *a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(v5 + 544);
  if ( !v6 || (v10 = PnpCmResourcesToIoResources(v3, v6, 1LL), (v2 = (void *)v10) == 0LL) )
  {
    v7 = -1073741823;
LABEL_6:
    v8 = (void *)v26[4];
    goto LABEL_7;
  }
  HIDWORD(v26[1]) = 4;
  v26[3] = v10;
  v26[0] = v4;
  v7 = IopResourceRequirementsListToReqList(v26, &v26[4]);
  if ( v7 < 0 )
    goto LABEL_6;
  v8 = (void *)v26[4];
  if ( !v26[4] )
  {
LABEL_10:
    ExFreePoolWithTag(v2, 0);
    return (unsigned int)v7;
  }
  v11 = *(_QWORD *)(v26[4] + 40LL);
  v7 = 0;
  v12 = a1[4];
  v13 = 0LL;
  v14 = *(__int64 **)(v12 + 16);
  v15 = *(_QWORD *)(v5 + 32);
  v16 = *v14;
  v25[6] = 0LL;
  v25[9] = 0LL;
  v25[4] = v15;
  v25[5] = 4LL;
  if ( *(_DWORD *)(v11 + 20) )
  {
    do
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v11 + 8 * v13 + 24) + 288LL);
      if ( v17 )
      {
        v18 = *(_DWORD *)(v16 + 20);
        for ( i = 0LL; (unsigned int)i < v18; i = (unsigned int)(i + 1) )
        {
          v20 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * i + 24) + 288LL);
          if ( v20 && *(_BYTE *)(v17 + 16) == *(_BYTE *)(v20 + 16) )
            break;
        }
        if ( (_DWORD)i == v18 )
        {
          v25[1] = v25;
          v25[0] = v25;
          v21 = *(_QWORD **)(v17 + 48);
          if ( *v21 != v17 + 40 )
            goto LABEL_29;
          v25[1] = *(_QWORD *)(v17 + 48);
          v25[0] = v17 + 40;
          *v21 = v25;
          *(_QWORD *)(v17 + 48) = v25;
          v22 = IopCallArbiter(v17, 0LL);
          v23 = v25[0];
          v7 = v22;
          v24 = v25[1];
          if ( *(_QWORD **)(v25[0] + 8LL) != v25 || *(_QWORD **)v25[1] != v25 )
LABEL_29:
            __fastfail(3u);
          *(_QWORD *)v25[1] = v25[0];
          *(_QWORD *)(v23 + 8) = v24;
          if ( v7 < 0 )
            break;
          v7 = IopCallArbiter(v17, 2LL);
          if ( v7 < 0 )
            break;
        }
      }
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)(v11 + 20) );
    goto LABEL_6;
  }
LABEL_7:
  if ( v8 )
    IopFreeReqList(v8);
  if ( v2 )
    goto LABEL_10;
  return (unsigned int)v7;
}
