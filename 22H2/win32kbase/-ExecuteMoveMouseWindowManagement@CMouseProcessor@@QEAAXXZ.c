/*
 * XREFs of ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C0055268
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0053088 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C0057F70 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C00462E4 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C004C624 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C00545FC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C0055324 (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009CB48 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ExecuteMoveMouseWindowManagement(CMouseProcessor *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[16]; // [rsp+30h] [rbp-A8h] BYREF
  struct tagPOINT v10; // [rsp+40h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-28h]

  if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 64LL) )
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C0289810, (int)&dword_1C025F3E0, 0, 0, 2u, &v11);
  v12 = 0LL;
  v11 = 0LL;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx(&v10, &v11, 4LL, 2304LL);
  if ( IS_USERCRIT_OWNED_AT_ALL(v3, v2, v4, v5) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9, v6, v7, v8);
    CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v10, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  }
  else
  {
    CMouseProcessor::SynthesizeMouse(this, (struct tagPOINT)&v10, 0LL);
  }
}
