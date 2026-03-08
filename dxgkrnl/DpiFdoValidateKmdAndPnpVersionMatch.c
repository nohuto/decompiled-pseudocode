/*
 * XREFs of DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C020F290
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C01F5A64 (DpiFdoInitializeFdo.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C0020D50 (-RtlUnicodeStringCchCopyStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1C005E4C0 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$.c)
 *     DpiGetDriverFullPath @ 0x1C01D01CC (DpiGetDriverFullPath.c)
 *     ?DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z @ 0x1C01D0208 (-DxgkpGetFileVersion@@YAJPEAU_UNICODE_STRING@@PEAT_LARGE_INTEGER@@PEAJ@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z @ 0x1C02C935C (-DxgCreateLiveDumpWithWdLogs2@@YAJK_K000UDXGK_LIVEREPORT_FLAGS@@@Z.c)
 *     IsKnownMismatchedVersionedDriver @ 0x1C0396498 (IsKnownMismatchedVersionedDriver.c)
 */

__int64 __fastcall DpiFdoValidateKmdAndPnpVersionMatch(__int64 a1)
{
  __int64 v1; // r8
  char v3; // r13
  unsigned int v4; // eax
  int DriverFullPath; // eax
  _WORD *v6; // r8
  __int64 v7; // r9
  _WORD *v8; // rax
  __int64 v9; // r8
  __int64 *v10; // rax
  int v11; // eax
  unsigned __int16 **v12; // r10
  unsigned int v13; // ecx
  _WORD *v14; // r8
  unsigned int v15; // edi
  unsigned int *v16; // r12
  unsigned int v17; // r15d
  unsigned int v18; // ebx
  int v19; // eax
  NTSTATUS v20; // eax
  __int64 v21; // r15
  union _LARGE_INTEGER v22; // rbx
  __int64 v23; // rdi
  __int64 v25; // rdx
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r11d
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // [rsp+68h] [rbp-69h] BYREF
  union _LARGE_INTEGER v34; // [rsp+70h] [rbp-61h] BYREF
  __int128 v35; // [rsp+78h] [rbp-59h] BYREF
  int v36; // [rsp+88h] [rbp-49h] BYREF
  int v37; // [rsp+8Ch] [rbp-45h] BYREF
  int v38; // [rsp+90h] [rbp-41h] BYREF
  int v39; // [rsp+94h] [rbp-3Dh] BYREF
  unsigned int v40; // [rsp+98h] [rbp-39h]
  UNICODE_STRING String; // [rsp+A0h] [rbp-31h] BYREF
  union _LARGE_INTEGER v42; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v43; // [rsp+B8h] [rbp-19h] BYREF
  PVOID P[2]; // [rsp+C0h] [rbp-11h] BYREF
  unsigned __int16 *v45; // [rsp+D0h] [rbp-1h] BYREF
  int v46; // [rsp+D8h] [rbp+7h]
  __int128 v47; // [rsp+E0h] [rbp+Fh] BYREF
  __int64 v48; // [rsp+F0h] [rbp+1Fh] BYREF
  int v49; // [rsp+F8h] [rbp+27h]

  v1 = *(_QWORD *)(a1 + 24);
  *(_OWORD *)P = 0LL;
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 64) + 40LL) + 28LL);
  v40 = v4;
  if ( v4 < 0x6000
    || *(_DWORD *)(a1 + 1124) == 1297040209 && v4 < 0x8000
    || *(_BYTE *)(a1 + 2693)
    || *(_BYTE *)(a1 + 2692)
    || dword_1C013BA00 == 5
    || *(_BYTE *)(a1 + 481)
    || *(_BYTE *)(a1 + 2694)
    || *(_BYTE *)(a1 + 1159) )
  {
    goto LABEL_39;
  }
  v34.QuadPart = 0LL;
  DriverFullPath = DpiGetDriverFullPath(v1, P);
  if ( DriverFullPath < 0
    || (DriverFullPath = DxgkpGetFileVersion((struct _UNICODE_STRING *)P, &v34, 0LL), DriverFullPath < 0) )
  {
    v25 = DriverFullPath;
LABEL_59:
    WdLogSingleEntry1(2LL, v25);
    goto LABEL_39;
  }
  v6 = *(_WORD **)(a1 + 4840);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, -1073741823LL);
    goto LABEL_39;
  }
  v35 = 0LL;
  v7 = 0x7FFFLL;
  v8 = v6;
  while ( *v8 )
  {
    ++v8;
    if ( !--v7 )
    {
      v26 = v35;
      goto LABEL_17;
    }
  }
  *((_QWORD *)&v35 + 1) = v6;
  v26 = 2 * (0x7FFF - v7);
  LOWORD(v35) = v26;
  WORD1(v35) = v26 + 2;
LABEL_17:
  v9 = 0x7FFFLL;
  v48 = *(_QWORD *)L"00000";
  v49 = *(_DWORD *)L"0";
  v10 = &v48;
  String = 0LL;
  while ( *(_WORD *)v10 )
  {
    v10 = (__int64 *)((char *)v10 + 2);
    if ( !--v9 )
      goto LABEL_22;
  }
  String.Buffer = (wchar_t *)&v48;
  String.Length = 2 * (0x7FFF - v9);
  String.MaximumLength = String.Length + 2;
LABEL_22:
  v11 = 0;
  v12 = &v45;
  v45 = 0LL;
  v47 = 0LL;
  v46 = 0;
  v13 = 0;
  if ( !(v26 >> 1) )
  {
LABEL_58:
    v25 = -1073741275LL;
    goto LABEL_59;
  }
  v14 = (_WORD *)*((_QWORD *)&v35 + 1);
  while ( 1 )
  {
    if ( *v14 == 46 )
    {
      *(_DWORD *)v12 = v13;
      ++v11;
      v12 = (unsigned __int16 **)((char *)v12 + 4);
      if ( v11 == 3 )
        break;
    }
    ++v13;
    ++v14;
    if ( v13 >= v26 >> 1 )
      goto LABEL_58;
  }
  v15 = 0;
  v16 = (unsigned int *)&v45;
  while ( 1 )
  {
    if ( v15 )
    {
      v17 = *((_DWORD *)&v45 + v15 - 1) + 1;
      if ( v15 == 3 )
      {
        v18 = v26 >> 1;
        goto LABEL_32;
      }
    }
    else
    {
      v17 = 0;
    }
    v18 = *v16;
LABEL_32:
    if ( v17 >= v18 || v18 > v26 >> 1 )
    {
      WdLogSingleEntry1(1LL, 8012LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"startCharIndex < endCharIndex && endCharIndex <= (PnPDriverVersionString.Length / sizeof(WCHAR))",
        8012LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v19 = RtlUnicodeStringCchCopyStringN(&String, (wchar_t *)(*((_QWORD *)&v35 + 1) + 2LL * v17), v18 - v17);
    if ( v19 < 0 )
    {
      v25 = v19;
      goto LABEL_59;
    }
    v20 = RtlUnicodeStringToInteger(&String, 0, (PULONG)&v47 + v15);
    v21 = v20;
    if ( v20 < 0 )
    {
      v25 = v20;
      goto LABEL_59;
    }
    ++v15;
    ++v16;
    if ( v15 > 3 )
      break;
    v26 = v35;
  }
  v22 = v34;
  HIDWORD(v33) = WORD2(v47) | ((_DWORD)v47 << 16);
  LODWORD(v33) = WORD6(v47) | (DWORD2(v47) << 16);
  v23 = v33;
  if ( v33 != v34.QuadPart
    && !(unsigned __int8)IsKnownMismatchedVersionedDriver(*(unsigned int *)(a1 + 1124), &v33, &v34) )
  {
    if ( (unsigned int)dword_1C013A918 > 5 && tlgKeywordOn((__int64)&dword_1C013A918, 0x400000000100LL) )
    {
      v36 = *(_DWORD *)(a1 + 1140);
      v37 = *(_DWORD *)(a1 + 1136);
      v38 = *(_DWORD *)(a1 + 1132);
      v39 = *(_DWORD *)(a1 + 1128);
      v45 = (unsigned __int16 *)&v35;
      LODWORD(v33) = v30;
      v42 = v22;
      v43 = v23;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v27,
        byte_1C00A04E5,
        v28,
        v29,
        &v45,
        (__int64)&v43,
        (__int64)&v42,
        (__int64)&v33,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36);
    }
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))WdLogSingleEntry5)(
      2LL,
      a1,
      v23,
      (union _LARGE_INTEGER)v22.QuadPart,
      v21,
      -1073741438LL);
    v33 = 0LL;
    v31 = *(unsigned int *)(a1 + 1124);
    v33 = v40 >= 0xB000;
    DxgCreateLiveDumpWithWdLogs2(403LL, 2059LL, v31, v34.HighPart, v22.LowPart, v33);
    LOBYTE(v32) = 1;
    if ( (unsigned __int8)WdIsDebuggerPresent(v32) )
    {
      DbgPrintEx(
        0x65u,
        0,
        "A mismatch between the PNP/INF version and the KMD file version on the graphics adapter has been detected. The a"
        "dapter will fail to start.");
      __debugbreak();
    }
    v3 = 1;
  }
LABEL_39:
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  return v3 != 0 ? 0xC0000182 : 0;
}
