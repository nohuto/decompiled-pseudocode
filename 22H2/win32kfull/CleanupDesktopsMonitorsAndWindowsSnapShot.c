/*
 * XREFs of CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0136C50
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C01280E0 (xxxRemoteDisconnect.c)
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01D7114 (CleanMonitorsAndWindowsSnapshot.c)
 */

void __fastcall CleanupDesktopsMonitorsAndWindowsSnapShot(_QWORD **a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rax
  _QWORD *v4; // rdi
  _QWORD *v5; // rcx

  v1 = *a1;
  while ( v1 != a1 )
  {
    v3 = *v1;
    v4 = v1;
    v1 = (_QWORD *)v3;
    if ( *(_QWORD **)(v3 + 8) != v4 || (v5 = (_QWORD *)v4[1], (_QWORD *)*v5 != v4) )
      __fastfail(3u);
    *v5 = v3;
    *(_QWORD *)(v3 + 8) = v5;
    CleanMonitorsAndWindowsSnapshot(v4);
    Win32FreePool(v4);
  }
}
