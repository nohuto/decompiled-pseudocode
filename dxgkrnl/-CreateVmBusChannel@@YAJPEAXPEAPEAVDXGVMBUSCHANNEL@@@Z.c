/*
 * XREFs of ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C035C930
 * Callers:
 *     ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C035D3CC (-Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x1C035D4FC (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z @ 0x1C0361554 (-Create@DXGVMBUSCHANNEL@@SAJPEAXAEBU_GUID@@1PEBU_UNICODE_STRING@@EPEAPEAV1@@Z.c)
 */

__int64 __fastcall CreateVmBusChannel(void *a1, struct _GUID *a2, const struct _GUID *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct _UNICODE_STRING v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+50h] [rbp-18h]

  v8 = *(_DWORD *)L"l";
  v6.Buffer = (wchar_t *)&v7;
  v7 = *(_OWORD *)L"DXGK_Vail";
  *(_QWORD *)&v6.Length = 1310738LL;
  v3 = DXGVMBUSCHANNEL::Create(a1, a2, a3, &v6, a1 != 0LL, (struct DXGVMBUSCHANNEL **)a2);
  v4 = v3;
  if ( v3 < 0 )
    WdLogSingleEntry1(3LL, v3);
  return v4;
}
