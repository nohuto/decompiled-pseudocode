/*
 * XREFs of ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C013C654
 * Callers:
 *     DxgkWaitForPnPTransitionDone @ 0x1C013C5FC (DxgkWaitForPnPTransitionDone.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000BAD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::WaitForPnPTransitionDone(
        __int64 a1,
        KWAIT_REASON a2,
        KPROCESSOR_MODE a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rsi
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  void *v13; // rdi
  __int64 v14; // rdx
  unsigned int v15; // esi
  int *v16; // r14
  __int64 v17; // rax
  union _LARGE_INTEGER *Timeout; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v22; // rax
  _BYTE v23[24]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v24; // [rsp+80h] [rbp+8h] BYREF

  v6 = a4;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(a1 + 80), 0);
  v9 = 0;
  v24 = 0LL;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 72) || !*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v6) )
  {
    v22 = WdLogNewEntry5_WdError(v11, v10);
    v19 = -1073741583LL;
    goto LABEL_16;
  }
  _mm_lfence();
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v6);
  if ( !*(_QWORD *)(v12 + 18728) )
  {
    v22 = WdLogNewEntry5_WdError(v12, v10);
    v19 = -1073741811LL;
LABEL_16:
    *(_QWORD *)(v22 + 24) = v6;
    *(_QWORD *)(v22 + 32) = v19;
    WdLogEvent5_WdError(v22);
    goto LABEL_9;
  }
  _mm_lfence();
  v13 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v6) + 18728LL);
  ObfReferenceObject(v13);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v14);
  v15 = 0;
  v16 = (int *)&unk_1C007BF20;
  do
  {
    v17 = *v16;
    v9 += v17;
    v24 = -10000000 * v17;
    Timeout = (union _LARGE_INTEGER *)&v24;
    if ( v15 == 3 )
      Timeout = 0LL;
    LODWORD(v19) = KeWaitForSingleObject(v13, a2, a3, 0, Timeout);
    if ( (_DWORD)v19 != 258 )
      break;
    DxgkLogCodePointPacket(0x6Fu, v9, a5, 0, 0LL);
    ++v15;
    ++v16;
  }
  while ( v15 < 4 );
  ObfDereferenceObject(v13);
LABEL_9:
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23, v20);
  return (unsigned int)v19;
}
