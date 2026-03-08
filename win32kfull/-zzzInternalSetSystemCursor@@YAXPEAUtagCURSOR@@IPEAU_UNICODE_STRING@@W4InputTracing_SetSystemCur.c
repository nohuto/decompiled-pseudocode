/*
 * XREFs of ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0x1C01084CC
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x1C0107CAC (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     ?_LoadCursorsAndIcons@@YAHXZ @ 0x1C010A118 (-_LoadCursorsAndIcons@@YAHXZ.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C01AA0E4 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01AEBA4 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C1278 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z @ 0x1C00D6CC4 (-Enabled@InputTraceLogging@@CA_NW4InputTraceKeywords@@E@Z.c)
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0107950 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?xxxEnsureDpiCursorsForSysCur@@YAXI@Z @ 0x1C01086B4 (-xxxEnsureDpiCursorsForSysCur@@YAXI@Z.c)
 *     ?zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z @ 0x1C0108808 (-zzzSetSystemImage@@YAXPEAUtagCURSOR@@0@Z.c)
 *     RtlInitUnicodeStringOrId @ 0x1C0108BB4 (RtlInitUnicodeStringOrId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@3AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555544455AEBU?$_tlgWrapSz@G@@@Z @ 0x1C01A93D4 (--$Write@U-$_tlgWrapSz@D@@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$03@@U_ea_1C01A93D4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444443334@Z @ 0x1C01A96A4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U1@U1@U1@U2@@-$_tlg.c)
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01A991C (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 *     ?GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z @ 0x1C01A9B18 (-GetCursorOrFrame@InputTraceLogging@@CAPEAUtagCURSOR@@PEAU2@@Z.c)
 */

__int64 __fastcall zzzInternalSetSystemCursor(__int64 a1, unsigned int a2, const struct _UNICODE_STRING *a3, int a4)
{
  unsigned __int64 v6; // rsi
  struct _UNICODE_STRING *v8; // r14
  PWSTR Buffer; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r14
  _BOOL8 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  PWSTR v22; // rdi
  __int64 v23; // r9
  struct tagCURSOR *v24; // rcx
  struct tagCURSOR *CursorOrFrame; // rax
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  const char *v30; // rax
  __int64 i; // rbx
  struct tagCURSOR *v32; // rcx
  int v33; // r8d
  int v34; // r9d
  struct tagCURSOR *v35; // rax
  __int64 v36; // [rsp+A0h] [rbp-80h] BYREF
  int v37; // [rsp+A8h] [rbp-78h] BYREF
  int v38; // [rsp+ACh] [rbp-74h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v41; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v42; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v43[2]; // [rsp+D0h] [rbp-50h] BYREF
  __int64 v44[2]; // [rsp+E0h] [rbp-40h] BYREF
  __int64 v45; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v46; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v47; // [rsp+100h] [rbp-20h] BYREF
  __int128 v48; // [rsp+108h] [rbp-18h] BYREF
  __int64 v49; // [rsp+118h] [rbp-8h]
  __int64 v50; // [rsp+168h] [rbp+48h] BYREF
  __int64 v51; // [rsp+170h] [rbp+50h] BYREF
  __int64 v52; // [rsp+178h] [rbp+58h] BYREF

  v6 = 552LL * a2;
  v8 = (struct _UNICODE_STRING *)&gasyscur[v6 / 8 + 2];
  if ( a3 )
  {
    Buffer = a3->Buffer;
    if ( ((unsigned __int64)Buffer & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(v8, (PCWSTR)&gasyscur[v6 / 8 + 4]);
      v8->MaximumLength = 520;
      RtlUnicodeStringCopy((struct _UNICODE_STRING *)&gasyscur[v6 / 8 + 2], a3);
      v8->Buffer[259] = 0;
    }
    else
    {
      RtlInitUnicodeStringOrId(v8, Buffer);
    }
  }
  else
  {
    RtlInitUnicodeString(v8, 0LL);
  }
  v13 = *(_QWORD *)(v6 + gasyscur[0] + 8);
  v14 = v13 == 0;
  if ( v14 != (a4 == 0) )
  {
    LODWORD(v50) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1610LL);
  }
  if ( v13 )
  {
    zzzSetSystemImage((struct tagCURSOR *)a1, *(struct tagCURSOR **)(v6 + gasyscur[0] + 8));
  }
  else
  {
    if ( PsGetCurrentProcess(v14, v11, v12) != gpepCSRSS
      || (v20 = *(_QWORD *)(a1 + 64)) == 0
      || (v20 & 0xFFFFFFFFFFFF0000uLL) != 0
      || (unsigned __int16)v20 - 100 != a2 )
    {
      LODWORD(v50) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1621LL);
    }
    v44[1] = a1;
    v21 = *(unsigned __int16 *)(v6 + gasyscur[0]);
    *(_DWORD *)(a1 + 80) |= 0x200u;
    *(_QWORD *)(a1 + 64) = v21;
    v44[0] = (__int64)&gasyscur[v6 / 8 + 1];
    HMAssignmentLock(v44, 0LL);
  }
  v15 = *(_QWORD *)(v6 + gasyscur[0] + 8);
  if ( (unsigned int)dword_1C035C080 > 5 && tlgKeywordOn((__int64)&dword_1C035C080, 8LL) )
  {
    if ( a3 )
    {
      v22 = a3->Buffer;
      if ( ((unsigned __int64)v22 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v23 = (unsigned __int16)v22;
        v22 = &gStrBufSetSystemCursorPath;
        RtlStringCchPrintfW(&gStrBufSetSystemCursorPath, 0x104uLL, (size_t *)L"ResourceID %i", v23);
      }
    }
    else
    {
      v22 = L"Empty";
    }
    v45 = (__int64)v22;
    LODWORD(v50) = a2;
    LODWORD(v52) = *(_DWORD *)UPDWORDPointer(8232LL);
    v46 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 13);
    v47 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 12);
    v40 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 11);
    LODWORD(v51) = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 43);
    LODWORD(v39) = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 42);
    LODWORD(v36) = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 36) >> 1;
    HIDWORD(v36) = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 35);
    v37 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 20);
    v38 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 19);
    v41 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 6);
    if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)v15) + 6) )
      CursorOrFrame = InputTraceLogging::GetCursorOrFrame(v24);
    else
      CursorOrFrame = 0LL;
    v42 = (__int64)CursorOrFrame;
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
    v43[0] = (__int64)v30;
    v44[0] = (__int64)InputTraceLogging::CurIndexName(a2);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      (int)&dword_1C035C080,
      (int)&dword_1C031B6C2,
      (__int64)v44,
      (__int64)v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36 + 4,
      (__int64)&v36,
      (__int64)&v39,
      (__int64)&v51,
      (__int64)&v40,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v52,
      (__int64)&v50,
      (__int64)&v45);
  }
  if ( InputTraceLogging::Enabled(0) && v15 )
  {
    for ( i = *(_QWORD *)(v15 + 40); i; i = *(_QWORD *)(i + 40) )
    {
      if ( (unsigned int)dword_1C035C080 > 5 && tlgKeywordOn((__int64)&dword_1C035C080, 8LL) )
      {
        LODWORD(v50) = *(_DWORD *)UPDWORDPointer(8232LL);
        v44[0] = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 13);
        v43[0] = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 12);
        v42 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 11);
        LODWORD(v52) = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 43);
        LODWORD(v51) = *((__int16 *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 42);
        v38 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 36) >> 1;
        v37 = *((_DWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 35);
        v36 = *(_QWORD *)((char *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 76);
        v41 = *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 6);
        if ( *((_QWORD *)InputTraceLogging::GetCursorOrFrame((struct tagCURSOR *)i) + 6) )
          v35 = InputTraceLogging::GetCursorOrFrame(v32);
        else
          v35 = 0LL;
        v40 = (__int64)v35;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C035C080,
          (unsigned int)&unk_1C031B774,
          v33,
          v34,
          (__int64)&v40,
          (__int64)&v41,
          (__int64)&v36,
          (__int64)&v36 + 4,
          (__int64)&v37,
          (__int64)&v38,
          (__int64)&v51,
          (__int64)&v52,
          (__int64)&v42,
          (__int64)v43,
          (__int64)v44,
          (__int64)&v50);
      }
    }
  }
  v48 = 0LL;
  v49 = 0LL;
  ThreadLockAlways(*(_QWORD *)(v6 + gasyscur[0] + 8), &v48);
  xxxEnsureDpiCursorsForSysCur(a2);
  return ThreadUnlock1(v17, v16, v18);
}
