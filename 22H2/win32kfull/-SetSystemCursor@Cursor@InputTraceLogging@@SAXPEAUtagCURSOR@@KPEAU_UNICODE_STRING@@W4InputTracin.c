/*
 * XREFs of ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1C012906C
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0024954 (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCur.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0011430 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00C11B8 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555544455AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01D3250 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C01D3250.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444443334@Z @ 0x1C01D3520 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@-$_tlg.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01D3798 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x1C01D3998 (-GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z.c)
 */

char __fastcall InputTraceLogging::Cursor::SetSystemCursor(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rax
  struct tagCURSOR *v11; // rcx
  struct tagCURSOR *v12; // rcx
  struct tagCURSOR *v13; // rcx
  struct tagCURSOR *v14; // rcx
  struct tagCURSOR *v15; // rcx
  int v16; // r13d
  struct tagCURSOR *v17; // rcx
  struct tagCURSOR *v18; // rcx
  struct tagCURSOR *v19; // rcx
  struct tagCURSOR *v20; // rcx
  struct tagCURSOR *v21; // rcx
  struct tagCURSOR *CursorOrFrame; // r15
  __int64 v23; // rsi
  __int64 v24; // r9
  int v25; // ecx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  const char *v30; // rax
  __int64 i; // rbx
  struct tagCURSOR *v32; // rcx
  struct tagCURSOR *v33; // rcx
  __int64 v34; // rdi
  struct tagCURSOR *v35; // rcx
  int v36; // esi
  struct tagCURSOR *v37; // rcx
  int v38; // r14d
  struct tagCURSOR *v39; // rcx
  struct tagCURSOR *v40; // rcx
  unsigned int v41; // r15d
  struct tagCURSOR *v42; // rcx
  int v43; // r12d
  struct tagCURSOR *v44; // rcx
  __int64 v45; // r13
  struct tagCURSOR *v46; // rcx
  struct tagCURSOR *v47; // rcx
  unsigned int v48; // r8d
  int v49; // r9d
  __int64 v50; // r10
  __int64 v51; // r11
  __int64 v52; // rdx
  int v53; // r8d
  int v54; // r9d
  int v56; // [rsp+A0h] [rbp-80h] BYREF
  int v57; // [rsp+A4h] [rbp-7Ch] BYREF
  __int64 v58; // [rsp+A8h] [rbp-78h] BYREF
  int v59; // [rsp+B0h] [rbp-70h] BYREF
  int v60; // [rsp+B4h] [rbp-6Ch]
  __int64 v61; // [rsp+B8h] [rbp-68h]
  unsigned int v62; // [rsp+C0h] [rbp-60h] BYREF
  int v63; // [rsp+C4h] [rbp-5Ch] BYREF
  __int64 v64; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-48h] BYREF
  __int64 v67; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v69; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v70; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v71; // [rsp+100h] [rbp-20h]
  __int64 v72; // [rsp+108h] [rbp-18h]
  __int64 v73; // [rsp+110h] [rbp-10h]
  __int64 v74; // [rsp+118h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1C032FB20 > 5 && (qword_1C032FB30 & 8) != 0 && (qword_1C032FB38 & 8) == qword_1C032FB38 )
  {
    a6 = *(_DWORD *)UPDWORDPointer(8232LL);
    v71 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 13);
    v72 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v11) + 12);
    v73 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v12) + 11);
    LODWORD(a5) = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v13) + 43);
    v60 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v14) + 42);
    v16 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v15) + 36) >> 1;
    LODWORD(v61) = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v17) + 35);
    HIDWORD(v61) = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v18) + 20);
    v65 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v19) + 6);
    if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v20) + 6) )
      CursorOrFrame = InputTraceLogging::GetCursorOrFrame(v21);
    else
      CursorOrFrame = 0LL;
    if ( a3 )
    {
      v23 = *(_QWORD *)(a3 + 8);
      if ( (v23 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v24 = (unsigned __int16)v23;
        v23 = (__int64)&gStrBufSetSystemCursorPath;
        RtlStringCchPrintfW(&gStrBufSetSystemCursorPath, 0x104uLL, (size_t *)L"ResourceID %i", v24);
      }
    }
    else
    {
      v23 = (__int64)L"Empty";
    }
    v63 = a6;
    v66 = v71;
    v67 = v72;
    v68 = v73;
    LODWORD(v64) = a5;
    v56 = v60;
    v58 = v61;
    v74 = v23;
    v62 = a2;
    v57 = v16;
    v25 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)a1) + 19);
    v69 = v65;
    v59 = v25;
    v70 = (__int64)CursorOrFrame;
    if ( a4 )
    {
      v26 = a4 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = v28 - 1;
            if ( v29 )
            {
              if ( v29 == 1 )
                v30 = "Replace Mouse With Pen";
              else
                v30 = "UNKNOWN";
            }
            else
            {
              v30 = "Restore Mouse Cursors";
            }
          }
          else
          {
            v30 = "App called SetSystemCursor";
          }
        }
        else
        {
          v30 = "App called SPI_SETCURSORS";
        }
      }
      else
      {
        v30 = "User Login";
      }
    }
    else
    {
      v30 = "Session Init";
    }
    a5 = (__int64)v30;
    v65 = (__int64)InputTraceLogging::CurIndexName(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)&dword_1C032FB20,
      (int)&dword_1C02F02F0,
      (__int64)&v65,
      (__int64)&a5,
      (__int64)&v70,
      (__int64)&v69,
      (__int64)&v59,
      (__int64)&v58 + 4,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v64,
      (__int64)&v68,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v74);
  }
  LOBYTE(v10) = InputTraceLogging::Enabled(0);
  if ( (_BYTE)v10 && a1 )
  {
    for ( i = *(_QWORD *)(a1 + 40); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)dword_1C032FB20 > 5 && (qword_1C032FB30 & 8) != 0 )
      {
        v10 = qword_1C032FB38 & 8;
        if ( v10 == qword_1C032FB38 )
        {
          UPDWORDPointer(8232LL);
          InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i);
          InputTraceLogging::GetCursorOrFrame(v32);
          v34 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v33) + 11);
          v36 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v35) + 43);
          v38 = *((__int16 *)InputTraceLogging::GetCursorOrFrame(v37) + 42);
          InputTraceLogging::GetCursorOrFrame(v39);
          v41 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v40) + 35);
          v43 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame(v42) + 20);
          v45 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v44) + 6);
          if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame(v46) + 6) )
            InputTraceLogging::GetCursorOrFrame(v47);
          a6 = v49;
          v70 = v50;
          v69 = v51;
          v68 = v34;
          LODWORD(a5) = v36;
          v59 = v38;
          v58 = __PAIR64__(v48, v41);
          v57 = v43;
          v56 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 19);
          v66 = v52;
          v67 = v45;
          LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                          (unsigned int)&dword_1C032FB20,
                          (unsigned int)&unk_1C02F03A2,
                          v53,
                          v54,
                          (__int64)&v66,
                          (__int64)&v67,
                          (__int64)&v56,
                          (__int64)&v57,
                          (__int64)&v58,
                          (__int64)&v58 + 4,
                          (__int64)&v59,
                          (__int64)&a5,
                          (__int64)&v68,
                          (__int64)&v69,
                          (__int64)&v70,
                          (__int64)&a6);
        }
      }
    }
  }
  return v10;
}
