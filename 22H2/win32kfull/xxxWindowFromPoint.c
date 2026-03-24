/*
 * XREFs of xxxWindowFromPoint @ 0x1C00C0E6C
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C00C0E20 (NtUserWindowFromPoint.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C00C0FA4 (xxxDCEWindowHitTest.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00C11B8 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     xxxWindowHitTest2 @ 0x1C00D70C4 (xxxWindowHitTest2.c)
 *     GetThreadDesktopWindow @ 0x1C0103DD0 (GetThreadDesktopWindow.c)
 *     ?GetWindowDetails@InputTraceLogging@@CA?AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z @ 0x1C01E0260 (-GetWindowDetails@InputTraceLogging@@CA-AUWindowDetails@1@PEAUtagWND@@PEAUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33334AEBU?$_tlgWrapSz@D@@@Z @ 0x1C0214264 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlgWri.c)
 */

__int64 __fastcall xxxWindowFromPoint(struct tagPOINT a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 WindowDetails; // rax
  __int128 v12; // xmm1
  int v13; // [rsp+70h] [rbp-90h] BYREF
  LONG v14; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h] BYREF
  __int128 v16; // [rsp+80h] [rbp-80h] BYREF
  __int128 v17; // [rsp+90h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-60h]
  __int128 v19; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v20; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v21[3]; // [rsp+C0h] [rbp-40h] BYREF
  char v22[72]; // [rsp+D8h] [rbp-28h] BYREF
  LONG y; // [rsp+134h] [rbp+34h]
  __int64 v24; // [rsp+138h] [rbp+38h] BYREF
  __int64 v25; // [rsp+140h] [rbp+40h] BYREF
  __int64 v26; // [rsp+148h] [rbp+48h] BYREF

  y = a1.y;
  v21[2] = 0LL;
  result = GetThreadDesktopWindow(0LL);
  v3 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v21[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v21;
    v21[1] = v3;
    HMLockObject(v3);
    if ( (unsigned int)IsWindowDesktopComposed(v3) )
    {
      *(_QWORD *)&v17 = 0LL;
      v5 = *(_QWORD *)(v3 + 112);
      v6 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)&v16 = *(_QWORD *)(v6 + 416);
      *(_QWORD *)(v6 + 416) = &v16;
      *((_QWORD *)&v16 + 1) = v5;
      if ( v5 )
        HMLockObject(v5);
      v7 = xxxDCEWindowHitTest(*(_QWORD *)(v3 + 112), 0, 0, 0, a1, 0LL, 5);
      ThreadUnlock1(v8);
    }
    else
    {
      v7 = xxxWindowHitTest2(v3);
    }
    ThreadUnlock1(v9);
    v10 = HMValidateHandleNoSecure(v7, 1);
    if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
    {
      WindowDetails = InputTraceLogging::GetWindowDetails(v22, v10);
      v12 = *(_OWORD *)(WindowDetails + 16);
      v16 = *(_OWORD *)WindowDetails;
      v18 = *(_QWORD *)(WindowDetails + 32);
      v17 = v12;
      if ( (unsigned int)dword_1C032FB20 > 4 && (qword_1C032FB30 & 2) != 0 && (qword_1C032FB38 & 2) == qword_1C032FB38 )
      {
        v19 = v16;
        LODWORD(v24) = HIDWORD(v18);
        LODWORD(v25) = v18;
        LODWORD(v26) = HIDWORD(v17);
        v13 = DWORD2(v17);
        v20 = v17;
        v14 = y;
        LODWORD(v15) = a1.x;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
          (int)&dword_1C032FB20,
          (int)&dword_1C02F1D85,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v20,
          (__int64)&v13,
          (__int64)&v26,
          (__int64)&v25,
          (__int64)&v24,
          (__int64)&v19 + 8,
          (__int64)&v19);
      }
    }
    return v10;
  }
  return result;
}
