/*
 * XREFs of ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x1800492F0
 * Callers:
 *     ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x180045C08 (-CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x180145350 (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x18006DFAC (--0bad_optional_access@std@@QEAA@XZ.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x1800F11EC (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 */

_OWORD *__fastcall PointerManipulationHelper::GetTransformFromRootToSite(_OWORD *a1, __int64 a2)
{
  _OWORD *Transform; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _OWORD *result; // rax
  __int128 pExceptionObject; // [rsp+20h] [rbp-78h] BYREF
  __int64 v9; // [rsp+30h] [rbp-68h]
  _BYTE v10[64]; // [rsp+40h] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a2 + 392) )
  {
    pExceptionObject = 0LL;
    v9 = 0LL;
    std::bad_optional_access::bad_optional_access((std::bad_optional_access *)&pExceptionObject);
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  Transform = (_OWORD *)LegacyInputSinkData::GetTransform(a2 + 32, v10);
  v4 = Transform[1];
  *a1 = *Transform;
  v5 = Transform[2];
  a1[1] = v4;
  v6 = Transform[3];
  result = a1;
  a1[2] = v5;
  a1[3] = v6;
  return result;
}
