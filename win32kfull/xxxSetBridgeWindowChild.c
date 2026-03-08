/*
 * XREFs of xxxSetBridgeWindowChild @ 0x1C01F4014
 * Callers:
 *     NtUserSetBridgeWindowChild @ 0x1C01DB5C0 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     xxxSetWindowStyle @ 0x1C002DD90 (xxxSetWindowStyle.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0036908 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C009BD04 (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F3E58 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0222FA4 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

__int64 __fastcall xxxSetBridgeWindowChild(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rbp
  unsigned int v5; // ebx
  struct tagWND *NextComponentWindow; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v5 = 0;
  SetOrClrWF(1, (__int64 *)a1, 0xD908u, 1);
  SetOrClrWF(0, (__int64 *)a2, 0xF80u, 1);
  SetOrClrWF(1, (__int64 *)a2, 0xF40u, 1);
  xxxSetWindowStyle(a2, -20, *(_DWORD *)(*((_QWORD *)a2 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(a2, a1, 0LL, 1);
  if ( *((struct tagWND **)a2 + 13) == a1 && *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) == *(_QWORD *)(v2 + 432) )
  {
    if ( (unsigned int)CoreWindowProp::IsHost(a2) )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a2, 0LL);
      if ( NextComponentWindow )
      {
        v11[2] = 0LL;
        v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v11;
        v11[1] = NextComponentWindow;
        HMLockObject(NextComponentWindow);
        xxxEstablishWebviewHostComponentRelationship(NextComponentWindow, a2);
        ThreadUnlock1(v8, v7, v9);
      }
    }
    return 1;
  }
  else
  {
    SetOrClrWF(0, (__int64 *)a1, 0xD908u, 1);
  }
  return v5;
}
