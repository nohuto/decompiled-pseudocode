/*
 * XREFs of ?SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@@Z @ 0x18004A684
 * Callers:
 *     _lambda_7f079bc5e87df2e09bd622ff86c26e64_::operator() @ 0x18004A640 (_lambda_7f079bc5e87df2e09bd622ff86c26e64_--operator().c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801812BC (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

__int64 __fastcall VirtualHotKeyTracker::SynthesizeKeyEvent(__int64 a1, __int64 *a2, __int128 *a3, unsigned int a4)
{
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int64 v6; // xmm0_8
  __int64 v8; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+28h] [rbp-50h]
  __int64 v10; // [rsp+2Ch] [rbp-4Ch]
  int v11; // [rsp+34h] [rbp-44h]
  __int128 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+48h] [rbp-30h]
  __int128 v14; // [rsp+50h] [rbp-28h]

  v4 = a2[2];
  v5 = *a3;
  v10 = 0LL;
  v14 = 0LL;
  v6 = *a2;
  v13 = v4;
  LODWORD(v4) = *((_DWORD *)a2 + 2);
  v8 = v6;
  v9 = v4;
  v11 = 2;
  v12 = v5;
  return NtMITSynthesizeKeyboardInput(a4, &v8, 0LL);
}
