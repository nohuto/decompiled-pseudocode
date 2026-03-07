// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::CalculateBudgetGroupTargetUsage(
        VIDMM_GLOBAL *this,
        struct VIDMM_PHYSICAL_ADAPTER *a2,
        struct VIDMM_BUDGET_STATE *a3,
        struct VIDMM_SEGMENT_GROUP_STATE *a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r9
  int v10; // edx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx

  v4 = 0;
  v5 = 0;
  if ( (*((_BYTE *)a2 + 446) & 2) != 0 )
  {
    v7 = *(int *)a4;
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        v4 = dword_1C0076598;
        v5 = dword_1C007659C;
      }
      else
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 61LL, this, v7, 0LL);
      }
    }
    else
    {
      v4 = dword_1C0076590;
      v5 = dword_1C0076594;
    }
  }
  else
  {
    v4 = dword_1C0076588;
    v5 = dword_1C007658C;
  }
  v8 = *((_QWORD *)a4 + 2);
  v9 = v8 * (unsigned __int64)v4 / 0x64;
  *((_QWORD *)a4 + 33) = v9;
  v10 = *((_DWORD *)a4 + 82);
  v11 = v8 * (unsigned __int64)v5 / 0x64;
  *((_QWORD *)a4 + 34) = v11;
  v12 = v11;
  if ( v10 )
  {
    if ( *((_DWORD *)a4 + 79) == v10 )
    {
      v13 = *((_QWORD *)a4 + 37);
      if ( v13 < v11 )
      {
        *((_QWORD *)a4 + 34) = v13;
        v12 = v13;
      }
    }
  }
  *((_QWORD *)a4 + 35) = v8 - v9 - v12;
}
