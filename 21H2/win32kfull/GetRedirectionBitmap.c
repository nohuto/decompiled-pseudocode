/*
 * XREFs of GetRedirectionBitmap @ 0x1C0049330
 * Callers:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0020688 (_SetLayeredWindowAttributes.c)
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C0047DD4 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C008F778 (RecreateRedirectionBitmap.c)
 *     zzzUpdateLayeredWindow @ 0x1C008FE60 (zzzUpdateLayeredWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00B7E98 (zzzUpdateWindowsAfterModeChange.c)
 *     UpdateRedirectedDCE @ 0x1C00DC330 (UpdateRedirectedDCE.c)
 *     ?SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00DF0C0 (-SwpCalcVisRgn@@YAHPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ChangeRedirectionBitmapOwner @ 0x1C01E2418 (ChangeRedirectionBitmapOwner.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E2880 (UserRecreateRedirectionBitmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetRedirectionBitmap(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  tagObjLock **v4; // rbx
  int v5; // ebp
  __int64 Prop; // rbx
  __int128 v8; // [rsp+48h] [rbp-40h] BYREF
  char v9; // [rsp+58h] [rbp-30h]
  char v10; // [rsp+60h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 144);
  v8 = 0LL;
  v2 = (unsigned __int16)atomLayer;
  v9 = 0;
  v10 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(gpresUser) && ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v10 = 1;
    if ( v1 == gObjDummyLock )
      v1 = 0LL;
    *(_QWORD *)&v8 = v1;
    v4 = (tagObjLock **)&v8;
    v5 = 0;
    do
    {
      if ( *v4 )
        tagObjLock::LockExclusive(*v4);
      ++v5;
      ++v4;
    }
    while ( !v5 );
    v9 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v2, 1LL);
  if ( v10 && v9 )
  {
    if ( (_QWORD)v8 )
      tagObjLock::UnLockExclusive((tagObjLock *)v8);
    v9 = 0;
  }
  if ( Prop )
    return *(_QWORD *)Prop;
  else
    return 0LL;
}
