/*
 * XREFs of ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F3E58
 * Callers:
 *     xxxSetBridgeWindowChild @ 0x1C01F4014 (xxxSetBridgeWindowChild.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C022325C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 */

void __fastcall xxxEstablishWebviewHostComponentRelationship(struct tagWND *a1, struct tagWND *a2)
{
  SetOrClrWF(0, (__int64 *)a1, 0xF80u, 1);
  SetOrClrWF(1, (__int64 *)a1, 0xF40u, 1);
  xxxSetWindowStyle(a1, -20, *(_DWORD *)(*((_QWORD *)a1 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(a1, a2, 0LL, 1);
}
