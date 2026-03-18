/*
 * XREFs of ?TraceLoggingStartingRecalc@@YAIW4_StartRecalcReason@@IIIPEBU_GUID@@@Z @ 0x1C00CA030
 * Callers:
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRecalcOption@@@Z @ 0x1C015CD50 (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@W4StartRec.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5555555555555AEBU?$_tlgWrapperByRef@$0BA@@@5@Z @ 0x1C021D7C8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 */

__int64 __fastcall TraceLoggingStartingRecalc(int a1, __int64 a2, int a3, int a4)
{
  __int64 v7; // rcx
  int v8; // r9d
  __int64 v9; // r10
  unsigned int v10; // r11d
  __int64 result; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 ProcessImageFileName; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  int v17; // [rsp+B8h] [rbp-80h] BYREF
  int v18; // [rsp+BCh] [rbp-7Ch] BYREF
  int v19; // [rsp+C0h] [rbp-78h] BYREF
  int v20; // [rsp+C4h] [rbp-74h] BYREF
  int v21; // [rsp+C8h] [rbp-70h] BYREF
  int v22; // [rsp+CCh] [rbp-6Ch] BYREF
  int v23; // [rsp+D0h] [rbp-68h] BYREF
  int v24; // [rsp+D4h] [rbp-64h] BYREF
  int v25; // [rsp+D8h] [rbp-60h] BYREF
  int v26; // [rsp+DCh] [rbp-5Ch] BYREF
  int v27; // [rsp+E0h] [rbp-58h] BYREF
  int v28; // [rsp+E4h] [rbp-54h] BYREF
  int v29; // [rsp+E8h] [rbp-50h] BYREF
  int v30; // [rsp+ECh] [rbp-4Ch] BYREF
  int v31; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v33; // [rsp+100h] [rbp-38h] BYREF
  __int64 v34[3]; // [rsp+108h] [rbp-30h] BYREF
  __int128 v35; // [rsp+128h] [rbp-10h]

  v35 = 0LL;
  qword_1C0336230 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  if ( (unsigned int)dword_1C03263F8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C03263F8, 0x400000000000LL) )
  {
    v17 = v8;
    v32 = v9;
    v20 = (v10 >> 4) & 1;
    v18 = a4;
    v21 = (v10 >> 3) & 1;
    v19 = a3;
    v22 = (v10 >> 2) & 1;
    v24 = v10 & 1;
    v23 = (v10 >> 1) & 1;
    v25 = HIDWORD(qword_1C0336248);
    v26 = qword_1C0336248;
    v27 = HIDWORD(xmmword_1C0336238);
    v28 = DWORD2(xmmword_1C0336238);
    v29 = DWORD1(xmmword_1C0336238);
    v30 = xmmword_1C0336238;
    v31 = a1;
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
    ProcessImageFileName = PsGetProcessImageFileName(*CurrentProcessWin32Process);
    v34[0] = 50331648LL;
    v33 = ProcessImageFileName;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v14,
      (unsigned int)&unk_1C02EFFF4,
      v15,
      v16,
      (__int64)v34,
      (__int64)&v33,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v32,
      (__int64)&v17);
  }
  result = (unsigned int)xmmword_1C0336238;
  xmmword_1C0336238 = 0LL;
  qword_1C0336248 = 0LL;
  return result;
}
