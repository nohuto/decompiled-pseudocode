/*
 * XREFs of ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01B81FC
 * Callers:
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x1C00B2228 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x1C01B7B54 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 */

void __fastcall xxxImmUnloadLayout(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int128 *v5; // rdi
  __int64 v6; // r8
  struct tagTHREADINFO *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD v12[5]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF

  v12[2] = 0LL;
  v4 = a1;
  v13 = 0LL;
  v5 = (__int128 *)(int)a2;
  if ( *(_QWORD *)(a1 + 784) )
  {
    v6 = *(_QWORD *)(a1 + 440);
    if ( v6 )
    {
      if ( (_DWORD)a2 != 1 || (a1 = gpsi, (*gpsi & 4) != 0) || (a1 = 57344LL, (*(_WORD *)(v6 + 42) & 0xF000) == 0xE000) )
      {
        v7 = PtiCurrentShared(a1, a2, v6, a4);
        v8 = *(_QWORD *)(v4 + 784);
        v12[0] = *((_QWORD *)v7 + 52);
        *((_QWORD *)v7 + 52) = v12;
        v12[1] = v8;
        HMLockObject(v8);
        xxxSendTransformableMessageTimeout(
          *(unsigned __int64 **)(v4 + 784),
          0x287u,
          17LL,
          v5,
          8u,
          gdwHungAppTimeout,
          (unsigned __int64 *)&v13,
          1,
          0);
        ThreadUnlock1(v10, v9, v11);
      }
    }
  }
}
