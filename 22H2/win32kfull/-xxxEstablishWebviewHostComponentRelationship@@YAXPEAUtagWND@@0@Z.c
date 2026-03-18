/*
 * XREFs of ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F2C68
 * Callers:
 *     xxxSetBridgeWindowChild @ 0x1C01F2E24 (xxxSetBridgeWindowChild.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022054C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 */

void __fastcall xxxEstablishWebviewHostComponentRelationship(struct tagWND *a1, struct tagWND *a2)
{
  SetOrClrWF(0, a1, 0xF80u, 1);
  SetOrClrWF(1, a1, 0xF40u, 1);
  xxxSetWindowStyle(a1, -20, *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(a1, a2, 0LL, 1);
}
