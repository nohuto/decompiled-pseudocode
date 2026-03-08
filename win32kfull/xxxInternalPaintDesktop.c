/*
 * XREFs of xxxInternalPaintDesktop @ 0x1C00F9338
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x1C00A4F54 (xxxDWP_EraseBkgnd.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0149E06 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRealizeDesktop @ 0x1C01BFDAC (xxxRealizeDesktop.c)
 *     NtUserPaintDesktop @ 0x1C01D8F80 (NtUserPaintDesktop.c)
 * Callees:
 *     GreOffsetClipRgn @ 0x1C00F94D4 (GreOffsetClipRgn.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInternalPaintDesktop(__int64 a1, HDC a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v9; // [rsp+50h] [rbp-30h] BYREF
  int v10; // [rsp+58h] [rbp-28h]
  int v11; // [rsp+5Ch] [rbp-24h]
  __int128 v12; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v7 = 0LL;
    v12 = 0LL;
    if ( (unsigned int)GreGetDCOrgEx(a2, &v7, &v12) )
    {
      v10 = DWORD2(v12) - v12;
      v9 = 0LL;
      v11 = HIDWORD(v12) - DWORD1(v12);
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreSetDCOrg(a2, (unsigned int)v9, HIDWORD(v9), &v9);
      GreOffsetClipRgn(a2);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v8[0] = a1;
      v8[1] = a2;
      v3 = xxxEnumDisplayMonitors(a2, 0LL, xxxDesktopPaintCallback, v8, 1);
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreOffsetClipRgn(a2);
      GreSetDCOrg(a2, (unsigned int)v12, DWORD1(v12), &v12);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  return v3;
}
