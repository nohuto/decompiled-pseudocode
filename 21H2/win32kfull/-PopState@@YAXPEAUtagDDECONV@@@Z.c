/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C021AEA4
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B390 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021B750 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BD70 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021BFB0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C3C0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C530 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C021C820 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C021D748 (xxxFreeDdeConv.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     FreeDdeXact @ 0x1C021CA70 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // [rsp+20h] [rbp-38h] BYREF
  __int64 v12; // [rsp+28h] [rbp-30h]
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  v13[2] = 0LL;
  v1 = (_QWORD *)((char *)a1 + 56);
  v2 = *((_QWORD *)a1 + 7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v13;
  v13[1] = v2;
  HMLockObject(v2);
  v5 = *v1;
  v11 = v1;
  v12 = *(_QWORD *)(v5 + 24);
  v6 = v12;
  v7 = HMAssignmentLock(&v11);
  v8 = (char *)a1 + 64;
  if ( v6 )
    v8 = (char *)(v7 + 24);
  HMAssignmentUnlock(v8);
  v10 = ThreadUnlock1(v9);
  if ( v10 )
    FreeDdeXact(v10);
}
