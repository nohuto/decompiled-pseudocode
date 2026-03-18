/*
 * XREFs of ?IsWindowHolographicForHitTest@@YAHQEAUtagWND@@@Z @ 0x1C006D450
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C006C570 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C006D2FC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C00CE218 (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 * Callees:
 *     GetAppCompatFlags2QuadWord @ 0x1C00FE1A0 (GetAppCompatFlags2QuadWord.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall IsWindowHolographicForHitTest(struct tagWND *const a1)
{
  unsigned int v1; // r14d
  struct tagWND *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // r15
  int v8; // esi
  tagObjLock **v9; // rdi
  _DWORD *Prop; // rdi
  int v11; // eax
  unsigned __int64 AppCompatFlags2QuadWord; // rax
  __int128 v14; // [rsp+48h] [rbp-31h] BYREF
  char v15; // [rsp+58h] [rbp-21h]
  char v16; // [rsp+60h] [rbp-19h]
  __int128 v17; // [rsp+70h] [rbp-9h]

  v1 = 0;
  v2 = a1;
  if ( a1 )
  {
    v17 = 0LL;
    while ( 1 )
    {
      v3 = *((_QWORD *)v2 + 13);
      if ( v3 )
      {
        v4 = *((_QWORD *)v2 + 3);
        if ( v4 )
        {
          v5 = *(_QWORD *)(v4 + 8);
          if ( v5 )
          {
            if ( v3 == *(_QWORD *)(v5 + 24) )
              break;
          }
        }
      }
      v2 = (struct tagWND *)*((_QWORD *)v2 + 13);
      if ( !v3 )
        return v1;
    }
    v14 = 0LL;
    v15 = 0;
    v6 = *((_QWORD *)v2 + 18);
    v7 = (unsigned __int16)atomDWMProp;
    v16 = 0;
    if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
    {
      v16 = 1;
      if ( v6 == gObjDummyLock )
        v6 = 0LL;
      *(_QWORD *)&v14 = v6;
      v8 = 0;
      v9 = (tagObjLock **)&v14;
      do
      {
        if ( *v9 )
          tagObjLock::LockExclusive(*v9);
        ++v8;
        ++v9;
      }
      while ( !v8 );
      v15 = 1;
    }
    Prop = (_DWORD *)RealGetProp(*((_QWORD *)v2 + 18), v7, 1LL);
    if ( v16 && v15 )
    {
      if ( (_QWORD)v14 )
        tagObjLock::UnLockExclusive((tagObjLock *)v14);
      v15 = 0;
    }
    if ( Prop )
    {
      v11 = *Prop & 0x7FFFF;
    }
    else
    {
      AppCompatFlags2QuadWord = GetAppCompatFlags2QuadWord(*((_QWORD *)v2 + 2));
      v11 = v17 & 0xFFF90000 | (AppCompatFlags2QuadWord >> 3) & 0x40000;
    }
    if ( (v11 & 0x2000) != 0 )
      return 1;
  }
  return v1;
}
