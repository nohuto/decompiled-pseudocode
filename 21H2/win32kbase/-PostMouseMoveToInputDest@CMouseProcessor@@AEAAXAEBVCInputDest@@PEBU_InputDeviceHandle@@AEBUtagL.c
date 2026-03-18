/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C00415CC
 * Callers:
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C003404C (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0041BA4 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003C9D0 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C004173C (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     ApiSetEditionPostInputMessage @ 0x1C0041768 (ApiSetEditionPostInputMessage.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00419A8 (_anonymous_namespace_--InMouseRawInputMode.c)
 */

struct tagINPUT_MESSAGE_SOURCE *__fastcall CMouseProcessor::PostMouseMoveToInputDest(
        LARGE_INTEGER *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5,
        __int64 a6)
{
  LARGE_INTEGER *v6; // rsi
  __int64 v11; // r9
  const struct CInputDest *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rbp
  struct tagINPUT_MESSAGE_SOURCE *InputMessageSource; // rax
  int v16; // r9d
  __int64 Queue; // rax
  const struct CInputDest *v18; // rdx
  struct tagINPUT_MESSAGE_SOURCE *result; // rax
  _QWORD v20[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = a1 + 442;
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime(a1 + 442);
  if ( !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(a2, 0LL, 1LL, v11) )
  {
    if ( (a5 & 2) != 0 && *(_DWORD *)(a2 + 92) == 2 )
      v14 = *(_QWORD *)(a2 + 80);
    else
      LODWORD(v14) = 0;
    v20[1] = 0LL;
    v20[2] = a6;
    v20[0] = a3;
    InputMessageSource = QHelper::GetInputMessageSource((QHelper *)a2, v12);
    v16 = a5 & 1 | 0x10;
    if ( (a5 & 4) == 0 )
      v16 = a5 & 1;
    ApiSetEditionPostInputMessage(
      a2,
      v14,
      512,
      0,
      *a4 | (a4[2] << 16),
      v6->LowPart,
      a1[443].QuadPart,
      a1[432].QuadPart,
      v16,
      (__int64)InputMessageSource,
      (__int64)v20);
  }
  Queue = CInputDest::GetQueue(a2, 2, v13);
  if ( Queue )
    *(_DWORD *)(Queue + 388) &= ~0x20u;
  result = QHelper::GetInputMessageSource((QHelper *)a2, v18);
  if ( result )
    *(_QWORD *)result = 0LL;
  v6->QuadPart = 0LL;
  v6[1].QuadPart = 0LL;
  v6[2].QuadPart = 0LL;
  return result;
}
