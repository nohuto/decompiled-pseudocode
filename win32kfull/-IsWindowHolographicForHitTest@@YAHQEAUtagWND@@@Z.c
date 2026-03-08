/*
 * XREFs of ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C0049F70
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00490C0 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0049D3C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00C8EF8 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0035AF0 (_GetTopLevelWindow.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C0044080 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _IsTopLevelWindow @ 0x1C004A140 (_IsTopLevelWindow.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004A174 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

_BOOL8 __fastcall IsWindowHolographicForHitTest(struct tagWND *const a1)
{
  struct tagWND *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rax
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rcx
  _DWORD *Prop; // rdi
  int v11; // edi
  tagObjLock **v13; // rsi
  int v14; // r12d
  __int128 v15; // [rsp+48h] [rbp-41h] BYREF
  char v16; // [rsp+58h] [rbp-31h]
  char v17; // [rsp+60h] [rbp-29h]
  __int128 v18; // [rsp+70h] [rbp-19h]

  v1 = a1;
  if ( !a1 )
    return 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v2 = *((_QWORD *)v1 + 13);
    if ( !v2 )
      return 0LL;
    v3 = *((_QWORD *)v1 + 3);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
      {
        if ( v2 == *(_QWORD *)(v4 + 24) )
          break;
      }
    }
    v1 = (struct tagWND *)*((_QWORD *)v1 + 13);
  }
  if ( !v1 )
    return 0LL;
  v5 = 0;
  if ( !(unsigned int)IsTopLevelWindow(v1)
    && ((*(_BYTE *)(*((_QWORD *)v1 + 5) + 26LL) & 8) == 0 || !GetTopLevelWindow(v6)) )
  {
    goto LABEL_13;
  }
  v7 = *((_QWORD *)v1 + 18);
  v15 = 0LL;
  v16 = 0;
  v8 = *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy;
  v17 = 0;
  if ( !IS_USERCRIT_OWNED_EXCLUSIVE() && IS_USERCRIT_OWNED_AT_ALL(v9) )
  {
    v17 = 1;
    if ( v7 == gObjDummyLock )
      v7 = 0LL;
    *(_QWORD *)&v15 = v7;
    v13 = (tagObjLock **)&v15;
    v14 = 0;
    do
    {
      if ( *v13 )
        tagObjLock::LockExclusive(*v13);
      ++v14;
      ++v13;
    }
    while ( !v14 );
    v16 = 1;
  }
  Prop = (_DWORD *)RealGetProp(*((_QWORD *)v1 + 18), v8, 1LL);
  if ( v17 && v16 )
  {
    v6 = v15;
    if ( (_QWORD)v15 )
      tagObjLock::UnLockExclusive((tagObjLock *)v15);
    v16 = 0;
  }
  v5 = 1;
  if ( Prop )
  {
    v11 = *Prop & 0x7FFFF;
  }
  else
  {
LABEL_13:
    LOWORD(v11) = 0;
    if ( !*((_QWORD *)v1 + 2) )
      PtiCurrentShared(v6);
    if ( !v5 )
      return 0LL;
  }
  return (v11 & 0x2000) != 0;
}
