/*
 * XREFs of ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C0210694
 * Callers:
 *     xxxSetBridgeWindowChild @ 0x1C0210798 (xxxSetBridgeWindowChild.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238F50 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C009C270 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 */

void __fastcall xxxEstablishWebviewHostComponentRelationship(struct tagWND *this, struct tagWND *a2)
{
  SetOrClrWF(0, this, 0xF80u, 1);
  SetOrClrWF(1, this, 0xF40u, 1);
  xxxSetWindowStyle(this, -20, *(_DWORD *)(*((_QWORD *)this + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(this, a2, 0LL, 1);
}
