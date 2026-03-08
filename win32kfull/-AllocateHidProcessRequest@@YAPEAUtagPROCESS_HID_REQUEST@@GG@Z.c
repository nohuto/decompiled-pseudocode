/*
 * XREFs of ?AllocateHidProcessRequest@@YAPEAUtagPROCESS_HID_REQUEST@@GG@Z @ 0x1C00D5FC8
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00D5E84 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     <none>
 */

struct tagPROCESS_HID_REQUEST *__fastcall AllocateHidProcessRequest(__int16 a1, __int16 a2)
{
  struct tagPROCESS_HID_REQUEST *result; // rax

  result = (struct tagPROCESS_HID_REQUEST *)Win32AllocPoolWithQuotaZInit(48LL, 1382576981LL);
  if ( result )
  {
    *((_DWORD *)result + 5) &= 0xFFFFFFF0;
    *((_WORD *)result + 8) = a1;
    *((_WORD *)result + 9) = a2;
    *((_QWORD *)result + 3) = 0LL;
    *((_QWORD *)result + 4) = 0LL;
    *((_QWORD *)result + 5) = 0LL;
  }
  return result;
}
