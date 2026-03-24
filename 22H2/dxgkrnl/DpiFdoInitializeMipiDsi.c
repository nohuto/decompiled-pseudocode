/*
 * XREFs of DpiFdoInitializeMipiDsi @ 0x1C0022D3C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiFdoCleanupMipiDsi @ 0x1C0022DD4 (DpiFdoCleanupMipiDsi.c)
 *     DpiQueryMiniportInterface @ 0x1C018E538 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoInitializeMipiDsi(__int64 a1)
{
  __int64 v1; // rsi
  int MiniportInterface; // edi
  _WORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 64);
  MiniportInterface = 0;
  v3 = (_WORD *)(v1 + 5528);
  if ( !*(_WORD *)(v1 + 5528) )
  {
    MiniportInterface = DpiQueryMiniportInterface(a1, (unsigned int)&GUID_DXGK_MIPI_DSI_INTERFACE, 56, 1);
    if ( MiniportInterface >= 0 )
    {
      if ( *v3 != 56 || !*(_QWORD *)(v1 + 5560) || !*(_QWORD *)(v1 + 5568) || !*(_QWORD *)(v1 + 5576) )
      {
        MiniportInterface = -1073741823;
        v7 = WdLogNewEntry5_WdError(v5, v4);
        *(_QWORD *)(v7 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v7);
        goto LABEL_5;
      }
    }
    else
    {
      *(_OWORD *)v3 = 0LL;
      *(_OWORD *)(v1 + 5544) = 0LL;
      *(_OWORD *)(v1 + 5560) = 0LL;
      *(_QWORD *)(v1 + 5576) = 0LL;
    }
    if ( MiniportInterface < 0 )
LABEL_5:
      DpiFdoCleanupMipiDsi(v1);
  }
  return (unsigned int)MiniportInterface;
}
