/*
 * XREFs of ?_GetWindowCompositionVisualBitmap@@YAJPEAUtagWND@@PEAPEAUCompositionObject@@@Z @ 0x1C0014674
 * Callers:
 *     ?GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1C0014578 (-GetWindowCompositionVisualBitmap@@YAJPEAUHWND__@@PEAPEAUCompositionObject@@@Z.c)
 * Callees:
 *     ??$CreateWindowProp@VCHwndBitmapProp@@@CWindowProp@@SAJPEAPEAVCHwndBitmapProp@@@Z @ 0x1C0014720 (--$CreateWindowProp@VCHwndBitmapProp@@@CWindowProp@@SAJPEAPEAVCHwndBitmapProp@@@Z.c)
 *     ?Initialize@CHwndBitmapProp@@QEAAJXZ @ 0x1C001477C (-Initialize@CHwndBitmapProp@@QEAAJXZ.c)
 *     ?RemoveAndDeleteProp@CWindowProp@@QEAAXXZ @ 0x1C0024800 (-RemoveAndDeleteProp@CWindowProp@@QEAAXXZ.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1C00469D0 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z @ 0x1C007DCD4 (--$GetProp@VCHwndBitmapProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCHwndBitmapProp@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _GetWindowCompositionVisualBitmap(struct tagWND *a1, struct CompositionObject **a2)
{
  int v4; // esi
  struct tagWND *v5; // rdx
  CompositionObject **v6; // rbx
  CHwndBitmapProp *v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( (unsigned int)CWindowProp::GetProp<CHwndBitmapProp>(a1, &v8) )
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
    if ( !(unsigned int)CWindowProp::SetProp(v8, v5) )
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
