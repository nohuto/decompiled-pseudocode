/*
 * XREFs of _lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_ @ 0x180147778
 * Callers:
 *     RequestNotificationPinConsentAsync$_ResumeCoro$2 @ 0x18014A690 (RequestNotificationPinConsentAsync$_ResumeCoro$2.c)
 * Callees:
 *     ??0?$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z @ 0x1801353F8 (--0-$shared_ptr@VPinRequestContext@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall lambda_c5e85cbf5d6483b8d295c64a0af9bf90_::_lambda_c5e85cbf5d6483b8d295c64a0af9bf90_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // rax

  std::shared_ptr<PinRequestContext>::shared_ptr<PinRequestContext>(a1, a2);
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  v4 = v3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(v2 + 16) = *v3;
  *(_QWORD *)(v2 + 24) = v3[1];
  return v2;
}
