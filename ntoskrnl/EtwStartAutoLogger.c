/*
 * XREFs of EtwStartAutoLogger @ 0x14083CA48
 * Callers:
 *     PerfDiagpStartPerfDiagLogger @ 0x14083C01C (PerfDiagpStartPerfDiagLogger.c)
 *     EtwpInitializeAutoLoggers @ 0x14083C56C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnumerateAutologgerPath @ 0x14083C7E8 (EtwpEnumerateAutologgerPath.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     wcscmp @ 0x1403D5DD0 (wcscmp.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1404126B0 (ZwCreateKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     EtwpCreateKeyTreeForPath @ 0x1405FEE28 (EtwpCreateKeyTreeForPath.c)
 *     EtwpStartLogger @ 0x140691964 (EtwpStartLogger.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x14069EDB0 (RtlWriteRegistryValue.c)
 *     RtlGUIDFromString @ 0x1406D1AA0 (RtlGUIDFromString.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     RtlNtStatusToDosError @ 0x140755BE0 (RtlNtStatusToDosError.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     EtwpEnableKeyProviders @ 0x14083D574 (EtwpEnableKeyProviders.c)
 *     EtwpUpdateDisallowList @ 0x1409E4B08 (EtwpUpdateDisallowList.c)
 *     EtwpParsePoolTagFilter @ 0x1409EA35C (EtwpParsePoolTagFilter.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwStartAutoLogger(wchar_t *SourceString, __int64 a2, WCHAR *a3)
{
  void *v5; // rsi
  __int64 v6; // rbx
  PCWSTR v7; // rdx
  NTSTATUS RegistryValues; // edi
  __int64 v9; // rax
  _WORD *v10; // rsi
  _WORD *v11; // r13
  int v12; // r12d
  _WORD *v13; // r15
  int v14; // eax
  unsigned int *v15; // r14
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // edx
  unsigned __int16 v22; // si
  _DWORD *v23; // rcx
  int v24; // eax
  GUID v25; // xmm0
  __int64 v26; // rsi
  ULONGLONG v27; // rcx
  int started; // eax
  unsigned int v29; // r15d
  struct _LIST_ENTRY *v30; // rax
  const WCHAR *v31; // rdx
  unsigned int v33; // eax
  const WCHAR *v34; // rdx
  __int64 v35; // rax
  _WORD *v36; // rcx
  unsigned int v37; // eax
  bool v38; // zf
  unsigned __int16 v39; // cx
  _WORD *v40; // r13
  unsigned __int16 v41; // ax
  __int64 v42; // r9
  void *v43; // r9
  unsigned int v44; // esi
  __int64 v45; // r12
  unsigned int v46; // r14d
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v48; // eax
  _WORD v49[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v50; // [rsp+44h] [rbp-BCh] BYREF
  __int64 Pool2; // [rsp+48h] [rbp-B8h]
  unsigned int v52; // [rsp+50h] [rbp-B0h] BYREF
  int v53; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  ULONG Disposition; // [rsp+64h] [rbp-9Ch] BYREF
  int v56; // [rsp+68h] [rbp-98h] BYREF
  int v57; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG ValueData; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v60; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+90h] [rbp-70h] BYREF
  __int64 v62; // [rsp+98h] [rbp-68h]
  __int64 v63; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A8h] [rbp-58h]
  int v65; // [rsp+B0h] [rbp-50h] BYREF
  int v66; // [rsp+B4h] [rbp-4Ch] BYREF
  int v67; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v68; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+C8h] [rbp-38h]
  UNICODE_STRING v70; // [rsp+D0h] [rbp-30h] BYREF
  UNICODE_STRING GuidString; // [rsp+E0h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-10h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+100h] [rbp+0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+130h] [rbp+30h] BYREF
  wchar_t *Str1; // [rsp+140h] [rbp+40h]
  WCHAR *v76; // [rsp+148h] [rbp+48h]
  __int64 v77; // [rsp+150h] [rbp+50h]
  GUID Guid; // [rsp+158h] [rbp+58h] BYREF
  int v79; // [rsp+170h] [rbp+70h] BYREF
  int *v80; // [rsp+178h] [rbp+78h]
  int v81; // [rsp+180h] [rbp+80h] BYREF
  int *v82; // [rsp+188h] [rbp+88h]
  int v83; // [rsp+190h] [rbp+90h] BYREF
  __int64 v84; // [rsp+198h] [rbp+98h]
  int v85; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v86; // [rsp+1A8h] [rbp+A8h]
  int v87; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v88; // [rsp+1B8h] [rbp+B8h]
  int v89; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v90; // [rsp+1C8h] [rbp+C8h]
  int v91; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 *v92; // [rsp+1D8h] [rbp+D8h]
  int v93; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 *v94; // [rsp+1E8h] [rbp+E8h]
  int v95; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v96; // [rsp+1F8h] [rbp+F8h]
  int v97; // [rsp+200h] [rbp+100h] BYREF
  __int64 v98; // [rsp+208h] [rbp+108h]
  int v99; // [rsp+210h] [rbp+110h] BYREF
  __int64 v100; // [rsp+218h] [rbp+118h]
  int v101; // [rsp+220h] [rbp+120h] BYREF
  int *v102; // [rsp+228h] [rbp+128h]
  int v103; // [rsp+230h] [rbp+130h] BYREF
  UNICODE_STRING *p_GuidString; // [rsp+238h] [rbp+138h]
  int v105; // [rsp+240h] [rbp+140h] BYREF
  __int64 v106; // [rsp+248h] [rbp+148h]
  int v107; // [rsp+250h] [rbp+150h] BYREF
  unsigned int *v108; // [rsp+258h] [rbp+158h]
  int v109; // [rsp+260h] [rbp+160h] BYREF
  UNICODE_STRING *p_UnicodeString; // [rsp+268h] [rbp+168h]
  int v111; // [rsp+270h] [rbp+170h] BYREF
  __int64 *v112; // [rsp+278h] [rbp+178h]
  int v113; // [rsp+280h] [rbp+180h] BYREF
  int *v114; // [rsp+288h] [rbp+188h]
  int v115; // [rsp+290h] [rbp+190h] BYREF
  UNICODE_STRING *v116; // [rsp+298h] [rbp+198h]
  int v117; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 v118; // [rsp+2A8h] [rbp+1A8h]
  _QWORD v119[148]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v76 = a3;
  v77 = a2;
  Str1 = SourceString;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  v65 = 1;
  DestinationString = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  ValueData = 0;
  v6 = 0LL;
  v56 = 0;
  GuidString = 0LL;
  v68 = 0LL;
  UnicodeString = 0LL;
  LODWORD(v69) = 0;
  v70 = 0LL;
  v63 = 0LL;
  LODWORD(v64) = 0;
  v61 = 0LL;
  LODWORD(v62) = 0;
  v52 = 0;
  v57 = 0;
  v53 = 0;
  v50 = 0;
  v49[0] = 0;
  v67 = 0;
  v66 = 100;
  Guid = 0LL;
  *(_QWORD *)&v60.Length = PsGetCurrentServerSiloGlobals()[54].Flink;
  RtlInitUnicodeString(&DestinationString, v7);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  RegistryValues = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( RegistryValues >= 0 )
  {
    Pool2 = ExAllocatePool2(256LL, 0x2000LL, 1350005829LL);
    v5 = (void *)Pool2;
    if ( Pool2 )
    {
      v9 = ExAllocatePool2(256LL, 1284LL, 1350005829LL);
      v6 = v9;
      if ( v9 )
      {
        *(_DWORD *)(v9 + 44) = 0x20000;
        *(_DWORD *)(v9 + 48) = 4;
        RtlInitUnicodeString((PUNICODE_STRING)(v9 + 144), SourceString);
        *(_DWORD *)(v6 + 72) = 0x80000000;
        *(_WORD *)(v6 + 72) = 176;
        v10 = (_WORD *)(v6 + 180);
        *(_BYTE *)(v6 + 74) = -1;
        v11 = (_WORD *)(v6 + 224);
        *(_DWORD *)(v6 + 176) = 1;
        v12 = 180;
        v13 = (_WORD *)(v6 + 1252);
        memset(v119, 0, 0x498uLL);
        v119[0] = EtwpQueryRegistryCallback;
        v119[3] = &v79;
        v119[7] = EtwpQueryRegistryCallback;
        v119[2] = L"Start";
        v80 = &v56;
        LODWORD(v119[4]) = 4;
        v119[10] = &v81;
        v79 = 4;
        v119[9] = L"Immutable";
        v82 = &v50;
        LODWORD(v119[11]) = 4;
        v81 = 4;
        RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, v119, 0LL);
        if ( RegistryValues < 0 )
          goto LABEL_40;
        if ( !a3 )
        {
          v14 = v50;
LABEL_7:
          if ( !v14 )
          {
            if ( Handle )
            {
              v119[5] = &v56;
              memset(&v119[7], 0, 56);
              RegistryValues = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, v119, 0LL);
              if ( RegistryValues < 0 )
                RegistryValues = 0;
            }
          }
          if ( !v56 )
            goto LABEL_40;
          LODWORD(v68) = 40;
          LODWORD(v119[4]) = 4;
          v119[0] = EtwpQueryRegistryCallback;
          v119[3] = &v79;
          v119[2] = L"FlushThreshold";
          v79 = 4;
          v80 = (int *)(v6 + 76);
          v119[7] = EtwpQueryRegistryCallback;
          v119[10] = &v81;
          v119[9] = L"BufferSize";
          v82 = (int *)(v6 + 48);
          v119[17] = &v83;
          v119[16] = L"MinimumBuffers";
          v84 = v6 + 52;
          v119[24] = &v85;
          v119[23] = L"FlushTimer";
          v86 = v6 + 68;
          v119[31] = &v87;
          v119[30] = L"MaximumBuffers";
          v88 = v6 + 56;
          v119[38] = &v89;
          v119[37] = L"FileName";
          v119[40] = v49;
          v90 = v6 + 128;
          v69 = v6 + 184;
          v119[45] = &v91;
          v119[44] = L"EnableKernelFlags";
          v92 = &v68;
          v62 = v6 + 228;
          v119[52] = &v93;
          v119[51] = L"StackWalkingFilter";
          LODWORD(v119[11]) = 4;
          v81 = 4;
          v119[14] = EtwpQueryRegistryCallback;
          LODWORD(v119[18]) = 4;
          v83 = 4;
          v119[21] = EtwpQueryRegistryCallback;
          LODWORD(v119[25]) = 4;
          v85 = 4;
          v119[28] = EtwpQueryRegistryCallback;
          LODWORD(v119[32]) = 4;
          v87 = 4;
          v119[35] = EtwpQueryRegistryCallback;
          LODWORD(v119[39]) = 1;
          v89 = 1;
          v119[42] = EtwpQueryRegistryCallback;
          LODWORD(v119[46]) = 3;
          v91 = 3;
          LODWORD(v61) = 1024;
          v119[49] = EtwpQueryRegistryCallback;
          LODWORD(v119[53]) = 3;
          v93 = 3;
          v94 = &v61;
          v15 = (unsigned int *)(v6 + 96);
          v119[56] = EtwpQueryRegistryCallback;
          v119[59] = &v95;
          v119[58] = L"ClockType";
          v119[61] = &v65;
          v96 = v6 + 40;
          v119[66] = &v97;
          v119[65] = L"MaxFileSize";
          v119[68] = &v66;
          v98 = v6 + 60;
          v119[73] = &v99;
          v119[72] = L"LogFileMode";
          v119[75] = &v67;
          v100 = v6 + 64;
          v119[80] = &v101;
          v119[79] = L"DisableRealtimePersistence";
          v102 = &v57;
          v119[87] = &v103;
          v119[86] = L"Guid";
          v119[89] = v49;
          p_GuidString = &GuidString;
          v119[94] = &v105;
          v119[93] = L"FileCounter";
          v119[101] = &v107;
          v119[100] = L"FileMax";
          v108 = &v52;
          v119[108] = &v109;
          LODWORD(v119[60]) = 4;
          LODWORD(v119[62]) = 4;
          v95 = 4;
          v119[63] = EtwpQueryRegistryCallback;
          LODWORD(v119[67]) = 4;
          LODWORD(v119[69]) = 4;
          v97 = 4;
          v119[70] = EtwpQueryRegistryCallback;
          LODWORD(v119[74]) = 4;
          LODWORD(v119[76]) = 4;
          v99 = 4;
          v119[77] = EtwpQueryRegistryCallback;
          LODWORD(v119[81]) = 4;
          v101 = 4;
          v119[84] = EtwpQueryRegistryCallback;
          LODWORD(v119[88]) = 1;
          v103 = 1;
          v119[91] = EtwpQueryRegistryCallback;
          LODWORD(v119[95]) = 4;
          v105 = 4;
          v106 = v6 + 96;
          v119[98] = EtwpQueryRegistryCallback;
          LODWORD(v119[102]) = 4;
          v107 = 4;
          v119[105] = EtwpQueryRegistryCallback;
          v119[107] = L"PoolTagFilter";
          LODWORD(v119[109]) = 1;
          v119[110] = v49;
          p_UnicodeString = &UnicodeString;
          v64 = v6 + 1276;
          v119[115] = &v111;
          v119[114] = L"StackCaching";
          v112 = &v63;
          v119[122] = &v113;
          v119[121] = L"EnableSecurityProvider";
          v114 = &v53;
          v119[129] = &v115;
          v119[128] = L"DisallowList";
          v119[131] = v49;
          v116 = &v70;
          v119[136] = &v117;
          v119[135] = L"V2Options";
          LODWORD(v119[137]) = 11;
          v117 = 11;
          v109 = 1;
          v119[112] = EtwpQueryRegistryCallback;
          LODWORD(v119[116]) = 3;
          v111 = 3;
          v119[119] = EtwpQueryRegistryCallback;
          LODWORD(v119[123]) = 4;
          v113 = 4;
          v119[126] = EtwpQueryRegistryCallback;
          LODWORD(v119[130]) = 1;
          v115 = 1;
          v119[133] = EtwpQueryRegistryCallback;
          v118 = v6 + 80;
          LODWORD(v63) = 8;
          LODWORD(v119[139]) = 8;
          v16 = RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)KeyHandle, v119, 0LL);
          v17 = 0LL;
          RegistryValues = v16;
          if ( v16 < 0 )
            goto LABEL_40;
          if ( Handle )
          {
            if ( v50 )
            {
              v119[5] = v6 + 96;
              v119[3] = &v105;
              v119[0] = EtwpQueryRegistryCallback;
              v119[2] = L"FileCounter";
              LODWORD(v119[4]) = 4;
              v79 = 4;
              v80 = (int *)(v6 + 96);
              v119[7] = 0LL;
            }
            else
            {
              v119[96] = v6 + 96;
              v119[5] = v6 + 76;
              v119[12] = v6 + 48;
              v119[19] = v6 + 52;
              v119[26] = v6 + 68;
              v119[33] = v6 + 56;
              v119[40] = *(_QWORD *)(v6 + 136);
              LODWORD(v119[41]) = *(unsigned __int16 *)(v6 + 128);
              v119[47] = v69;
              LODWORD(v119[48]) = v68;
              v119[54] = v62;
              LODWORD(v119[55]) = v61;
              v119[61] = v6 + 40;
              v119[68] = v6 + 60;
              v119[75] = v6 + 64;
              v119[82] = &v57;
              v119[89] = GuidString.Buffer;
              LODWORD(v119[90]) = GuidString.Length;
              v119[103] = &v52;
              v119[110] = UnicodeString.Buffer;
              LODWORD(v119[111]) = UnicodeString.Length;
              v119[117] = v64;
              LODWORD(v119[118]) = v63;
              v119[124] = &v53;
              v119[131] = v70.Buffer;
              LODWORD(v119[132]) = v70.Length;
            }
            RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, v119, 0LL);
            v17 = 0LL;
          }
          v18 = 1LL;
          v19 = *(_DWORD *)(v6 + 112) | 2;
          *(_DWORD *)(v6 + 112) = v19;
          if ( !v57 )
            *(_DWORD *)(v6 + 112) = v19 | 1;
          v20 = (unsigned int)v68 >> 2;
          if ( (unsigned __int16)((unsigned int)v68 >> 2) )
          {
            *(_WORD *)(v6 + 182) = 1;
            *v10 = v20 + 1;
            ++*(_WORD *)(v6 + 178);
            *(_WORD *)(v6 + 176) += v20 + 1;
            v12 = 4 * (unsigned __int16)*v10 + 180;
          }
          v21 = v61;
          if ( (_DWORD)v61 )
          {
            v37 = (unsigned int)v61 >> 2;
            v38 = (v61 & 3) == 0;
            *(_WORD *)(v6 + 226) = 3;
            v39 = (v21 >> 2) + 1;
            if ( v38 )
              v39 = v37;
            *v11 = v39 + 1;
            ++*(_WORD *)(v6 + 178);
            *(_WORD *)(v6 + 176) += *v11;
            v12 += 4 * (unsigned __int16)*v11;
            if ( (_WORD)v20 )
              v10 += 2 * (unsigned __int16)*v10;
            if ( v10 != v11 )
              memmove(v10, (const void *)(v6 + 224), 4LL * v39 + 4);
          }
          if ( UnicodeString.Buffer )
          {
            v40 = (_WORD *)(v6 + 4 * (*(unsigned __int16 *)(v6 + 176) + 44LL));
            v41 = EtwpParsePoolTagFilter(&UnicodeString, v6 + 1256, v17, v18);
            v22 = v41;
            if ( v41 )
            {
              *v13 = v41 + 1;
              *(_WORD *)(v6 + 1254) = 4;
              ++*(_WORD *)(v6 + 178);
              *(_WORD *)(v6 + 176) += *v13;
              v12 += 4 * (unsigned __int16)*v13;
              if ( v40 != v13 )
                memmove(v40, (const void *)(v6 + 1252), 4LL * v41 + 4);
            }
          }
          else
          {
            v22 = 0;
          }
          if ( (_DWORD)v63 == 8 )
          {
            v42 = *(unsigned __int16 *)(v6 + 176);
            *(_DWORD *)(v6 + 1272) = 327683;
            ++*(_WORD *)(v6 + 178);
            *(_WORD *)(v6 + 176) += *(_WORD *)(v6 + 1272);
            v43 = (void *)(v6 + 4 * (v42 + 44));
            v12 += 4 * *(unsigned __int16 *)(v6 + 1272);
            if ( v43 != (void *)(v6 + 1272) )
              memmove(v43, (const void *)(v6 + 1272), 0xCuLL);
          }
          if ( !(_WORD)v20 && !(_DWORD)v61 && !(_DWORD)v63 && !v22 )
            *(_DWORD *)(v6 + 72) = 0;
          v23 = (_DWORD *)(v6 + 64);
          v24 = *(_DWORD *)(v6 + 64);
          if ( ((v24 & 0x500) == 0 || (v24 & 0x200) != 0) && !*(_QWORD *)(v6 + 136) )
          {
            if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v6 + 128), L"%SystemRoot%") )
            {
              RegistryValues = -1073741801;
              goto LABEL_40;
            }
            v23 = (_DWORD *)(v6 + 64);
          }
          if ( v53 )
          {
            if ( (*v23 & 0x80u) == 0 || (*v23 & 0x100) == 0 || *(_QWORD *)(v6 + 136) )
            {
              RegistryValues = -1073741790;
              goto LABEL_40;
            }
            *(_DWORD *)(v6 + 112) |= 0x8004000u;
          }
          if ( v52 )
          {
            v33 = *v15 + 1;
            *v15 = v33;
            if ( v33 > v52 || v33 > 0x10 )
              *v15 = 1;
            v34 = (const WCHAR *)Handle;
            if ( !Handle )
              v34 = (const WCHAR *)KeyHandle;
            RtlWriteRegistryValue(0x40000000u, v34, L"FileCounter", 4u, (PVOID)(v6 + 96), 4u);
          }
          if ( !wcscmp(Str1, L"GlobalLogger") )
          {
            v25 = GlobalLoggerGuid;
            Guid = GlobalLoggerGuid;
LABEL_35:
            v26 = *(_QWORD *)&v60.Length;
            v27 = *(_QWORD *)&v60.Length;
            *(_DWORD *)v6 = v12;
            *(GUID *)(v6 + 24) = v25;
            started = EtwpStartLogger(v27, v6);
            v29 = *(unsigned __int16 *)(v6 + 8);
            RegistryValues = started;
            if ( started >= 0 )
            {
              if ( *(_WORD *)(v6 + 8) && v53 )
              {
                v35 = 0LL;
                v36 = (_WORD *)(v26 + 4048);
                while ( *v36 )
                {
                  v35 = (unsigned int)(v35 + 1);
                  ++v36;
                  if ( (unsigned int)v35 >= 8 )
                    goto LABEL_38;
                }
                *(_WORD *)(v26 + 2 * v35 + 4048) = v29;
              }
LABEL_38:
              if ( v70.Length )
              {
                if ( v70.Length == 76 * (v70.Length / 0x4Cu) )
                {
                  v60.Buffer = v70.Buffer;
                  v60.Length = 76;
                  *(&v60.MaximumLength + 2) = 0;
                  *(_DWORD *)&v60.MaximumLength = (unsigned __int16)(v70.MaximumLength - v70.Length + 76);
                  v44 = v70.Length / 0x4Cu;
                  if ( v44 <= 0x200 )
                  {
                    v45 = Pool2;
                    v46 = 0;
                    if ( v44 )
                    {
                      while ( 1 )
                      {
                        RegistryValues = RtlGUIDFromString(&v60, (GUID *)(v45 + 16LL * v46));
                        if ( RegistryValues )
                          break;
                        v60.Buffer += 38;
                        if ( ++v46 >= v44 )
                          goto LABEL_109;
                      }
                    }
                    else
                    {
LABEL_109:
                      if ( !RegistryValues )
                      {
                        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                        EtwpUpdateDisallowList(CurrentServerSiloGlobals[54].Flink, v29, v44, v45);
                      }
                    }
                  }
                }
              }
              v30 = PsGetCurrentServerSiloGlobals();
              EtwpEnableKeyProviders(v30[54].Flink, v29, v77, (_DWORD)v76, v50);
            }
            goto LABEL_40;
          }
          if ( GuidString.Buffer )
            RegistryValues = RtlGUIDFromString(&GuidString, &Guid);
          else
            RegistryValues = -1073741811;
          if ( RegistryValues >= 0 )
          {
            v25 = Guid;
            goto LABEL_35;
          }
LABEL_40:
          v5 = (void *)Pool2;
          goto LABEL_41;
        }
        Disposition = 0;
        RtlInitUnicodeString(&DestinationString, a3);
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        if ( RegistryValues == -1073741772 )
        {
          if ( (unsigned int)EtwpCreateKeyTreeForPath(a3) )
            goto LABEL_76;
          RegistryValues = ZwCreateKey(&Handle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 0, &Disposition);
        }
        if ( !RegistryValues )
        {
LABEL_77:
          v14 = v50;
          if ( Disposition == 1 )
            v14 = 1;
          v50 = v14;
          goto LABEL_7;
        }
LABEL_76:
        RegistryValues = 0;
        Handle = 0LL;
        goto LABEL_77;
      }
    }
    RegistryValues = -1073741801;
  }
LABEL_41:
  v31 = (const WCHAR *)KeyHandle;
  if ( KeyHandle )
  {
    if ( RegistryValues < 0 )
    {
      v48 = RtlNtStatusToDosError(RegistryValues);
      v31 = (const WCHAR *)KeyHandle;
      ValueData = v48;
    }
    if ( Handle )
      RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"Status", 4u, &ValueData, 4u);
    else
      RtlWriteRegistryValue(0x40000000u, v31, L"Status", 4u, &ValueData, 4u);
    ZwClose(KeyHandle);
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v6 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v6 + 128));
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  RtlFreeUnicodeString(&GuidString);
  RtlFreeUnicodeString(&UnicodeString);
  RtlFreeUnicodeString(&v70);
  return (unsigned int)RegistryValues;
}
