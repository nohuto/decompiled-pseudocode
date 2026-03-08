/*
 * XREFs of ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C034CA98
 * Callers:
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0325750 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z @ 0x1C034AFB8 (-DestroyLocal@DXGKEYEDMUTEX@@SAJI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C034CA20 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C005799C (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C00579DC (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandonedInternal(DXGKEYEDMUTEX *this, int a2, int a3)
{
  char v6; // r14
  _QWORD **v7; // rdi
  _QWORD *v8; // rbx
  struct _KEVENT *v9; // rsi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (DXGKEYEDMUTEX *)((char *)this + 112), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v6 = 0;
  if ( a3
    || DXGKEYEDMUTEX::IsOwner(this, a2)
    || *((_DWORD *)this + 14) == 2 && DXGKEYEDMUTEX::IsSameWaiter(a2, *((struct DXGPROCESS ***)this + 11)) )
  {
    *((_DWORD *)this + 14) = 3;
    v6 = 1;
  }
  v7 = (_QWORD **)((char *)this + 96);
  v8 = *v7;
  while ( v8 != v7 )
  {
    v9 = (struct _KEVENT *)(v8 - 8);
    if ( v6 || DXGKEYEDMUTEX::IsSameWaiter(a2, (struct DXGPROCESS **)v8 - 8) )
    {
      v10 = v8;
      v8 = (_QWORD *)*v8;
      v9[2].Header.LockNV = 128;
      v11 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      v10[1] = v10;
      *v10 = v10;
      KeSetEvent(v9 + 1, 0, 0);
    }
    else
    {
      v8 = (_QWORD *)*v8;
    }
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
