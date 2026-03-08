/*
 * XREFs of _lambda_39f407e4fe10312c322b3b59a6fe001c_::operator() @ 0x1C002E91C
 * Callers:
 *     ?ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C002E858 (-ReadRawMouseThrottlingThresholds@CMouseSensor@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     FastGetProfileDwordEx @ 0x1C002E9B0 (FastGetProfileDwordEx.c)
 */

__int64 __fastcall lambda_39f407e4fe10312c322b3b59a6fe001c_::operator()(const UNICODE_STRING ***a1, _DWORD *a2)
{
  const UNICODE_STRING *v3; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+50h] [rbp+8h] BYREF

  v3 = **a1;
  LODWORD(v5) = 0;
  FastGetProfileDwordEx(v3, 0, (__int64)&v5, 0LL);
  result = (unsigned int)v5;
  if ( (unsigned int)v5 >= a2[3] && (unsigned int)v5 <= a2[4] )
    a2[2] = v5;
  return result;
}
