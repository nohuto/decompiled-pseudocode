/*
 * XREFs of ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C022070C
 * Callers:
 *     ?WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x1C0220A24 (-WindowPosAndStateApplied@NotifyShell@@YAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00D6CC4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C0143726 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U?$_tlgWrapSz@D@@U3@U2@U2@U2@U2@U3@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@4443AEBU?$_tlgWrapSz@D@@54444544444444@Z @ 0x1C021F6B4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U-$_tlgWrapSz@D@@U3@U2@U2@U2@U2@U.c)
 *     ?WindowStateToString@InputTraceLogging@@CAPEBDW4TRACKED_WINDOW_STATE@@@Z @ 0x1C0220C28 (-WindowStateToString@InputTraceLogging@@CAPEBDW4TRACKED_WINDOW_STATE@@@Z.c)
 */

void __fastcall InputTraceLogging::Win32k::ShellWindowPosApplied(
        const struct tagWND *a1,
        const struct tagSHELL_REQUESTED_POS_APPLIED *a2)
{
  __int64 v3; // r10
  __int64 WindowDetails; // rax
  __int128 v5; // xmm1
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+D0h] [rbp-80h] BYREF
  int v12; // [rsp+D4h] [rbp-7Ch] BYREF
  int v13; // [rsp+D8h] [rbp-78h] BYREF
  int v14; // [rsp+DCh] [rbp-74h] BYREF
  int v15; // [rsp+E0h] [rbp-70h] BYREF
  int v16; // [rsp+E4h] [rbp-6Ch] BYREF
  int v17; // [rsp+E8h] [rbp-68h] BYREF
  int v18; // [rsp+ECh] [rbp-64h] BYREF
  int v19; // [rsp+F0h] [rbp-60h] BYREF
  int v20; // [rsp+F4h] [rbp-5Ch] BYREF
  int v21; // [rsp+F8h] [rbp-58h] BYREF
  int v22; // [rsp+FCh] [rbp-54h] BYREF
  int v23; // [rsp+100h] [rbp-50h] BYREF
  int v24; // [rsp+104h] [rbp-4Ch] BYREF
  __int64 v25; // [rsp+108h] [rbp-48h] BYREF
  __int64 v26; // [rsp+110h] [rbp-40h] BYREF
  __int128 v27; // [rsp+118h] [rbp-38h] BYREF
  __int64 v28; // [rsp+128h] [rbp-28h] BYREF
  __int128 v29; // [rsp+130h] [rbp-20h]
  __int128 v30; // [rsp+140h] [rbp-10h]
  __int64 v31; // [rsp+150h] [rbp+0h]
  _BYTE v32[40]; // [rsp+158h] [rbp+8h] BYREF
  __int64 v33; // [rsp+1A0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+1A8h] [rbp+58h] BYREF

  if ( InputTraceLogging::Enabled(0) )
  {
    WindowDetails = InputTraceLogging::GetWindowDetails((__int64)v32, v3);
    v5 = *(_OWORD *)(WindowDetails + 16);
    v29 = *(_OWORD *)WindowDetails;
    v31 = *(_QWORD *)(WindowDetails + 32);
    v30 = v5;
    if ( (unsigned int)dword_1C035C080 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C035C080, 2LL) )
      {
        v6 = *((unsigned int *)a2 + 1);
        LODWORD(v33) = *((_DWORD *)a2 + 13);
        LODWORD(v34) = *((_DWORD *)a2 + 12);
        v11 = *((_DWORD *)a2 + 11);
        v12 = *((_DWORD *)a2 + 10);
        v13 = *((_DWORD *)a2 + 9);
        v14 = *((_DWORD *)a2 + 8);
        v15 = *((_DWORD *)a2 + 7);
        v16 = *((_DWORD *)a2 + 6);
        v7 = InputTraceLogging::WindowStateToString(v6);
        v8 = *(unsigned int *)a2;
        v25 = v7;
        v17 = *((_DWORD *)a2 + 5);
        v18 = *((_DWORD *)a2 + 4);
        v19 = *((_DWORD *)a2 + 3);
        v20 = *((_DWORD *)a2 + 2);
        v26 = InputTraceLogging::WindowStateToString(v8);
        v27 = v29;
        v21 = HIDWORD(v31);
        v22 = v31;
        v23 = HIDWORD(v30);
        v24 = DWORD2(v30);
        v28 = v30;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1C035C080,
          (unsigned __int8 *)dword_1C031EB84,
          v9,
          v10,
          (const unsigned __int16 **)&v28,
          (__int64)&v24,
          (__int64)&v23,
          (__int64)&v22,
          (__int64)&v21,
          (const unsigned __int16 **)&v27 + 1,
          (void **)&v27,
          (void **)&v26,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (void **)&v25,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v34,
          (__int64)&v33);
      }
    }
  }
}
