/*
 * XREFs of ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0255EA4
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255BA4 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C006D640 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D3D40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0256210 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C02562E8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelMessage(
        InteractiveControlDefaultScroller *this,
        __int16 a2,
        struct tagWND *a3)
{
  int v3; // r15d
  __int64 v4; // r14
  __int64 v8; // r9
  char *v9; // r9
  __int128 v10; // xmm0
  __int64 v11; // r14
  LARGE_INTEGER v12; // rcx
  LARGE_INTEGER PerformanceCounter; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+34h] [rbp-3Ch]
  __int64 v19[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v20; // [rsp+48h] [rbp-28h] BYREF
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v3 = *((_DWORD *)this + 14);
  v4 = *((_QWORD *)a3 + 2);
  v22 = 0LL;
  v21 = 0LL;
  if ( a2 )
  {
    if ( (unsigned int)IsCompositionInputWindow(a3) && (v8 = *(_QWORD *)(*(_QWORD *)(v4 + 432) + 120LL)) != 0 )
    {
      v9 = (char *)(v8 + 40);
      v10 = *(_OWORD *)(*(_QWORD *)v9 + 104LL);
    }
    else
    {
      v9 = (char *)a3 + 40;
      v10 = *(_OWORD *)(*((_QWORD *)a3 + 5) + 88LL);
    }
    *(_OWORD *)v19 = v10;
    v17 = v10 + (DWORD2(v10) - (int)v10) / 2;
    v18 = DWORD1(v10) + (HIDWORD(v10) - DWORD1(v10)) / 2;
    LogicalToPhysicalDPIPoint(&v17, &v17, *(unsigned int *)(*(_QWORD *)v9 + 288LL), 0LL);
    if ( v3 == 2 && !(unsigned int)InteractiveControlDefaultScroller::SendZoomHotkey(this, a2) )
      goto LABEL_12;
    v11 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)((char *)&v21 + 2) = 67109120;
    WORD3(v21) = a2;
    if ( (unsigned int)dword_1C032BE20 > 4 && tlgKeywordOn((__int64)&dword_1C032BE20, 64LL) )
    {
      v19[0] = PerformanceCounter.QuadPart;
      v20 = (__int64)"Dial";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
        (__int64)&dword_1C032BE20,
        byte_1C02EE2FA,
        v14,
        v15,
        (__int64)v19,
        (void **)&v20);
    }
    ((void (__fastcall *)(_QWORD))UserSessionSwitchLeaveCrit)((LARGE_INTEGER)v12.QuadPart);
    HIDWORD(v21) = v17;
    LODWORD(v22) = v18;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
      0LL,
      &v21,
      v11,
      (LARGE_INTEGER)PerformanceCounter.QuadPart,
      32864);
    ProcessMouseEvent();
    EnterCrit(1LL, 0LL);
    if ( v3 == 2 )
LABEL_12:
      InteractiveControlDefaultScroller::SendZoomModifiers(*((_BYTE *)this + 53), 0);
  }
  return 0LL;
}
