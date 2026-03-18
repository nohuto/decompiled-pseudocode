/*
 * XREFs of ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C024A2D0
 * Callers:
 *     ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C01F0888 (-GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C0083090 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C00B3CFC (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??$CreateWindowProp@VCHwndBitmapProp@@@CWindowProp@@SAJPEAPEAVCHwndBitmapProp@@@Z @ 0x1C024A23C (--$CreateWindowProp@VCHwndBitmapProp@@@CWindowProp@@SAJPEAPEAVCHwndBitmapProp@@@Z.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C024A298 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     ?Initialize@CHwndBitmapProp@@QEAAJXZ @ 0x1C02DBAB0 (-Initialize@CHwndBitmapProp@@QEAAJXZ.c)
 */

__int64 __fastcall _GetWindowCompositionVisualBitmap(struct tagWND *a1, struct CompositionObject **a2)
{
  int v4; // edi
  struct tagWND *v5; // rdx
  CompositionObject **v6; // rbx
  CHwndBitmapProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( CWindowProp::GetProp<CHwndBitmapProp>((__int64)a1, (__int64 *)&v8) )
  {
    v6 = (CompositionObject **)v8;
  }
  else
  {
    v4 = CWindowProp::CreateWindowProp<CHwndBitmapProp>(&v8);
    if ( v4 < 0 )
      return (unsigned int)v4;
    v5 = a1;
    v6 = (CompositionObject **)v8;
    if ( !(unsigned int)CWindowProp::SetProp(v8, (__int64)v5) )
    {
      (*(void (__fastcall **)(CompositionObject **))*v6)(v6);
      return (unsigned int)-1073741801;
    }
    v4 = CHwndBitmapProp::Initialize((CHwndBitmapProp *)v6);
    if ( v4 < 0 )
    {
      CWindowProp::RemoveAndDeleteProp((CWindowProp *)v6);
      return (unsigned int)v4;
    }
  }
  v4 = CompositionObject::AddRef(v6[3]);
  if ( v4 >= 0 )
    *a2 = v6[3];
  return (unsigned int)v4;
}
