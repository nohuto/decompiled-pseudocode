/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210104
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210104 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C02105B8 (xxxUpdateThreadsWindows.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C010150C (ThreadLockExchangeAlways.c)
 *     ?xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0151FD0 (-xxxRedrawHungWindow@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0210104 (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND **a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  struct tagWND *v6; // rbx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[2] = 0LL;
  xxxRedrawHungWindow((struct tagWND *)a1, a2);
  if ( (*((_BYTE *)a1[5] + 31) & 2) != 0 )
  {
    v6 = a1[14];
    v7 = gptiCurrent;
    v8[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v8;
    v8[1] = 0LL;
    while ( v6 )
    {
      ThreadLockExchangeAlways((__int64)v6, (__int64)v8);
      xxxUpdateOtherThreadsWindows(v6, a2);
      v6 = (struct tagWND *)*((_QWORD *)v6 + 11);
    }
    ThreadUnlock1(v7, v4, v5);
  }
}
