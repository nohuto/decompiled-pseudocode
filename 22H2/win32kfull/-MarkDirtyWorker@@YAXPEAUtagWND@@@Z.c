/*
 * XREFs of ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C004E67C
 * Callers:
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C004E67C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C005E140 (xxxSetWindowStyle.c)
 * Callees:
 *     ?MarkDirtyWorker@@YAXPEAUtagWND@@@Z @ 0x1C004E67C (-MarkDirtyWorker@@YAXPEAUtagWND@@@Z.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C004E8CC (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 */

void __fastcall MarkDirtyWorker(struct tagWND *a1)
{
  CVisRgnTrackerProp *Prop; // rax
  __int64 i; // rbx

  if ( a1 )
  {
    Prop = (CVisRgnTrackerProp *)RealGetProp(*((_QWORD *)a1 + 18), LOWORD(WPP_MAIN_CB.Queue.Wcb.CurrentIrp), 1LL);
    if ( Prop )
      CVisRgnTrackerProp::MarkDirty(Prop);
    for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      MarkDirtyWorker((struct tagWND *)i);
  }
}
