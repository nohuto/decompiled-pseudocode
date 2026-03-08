/*
 * XREFs of ?VidSchiAddTriageData@@YAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@PEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x1C0047DA4
 * Callers:
 *     DxgMmsDbgTriageDumpCallback @ 0x1C002D6B0 (DxgMmsDbgTriageDumpCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAddTriageData(struct _KBUGCHECK_TRIAGE_DUMP_DATA *a1, struct _KTRIAGE_DUMP_DATA_ARRAY *a2)
{
  int v4; // r13d
  SIZE_T v5; // r9
  PVOID *v6; // rbx
  __int64 v7; // rsi
  int v8; // eax
  NTSTATUS v9; // eax
  unsigned int v10; // r12d
  PVOID *v11; // r14
  _QWORD *v12; // rsi
  SIZE_T v13; // r9
  NTSTATUS v14; // eax
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // esi
  NTSTATUS v18; // eax
  ULONG_PTR BugCheckParameter1; // rax
  ULONG_PTR BugCheckParameter2; // rbx
  SIZE_T v21; // r9
  __int64 v22; // rbx
  _QWORD *BugCheckParameter4; // rbx
  NTSTATUS v24; // eax
  SIZE_T v25; // r9
  _QWORD *v26; // rbx
  NTSTATUS v27; // eax
  SIZE_T v28; // r9
  _QWORD *v29; // rbx
  NTSTATUS v30; // eax
  SIZE_T v31; // r9
  _QWORD *v32; // rbx
  NTSTATUS v33; // eax
  SIZE_T v34; // r9
  _QWORD *v35; // rbx
  NTSTATUS v36; // eax
  __int64 v37; // rsi
  NTSTATUS v38; // eax
  __int64 v39; // rsi
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax

  v4 = 4;
  if ( !MmIsAddressValid(&gAdapterListHead) )
    return;
  v6 = (PVOID *)gAdapterListHead;
  if ( gAdapterListHead == &gAdapterListHead )
  {
LABEL_24:
    if ( a1->BugCheckCode != 281 || g_DxgMmsBugcheckExportIndex != 1 )
      return;
    BugCheckParameter1 = a1->BugCheckParameter1;
    if ( BugCheckParameter1 == 2 )
    {
      BugCheckParameter4 = (_QWORD *)a1->BugCheckParameter4;
      if ( !BugCheckParameter4 )
        return;
      v24 = KeAddTriageDumpDataBlock(a2, a1->BugCheckParameter4, (PVOID)0xE0, v5);
      if ( v24 < 0 )
        WdLogSingleEntry3(3LL, BugCheckParameter4, 224LL, v24);
      if ( !MmIsAddressValid(BugCheckParameter4) )
        return;
      v26 = (_QWORD *)BugCheckParameter4[6];
      if ( !v26 )
        return;
      v27 = KeAddTriageDumpDataBlock(a2, (ULONG)v26, (PVOID)0x3E8, v25);
      if ( v27 < 0 )
        WdLogSingleEntry3(3LL, v26, 1000LL, v27);
      if ( !MmIsAddressValid(v26) )
        return;
      v29 = (_QWORD *)v26[13];
      if ( !v29 )
        return;
      v30 = KeAddTriageDumpDataBlock(a2, (ULONG)v29, (PVOID)0x6B0, v28);
      if ( v30 < 0 )
        WdLogSingleEntry3(3LL, v29, 1712LL, v30);
      if ( !MmIsAddressValid(v29) )
        return;
      v32 = (_QWORD *)v29[4];
      if ( !v32 )
        return;
      v33 = KeAddTriageDumpDataBlock(a2, (ULONG)v32, (PVOID)0x19F0, v31);
      if ( v33 < 0 )
        WdLogSingleEntry3(3LL, v32, 6640LL, v33);
      if ( !MmIsAddressValid(v32) )
        return;
      v35 = (_QWORD *)v32[2];
      if ( !v35 )
        return;
      v36 = KeAddTriageDumpDataBlock(a2, (ULONG)v35, (PVOID)0x12C0, v34);
      if ( v36 < 0 )
        WdLogSingleEntry3(3LL, v35, 4800LL, v36);
      if ( !MmIsAddressValid(v35) )
        return;
      v37 = v35[65];
      if ( v37 )
      {
        v38 = KeAddTriageDumpDataBlock(a2, v35[65], (PVOID)8, v21);
        if ( v38 >= 0 )
          return;
        WdLogSingleEntry3(3LL, v37, 8LL, v38);
      }
      v39 = v35[116];
      if ( v39 )
      {
        v40 = KeAddTriageDumpDataBlock(a2, v35[116], (PVOID)8, v21);
        if ( v40 >= 0 )
          return;
        WdLogSingleEntry3(3LL, v39, 8LL, v40);
      }
      v22 = v35[139];
    }
    else
    {
      if ( BugCheckParameter1 != 40960 )
        return;
      BugCheckParameter2 = a1->BugCheckParameter2;
      if ( !BugCheckParameter2 || !MmIsAddressValid((PVOID)a1->BugCheckParameter2) )
        return;
      v22 = *(_QWORD *)(BugCheckParameter2 + 1120);
    }
    if ( v22 )
    {
      v41 = KeAddTriageDumpDataBlock(a2, v22, (PVOID)8, v21);
      if ( v41 < 0 )
        WdLogSingleEntry3(3LL, v22, 8LL, v41);
    }
    return;
  }
  while ( v6 )
  {
    if ( !MmIsAddressValid(v6) )
      break;
    v7 = (__int64)*(v6 - 443);
    if ( !v7 || !MmIsAddressValid(*(v6 - 443)) )
      break;
    v8 = *(_DWORD *)(v7 + 436);
    if ( (v8 & 8) == 0 && (v8 & 0x10) == 0 && (v8 & 4) == 0 && (v8 & 0x20) == 0 )
    {
      v9 = KeAddTriageDumpDataBlock(a2, (_DWORD)v6 - 3560, (PVOID)0x19F0, v5);
      if ( v9 < 0 )
        WdLogSingleEntry3(3LL, v6 - 445, 6640LL, v9);
      v10 = 0;
      v11 = v6 - 45;
      do
      {
        v12 = *v11;
        if ( *v11 )
        {
          if ( !MmIsAddressValid(*v11) )
            return;
          v14 = KeAddTriageDumpDataBlock(a2, (ULONG)v12, (PVOID)0x14410, v13);
          if ( v14 < 0 )
            WdLogSingleEntry3(3LL, v12, 82960LL, v14);
          v15 = v12[17];
          if ( v15 )
          {
            v16 = v12[17];
            v17 = 112 * *((_DWORD *)v12 + 32);
            v18 = KeAddTriageDumpDataBlock(a2, v16, (PVOID)v17, v5);
            if ( v18 < 0 )
              WdLogSingleEntry3(3LL, v15, v17, v18);
          }
        }
        ++v10;
        ++v11;
      }
      while ( v10 < 2 );
      if ( !--v4 )
        break;
    }
    v6 = (PVOID *)*v6;
    if ( v6 == &gAdapterListHead )
      goto LABEL_24;
  }
}
