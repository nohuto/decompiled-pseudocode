char __fastcall DxgkpAddTriageAdapterData(__int64 a1, __int64 a2, __int64 a3, SIZE_T a4)
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *v4; // rsi
  NTSTATUS v6; // eax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v8; // rbx
  SIZE_T v9; // r9
  NTSTATUS v10; // eax
  int v11; // r15d
  _QWORD *v12; // r14
  _QWORD *i; // rbx
  SIZE_T v14; // r9
  NTSTATUS v15; // eax
  SIZE_T v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  SIZE_T v20; // r9
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rbx
  SIZE_T v24; // r9
  _QWORD *v25; // rbx
  SIZE_T v26; // r9
  _QWORD *v27; // rbx
  SIZE_T v28; // r9
  SIZE_T v29; // r9
  __int64 v30; // rbx

  v4 = KtriageDumpDataArray;
  v6 = KeAddTriageDumpDataBlock(KtriageDumpDataArray, (ULONG)&DXGGLOBAL::m_pGlobal, (PVOID)8, a4);
  if ( v6 < 0 )
    WdLogSingleEntry3(3LL, &DXGGLOBAL::m_pGlobal, 8LL, v6);
  Global = DXGGLOBAL::GetGlobal();
  v8 = Global;
  if ( Global )
  {
    LOBYTE(Global) = MmIsAddressValid(Global);
    if ( (_BYTE)Global )
    {
      v10 = KeAddTriageDumpDataBlock(v4, (ULONG)v8, (PVOID)0x4A8C0, v9);
      if ( v10 < 0 )
        WdLogSingleEntry3(3LL, v8, 305344LL, v10);
      v11 = 4;
      Global = DXGGLOBAL::GetGlobal();
      v12 = (_QWORD *)((char *)Global + 768);
      for ( i = (_QWORD *)*((_QWORD *)Global + 96); i != v12 && i; i = (_QWORD *)*i )
      {
        LOBYTE(Global) = MmIsAddressValid(i);
        if ( !(_BYTE)Global )
          return (char)Global;
        v15 = KeAddTriageDumpDataBlock(v4, (ULONG)i, (PVOID)0x12C0, v14);
        if ( v15 < 0 )
          WdLogSingleEntry3(3LL, i, 4800LL, v15);
        LODWORD(Global) = *((_DWORD *)i + 109);
        if ( ((unsigned __int8)Global & 8) == 0
          && ((unsigned __int8)Global & 0x10) == 0
          && ((unsigned __int8)Global & 4) == 0
          && ((unsigned __int8)Global & 0x20) == 0 )
        {
          v17 = i[366];
          if ( v17 )
          {
            LODWORD(Global) = KeAddTriageDumpDataBlock(v4, i[366], (PVOID)0x780, v16);
            if ( (int)Global < 0 )
              LOBYTE(Global) = WdLogSingleEntry3(3LL, v17, 1920LL, (int)Global);
          }
          v18 = i[365];
          if ( v18 )
          {
            LODWORD(Global) = KeAddTriageDumpDataBlock(v4, i[365], (PVOID)0x400, v16);
            if ( (int)Global < 0 )
              LOBYTE(Global) = WdLogSingleEntry3(3LL, v18, 1024LL, (int)Global);
          }
          v19 = i[27];
          if ( !v19 )
            return (char)Global;
          LOBYTE(Global) = MmIsAddressValid((PVOID)i[27]);
          if ( !(_BYTE)Global )
            return (char)Global;
          v21 = KeAddTriageDumpDataBlock(v4, v19, (PVOID)0x150, v20);
          if ( v21 < 0 )
            WdLogSingleEntry3(3LL, v19, 336LL, v21);
          LOBYTE(Global) = DpiAddTriageAdapterData(v19, v22, v4);
          if ( !--v11 )
            break;
        }
      }
      if ( *(_DWORD *)(a1 + 16) == 275 && *(_QWORD *)(a1 + 24) == 43LL )
      {
        v23 = *(_QWORD *)(a1 + 32);
        if ( v23 )
        {
          LOBYTE(Global) = MmIsAddressValid(*(PVOID *)(a1 + 32));
          if ( (_BYTE)Global )
          {
            LODWORD(Global) = KeAddTriageDumpDataBlock(KtriageDumpDataArray, v23, (PVOID)0x7A0, v24);
            if ( (int)Global < 0 )
              LOBYTE(Global) = WdLogSingleEntry3(3LL, v23, 1952LL, (int)Global);
            v25 = *(_QWORD **)(v23 + 16);
            if ( v25 )
            {
              LOBYTE(Global) = MmIsAddressValid(v25);
              if ( (_BYTE)Global )
              {
                LODWORD(Global) = KeAddTriageDumpDataBlock(KtriageDumpDataArray, (ULONG)v25, (PVOID)0x780, v26);
                if ( (int)Global < 0 )
                  LOBYTE(Global) = WdLogSingleEntry3(3LL, v25, 1920LL, (int)Global);
                v27 = (_QWORD *)v25[2];
                if ( v27 )
                {
                  LOBYTE(Global) = MmIsAddressValid(v27);
                  if ( (_BYTE)Global )
                  {
                    LODWORD(Global) = KeAddTriageDumpDataBlock(KtriageDumpDataArray, (ULONG)v27, (PVOID)0x12C0, v28);
                    if ( (int)Global < 0 )
                      LOBYTE(Global) = WdLogSingleEntry3(3LL, v27, 4800LL, (int)Global);
                    v30 = v27[88];
                    if ( v30 )
                    {
                      LODWORD(Global) = KeAddTriageDumpDataBlock(KtriageDumpDataArray, v30, (PVOID)8, v29);
                      if ( (int)Global < 0 )
                        LOBYTE(Global) = WdLogSingleEntry3(3LL, v30, 8LL, (int)Global);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (char)Global;
}
