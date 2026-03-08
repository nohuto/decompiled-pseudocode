/*
 * XREFs of ?VidMmiAddTriageData@@YAXPEAU_KBUGCHECK_TRIAGE_DUMP_DATA@@PEAU_KTRIAGE_DUMP_DATA_ARRAY@@@Z @ 0x1C002FCE0
 * Callers:
 *     DxgMmsDbgTriageDumpCallback @ 0x1C002D6B0 (DxgMmsDbgTriageDumpCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall VidMmiAddTriageData(struct _KBUGCHECK_TRIAGE_DUMP_DATA *a1, struct _KTRIAGE_DUMP_DATA_ARRAY *a2)
{
  int v4; // r14d
  PVOID *i; // rbx
  PVOID *v6; // rdi
  __int64 v7; // rsi
  SIZE_T v8; // r9
  int v9; // eax
  NTSTATUS v10; // eax
  SIZE_T v11; // r9
  unsigned int v12; // eax
  PVOID v13; // rdi
  unsigned int v14; // esi
  NTSTATUS v15; // eax
  ULONG_PTR BugCheckParameter3; // rbx
  _QWORD *v17; // rbx
  SIZE_T v18; // r9
  __int64 v19; // rbx
  NTSTATUS v20; // eax

  v4 = 4;
  if ( MmIsAddressValid(&VIDMM_GLOBAL::_AdapterListHead) )
  {
    for ( i = (PVOID *)VIDMM_GLOBAL::_AdapterListHead; i != &VIDMM_GLOBAL::_AdapterListHead; i = (PVOID *)*i )
    {
      if ( !i )
        return;
      if ( !MmIsAddressValid(i) )
        return;
      v6 = i - 5596;
      v7 = (__int64)*(i - 5593);
      if ( !v7 || !MmIsAddressValid(*(i - 5593)) )
        return;
      v9 = *(_DWORD *)(v7 + 436);
      if ( (v9 & 8) == 0 && (v9 & 0x10) == 0 && (v9 & 4) == 0 && (v9 & 0x20) == 0 )
      {
        v10 = KeAddTriageDumpDataBlock(a2, (_DWORD)i - 44768, (PVOID)0xAF80, v8);
        if ( v10 < 0 )
          WdLogSingleEntry3(3LL, i - 5596, 44928LL, v10);
        v12 = *((_DWORD *)v6 + 10258);
        if ( v12 <= 0x10000 )
        {
          v13 = v6[5128];
          v14 = v12;
          if ( v13 )
          {
            v15 = KeAddTriageDumpDataBlock(a2, (ULONG)v13, (PVOID)v12, v11);
            if ( v15 < 0 )
              WdLogSingleEntry3(3LL, v13, v14, v15);
          }
        }
        if ( !--v4 )
          return;
      }
    }
    if ( a1->BugCheckCode == 270 && g_DxgMmsBugcheckExportIndex == 1 && a1->BugCheckParameter1 == 23 )
    {
      BugCheckParameter3 = a1->BugCheckParameter3;
      if ( BugCheckParameter3 )
      {
        if ( MmIsAddressValid((PVOID)a1->BugCheckParameter3) )
        {
          v17 = *(_QWORD **)(BugCheckParameter3 + 24);
          if ( v17 )
          {
            if ( MmIsAddressValid(v17) )
            {
              v19 = v17[74];
              if ( v19 )
              {
                v20 = KeAddTriageDumpDataBlock(a2, v19, (PVOID)8, v18);
                if ( v20 < 0 )
                  WdLogSingleEntry3(3LL, v19, 8LL, v20);
              }
            }
          }
        }
      }
    }
  }
}
