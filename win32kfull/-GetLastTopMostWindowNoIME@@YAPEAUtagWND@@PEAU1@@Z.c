struct tagWND *__fastcall GetLastTopMostWindowNoIME(struct tagWND *a1, __int64 a2)
{
  __int64 DesktopWindow; // rax
  _QWORD *v3; // r11
  _QWORD *v4; // r9
  _QWORD *v5; // rdx
  _QWORD *v6; // r10
  int v7; // edi
  _QWORD *v8; // r8
  __int64 v9; // rbx

  DesktopWindow = GetDesktopWindow(a1, a2);
  v4 = 0LL;
  if ( !DesktopWindow )
    return 0LL;
  v5 = *(_QWORD **)(DesktopWindow + 112);
  if ( !v5 )
    return 0LL;
  do
  {
    v6 = v5;
    if ( (*(_BYTE *)(v5[5] + 24LL) & 8) == 0 )
      break;
    v7 = 0;
    v8 = v5;
    v9 = *(_QWORD *)(v5[17] + 8LL);
    if ( (*(_BYTE *)(v9 + 10) & 1) != 0 || *(_WORD *)v9 == *(_WORD *)(gpsi + 898LL) )
    {
      while ( v3 != v8 )
      {
        v8 = (_QWORD *)v8[15];
        if ( !v8 )
          goto LABEL_6;
      }
      v7 = 1;
    }
LABEL_6:
    v5 = (_QWORD *)v5[11];
    if ( v7 )
      v6 = v4;
    v4 = v6;
  }
  while ( v5 );
  return (struct tagWND *)v4;
}
