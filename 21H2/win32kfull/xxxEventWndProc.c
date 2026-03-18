/*
 * XREFs of xxxEventWndProc @ 0x1C00A3980
 * Callers:
 *     <none>
 * Callees:
 *     ClientEventCallback @ 0x1C00032D8 (ClientEventCallback.c)
 *     HMValidateHandleNoRip @ 0x1C00A3A40 (HMValidateHandleNoRip.c)
 *     xxxDefWindowProc @ 0x1C00A3F90 (xxxDefWindowProc.c)
 *     xxxChangeMonitorFlags @ 0x1C010D918 (xxxChangeMonitorFlags.c)
 */

__int64 __fastcall xxxEventWndProc(struct tagWND *a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v4; // rax
  int v6; // edi
  _QWORD *v8; // rcx
  __int64 v9; // rax
  unsigned __int16 v11; // dx

  v4 = *((_QWORD *)a1 + 5);
  v6 = a2;
  if ( *(_WORD *)(v4 + 42) )
    return 0LL;
  v8 = (_QWORD *)*((_QWORD *)a1 + 35);
  if ( !v8 )
    return xxxDefWindowProc(a1);
  if ( *(_DWORD *)(v4 + 248) < 8u )
    return xxxDefWindowProc(a1);
  LOBYTE(a2) = 9;
  v9 = HMValidateHandleNoRip(*v8, a2);
  if ( !v9 )
    return xxxDefWindowProc(a1);
  if ( v6 == 2 )
  {
    xxxChangeMonitorFlags(v9, 0LL);
    return 0LL;
  }
  if ( v6 != 60 )
    return xxxDefWindowProc(a1);
  v11 = a4[2];
  if ( (*(_DWORD *)(v9 + 40) & *(_DWORD *)a4) != 0 )
  {
    if ( !v11 )
      return 0LL;
    goto LABEL_10;
  }
  if ( !v11 )
LABEL_10:
    ClientEventCallback(*(_QWORD *)(v9 + 56), a4);
  return 0LL;
}
