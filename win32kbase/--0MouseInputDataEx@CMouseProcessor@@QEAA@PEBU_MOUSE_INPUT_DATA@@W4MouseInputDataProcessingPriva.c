/*
 * XREFs of ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C007A28C
 * Callers:
 *     ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C007A39C (-ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ.c)
 *     ?AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@Z @ 0x1C022AC34 (-AccessibilityMouseButtonAction@CMouseProcessor@@QEAAXW4MouseKeyButton@@W4MouseKeyButtonState@@@.c)
 *     ?AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z @ 0x1C022ADA8 (-AccessibilityMouseMove@CMouseProcessor@@QEAAXJJ@Z.c)
 *     ?AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z @ 0x1C022AE68 (-AccessibilityReleaseMouseButton@CMouseProcessor@@QEAAXW4MouseKeyButton@@@Z.c)
 * Callees:
 *     ?Now@EventTime@CMouseProcessor@@SA?AU12@XZ @ 0x1C007A338 (-Now@EventTime@CMouseProcessor@@SA-AU12@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataProcessingOptions@@U_InputDeviceHandle@@PEBU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C007A458 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@UEventTime@1@W4MouseInputDataPr.c)
 */

__int64 __fastcall CMouseProcessor::MouseInputDataEx::MouseInputDataEx(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // xmm1_8
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-58h]
  __int128 v13; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp-28h] BYREF

  v11 = 0uLL;
  v12 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0LL, (__m128d)0LL);
  v8 = CMouseProcessor::EventTime::Now(&v15);
  v9 = *(_QWORD *)(v8 + 16);
  v13 = *(_OWORD *)v8;
  v14 = v9;
  ((void (__fastcall *)(__int64, __int64, __int128 *, _QWORD, __int128 *, _QWORD))CMouseProcessor::MouseInputDataEx::MouseInputDataEx)(
    a1,
    a2,
    &v13,
    a4,
    &v11,
    0LL);
  *(_DWORD *)(a1 + 88) = a3;
  return a1;
}
