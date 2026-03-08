/*
 * XREFs of ?OpenCollection@@YAHPEAEKW4tagHID_IDE_COL_TYPE@@PEAK@Z @ 0x1C01C68D8
 * Callers:
 *     ?BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z @ 0x1C01C5B84 (-BuildMainItem@@YAHPEAEKPEAKUtagUSAGE_PROPERTIES@@PEAU1@W4_HIDP_REPORT_TYPE@@PEAH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OpenCollection(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  int v7; // edi
  __int64 v9; // rbx
  int v10; // edi

  v4 = (unsigned int)*a4;
  v5 = 0;
  v7 = a3;
  if ( (int)v4 + 2 < (unsigned int)a2 )
  {
    v5 = 1;
    *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 440) = v4;
    *(_BYTE *)(v4 + a1) = -95;
    v9 = (unsigned int)(v4 + 1);
    if ( v7 )
    {
      v10 = v7 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          *(_BYTE *)(v9 + a1) = 2;
        else
          v5 = 0;
      }
      else
      {
        *(_BYTE *)(v9 + a1) = 0;
      }
    }
    else
    {
      *(_BYTE *)(v9 + a1) = 1;
    }
    *a4 += 2;
  }
  return v5;
}
