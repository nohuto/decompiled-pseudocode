/*
 * XREFs of PnprCollectResources @ 0x140962AFC
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x140785680 (PipForAllChildDeviceNodes.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprCollectResources(__int64 *a1, _QWORD *a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rcx
  int v6; // edi
  int v7; // eax
  PVOID *v8; // rsi
  int v9; // eax
  __int64 v10; // rax
  int v11; // edx
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // edx
  int v27; // eax
  unsigned __int64 v28; // rcx
  int v29; // eax
  PVOID *v30; // rax
  void *v31; // rcx
  void *v32; // rcx
  __int64 v34; // [rsp+20h] [rbp-20h] BYREF
  _QWORD *v35; // [rsp+28h] [rbp-18h]
  __int128 v36; // [rsp+30h] [rbp-10h] BYREF

  v34 = 0LL;
  LOBYTE(v35) = 0;
  v36 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 36LL, 1366322768LL);
  a1[2] = Pool2;
  if ( !Pool2 )
  {
    v5 = PnprContext;
    v6 = -1073741670;
    v7 = *(_DWORD *)(PnprContext + 33272);
    if ( !v7 )
      v7 = 1023;
    *(_DWORD *)(PnprContext + 33272) = v7;
    v8 = (PVOID *)(a2 + 2);
    v9 = *(_DWORD *)(v5 + 33276);
    if ( !v9 )
      v9 = 10;
    goto LABEL_53;
  }
  *(_DWORD *)(Pool2 + 12) = 4;
  v10 = ExAllocatePool2(64LL, 36LL, 1366322768LL);
  v8 = (PVOID *)(a2 + 2);
  a2[2] = v10;
  if ( !v10 )
  {
    v11 = 1035;
LABEL_9:
    v5 = PnprContext;
    v6 = -1073741670;
    v12 = *(_DWORD *)(PnprContext + 33272);
    if ( !v12 )
      v12 = v11;
    *(_DWORD *)(PnprContext + 33272) = v12;
    v9 = *(_DWORD *)(v5 + 33276);
    if ( !v9 )
      v9 = 10;
    goto LABEL_53;
  }
  *(_DWORD *)(v10 + 12) = 4;
  *(_QWORD *)a1[2] = ExAllocatePool2(64LL, 256LL, 1366322768LL);
  v13 = a1[2];
  if ( !*(_QWORD *)v13 )
  {
    v11 = 1053;
    goto LABEL_9;
  }
  *(_DWORD *)(v13 + 8) = 32;
  v14 = ExAllocatePool2(64LL, 80LL, 1366322768LL);
  a1[3] = v14;
  if ( !v14 )
  {
    v11 = 1071;
    goto LABEL_9;
  }
  v15 = ExAllocatePool2(64LL, 80LL, 1366322768LL);
  a2[3] = v15;
  if ( !v15 )
  {
    v11 = 1082;
    goto LABEL_9;
  }
  *(_DWORD *)a1[3] = 4;
  *(_DWORD *)a2[3] = 4;
  LOBYTE(v34) = 1;
  *(_QWORD *)&v36 = PnprAddDeviceResources;
  *((_QWORD *)&v36 + 1) = &v34;
  v17 = *a1;
  v35 = a1;
  if ( v17 )
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 312) + 40LL);
  else
    v18 = 0LL;
  v6 = PipForAllChildDeviceNodes(v18, v16, (__int64)&v36);
  if ( v6 < 0 )
  {
    v20 = PnprContext;
    v21 = *(_DWORD *)(PnprContext + 33272);
    if ( !v21 )
      v21 = 1103;
    v22 = *(_DWORD *)(PnprContext + 33276);
    *(_DWORD *)(PnprContext + 33272) = v21;
    if ( !v22 )
      v22 = 1;
    *(_DWORD *)(v20 + 33276) = v22;
    goto LABEL_54;
  }
  v23 = *a2;
  v35 = a2;
  LOBYTE(v34) = 0;
  if ( v23 )
    v24 = *(_QWORD *)(*(_QWORD *)(v23 + 312) + 40LL);
  else
    v24 = 0LL;
  v6 = PipForAllChildDeviceNodes(v24, v19, (__int64)&v36);
  if ( v6 >= 0 )
  {
    v26 = *(_DWORD *)(a1[2] + 16);
    if ( v26 || *(_DWORD *)(a1[3] + 4) )
    {
      v28 = *(_QWORD *)(a2[3] + 8LL);
      if ( (!v28 || *(_QWORD *)(a1[3] + 8) <= v28) && v26 <= *((_DWORD *)*v8 + 4) )
        return (unsigned int)v6;
      v5 = PnprContext;
      v29 = *(_DWORD *)(PnprContext + 33272);
      if ( !v29 )
        v29 = 1135;
      *(_DWORD *)(PnprContext + 33272) = v29;
      v9 = *(_DWORD *)(v5 + 33276);
      if ( !v9 )
        v9 = 4;
    }
    else
    {
      v5 = PnprContext;
      v27 = *(_DWORD *)(PnprContext + 33272);
      if ( !v27 )
        v27 = 1126;
      *(_DWORD *)(PnprContext + 33272) = v27;
      v9 = *(_DWORD *)(v5 + 33276);
      if ( !v9 )
        v9 = 5;
    }
    v6 = -1073741811;
  }
  else
  {
    v5 = PnprContext;
    v25 = *(_DWORD *)(PnprContext + 33272);
    if ( !v25 )
      v25 = 1114;
    *(_DWORD *)(PnprContext + 33272) = v25;
    v9 = *(_DWORD *)(v5 + 33276);
    if ( !v9 )
      v9 = 1;
  }
LABEL_53:
  *(_DWORD *)(v5 + 33276) = v9;
LABEL_54:
  v30 = (PVOID *)a1[2];
  if ( v30 )
  {
    if ( *v30 )
      ExFreePoolWithTag(*v30, 0x51706E50u);
    ExFreePoolWithTag((PVOID)a1[2], 0x51706E50u);
    a1[2] = 0LL;
  }
  v31 = (void *)a1[3];
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0x51706E50u);
    a1[3] = 0LL;
  }
  if ( *v8 )
  {
    ExFreePoolWithTag(*v8, 0x51706E50u);
    *v8 = 0LL;
  }
  v32 = (void *)a2[3];
  if ( v32 )
  {
    ExFreePoolWithTag(v32, 0x51706E50u);
    a2[3] = 0LL;
  }
  return (unsigned int)v6;
}
