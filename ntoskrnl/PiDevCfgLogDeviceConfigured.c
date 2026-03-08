/*
 * XREFs of PiDevCfgLogDeviceConfigured @ 0x140875198
 * Callers:
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlTimeToTimeFields @ 0x1402D14B0 (RtlTimeToTimeFields.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintfEx @ 0x1403C1A7C (RtlUnicodeStringPrintfEx.c)
 *     PnpGetLogString @ 0x1403C1C48 (PnpGetLogString.c)
 *     McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer @ 0x1403C1E28 (McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer.c)
 *     PnpDuplicateUnicodeString @ 0x1403C2368 (PnpDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x14055D498 (RtlUnicodeStringExHandleOtherFlags.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PiDevCfgQueryObjectProperties @ 0x14086AC20 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140875198 (PiDevCfgLogDeviceConfigured.c)
 *     PnpTraceDeviceConfig @ 0x1408773C8 (PnpTraceDeviceConfig.c)
 */

void __fastcall PiDevCfgLogDeviceConfigured(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rdi
  void *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  wchar_t *Buffer; // r8
  int v12; // r12d
  __int64 **v13; // r15
  __int64 **v14; // rdx
  char v15; // si
  const wchar_t *v16; // rbx
  __int64 v17; // r14
  __int64 v18; // r15
  __int64 v19; // rdx
  int *v20; // rax
  const wchar_t *v21; // rdx
  const wchar_t *v22; // r8
  const wchar_t *v23; // r9
  const wchar_t *v24; // r10
  __int64 v25; // r11
  __int64 v26; // r13
  __int64 **v27; // r14
  __int64 **v28; // rax
  wchar_t *v29; // r15
  __int64 v30; // rsi
  __int64 v31; // r14
  wchar_t *v32; // rbx
  wchar_t *v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r14
  unsigned __int16 Length; // cx
  unsigned int v38; // r9d
  __int64 v39; // rdx
  int v40; // r8d
  __int64 *v41; // rcx
  __int64 v42; // rax
  unsigned __int16 v43; // ax
  wchar_t *StringRoutine; // rax
  UNICODE_STRING v45; // xmm0
  __int64 *v46; // rsi
  wchar_t *v47; // rcx
  unsigned __int64 v48; // rax
  int v49; // ebx
  __int64 v50; // r9
  size_t v51; // r8
  __int64 v52; // r10
  const wchar_t *v53; // rdx
  wchar_t *v54; // r11
  size_t v55; // r14
  char v56; // si
  const wchar_t *v57; // rbx
  __int64 v58; // r14
  __int64 v59; // r15
  __int64 v60; // rdx
  int *v61; // rax
  const wchar_t *v62; // rdx
  const wchar_t *v63; // r8
  const wchar_t *v64; // r9
  const wchar_t *v65; // r10
  __int64 v66; // r11
  char v67; // si
  const wchar_t *v68; // rbx
  __int64 v69; // r14
  __int64 v70; // r15
  __int64 v71; // rdx
  int *LogString; // rax
  const wchar_t *v73; // rdx
  const wchar_t *v74; // r8
  const wchar_t *v75; // r9
  const wchar_t *v76; // r10
  __int64 v77; // r11
  char v78; // si
  const wchar_t *v79; // rbx
  __int64 v80; // r14
  __int64 v81; // r15
  __int64 v82; // rdx
  int *v83; // rax
  const wchar_t *v84; // rdx
  const wchar_t *v85; // r8
  const wchar_t *v86; // r9
  const wchar_t *v87; // r10
  __int64 v88; // r11
  int v89; // ecx
  unsigned __int16 v90; // si
  wchar_t *v91; // rax
  __int64 *v92; // rsi
  int v93; // r15d
  int v94; // r9d
  void *v95; // r9
  __int64 v96; // rdx
  unsigned __int16 v97; // cx
  unsigned int v98; // r8d
  __int64 v99; // rdx
  UNICODE_STRING *v100; // r8
  UNICODE_STRING *v101; // rdx
  const wchar_t *v102; // rcx
  NTSTATUS v103; // ebx
  unsigned __int16 v104; // dx
  unsigned int v105; // r8d
  unsigned __int64 v106; // rax
  __int64 v107; // rcx
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-F0h]
  wchar_t **ppszDestEnda; // [rsp+20h] [rbp-F0h]
  size_t *pcchRemaining; // [rsp+28h] [rbp-E8h]
  size_t *pcchRemaininga; // [rsp+28h] [rbp-E8h]
  ULONG dwFlags[2]; // [rsp+30h] [rbp-E0h]
  BOOL v113; // [rsp+90h] [rbp-80h]
  TIME_FIELDS TimeFields; // [rsp+A0h] [rbp-70h] BYREF
  int v115; // [rsp+B0h] [rbp-60h]
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v117; // [rsp+C8h] [rbp-48h]
  UNICODE_STRING v118; // [rsp+D0h] [rbp-40h] BYREF
  UNICODE_STRING v119; // [rsp+E0h] [rbp-30h] BYREF
  UNICODE_STRING v120; // [rsp+F0h] [rbp-20h] BYREF
  UNICODE_STRING v121; // [rsp+100h] [rbp-10h] BYREF
  UNICODE_STRING DestinationString; // [rsp+110h] [rbp+0h] BYREF
  int v123; // [rsp+120h] [rbp+10h]
  int v124; // [rsp+124h] [rbp+14h]
  __int64 v125; // [rsp+128h] [rbp+18h]
  UNICODE_STRING v126; // [rsp+130h] [rbp+20h] BYREF
  UNICODE_STRING v127; // [rsp+140h] [rbp+30h] BYREF
  wchar_t *v128; // [rsp+150h] [rbp+40h] BYREF
  size_t v129; // [rsp+158h] [rbp+48h] BYREF
  __int64 v130; // [rsp+160h] [rbp+50h]
  __int64 v131; // [rsp+168h] [rbp+58h]
  __int64 v132; // [rsp+170h] [rbp+60h]
  UNICODE_STRING v133; // [rsp+178h] [rbp+68h] BYREF
  UNICODE_STRING v134; // [rsp+188h] [rbp+78h] BYREF
  size_t pcchNewDestLength; // [rsp+198h] [rbp+88h] BYREF
  __int128 v136; // [rsp+1A0h] [rbp+90h] BYREF
  _QWORD v137[20]; // [rsp+1B0h] [rbp+A0h] BYREF
  wchar_t pszDest[12]; // [rsp+250h] [rbp+140h] BYREF
  wchar_t v139[24]; // [rsp+268h] [rbp+158h] BYREF

  v132 = a7;
  v115 = a4;
  v130 = a3;
  v117 = a2;
  v7 = a3;
  v125 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v127.Length = 0LL;
  v127.Buffer = 0LL;
  *(_QWORD *)&v121.Length = 0LL;
  v121.Buffer = 0LL;
  v113 = 1;
  v131 = 0LL;
  *(_QWORD *)&v120.Length = 0LL;
  v120.Buffer = 0LL;
  *(_QWORD *)&v126.Length = 0LL;
  v126.Buffer = 0LL;
  v124 = 0;
  *(_QWORD *)&v118.Length = 0LL;
  v118.Buffer = 0LL;
  TimeFields = 0LL;
  v133 = 0LL;
  v136 = 0LL;
  v119 = 0LL;
  v134 = 0LL;
  if ( (byte_140C0E10A & 0x18) != 0x18 )
    goto LABEL_41;
  if ( a3 )
  {
    memset(v137, 0, sizeof(v137));
    v8 = *(void **)(v7 + 16);
    v9 = *(_QWORD *)(v7 + 64);
    v137[0] = &DEVPKEY_DriverPackage_OriginalInfName;
    v137[2] = &DestinationString;
    v137[5] = DEVPKEY_DriverPackage_DriverFlightIds;
    v137[7] = &UnicodeString;
    v137[10] = DEVPKEY_DriverPackage_SubmissionId;
    v137[12] = &v127;
    LODWORD(v137[1]) = 18;
    HIDWORD(v137[3]) = 6;
    LODWORD(v137[6]) = 8210;
    HIDWORD(v137[8]) = 6;
    LODWORD(v137[11]) = 18;
    HIDWORD(v137[13]) = 6;
    if ( (int)PiDevCfgQueryObjectProperties(v10, v9, 8u, v8, (__int64)v137, 3u) < 0 )
      goto LABEL_41;
    if ( SLODWORD(v137[4]) < 0 )
      RtlInitUnicodeString(&DestinationString, 0LL);
    if ( SLODWORD(v137[9]) < 0 )
      RtlInitUnicodeString(&UnicodeString, 0LL);
    Buffer = UnicodeString.Buffer;
    if ( UnicodeString.Buffer && (Length = UnicodeString.Length, UnicodeString.Length > 4u) )
    {
      v38 = 0;
      if ( (unsigned __int64)UnicodeString.Length >> 1 != 2 )
      {
        v39 = 0LL;
        do
        {
          if ( !Buffer[v39] )
          {
            Buffer[v39] = 59;
            Buffer = UnicodeString.Buffer;
            Length = UnicodeString.Length;
          }
          v39 = ++v38;
        }
        while ( v38 < ((unsigned __int64)Length >> 1) - 2 );
      }
      UnicodeString.Length = Length - 2;
    }
    else
    {
      RtlFreeUnicodeString(&UnicodeString);
      RtlInitUnicodeString(&UnicodeString, 0LL);
    }
    if ( SLODWORD(v137[14]) < 0 )
      RtlInitUnicodeString(&v127, 0LL);
    if ( DestinationString.Buffer )
      v113 = RtlEqualUnicodeString((PCUNICODE_STRING)(v7 + 40), &DestinationString, 1u) != 0;
    RtlTimeToTimeFields((PLARGE_INTEGER)(v7 + 112), &TimeFields);
    LODWORD(pcchRemaining) = TimeFields.Year;
    LODWORD(ppszDestEnd) = TimeFields.Day;
    if ( RtlStringCchPrintfW(
           pszDest,
           0xBuLL,
           L"%02d/%02d/%04d",
           (unsigned int)TimeFields.Month,
           ppszDestEnd,
           pcchRemaining) < 0 )
      pszDest[0] = 0;
    LODWORD(pcchRemaininga) = *(unsigned __int16 *)(v7 + 122);
    LODWORD(ppszDestEnda) = *(unsigned __int16 *)(v7 + 124);
    if ( RtlStringCchPrintfW(
           v139,
           0x18uLL,
           L"%u.%u.%u.%u",
           (unsigned __int16)HIWORD(*(_DWORD *)(v7 + 124)),
           ppszDestEnda,
           pcchRemaininga,
           *(unsigned __int16 *)(v7 + 120)) < 0 )
      v139[0] = 0;
    v12 = *(_DWORD *)(v7 + 108);
    v13 = (__int64 **)(v7 + 224);
    v14 = *(__int64 ***)(v7 + 224);
    if ( v12 == -1 )
      v12 = 0;
    v123 = v12;
    if ( v14 != v13 )
    {
      v40 = 0;
      do
      {
        v41 = v14[22];
        v40 += *((unsigned __int16 *)v14 + 20) + *((unsigned __int16 *)v14 + 36) + 22;
        if ( v41 )
        {
          v42 = -1LL;
          do
            ++v42;
          while ( *((_WORD *)v41 + v42) );
          v40 += 2 * v42 + 2;
        }
        v14 = (__int64 **)*v14;
      }
      while ( v14 != v13 );
      v43 = v40 + 2;
      if ( (unsigned int)(v40 + 2) > 0xFFFE )
        v43 = -2;
      v120.MaximumLength = v43;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v43);
      v120.Buffer = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_41;
      v45 = v120;
      *StringRoutine = 0;
      v46 = *v13;
      TimeFields = (TIME_FIELDS)v45;
      if ( v46 != (__int64 *)v13 )
      {
        do
        {
          if ( v46 != *v13 )
          {
            if ( (TimeFields.Year & 1) != 0 )
              break;
            if ( (TimeFields.Month & 1) != 0 )
              break;
            if ( TimeFields.Year > (unsigned int)TimeFields.Month )
              break;
            if ( TimeFields.Month == -1 )
              break;
            v47 = *(wchar_t **)&TimeFields.Minute;
            if ( !*(_QWORD *)&TimeFields.Minute && (TimeFields.Year || TimeFields.Month) )
              break;
            v48 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
            if ( v48 )
            {
              v49 = 0;
              v50 = 0LL;
              v51 = 0x7FFFLL;
              v52 = *(_QWORD *)&TimeFields.Minute - (_QWORD)L" ";
              v53 = L" ";
              v54 = *(wchar_t **)&TimeFields.Minute;
              v55 = (unsigned __int64)(unsigned __int16)TimeFields.Month >> 1;
              while ( v51 )
              {
                if ( *v53 )
                {
                  *(const wchar_t *)((char *)v53 + v52) = *v53;
                  --v51;
                  ++v53;
                  ++v50;
                  if ( --v48 )
                    continue;
                }
                if ( !v48 && v51 && *v53 )
                  v49 = -2147483643;
                break;
              }
              v47 = &v54[v50];
              LOWORD(v48) = v55 - v50;
              v128 = v47;
              v129 = v55 - v50;
              if ( v49 < 0 )
              {
                RtlUnicodeStringExHandleOtherFlags(v54, v55, v51, &pcchNewDestLength, &v128, &v129, 0x800u);
                v47 = v128;
                LOWORD(v48) = v129;
              }
            }
            else
            {
              if ( !*(_QWORD *)&TimeFields.Minute )
                break;
              v49 = -2147483643;
            }
            TimeFields.Year = 0;
            TimeFields.Month = 2 * v48;
            *(_QWORD *)&TimeFields.Minute = v47;
            if ( v49 < 0 )
              break;
          }
          dwFlags[0] = *((_DWORD *)v46 + 27);
          if ( RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L"%wZ:%wZ:%08X",
                 v46 + 5,
                 v46 + 9,
                 *(_QWORD *)dwFlags) < 0
            || v46[22]
            && RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L":%ws",
                 v46[22]) < 0 )
          {
            break;
          }
          v46 = (__int64 *)*v46;
        }
        while ( v46 != (__int64 *)v13 );
        v7 = v130;
        LOBYTE(v12) = v123;
      }
    }
    LOBYTE(a4) = v115;
    a1 = v125;
  }
  else
  {
    pszDest[0] = 0;
    LOBYTE(v12) = 0;
    v139[0] = 0;
    v113 = 0;
  }
  if ( a5 < 0 )
  {
    if ( a5 == -1073740959 )
    {
      if ( (byte_140C0E10A & 0x20) != 0 )
      {
        v67 = a4 & 1;
        if ( v7 && *(_DWORD *)(v7 + 108) != -1 || v7 )
        {
          v68 = *(const wchar_t **)(v7 + 48);
          v69 = v7 + 272;
          v70 = v7 + 88;
        }
        else
        {
          v69 = 0LL;
          v68 = L"null";
          v70 = 0LL;
        }
        PnpGetLogString(*(_QWORD *)(a1 + 16) + 40LL);
        PnpGetLogString((__int64)&v120);
        PnpGetLogString(v71);
        PnpGetLogString(v70);
        LogString = PnpGetLogString(v69);
        McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
          v113,
          (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceConfig_Blocked,
          (__int64)v74,
          *(const wchar_t **)(v117 + 8),
          v68,
          v77,
          pszDest,
          v139,
          (const wchar_t *)LogString,
          v113,
          v73,
          v12,
          v74,
          v76,
          v67,
          97,
          v75);
      }
    }
    else if ( (byte_140C0E10A & 0x10) != 0 )
    {
      v78 = a4 & 1;
      if ( v7 && *(_DWORD *)(v7 + 108) != -1 || v7 )
      {
        v79 = *(const wchar_t **)(v7 + 48);
        v80 = v7 + 272;
        v81 = v7 + 88;
      }
      else
      {
        v80 = 0LL;
        v79 = L"null";
        v81 = 0LL;
      }
      PnpGetLogString(*(_QWORD *)(a1 + 16) + 40LL);
      PnpGetLogString((__int64)&v120);
      PnpGetLogString(v82);
      PnpGetLogString(v81);
      v83 = PnpGetLogString(v80);
      McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
        v113,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceConfig_Failure,
        (__int64)v85,
        *(const wchar_t **)(v117 + 8),
        v79,
        v88,
        pszDest,
        v139,
        (const wchar_t *)v83,
        v113,
        v84,
        v12,
        v85,
        v87,
        v78,
        a5,
        v86);
    }
  }
  else if ( (a4 & 0x70) != 0 )
  {
    if ( (byte_140C0E10A & 0x20) != 0 )
    {
      v56 = a4 & 1;
      if ( v7 && *(_DWORD *)(v7 + 108) != -1 || v7 )
      {
        v57 = *(const wchar_t **)(v7 + 48);
        v58 = v7 + 272;
        v59 = v7 + 88;
      }
      else
      {
        v58 = 0LL;
        v57 = L"null";
        v59 = 0LL;
      }
      PnpGetLogString(*(_QWORD *)(a1 + 16) + 40LL);
      PnpGetLogString((__int64)&v120);
      PnpGetLogString(v60);
      PnpGetLogString(v59);
      v61 = PnpGetLogString(v58);
      McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
        v113,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceConfig_RebootRequired,
        (__int64)v63,
        *(const wchar_t **)(v117 + 8),
        v57,
        v66,
        pszDest,
        v139,
        (const wchar_t *)v61,
        v113,
        v62,
        v12,
        v63,
        v65,
        v56,
        a5,
        v64);
    }
  }
  else if ( (byte_140C0E10A & 8) != 0 )
  {
    v15 = a4 & 1;
    if ( v7 && *(_DWORD *)(v7 + 108) != -1 || v7 )
    {
      v16 = *(const wchar_t **)(v7 + 48);
      v17 = v7 + 272;
      v18 = v7 + 88;
    }
    else
    {
      v17 = 0LL;
      v16 = L"null";
      v18 = 0LL;
    }
    PnpGetLogString(*(_QWORD *)(a1 + 16) + 40LL);
    PnpGetLogString((__int64)&v120);
    PnpGetLogString(v19);
    PnpGetLogString(v18);
    v20 = PnpGetLogString(v17);
    McTemplateK0zzjzzztzdzztdz_EtwWriteTransfer(
      v113,
      (const EVENT_DESCRIPTOR *)&KMPnPEvt_DeviceConfig_Success,
      (__int64)v22,
      *(const wchar_t **)(v117 + 8),
      v16,
      v25,
      pszDest,
      v139,
      (const wchar_t *)v20,
      v113,
      v21,
      v12,
      v22,
      v24,
      v15,
      a5,
      v23);
  }
  if ( !v7 )
    goto LABEL_41;
  v26 = a6;
  v27 = (__int64 **)(v7 + 208);
  v28 = *(__int64 ***)(v7 + 208);
  if ( v28 != (__int64 **)(v7 + 208) )
  {
    v89 = v124;
    do
    {
      v28 = (__int64 **)*v28;
      ++v89;
    }
    while ( v28 != v27 );
    if ( !v89 )
    {
      v29 = v118.Buffer;
      goto LABEL_32;
    }
    v90 = 0x7FFF;
    if ( (unsigned int)(1646 * v89 + 2) <= 0x7FFF )
    {
      v90 = 1646 * v89 + 2;
      v118.MaximumLength = v90;
    }
    else
    {
      v118.MaximumLength = 0x7FFF;
    }
    v118.Length = 0;
    v91 = (wchar_t *)ExpAllocateStringRoutine(v90);
    v118.Buffer = v91;
    v29 = v91;
    if ( !v91 )
      goto LABEL_41;
    memset(v91, 0, v90);
    v118.MaximumLength = v90 - 2;
    v92 = *v27;
    TimeFields = (TIME_FIELDS)v118;
    if ( v92 == (__int64 *)v27 )
      goto LABEL_32;
    v93 = v115 & 1;
    do
    {
      v94 = v93 | 0x10;
      if ( !*((_DWORD *)v92 + 101) )
        v94 = v93;
      PiDevCfgLogDeviceConfigured(v125, v117, (_DWORD)v92, v94, a5, v26, v132);
      memset(v137, 0, sizeof(v137));
      v95 = (void *)v92[2];
      v137[0] = &DEVPKEY_DriverPackage_OriginalInfName;
      LODWORD(v137[1]) = 18;
      v137[2] = &v133;
      v137[5] = DEVPKEY_DriverPackage_ExtensionId;
      v137[7] = &v136;
      LODWORD(v137[16]) = 18;
      v137[10] = DEVPKEY_DriverPackage_DriverFlightIds;
      HIDWORD(v137[3]) = 6;
      v137[12] = &v119;
      v137[15] = DEVPKEY_DriverPackage_SubmissionId;
      v137[17] = &v134;
      v96 = v92[8];
      LODWORD(v137[6]) = 13;
      LODWORD(v137[8]) = 16;
      LODWORD(v137[11]) = 8210;
      HIDWORD(v137[13]) = 6;
      HIDWORD(v137[18]) = 6;
      if ( (int)PiDevCfgQueryObjectProperties(6LL, v96, 8u, v95, (__int64)v137, 4u) >= 0 )
      {
        if ( SLODWORD(v137[4]) < 0 && !RtlCreateUnicodeString(&v133, (PCWSTR)v92[6]) )
          RtlInitUnicodeString(&v133, 0LL);
        if ( SLODWORD(v137[9]) < 0 || (int)RtlStringFromGUIDEx((unsigned int *)&v136, (__int64)&v126, 1) < 0 )
          RtlInitUnicodeString(&v126, 0LL);
        if ( SLODWORD(v137[14]) < 0 )
          RtlInitUnicodeString(&v119, 0LL);
        if ( v119.Buffer && (v97 = v119.Length, v119.Length > 4u) )
        {
          v98 = 0;
          if ( (unsigned __int64)v119.Length >> 1 != 2 )
          {
            v99 = 0LL;
            do
            {
              if ( !v119.Buffer[v99] )
              {
                v119.Buffer[v99] = 59;
                v97 = v119.Length;
              }
              v99 = ++v98;
            }
            while ( v98 < ((unsigned __int64)v97 >> 1) - 2 );
            v26 = a6;
          }
          v119.Length = v97 - 2;
        }
        else
        {
          RtlFreeUnicodeString(&v119);
          RtlInitUnicodeString(&v119, 0LL);
        }
        if ( SLODWORD(v137[19]) < 0 )
          RtlInitUnicodeString(&v134, 0LL);
        v100 = &v134;
        if ( !v134.Buffer )
          v100 = (UNICODE_STRING *)&PiDevCfgEmptyString;
        v101 = &v119;
        v102 = L",";
        if ( !v119.Buffer )
          v101 = (UNICODE_STRING *)&PiDevCfgEmptyString;
        if ( v92 == *v27 )
          v102 = &word_1408834C0;
        v103 = RtlUnicodeStringPrintfEx(
                 (PUNICODE_STRING)&TimeFields,
                 (PUNICODE_STRING)&TimeFields,
                 0x800u,
                 L"%ws%wZ:%wZ:%wZ:%wZ",
                 v102,
                 &v133,
                 &v126,
                 v101,
                 v100);
        RtlFreeUnicodeString(&v126);
        RtlFreeUnicodeString(&v119);
        RtlFreeUnicodeString(&v133);
        RtlFreeUnicodeString(&v134);
        if ( v103 < 0 )
          break;
      }
      v92 = (__int64 *)*v92;
    }
    while ( v92 != (__int64 *)v27 );
    v7 = v130;
  }
  v29 = v118.Buffer;
LABEL_32:
  LODWORD(v30) = 0;
  if ( *(_QWORD *)(v117 + 32) )
    v30 = *(_QWORD *)(v117 + 32);
  if ( *(_QWORD *)(v117 + 48) && *(_WORD *)(v117 + 40) > 2u )
  {
    v31 = *(_QWORD *)(v117 + 48);
    v34 = -1LL;
    do
      ++v34;
    while ( *(_WORD *)(v31 + 2 * v34) );
    while ( *(_WORD *)(v31 + 2 * v34 + 2) )
    {
      v35 = -1LL;
      do
        ++v35;
      while ( *(_WORD *)(v31 + 2 * v35) );
      v36 = v31 + 2 * v35;
      v34 = -1LL;
      v31 = v36 + 2;
      do
        ++v34;
      while ( *(_WORD *)(v31 + 2 * v34) );
    }
  }
  else
  {
    LODWORD(v31) = v131;
  }
  v32 = DestinationString.Buffer;
  if ( !DestinationString.Buffer )
    v32 = *(wchar_t **)(v7 + 48);
  if ( *(_QWORD *)(v7 + 392) && *(_WORD *)(v7 + 384) > 4u )
  {
    if ( !PnpDuplicateUnicodeString((__int64)&v121, v7 + 384) )
      goto LABEL_41;
    v104 = v121.Length;
    v105 = 0;
    v33 = v121.Buffer;
    v106 = ((unsigned __int64)v121.Length >> 1) - 2;
    if ( (unsigned __int64)v121.Length >> 1 != 2 )
    {
      v107 = 0LL;
      do
      {
        if ( !v33[v107] )
          v33[v107] = 59;
        v107 = ++v105;
      }
      while ( v105 < v106 );
    }
    v121.Length = v104 - 2;
  }
  else
  {
    v33 = v121.Buffer;
  }
  PnpTraceDeviceConfig(
    v125 + 40,
    v30,
    v31,
    *(_QWORD *)(v7 + 264),
    (__int64)v32,
    *(_QWORD *)(v7 + 280),
    (__int64)pszDest,
    (__int64)v139,
    (__int64)v127.Buffer,
    (__int64)v29,
    (__int64)v33,
    v113,
    (__int64)&UnicodeString,
    PnpSetupInProgress != 0,
    (v115 & 0x70) != 0,
    v26,
    a5,
    v132);
LABEL_41:
  RtlFreeUnicodeString(&DestinationString);
  RtlFreeUnicodeString(&v120);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v118);
  RtlFreeUnicodeString(&v127);
  RtlFreeUnicodeString(&v121);
}
