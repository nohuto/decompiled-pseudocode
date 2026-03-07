__int64 __fastcall DpiFdoInitializeDP(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v2; // rdi
  int MiniportInterface; // eax
  __int64 v4; // rcx

  v1 = *(_QWORD **)(a1 + 64);
  LODWORD(v2) = 0;
  if ( !*((_WORD *)v1 + 2764) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_DP_INTERFACE, 72, 1);
    v2 = MiniportInterface;
    if ( MiniportInterface < 0 )
    {
      memset(v1 + 691, 0, 0x48uLL);
      v4 = 4LL;
LABEL_4:
      WdLogSingleEntry1(v4, v2);
      return (unsigned int)v2;
    }
    if ( *((_WORD *)v1 + 2764) != 72 || !v1[695] || !v1[696] || !v1[697] || !v1[698] || !v1[699] )
    {
      DpiFdoCleanupDP(v1);
      v4 = 2LL;
      v2 = -1073741823LL;
      goto LABEL_4;
    }
  }
  return (unsigned int)v2;
}
