/*
 * XREFs of ?GetForceEngineCurrentValue@CMotion@@QEBAMXZ @ 0x18026B510
 * Callers:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18022F17C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetForceEngineCurrentValue(CMotion *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-28h] BYREF

  return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 12) + 32LL))(
                      *((_QWORD *)this + 12),
                      v2)
                  + 4);
}
