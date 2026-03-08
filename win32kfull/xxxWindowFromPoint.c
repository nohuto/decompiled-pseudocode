/*
 * XREFs of xxxWindowFromPoint @ 0x1C00D6B18
 * Callers:
 *     NtUserWindowFromPoint @ 0x1C00D6AD0 (NtUserWindowFromPoint.c)
 *     NtUserWindowFromPhysicalPoint @ 0x1C01E1390 (NtUserWindowFromPhysicalPoint.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x1C003BE08 (GetThreadDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A5B80 (HMValidateHandleNoSecure.c)
 *     ?xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z @ 0x1C00D6C0C (-xxxDCEWindowHitTest@@YAPEAUHWND__@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHK@Z.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00D6CC4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z @ 0x1C00DEBE8 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHK@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?GetWindowDetails@InputTraceLogging@@SA?AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z @ 0x1C0143726 (-GetWindowDetails@InputTraceLogging@@SA-AUWindowDetails@1@PEBUtagWND@@PEBUtagBWND@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33334AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01E4A30 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U-$_tlgWrapSz@D@@@-$_tlgWri.c)
 */

__int64 __fastcall xxxWindowFromPoint(struct tagPOINT a1)
{
  __int64 result; // rax
  struct tagWND **v3; // rdi
  struct tagWND *v4; // rcx
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 WindowDetails; // rax
  __int128 v14; // xmm1
  int v15; // [rsp+70h] [rbp-49h] BYREF
  LONG v16; // [rsp+74h] [rbp-45h] BYREF
  __int64 v17; // [rsp+78h] [rbp-41h] BYREF
  __int128 v18; // [rsp+80h] [rbp-39h] BYREF
  __int128 v19; // [rsp+90h] [rbp-29h]
  __int64 v20; // [rsp+A0h] [rbp-19h]
  __int128 v21; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-1h] BYREF
  __int128 v23; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v24; // [rsp+D0h] [rbp+17h]
  _BYTE v25[56]; // [rsp+D8h] [rbp+1Fh] BYREF
  LONG y; // [rsp+124h] [rbp+6Bh]
  __int64 v27; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+130h] [rbp+77h] BYREF
  __int64 v29; // [rsp+138h] [rbp+7Fh] BYREF

  y = a1.y;
  v23 = 0LL;
  v24 = 0LL;
  result = GetThreadDesktopWindow(0LL);
  v3 = (struct tagWND **)result;
  if ( result )
  {
    ThreadLock(result, &v23);
    if ( (unsigned int)IsWindowDesktopComposed(v3) )
    {
      v4 = v3[14];
      v18 = 0LL;
      *(_QWORD *)&v19 = 0LL;
      ThreadLock(v4, &v18);
      v5 = (unsigned int)xxxDCEWindowHitTest(v3[14], 0, 0LL, 0LL, a1, 0LL, 5u);
      ThreadUnlock1(v7, v6, v8);
    }
    else
    {
      v5 = (unsigned int)xxxWindowHitTest2((struct tagWND *)v3, a1, 0LL, 1u);
    }
    ThreadUnlock1(v10, v9, v11);
    v12 = HMValidateHandleNoSecure(v5, 1);
    if ( (unsigned __int8)InputTraceLogging::Enabled(0LL) )
    {
      WindowDetails = InputTraceLogging::GetWindowDetails(v25, v12);
      v14 = *(_OWORD *)(WindowDetails + 16);
      v18 = *(_OWORD *)WindowDetails;
      v20 = *(_QWORD *)(WindowDetails + 32);
      v19 = v14;
      if ( (unsigned int)dword_1C035C080 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1C035C080, 2LL) )
        {
          v21 = v18;
          LODWORD(v27) = HIDWORD(v20);
          LODWORD(v28) = v20;
          LODWORD(v29) = HIDWORD(v19);
          v15 = DWORD2(v19);
          v22 = v19;
          v16 = y;
          LODWORD(v17) = a1.x;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
            (int)&dword_1C035C080,
            (int)&dword_1C031D741,
            (__int64)&v17,
            (__int64)&v16,
            (__int64)&v22,
            (__int64)&v15,
            (__int64)&v29,
            (__int64)&v28,
            (__int64)&v27,
            (__int64)&v21 + 8,
            (__int64)&v21);
        }
      }
    }
    return v12;
  }
  return result;
}
