/*
 * XREFs of UserGetHwnd @ 0x1C01BDE2C
 * Callers:
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0276514 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C027773C (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C02D8200 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x1C009E424 (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 */

__int64 __fastcall UserGetHwnd(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v6; // edi
  const struct tagWND *v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx

  v6 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v7 = PwndFromHDC(a1);
  if ( v7 )
  {
    v9 = (unsigned __int16)atomWndObj;
    *a2 = *(_QWORD *)v7;
    *a3 = GetProp((__int64)v7, v9, 1LL, v8);
    v6 = 1;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v6;
}
