// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall VIDMM_GLOBAL::InsertToPenaltyBox(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdx
  _QWORD *result; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdx

  if ( a3 == 4 )
  {
    v6 = *(unsigned int *)(a2 + 72);
    if ( (_DWORD)v6 )
    {
      if ( *(_DWORD *)(a1 + 8) != 213 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 57LL, a2, v6, 0LL);
      }
    }
  }
  result = (_QWORD *)(a2 + 192);
  v8 = a1 + 16 * ((unsigned int)(a3 - 1) + 2784LL);
  v9 = *(_QWORD **)(v8 + 8);
  if ( *v9 != v8 )
    __fastfail(3u);
  *result = v8;
  *(_QWORD *)(a2 + 200) = v9;
  *v9 = result;
  *(_QWORD *)(v8 + 8) = result;
  return result;
}
