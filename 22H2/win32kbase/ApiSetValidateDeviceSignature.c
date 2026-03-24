/*
 * XREFs of ApiSetValidateDeviceSignature @ 0x1C01D1288
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C015BF5C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     ValidateDeviceSignature @ 0x1C01FC6D0 (ValidateDeviceSignature.c)
 */

__int64 __fastcall ApiSetValidateDeviceSignature(int a1, int a2, int a3, int a4, __int64 a5, __int64 *a6, int a7)
{
  int v9; // ebp
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // xmm0_8
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]

  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      76,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  v11 = -1073741637;
  if ( qword_1C0256FB8 )
    v12 = qword_1C0256FB8();
  else
    v12 = -1073741637;
  if ( v12 >= 0 )
  {
    v13 = *a6;
    v16 = *((_DWORD *)a6 + 2);
    v15 = v13;
    v11 = ValidateDeviceSignature(a1, v9, a3, a4, a5, (__int64)&v15, a7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      10,
      77,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  }
  return v11;
}
