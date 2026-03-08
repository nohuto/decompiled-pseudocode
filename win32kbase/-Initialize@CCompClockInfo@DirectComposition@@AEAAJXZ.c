/*
 * XREFs of ?Initialize@CCompClockInfo@DirectComposition@@AEAAJXZ @ 0x1C0008398
 * Callers:
 *     ?Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z @ 0x1C000831C (-Create@CCompClockInfo@DirectComposition@@SAJAEBUtagCOMPOSITION_TARGET_ID@@PEAPEAV12@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::Initialize(DirectComposition::CCompClockInfo *this)
{
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]

  result = 0LL;
  if ( *((_DWORD *)this + 1) || *((_DWORD *)this + 2) )
  {
    v3 = *(_QWORD *)((char *)this + 4);
    v4 = 0;
    result = DxgkOpenAdapterFromLuidInternal(&v3);
    if ( (int)result >= 0 )
      *((_DWORD *)this + 4) = v4;
  }
  return result;
}
