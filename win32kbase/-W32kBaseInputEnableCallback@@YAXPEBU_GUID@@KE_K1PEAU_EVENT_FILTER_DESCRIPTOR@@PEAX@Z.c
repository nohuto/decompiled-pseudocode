/*
 * XREFs of ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D3750
 * Callers:
 *     <none>
 * Callees:
 *     ??9?$SGDHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z @ 0x1C0031EDC (--9-$SGDHIDgpHidInput@PEAVCHidInput@@@@QEBA_NAEBQEAVCHidInput@@@Z.c)
 *     ?EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z @ 0x1C0031F10 (-EnumDevices@CBaseInput@@QEBAXPEAXP6A_NQEAUDEVICEINFO@@0@Z@Z.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0036710 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C007012C (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __fastcall W32kBaseInputEnableCallback(const struct _GUID *a1, int a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v15[208]; // [rsp+30h] [rbp-E8h] BYREF

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
    v14 = 0LL;
    if ( SGDHIDgpHidInput<CHidInput *>::operator!=(v2, &v14, v3, v4)
      && *(_BYTE *)(SGDGetUserSessionState(v6, v5, v7, v8) + 3256)
      && dword_1C02C92F8
      && tlgKeywordOn((__int64)&dword_1C02C92F8, 1LL) )
    {
      v13 = SGDGetUserSessionState(v10, v9, v11, v12);
      CBaseInput::EnumDevices(
        *(struct CInpPushLock ***)(v13 + 16840),
        0LL,
        (unsigned __int8 (__fastcall *)(__int64, void *))lambda_092b6730be7ef5450921f3f5a9c53660_::_lambda_invoker_cdecl_);
    }
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v15);
  }
}
