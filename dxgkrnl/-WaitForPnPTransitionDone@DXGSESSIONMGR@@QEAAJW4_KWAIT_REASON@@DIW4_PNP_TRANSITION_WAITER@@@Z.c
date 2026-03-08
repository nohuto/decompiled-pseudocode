/*
 * XREFs of ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C01BD048
 * Callers:
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C01BC960 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkWaitForPnPTransitionDone @ 0x1C0352264 (DxgkWaitForPnPTransitionDone.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C000A280 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGSESSIONMGR::WaitForPnPTransitionDone(
        __int64 a1,
        KWAIT_REASON a2,
        KPROCESSOR_MODE a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rbx
  unsigned int v9; // ebp
  __int64 v10; // rdi
  void *v11; // rdi
  unsigned int v12; // esi
  int *v13; // r14
  __int64 v14; // rax
  union _LARGE_INTEGER *Timeout; // rax
  unsigned int v16; // ebx
  const wchar_t *v18; // r9
  __int64 v19; // rsi
  _BYTE v20[24]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+8h] BYREF

  v6 = a4;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(a1 + 88), 0);
  v9 = 0;
  v21 = 0LL;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v10 = (unsigned int)v6;
  if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 80) || !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6) )
  {
    v19 = -1073741583LL;
    WdLogSingleEntry2(2LL, (unsigned int)v6, -1073741583LL);
    v18 = L"Session 0x%I64x does not have session data, returning 0x%I64x.";
    v16 = -1073741583;
    goto LABEL_16;
  }
  _mm_lfence();
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6) + 18752LL) )
  {
    v16 = -1073741811;
    WdLogSingleEntry2(2LL, v10, -1073741811LL);
    v18 = L"PnP notification event is not created for session 0x%I64x, returning 0x%I64x.";
    v19 = -1073741811LL;
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v18, v10, v19, 0LL, 0LL, 0LL);
    goto LABEL_9;
  }
  _mm_lfence();
  v11 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v6) + 18752LL);
  ObfReferenceObject(v11);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  v12 = 0;
  v13 = (int *)&unk_1C009A2E8;
  do
  {
    v14 = *v13;
    v9 += v14;
    v21 = -10000000 * v14;
    Timeout = (union _LARGE_INTEGER *)&v21;
    if ( v12 == 3 )
      Timeout = 0LL;
    v16 = KeWaitForSingleObject(v11, a2, a3, 0, Timeout);
    if ( v16 != 258 )
      break;
    DxgkLogCodePointPacket(0x6Fu, v9, a5, 0, 0LL);
    ++v12;
    ++v13;
  }
  while ( v12 < 4 );
  ObfDereferenceObject(v11);
LABEL_9:
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return v16;
}
