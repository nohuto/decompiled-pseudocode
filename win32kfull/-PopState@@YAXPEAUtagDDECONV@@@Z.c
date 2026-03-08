/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01FAE20
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB410 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FB960 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC1D0 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FC530 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCA60 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FCC90 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FD030 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01FE3AC (xxxFreeDdeConv.c)
 * Callees:
 *     FreeDdeXact @ 0x1C01FD370 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  char *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  void *v11; // rax
  _QWORD *v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int128 v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-18h]

  v1 = (_QWORD *)((char *)a1 + 56);
  v3 = *((_QWORD *)a1 + 7);
  v14 = 0LL;
  v15 = 0LL;
  ThreadLockAlways(v3, &v14);
  v4 = *v1;
  v12 = v1;
  v13 = *(_QWORD *)(v4 + 24);
  v5 = v13;
  v6 = HMAssignmentLock(&v12, 0LL);
  v7 = (char *)a1 + 64;
  if ( v5 )
    v7 = (char *)(v6 + 24);
  HMAssignmentUnlock(v7);
  v11 = (void *)ThreadUnlock1(v9, v8, v10);
  if ( v11 )
    FreeDdeXact(v11);
}
