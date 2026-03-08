/*
 * XREFs of ExProcessorCounterSetCallback @ 0x14086BB50
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     KeEnumerateNextProcessor @ 0x140234A60 (KeEnumerateNextProcessor.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeQueryNodeActiveAffinityEx @ 0x1402AAE68 (KeQueryNodeActiveAffinityEx.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     swscanf_s @ 0x1403DA110 (swscanf_s.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PcwAddInstance @ 0x14086B690 (PcwAddInstance.c)
 *     ExpQueryProcessorInformationCounters @ 0x14086C350 (ExpQueryProcessorInformationCounters.c)
 */

int __fastcall ExProcessorCounterSetCallback(int a1, __int64 *a2)
{
  int v4; // ebx
  int result; // eax
  bool v6; // r15
  bool v7; // r12
  int v8; // edi
  __int64 v9; // rax
  void *v10; // r13
  bool v11; // r14
  int v12; // r8d
  int v13; // r9d
  ULONG ActiveProcessorCount; // r14d
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned int v17; // esi
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  ULONG v21; // edi
  _QWORD *v22; // rdx
  const UNICODE_STRING *v23; // rdx
  NTSTATUS v24; // eax
  PPCW_DATA Data; // [rsp+28h] [rbp-E0h]
  bool v26; // [rsp+38h] [rbp-D0h]
  bool v27; // [rsp+39h] [rbp-CFh]
  bool v28; // [rsp+3Ah] [rbp-CEh]
  int v29; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v30; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+44h] [rbp-C4h] BYREF
  ULONG Id[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _PCW_DATA v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h]
  unsigned __int64 v35; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+70h] [rbp-98h]
  unsigned __int64 v37; // [rsp+78h] [rbp-90h]
  unsigned __int64 v38; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  __int128 v40; // [rsp+98h] [rbp-70h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-60h]
  struct _PCW_DATA v42; // [rsp+B0h] [rbp-58h] BYREF
  struct _PCW_DATA v43; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v44[26]; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD v45[26]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v46[26]; // [rsp+278h] [rbp+170h] BYREF
  _QWORD v47[34]; // [rsp+348h] [rbp+240h] BYREF
  wchar_t pszDest[16]; // [rsp+458h] [rbp+350h] BYREF

  memset(v44, 0, 0xC8uLL);
  memset(v45, 0, 0xC8uLL);
  v4 = 0;
  v31 = 0;
  v30 = 0;
  LOWORD(v29) = 0;
  DestinationString = 0LL;
  memset(v46, 0, 0xC8uLL);
  Id[0] = 0;
  memset(v47, 0, 0x108uLL);
  result = 0;
  v26 = 0;
  v41 = 0LL;
  v27 = 0;
  v6 = 0;
  v28 = 0;
  v7 = 0;
  v40 = 0LL;
  v8 = a1 - 2;
  if ( v8 )
  {
    if ( v8 != 1 )
      return result;
    v9 = *a2;
    v10 = (void *)a2[3];
    v33.Data = v10;
    v11 = (v9 & 0x100E0FF05LL) != 0;
    v26 = v11;
    v6 = (v9 & 0xC00F0000) != 0;
    v7 = (v9 & 0x63F000000LL) != 0;
    v27 = v6;
    v28 = v7;
    if ( swscanf_s(*(const wchar_t **)(a2[1] + 8), L"%u,%u", &v30, &v31) == 2 )
    {
      Id[0] = *((_DWORD *)a2 + 4);
      v21 = Id[0];
      if ( Id[0] >= (unsigned int)KeNumberProcessors_0 )
        return -1073741275;
      v22 = v46;
      LOBYTE(v13) = v7;
      LOBYTE(v22) = v11;
      LOBYTE(v12) = v6;
      ExpQueryProcessorInformationCounters(KiProcessorBlock[Id[0]], (_DWORD)v22, v12, v13, (__int64)v46);
      v23 = (const UNICODE_STRING *)a2[1];
      v33.Data = v46;
      v33.Size = 200;
      v24 = PcwAddInstance((PPCW_BUFFER)v10, v23, v21, 1u, &v33);
      if ( v24 < 0 )
        return v24;
      return v4;
    }
  }
  else
  {
    v10 = (void *)a2[3];
    v33.Data = v10;
  }
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(v34) = ActiveProcessorCount;
  v15 = 0LL;
  v37 = 0LL;
  v16 = 0LL;
  v38 = 0LL;
  LOWORD(v17) = 0;
  v30 = 0;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      LODWORD(v47[0]) = 2097153;
      memset((char *)v47 + 4, 0, 0x104uLL);
      KeQueryNodeActiveAffinityEx(v17, (unsigned __int16 *)v47, &v29);
      if ( (_WORD)v29 )
      {
        memset(v44, 0, 0xC8uLL);
        *((_QWORD *)&v40 + 1) = v47[1];
        *(_QWORD *)&v40 = v47;
        v36 = 0LL;
        v35 = 0LL;
        v31 = 0;
        LOWORD(v41) = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(Id, (unsigned __int16 **)&v40) )
        {
          LOBYTE(v18) = v26;
          LOBYTE(v20) = v7;
          LOBYTE(v19) = v6;
          ExpQueryProcessorInformationCounters(KiProcessorBlock[Id[0]], v18, v19, v20, (__int64)v46);
          LODWORD(Data) = v31;
          RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,%u", v30, Data);
          ++v31;
          RtlInitUnicodeString(&DestinationString, pszDest);
          v42.Data = v46;
          v42.Size = 200;
          result = PcwAddInstance((PPCW_BUFFER)v10, &DestinationString, Id[0], 1u, &v42);
          if ( result < 0 )
            return result;
          v44[0] += v46[0];
          v44[1] += v46[1];
          v44[2] += v46[2];
          v44[3] += v46[3];
          v44[11] += v46[11];
          v45[0] += v46[0];
          LODWORD(v44[4]) += LODWORD(v46[4]);
          v44[6] += v46[6];
          HIDWORD(v44[7]) += HIDWORD(v46[7]);
          v45[1] += v46[1];
          v45[2] += v46[2];
          v45[3] += v46[3];
          LODWORD(v44[8]) += LODWORD(v46[8]);
          v44[5] += v46[5];
          LODWORD(v45[4]) += LODWORD(v46[4]);
          v45[6] += v46[6];
          HIDWORD(v45[7]) += HIDWORD(v46[7]);
          LODWORD(v44[7]) += LODWORD(v46[7]);
          v44[9] += v46[9];
          v44[12] += v46[12];
          LODWORD(v45[8]) += LODWORD(v46[8]);
          v45[5] += v46[5];
          v44[10] += v46[10];
          LODWORD(v45[7]) += LODWORD(v46[7]);
          v45[9] += v46[9];
          v44[13] += v46[13];
          HIDWORD(v44[23]) |= HIDWORD(v46[23]);
          v44[14] += v46[14];
          v44[21] += v46[21];
          v44[22] += v46[22];
          v44[15] += v46[15];
          HIDWORD(v44[16]) += HIDWORD(v46[16]);
          LODWORD(v44[17]) += LODWORD(v46[17]);
          v35 += LODWORD(v46[18]);
          v36 += HIDWORD(v46[18]);
          v44[19] += v46[19];
          v44[20] += v46[20];
          v44[24] += v46[24];
          LODWORD(v44[23]) += LODWORD(v46[23]);
          v45[12] += v46[12];
          v45[10] += v46[10];
          v45[13] += v46[13];
          v45[11] += v46[11];
          v45[14] += v46[14];
          v45[21] += v46[21];
          v45[22] += v46[22];
          HIDWORD(v45[16]) += HIDWORD(v46[16]);
          v45[15] += v46[15];
          LODWORD(v45[17]) += LODWORD(v46[17]);
          v38 += LODWORD(v46[18]);
          v37 += HIDWORD(v46[18]);
          v45[19] += v46[19];
          v45[20] += v46[20];
          v45[24] += v46[24];
          LODWORD(v45[23]) += LODWORD(v46[23]);
          HIDWORD(v45[23]) |= HIDWORD(v46[23]);
          v6 = v27;
          v7 = v28;
          v10 = (void *)v33.Data;
        }
        if ( (unsigned __int16)v29 > 1u )
        {
          v44[0] /= (unsigned __int64)(unsigned __int16)v29;
          v44[1] /= (unsigned __int64)(unsigned __int16)v29;
          v44[2] /= (unsigned __int64)(unsigned __int16)v29;
          v44[3] /= (unsigned __int64)(unsigned __int16)v29;
          v44[6] /= (unsigned __int64)(unsigned __int16)v29;
          v44[5] /= (unsigned __int64)(unsigned __int16)v29;
          v44[9] /= (unsigned __int64)(unsigned __int16)v29;
          v44[10] /= (unsigned __int64)(unsigned __int16)v29;
          v44[11] /= (unsigned __int64)(unsigned __int16)v29;
          v44[15] /= (unsigned __int64)(unsigned __int16)v29;
          HIDWORD(v44[16]) /= (unsigned __int16)v29;
          LODWORD(v44[17]) /= (unsigned __int16)v29;
        }
        if ( v7 )
        {
          LODWORD(v44[18]) = v35 / (unsigned __int16)v29;
          HIDWORD(v44[18]) = v36 / (unsigned __int16)v29;
          v44[19] /= (unsigned __int64)(unsigned __int16)v29;
          v44[20] /= (unsigned __int64)(unsigned __int16)v29;
          v44[24] /= (unsigned __int64)(unsigned __int16)v29;
        }
        if ( v6 )
          LODWORD(v44[23]) /= (unsigned __int16)v29;
        RtlStringCbPrintfW(pszDest, 0x1AuLL, L"%u,_Total", v30);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v43.Data = v44;
        v43.Size = 200;
        result = PcwAddInstance((PPCW_BUFFER)v10, &DestinationString, v30 + KeMaximumProcessors, 1u, &v43);
        if ( result < 0 )
          break;
      }
      v17 = v30 + 1;
      v30 = v17;
      if ( v17 >= (unsigned __int16)KeNumberNodes )
      {
        ActiveProcessorCount = v34;
        v15 = v37;
        v16 = v38;
        goto LABEL_19;
      }
    }
  }
  else
  {
LABEL_19:
    if ( ActiveProcessorCount > 1 )
    {
      v45[0] /= (unsigned __int64)ActiveProcessorCount;
      v45[1] /= (unsigned __int64)ActiveProcessorCount;
      v45[2] /= (unsigned __int64)ActiveProcessorCount;
      v45[3] /= (unsigned __int64)ActiveProcessorCount;
      v45[6] /= (unsigned __int64)ActiveProcessorCount;
      v45[5] /= (unsigned __int64)ActiveProcessorCount;
      v45[9] /= (unsigned __int64)ActiveProcessorCount;
      v45[10] /= (unsigned __int64)ActiveProcessorCount;
      v45[11] /= (unsigned __int64)ActiveProcessorCount;
      v45[15] /= (unsigned __int64)ActiveProcessorCount;
      HIDWORD(v45[16]) /= ActiveProcessorCount;
      LODWORD(v45[17]) /= ActiveProcessorCount;
    }
    if ( v7 )
    {
      LODWORD(v45[18]) = v16 / ActiveProcessorCount;
      HIDWORD(v45[18]) = v15 / ActiveProcessorCount;
      v45[19] /= (unsigned __int64)ActiveProcessorCount;
      v45[20] /= (unsigned __int64)ActiveProcessorCount;
      v45[24] /= (unsigned __int64)ActiveProcessorCount;
    }
    if ( v6 )
      LODWORD(v45[23]) /= ActiveProcessorCount;
    RtlStringCbPrintfW(pszDest, 0x1AuLL, L"_Total", v16);
    RtlInitUnicodeString(&DestinationString, pszDest);
    v33.Data = v45;
    v33.Size = 200;
    return PcwAddInstance(
             (PPCW_BUFFER)v10,
             &DestinationString,
             KeMaximumProcessors + (unsigned __int16)KeNumberNodes,
             1u,
             &v33);
  }
  return result;
}
