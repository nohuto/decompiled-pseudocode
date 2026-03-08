/*
 * XREFs of ?ExecuteMoveMouseWindowManagement@CMouseProcessor@@QEAAXXZ @ 0x1C007A39C
 * Callers:
 *     ?MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z @ 0x1C0079E78 (-MoveMouseWindowManagement@CMouseProcessor@@QEAAXW4_GenerateMoveOptions@@@Z.c)
 *     ?OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ @ 0x1C007DCA0 (-OnMouseCursorUpdateNotification@CMouseSensor@@EEAAJXZ.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1C004E3E0 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C007795C (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPrivate@@W4MouseInputDataProcessingOptions@@@Z @ 0x1C007A28C (--0MouseInputDataEx@CMouseProcessor@@QEAA@PEBU_MOUSE_INPUT_DATA@@W4MouseInputDataProcessingPriva.c)
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x1C007A4DC (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0088924 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00ABD88 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
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
  _BYTE v10[96]; // [rsp+40h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+A0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-28h]

  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 64LL) )
    tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C02CA7E0, (int)&dword_1C029DD6E, 0, 0, 2u, &v11);
  v12 = 0LL;
  v11 = 0LL;
  CMouseProcessor::MouseInputDataEx::MouseInputDataEx((__int64)v10, (__int64)&v11, 4, 0x900u);
  if ( IS_USERCRIT_OWNED_AT_ALL(v3, v2, v4, v5) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9, v6, v7, v8);
    CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v10, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  }
  else
  {
    CMouseProcessor::SynthesizeMouse(this, (struct CMouseProcessor::MouseInputDataEx *)v10, 0LL);
  }
}
