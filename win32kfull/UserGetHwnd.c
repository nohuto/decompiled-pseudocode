/*
 * XREFs of UserGetHwnd @ 0x1C01BEFCC
 * Callers:
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0278F00 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C027A0CC (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C02D9FD0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ?PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z @ 0x1C00D4E94 (-PwndFromHDC@@YAPEBUtagWND@@QEAUHDC__@@@Z.c)
 */

__int64 __fastcall UserGetHwnd(__int64 *a1, _QWORD *a2, __int64 *a3)
{
  unsigned int v6; // edi
  const struct tagWND *v7; // rax
  __int64 v8; // rdx

  v6 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v7 = PwndFromHDC(a1);
  if ( v7 )
  {
    v8 = (unsigned __int16)atomWndObj;
    *a2 = *(_QWORD *)v7;
    *a3 = GetProp((__int64)v7, v8, 1u);
    v6 = 1;
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v6;
}
