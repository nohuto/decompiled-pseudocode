__int64 __fastcall DpiFdoInitializeMipiDsi(__int64 a1)
{
  __int64 v1; // rsi
  int MiniportInterface; // edi
  _OWORD *v3; // rbx

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  v3 = (_OWORD *)(v1 + 5472);
  if ( !*(_WORD *)(v1 + 5472) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_MIPI_DSI_INTERFACE, 56, 1);
    if ( MiniportInterface < 0 )
    {
      *v3 = 0LL;
      *(_OWORD *)(v1 + 5488) = 0LL;
      *(_OWORD *)(v1 + 5504) = 0LL;
      *(_QWORD *)(v1 + 5520) = 0LL;
LABEL_4:
      DpiFdoCleanupMipiDsi(v1);
      return (unsigned int)MiniportInterface;
    }
    if ( *(_WORD *)v3 != 56 || !*(_QWORD *)(v1 + 5504) || !*(_QWORD *)(v1 + 5512) || !*(_QWORD *)(v1 + 5520) )
    {
      MiniportInterface = -1073741823;
      WdLogSingleEntry1(2LL, -1073741823LL);
      goto LABEL_4;
    }
  }
  return (unsigned int)MiniportInterface;
}
