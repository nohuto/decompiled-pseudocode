/*
 * XREFs of SpbCheckPwnd @ 0x1C021A7A4
 * Callers:
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0031D34 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C003DDFC (zzzLockWindowUpdate2.c)
 * Callees:
 *     ?IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z @ 0x1C0169858 (-IsSpbPresentOrNull@@YA_NPEAUtagSPB@@@Z.c)
 *     FreeSpb @ 0x1C021A2E4 (FreeSpb.c)
 *     SpbCheckRect @ 0x1C021A844 (SpbCheckRect.c)
 */

__int64 __fastcall SpbCheckPwnd(struct tagWND *a1)
{
  struct tagSPB *v2; // rdi
  struct tagSPB *v3; // rsi
  __int64 i; // rbx
  __int64 result; // rax

  while ( 1 )
  {
    v2 = *(struct tagSPB **)(gpDispInfo + 32LL);
    if ( !v2 )
      break;
    while ( 1 )
    {
      v3 = *(struct tagSPB **)v2;
      for ( i = *((_QWORD *)v2 + 1); i; i = *(_QWORD *)(i + 104) )
      {
        if ( a1 == (struct tagWND *)i )
          FreeSpb((char *)v2);
      }
      if ( !IsSpbPresentOrNull(v3) )
        break;
      v2 = v3;
      if ( !v3 )
        goto LABEL_9;
    }
  }
LABEL_9:
  result = gpDispInfo;
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
    return SpbCheckRect(a1, (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL), 0);
  return result;
}
