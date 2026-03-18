/*
 * XREFs of ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1C0113208
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C00A1C0C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 * Callees:
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C0064908 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00D0F08 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555544455AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01CF1CC (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C01CF1CC.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444443334@Z @ 0x1C01CF49C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@-$_tlg.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01CF714 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x1C01CF8F4 (-GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z.c)
 */

char __fastcall InputTraceLogging::Cursor::SetSystemCursor(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  char result; // al
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // r9
  struct tagCURSOR *v13; // rcx
  struct tagCURSOR *CursorOrFrame; // rax
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx
  const char *v19; // rax
  __int64 i; // rbx
  struct tagCURSOR *v21; // rcx
  int v22; // r8d
  int v23; // r9d
  struct tagCURSOR *v24; // rax
  __int64 v25; // [rsp+A8h] [rbp-19h] BYREF
  int v26; // [rsp+B0h] [rbp-11h] BYREF
  int v27; // [rsp+B4h] [rbp-Dh] BYREF
  int v28; // [rsp+B8h] [rbp-9h] BYREF
  _DWORD v29[3]; // [rsp+BCh] [rbp-5h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+7h] BYREF
  __int64 v31; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v33; // [rsp+E0h] [rbp+1Fh] BYREF
  __int64 v34; // [rsp+E8h] [rbp+27h] BYREF
  __int64 v35; // [rsp+F0h] [rbp+2Fh] BYREF
  __int64 v36; // [rsp+F8h] [rbp+37h] BYREF

  if ( (unsigned int)dword_1C032BE20 > 5 && tlgKeywordOn((__int64)&dword_1C032BE20, 8LL) )
  {
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 8);
      if ( (v11 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v12 = (unsigned __int16)v11;
        v11 = (__int64)&gStrBufSetSystemCursorPath;
        RtlStringCchPrintfW(&gStrBufSetSystemCursorPath, 0x104uLL, (size_t *)L"ResourceID %i", v12);
      }
    }
    else
    {
      v11 = (__int64)L"Empty";
    }
    v34 = v11;
    LODWORD(a6) = a2;
    LODWORD(a5) = *(_DWORD *)UPDWORDPointer(8232LL);
    v35 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 13);
    v36 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 12);
    *(_QWORD *)&v29[1] = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 11);
    v29[0] = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 43);
    LODWORD(v25) = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 42);
    HIDWORD(v25) = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 36) >> 1;
    v26 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 35);
    v27 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 20);
    v28 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 19);
    v30 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 6);
    if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 6) )
      CursorOrFrame = InputTraceLogging::GetCursorOrFrame(v13);
    else
      CursorOrFrame = 0LL;
    v31 = (__int64)CursorOrFrame;
    if ( a4 )
    {
      v15 = a4 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 1;
            if ( v18 )
            {
              if ( v18 == 1 )
                v19 = "Replace Mouse With Pen";
              else
                v19 = "UNKNOWN";
            }
            else
            {
              v19 = "Restore Mouse Cursors";
            }
          }
          else
          {
            v19 = "App called SetSystemCursor";
          }
        }
        else
        {
          v19 = "App called SPI_SETCURSORS";
        }
      }
      else
      {
        v19 = "User Login";
      }
    }
    else
    {
      v19 = "Session Init";
    }
    v32 = (__int64)v19;
    v33 = (__int64)InputTraceLogging::CurIndexName(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)&dword_1C032BE20,
      (int)&dword_1C02EDE00,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25 + 4,
      (__int64)&v25,
      (__int64)v29,
      (__int64)&v29[1],
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&a5,
      (__int64)&a6,
      (__int64)&v34);
  }
  result = InputTraceLogging::Enabled(0);
  if ( result && a1 )
  {
    for ( i = *(_QWORD *)(a1 + 40); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)dword_1C032BE20 > 5 )
      {
        result = tlgKeywordOn((__int64)&dword_1C032BE20, 8LL);
        if ( result )
        {
          LODWORD(a6) = *(_DWORD *)UPDWORDPointer(8232LL);
          v33 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 13);
          v32 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 12);
          v31 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 11);
          LODWORD(a5) = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 43);
          v28 = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 42);
          v27 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 36) >> 1;
          v26 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 35);
          v25 = *(_QWORD *)((char *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 76);
          v30 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 6);
          if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 6) )
            v24 = InputTraceLogging::GetCursorOrFrame(v21);
          else
            v24 = 0LL;
          *(_QWORD *)&v29[1] = v24;
          result = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     (unsigned int)&dword_1C032BE20,
                     (unsigned int)&unk_1C02EDEB2,
                     v22,
                     v23,
                     (__int64)&v29[1],
                     (__int64)&v30,
                     (__int64)&v25,
                     (__int64)&v25 + 4,
                     (__int64)&v26,
                     (__int64)&v27,
                     (__int64)&v28,
                     (__int64)&a5,
                     (__int64)&v31,
                     (__int64)&v32,
                     (__int64)&v33,
                     (__int64)&a6);
        }
      }
    }
  }
  return result;
}
