/*
 * XREFs of ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C0101FD4
 * Callers:
 *     xxxInternalInvalidate @ 0x1C0053270 (xxxInternalInvalidate.c)
 *     NtUserUpdateWindow @ 0x1C00E55A0 (NtUserUpdateWindow.c)
 *     ?xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C014A486 (-xxxUpdateThreadsWindows@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxPrintWindow @ 0x1C01BE184 (xxxPrintWindow.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01CB01C (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C021B7B0 (xxxMNOpenHierarchy.c)
 *     xxxDragObject @ 0x1C023257C (xxxDragObject.c)
 *     xxxMNInvertItem @ 0x1C02382C8 (xxxMNInvertItem.c)
 * Callees:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C0102024 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 */

void __fastcall xxxInternalUpdateWindow(struct tagWND *a1, unsigned int a2)
{
  _QWORD *i; // r8
  __int64 v3; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 24LL) & 0x20) != 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a1 + 11); i; i = (_QWORD *)i[11] )
    {
      if ( i[2] == *((_QWORD *)a1 + 2) )
      {
        v3 = i[5];
        if ( *(_QWORD *)(v3 + 136) || (*(_BYTE *)(v3 + 17) & 0x10) != 0 )
          return;
      }
    }
  }
  xxxUpdateWindow2(a1, a2);
}
