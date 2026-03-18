/*
 * XREFs of xxxSetBridgeWindowChild @ 0x1C01F2E24
 * Callers:
 *     NtUserSetBridgeWindowChild @ 0x1C01DA590 (NtUserSetBridgeWindowChild.c)
 * Callees:
 *     ?IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00426BC (-IsHost@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowStyle @ 0x1C00EB620 (xxxSetWindowStyle.c)
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     ?xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z @ 0x1C01F2C68 (-xxxEstablishWebviewHostComponentRelationship@@YAXPEAUtagWND@@0@Z.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z @ 0x1C0220294 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEBU2@0@Z.c)
 */

__int64 __fastcall xxxSetBridgeWindowChild(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v4; // ebx
  struct tagWND *NextComponentWindow; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  SetOrClrWF(1, a1, 0xD908u, 1);
  SetOrClrWF(0, a2, 0xF80u, 1);
  SetOrClrWF(1, a2, 0xF40u, 1);
  xxxSetWindowStyle(a2, -20, *(_DWORD *)(*((_QWORD *)a2 + 5) + 24LL) | 0x80000);
  xxxSetParentWorker(a2, a1, 0LL, 1);
  if ( *((struct tagWND **)a2 + 13) == a1
    && *(_QWORD *)(*((_QWORD *)a2 + 2) + 432LL) == *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) )
  {
    if ( (unsigned int)CoreWindowProp::IsHost(a2) )
    {
      NextComponentWindow = CoreWindowProp::GetNextComponentWindow(a2, 0LL);
      if ( NextComponentWindow )
      {
        v10[2] = 0LL;
        v10[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v10;
        v10[1] = NextComponentWindow;
        HMLockObject(NextComponentWindow);
        xxxEstablishWebviewHostComponentRelationship(NextComponentWindow, a2);
        ThreadUnlock1(v7, v6, v8);
      }
    }
    return 1;
  }
  else
  {
    SetOrClrWF(0, a1, 0xD908u, 1);
  }
  return v4;
}
