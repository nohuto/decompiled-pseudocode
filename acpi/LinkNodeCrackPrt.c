__int64 __fastcall LinkNodeCrackPrt(__int64 a1, _QWORD *a2, _DWORD *a3, char a4)
{
  volatile signed __int32 *v4; // r15
  PVOID v8; // rax
  __int64 result; // rax
  int v10; // r12d
  int v11; // ebx
  KIRQL v12; // di
  __int64 v13; // r13
  _QWORD *Filter; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdi
  __int64 *v17; // rax
  char v18; // r12
  __int64 v19; // rdx
  int ProgConfigHeader; // edi
  char v21; // r13
  unsigned int v22; // edx
  unsigned __int64 v23; // rdx
  char v24; // di
  __int64 v25; // rdx
  _QWORD *v26; // r12
  __int64 Pool2; // rsi
  KIRQL v28; // r13
  _QWORD *v29; // rax
  _QWORD *v30; // rdi
  _DWORD *v31; // rcx
  _QWORD *v32; // r12
  int v34; // [rsp+34h] [rbp-CCh] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v36; // [rsp+3Ch] [rbp-C4h]
  int v37; // [rsp+40h] [rbp-C0h]
  __int128 v38; // [rsp+48h] [rbp-B8h] BYREF
  struct _STRING v39; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v43[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v44; // [rsp+B8h] [rbp-48h]
  _OWORD v45[2]; // [rsp+C0h] [rbp-40h] BYREF
  PCSZ v46; // [rsp+E0h] [rbp-20h]
  __int128 v47; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  __int128 v50; // [rsp+110h] [rbp+10h] BYREF
  __int128 v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+130h] [rbp+30h]
  __int128 v53; // [rsp+138h] [rbp+38h] BYREF
  __int128 v54; // [rsp+148h] [rbp+48h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  _OWORD v56[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v57; // [rsp+180h] [rbp+80h]
  _DWORD v58[16]; // [rsp+190h] [rbp+90h] BYREF
  __int16 *v59[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  wchar_t *Buffer; // [rsp+1E8h] [rbp+E8h]
  WCHAR SourceString[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v62; // [rsp+200h] [rbp+100h]
  WCHAR v63[8]; // [rsp+208h] [rbp+108h] BYREF
  int v64; // [rsp+218h] [rbp+118h]
  wchar_t pszDest[20]; // [rsp+220h] [rbp+120h] BYREF

  *(_QWORD *)&UnicodeString.Length = a3;
  *(_QWORD *)&DestinationString.Length = a2;
  v4 = 0LL;
  v49 = 0LL;
  LOBYTE(v37) = 0;
  v52 = 0LL;
  v46 = 0LL;
  *(_QWORD *)&String.Length = 0LL;
  *(_QWORD *)&v39.Length = 0LL;
  v35 = 0;
  v47 = 0LL;
  v48 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  memset(v45, 0, sizeof(v45));
  memset(v58, 0, sizeof(v58));
  *a2 = 0LL;
  v55 = 0LL;
  v44 = 0LL;
  v57 = 0LL;
  v8 = AcpiDriverObject;
  *a3 = 0;
  v34 = 0;
  v53 = 0LL;
  v36 = 0;
  v54 = 0LL;
  memset(v43, 0, sizeof(v43));
  memset(v56, 0, sizeof(v56));
  v38 = 0LL;
  if ( *(PVOID *)(a1 + 8) == v8 && (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) & 0x2000000) != 0 )
    return 3221226021LL;
  if ( (int)PcisuppGetRoutingInfo(a1, &v38) >= 0 )
  {
    *a2 = v38;
    *a3 = DWORD2(v38);
    return 0LL;
  }
  if ( (int)PcisuppGetProgConfigHeader(a1, v58) < 0 )
    return 3221226021LL;
  LOBYTE(v10) = BYTE1(v58[15]);
  result = PcisuppGetParentPdo(a1, &v39);
  if ( (int)result >= 0 )
  {
    result = PcisuppGetBusSlotNumber(a1, 0, (unsigned int)&v34, 0, 0LL);
    if ( (int)result >= 0 )
    {
      v11 = v34;
      while ( 1 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v13 = *(_QWORD *)&v39.Length;
        Filter = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 768), *(_QWORD *)&v39.Length);
        v15 = Filter;
        if ( Filter )
          ObfReferenceObject(Filter);
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v12);
        if ( v15 )
        {
          v16 = *(_QWORD **)(v15[8] + 760LL);
          ObfDereferenceObject(v15);
          v17 = AMLIGetNamedChild(v16, 1414680671);
          v4 = (volatile signed __int32 *)v17;
          if ( v17 )
            break;
        }
        result = PcisuppGetProgConfigHeader(v13, v58);
        if ( (int)result < 0 )
          return result;
        if ( BYTE2(v58[2]) == 4 )
        {
          v10 = ((v11 & 0x1F) + (unsigned __int8)v10 - 1) % 4 + 1;
        }
        else
        {
          if ( BYTE2(v58[2]) != 7 )
            return 3221225473LL;
          LOBYTE(v10) = BYTE1(v58[15]);
        }
        result = PcisuppGetBusSlotNumber(v13, 0, (unsigned int)&v35, 0, (__int64)v4);
        if ( (int)result >= 0 )
        {
          v11 = v35;
          result = PcisuppGetParentPdo(v13, &v39);
          if ( (int)result >= 0 )
            continue;
        }
        return result;
      }
      v18 = v10 - 1;
      if ( (int)AMLIEvalNameSpaceObject(v17, (__int64)v56, 0, 0LL) < 0 )
      {
        ProgConfigHeader = -1073741275;
LABEL_64:
        AMLIDereferenceHandleEx(v4, v19);
        if ( a4 )
        {
          Buffer = 0LL;
          v64 = 0;
          v62 = 0;
          v39 = 0LL;
          *(_OWORD *)v63 = 0LL;
          String = 0LL;
          *(_OWORD *)SourceString = 0LL;
          DestinationString = 0LL;
          UnicodeString = 0LL;
          RtlStringCchPrintfW(pszDest, 0x14uLL, L"IRQARB");
          RtlInitUnicodeString(&DestinationString, SourceString);
          RtlInitUnicodeString(&String, v63);
          if ( RtlIntegerToUnicodeString(v11 & 0x1F, 0, &DestinationString) >= 0
            && RtlIntegerToUnicodeString((unsigned __int8)v11 >> 5, 0, &String) >= 0 )
          {
            v59[0] = (__int16 *)pszDest;
            v59[1] = (__int16 *)SourceString;
            v59[2] = (__int16 *)v63;
            if ( ProgConfigHeader == -1073741811 )
            {
              ACPIWriteEventLogEntry(-1073414135, v59, 3u);
            }
            else if ( ProgConfigHeader == -1073741772 )
            {
              RtlInitAnsiString(&v39, v46);
              RtlAnsiStringToUnicodeString(&UnicodeString, &v39, 1u);
              Buffer = UnicodeString.Buffer;
              ACPIWriteEventLogEntry(-1073414136, v59, 4u);
              RtlFreeUnicodeString(&UnicodeString);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_s(
                  WPP_GLOBAL_Control->DeviceExtension,
                  2,
                  20,
                  11,
                  (__int64)&WPP_924a918d9bb63f0ecf58b5e5a2c616f6_Traceguids,
                  (__int64)v46);
            }
            else
            {
              ACPIWriteEventLogEntry(-1073414138, v59, 3u);
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_d(
                  WPP_GLOBAL_Control->DeviceExtension,
                  2,
                  20,
                  12,
                  (__int64)&WPP_924a918d9bb63f0ecf58b5e5a2c616f6_Traceguids,
                  v11);
            }
          }
        }
        return (unsigned int)ProgConfigHeader;
      }
      v21 = v37;
      do
      {
        v22 = v36++;
        if ( (int)AMLIEvalPkgDataElement((__int64)v56, v22, (__int64)v43) < 0 )
          break;
        if ( (int)AMLIEvalPkgDataElement((__int64)v43, 0, (__int64)&v47) >= 0 )
        {
          v23 = v48;
          if ( (v11 & 0x1F) == WORD1(v48) )
          {
            if ( (_WORD)v48 != 0xFFFF )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v23) = 2;
                WPP_RECORDER_SF_i(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v23,
                  20,
                  10,
                  (__int64)&WPP_924a918d9bb63f0ecf58b5e5a2c616f6_Traceguids,
                  v48);
                v23 = v48;
              }
              dword_1C006F938 = 0;
              ::pszDest[0] = 0;
              v11 = v11 & 0xFFFFFF00 | (32 * (v23 & 7)) | (v23 >> 16) & 0x1F;
              ProgConfigHeader = -1073741811;
              FreeDataBuffs((__int64)&v47, 1u);
              dword_1C006F938 = 0;
              ::pszDest[0] = 0;
              FreeDataBuffs((__int64)v43, 1u);
              goto LABEL_64;
            }
            if ( (int)AMLIEvalPkgDataElement((__int64)v43, 1u, (__int64)&v53) >= 0 )
            {
              if ( (_BYTE)v54 == v18 )
              {
                v24 = v21;
                if ( (int)AMLIEvalPkgDataElement((__int64)v43, 2u, (__int64)v45) >= 0 )
                  v24 = 1;
                v21 = v24;
                if ( (int)AMLIEvalPkgDataElement((__int64)v43, 3u, (__int64)&v50) >= 0 )
                  v21 = 1;
              }
              dword_1C006F938 = 0;
              ::pszDest[0] = 0;
              FreeDataBuffs((__int64)&v53, 1u);
            }
          }
          dword_1C006F938 = 0;
          ::pszDest[0] = 0;
          FreeDataBuffs((__int64)&v47, 1u);
        }
        dword_1C006F938 = 0;
        ::pszDest[0] = 0;
        FreeDataBuffs((__int64)v43, 1u);
      }
      while ( !v21 );
      dword_1C006F938 = 0;
      ::pszDest[0] = 0;
      FreeDataBuffs((__int64)v56, 1u);
      ProgConfigHeader = -1073741275;
      if ( !v21 )
        goto LABEL_64;
      v25 = 2LL;
      if ( WORD1(v45[0]) == 2 && v46 )
      {
        if ( (int)AMLIGetNameSpaceObject(v46, (__int64)v4, (__int64)&String, 0) < 0 )
        {
          ProgConfigHeader = -1073741772;
          goto LABEL_64;
        }
        v26 = *(_QWORD **)&DestinationString.Length;
        ProgConfigHeader = LinkNodeFindByNsObj(*(_QWORD *)&String.Length, *(_QWORD *)&DestinationString.Length);
        if ( ProgConfigHeader >= 0 )
        {
          *(_QWORD *)&v38 = *v26;
          DWORD2(v38) = 0;
          BYTE12(v38) = 0;
          PcisuppSetRoutingInfo(a1, &v38);
          Pool2 = ExAllocatePool2(256LL, 56LL, 1232102209LL);
          if ( Pool2 )
          {
            v28 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
            v29 = (_QWORD *)LinkNodepGetFilter(*(_QWORD *)(RootDeviceExtension + 768), a1);
            v30 = v29;
            if ( v29 )
              ObfReferenceObject(v29);
            KeReleaseSpinLock(&AcpiDeviceTreeLock, v28);
            if ( v30 )
            {
              *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(v30[8] + 760LL);
              ObfDereferenceObject(v30);
            }
            else
            {
              *(_QWORD *)(Pool2 + 16) = 0LL;
            }
            *(_QWORD *)(Pool2 + 24) = v4;
            *(_QWORD *)(Pool2 + 48) = a1;
            v4 = 0LL;
            *(_DWORD *)(Pool2 + 32) = v11;
            ProgConfigHeader = PcisuppGetProgConfigHeader(a1, v58);
            if ( ProgConfigHeader >= 0 )
            {
              *(_DWORD *)(Pool2 + 36) = v58[0];
              *(_DWORD *)(Pool2 + 40) = v58[11];
            }
            LinkNodepAddAttachedDevice(*v26, Pool2);
          }
          if ( !v4 )
            goto LABEL_62;
        }
      }
      else if ( WORD1(v50) == 1 )
      {
        v31 = *(_DWORD **)&UnicodeString.Length;
        ProgConfigHeader = 0;
        v32 = *(_QWORD **)&DestinationString.Length;
        BYTE12(v38) = 2;
        **(_DWORD **)&UnicodeString.Length = v51;
        *(_QWORD *)&v38 = 0LL;
        *v32 = 0LL;
        DWORD2(v38) = *v31;
        PcisuppSetRoutingInfo(a1, &v38);
      }
      else
      {
        ProgConfigHeader = -1073741701;
      }
      AMLIDereferenceHandleEx(v4, v25);
LABEL_62:
      dword_1C006F938 = 0;
      ::pszDest[0] = 0;
      FreeDataBuffs((__int64)v45, 1u);
      dword_1C006F938 = 0;
      ::pszDest[0] = 0;
      FreeDataBuffs((__int64)&v50, 1u);
      return (unsigned int)ProgConfigHeader;
    }
  }
  return result;
}
