/*
 * XREFs of HvAnalyzeLogFiles @ 0x1407F9528
 * Callers:
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1A9B4 (HvRecoverFlushProtocolStateFromFiles.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpCompareLogSequenceNumbers @ 0x1407F985C (HvpCompareLogSequenceNumbers.c)
 *     HvpDetermineIncrementalLogFileMaximums @ 0x1407F9890 (HvpDetermineIncrementalLogFileMaximums.c)
 *     HvpDetermineResultingLoggingState @ 0x1407F9E70 (HvpDetermineResultingLoggingState.c)
 *     HvpDetermineLogFileApplicationOrder @ 0x1407F9F14 (HvpDetermineLogFileApplicationOrder.c)
 *     HvpIsReadErrorTransient @ 0x140A27790 (HvpIsReadErrorTransient.c)
 *     HvpLogInvalidLogHeader @ 0x140A2788C (HvpLogInvalidLogHeader.c)
 *     HvpLogUnreadableLog @ 0x140A27A24 (HvpLogUnreadableLog.c)
 *     HvpHeaderCheckSum @ 0x140AF2414 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvAnalyzeLogFiles(
        _QWORD *a1,
        int a2,
        char a3,
        unsigned int *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v8; // edi
  __int128 *v9; // rsi
  _QWORD *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r11
  unsigned int v15; // r14d
  _QWORD *v16; // r13
  __int128 *v17; // rbx
  char v18; // r12
  unsigned int *v19; // rsi
  unsigned int v20; // r15d
  int v21; // edi
  __int64 v22; // r14
  __int64 v23; // r9
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  unsigned int v27; // r10d
  char *v28; // r15
  __int64 v29; // r13
  __int64 v30; // r12
  signed __int64 v31; // r14
  __int128 *v32; // rdi
  unsigned int v33; // esi
  int v34; // ebx
  _DWORD *v35; // rcx
  bool v36; // zf
  int v37; // eax
  __int64 result; // rax
  __int64 v39; // xmm1_8
  __int128 v40; // xmm1
  int v41; // eax
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  int v45; // r10d
  _DWORD *v46; // rcx
  int v47; // eax
  _DWORD *v48; // r11
  _OWORD *v49; // rax
  __int64 v50; // rdx
  _OWORD *v51; // rcx
  __int128 v52; // xmm1
  char *v53; // rdx
  char v54; // [rsp+30h] [rbp-D0h] BYREF
  char v55; // [rsp+31h] [rbp-CFh]
  char v56; // [rsp+32h] [rbp-CEh] BYREF
  char v57; // [rsp+33h] [rbp-CDh] BYREF
  int v58; // [rsp+34h] [rbp-CCh] BYREF
  _QWORD *v59; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v61; // [rsp+48h] [rbp-B8h] BYREF
  char *v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+60h] [rbp-A0h]
  _OWORD v64[6]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v65[24]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 *v66; // [rsp+F0h] [rbp-10h]
  __int64 v67; // [rsp+F8h] [rbp-8h]
  int *v68; // [rsp+100h] [rbp+0h]
  __int64 v69; // [rsp+108h] [rbp+8h]
  char *v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  _QWORD *v72; // [rsp+120h] [rbp+20h]
  __int64 v73; // [rsp+128h] [rbp+28h]
  int *v74; // [rsp+130h] [rbp+30h]
  __int64 v75; // [rsp+138h] [rbp+38h]

  v58 = a2;
  v55 = a3;
  v59 = a1;
  v62 = (char *)a4;
  v63 = a6;
  v60 = a7;
  memset((char *)v64 + 4, 0, 0x58uLL);
  LODWORD(v64[0]) = a5;
  v8 = 0;
  v61 = 0LL;
  if ( !a5 )
    goto LABEL_55;
  v9 = &v61;
  v10 = a4 + 4;
  do
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, char *))*(v10 - 1))(*v10, 0LL, 512LL, (char *)&v61 + 8 * v8);
    v14 = 0LL;
    v15 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned __int8)HvpIsReadErrorTransient((unsigned int)v11) )
        return 3221225805LL;
      HvpLogUnreadableLog(*((unsigned int *)v10 - 4), v15);
      v14 = 0LL;
      *(_QWORD *)v9 = 0LL;
    }
    ++v8;
    v10 += 3;
    v9 = (__int128 *)((char *)v9 + 8);
  }
  while ( v8 < a5 );
  v16 = v59;
  v17 = &v61;
  v18 = v55;
  v19 = a4;
  v20 = v58;
  v21 = 0;
  v22 = a5;
  do
  {
    v23 = *(_QWORD *)v17;
    if ( !*(_QWORD *)v17 )
      goto LABEL_17;
    if ( *(_DWORD *)v23 != 1718052210
      || *(_DWORD *)(v23 + 4) != *(_DWORD *)(v23 + 8)
      || *(_QWORD *)(v23 + 12) != *v16
      || (v24 = *(_DWORD *)(v23 + 28), v24 != 6) && v24 != 1
      || (v25 = *(_DWORD *)(v23 + 40), (unsigned int)(v25 - 1) > 0x7FFFDFFF)
      || (v25 & 0xFFF) != 0
      || (v26 = HvpHeaderCheckSum(*(_QWORD *)v17, v12, v13), *(_DWORD *)(v23 + 508) != v26) )
    {
      HvpLogInvalidLogHeader(v16, *v19, v23);
LABEL_43:
      v14 = 0LL;
      goto LABEL_37;
    }
    if ( v18 || (int)HvpCompareLogSequenceNumbers(v27, v20) >= 0 )
    {
      ++v21;
      goto LABEL_17;
    }
    if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 8LL) )
    {
      v54 = *(_BYTE *)v19;
      v67 = 1LL;
      v66 = (__int64 *)&v54;
      v58 = v20;
      v68 = &v58;
      v69 = 4LL;
      v70 = (char *)&v59;
      LODWORD(v59) = v45;
      v71 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04328,
        (unsigned __int8 *)word_140037CB2,
        0LL,
        0LL,
        5u,
        (PEVENT_DATA_DESCRIPTOR)v65);
      goto LABEL_43;
    }
LABEL_37:
    *(_QWORD *)v17 = v14;
LABEL_17:
    v19 += 6;
    v17 = (__int128 *)((char *)v17 + 8);
    --v22;
  }
  while ( v22 );
  v28 = v62;
  v29 = v63;
  v30 = v60;
  if ( !v21 )
  {
LABEL_55:
    if ( (unsigned int)dword_140C04328 <= 5 || !tlgKeywordOn((__int64)&dword_140C04328, 0x400000000008LL) )
      return 3221225804LL;
    v53 = byte_140037D39;
    goto LABEL_58;
  }
  if ( v60 )
  {
    if ( v21 == 1 )
    {
      v46 = v14;
      LOBYTE(v46) = (_QWORD)v61 == (_QWORD)v14;
    }
    else
    {
      v47 = HvpCompareLogSequenceNumbers(*(unsigned int *)(v61 + 4), *(unsigned int *)(*((_QWORD *)&v61 + 1) + 8LL));
      v46 = v48;
      LOBYTE(v46) = v47 < 0;
    }
    v49 = (_OWORD *)*((_QWORD *)&v61 + (_QWORD)v46);
    v50 = 4LL;
    v51 = (_OWORD *)v30;
    do
    {
      *v51 = *v49;
      v51[1] = v49[1];
      v51[2] = v49[2];
      v51[3] = v49[3];
      v51[4] = v49[4];
      v51[5] = v49[5];
      v51[6] = v49[6];
      v51 += 8;
      v52 = v49[7];
      v49 += 8;
      *(v51 - 1) = v52;
      --v50;
    }
    while ( v50 );
    memset((void *)(v30 + 512), 0, 0xE00uLL);
    v14 = 0LL;
    *(_DWORD *)(v30 + 28) = 0;
  }
  v31 = (char *)v64 + 4 - v28;
  v32 = &v61;
  v33 = (unsigned int)v14;
  v34 = (int)v14;
  while ( 2 )
  {
    v35 = *(_DWORD **)v32;
    if ( *(_QWORD *)v32 )
    {
      v36 = v35[7] == 6;
      *(_DWORD *)&v65[4] = *(_DWORD *)v28;
      v37 = v35[1];
      *(_OWORD *)&v65[8] = 0LL;
      *(_DWORD *)&v65[8] = v37;
      if ( v36 )
      {
        *(_DWORD *)v65 = 1;
        result = HvpDetermineIncrementalLogFileMaximums(
                   (_DWORD)v28,
                   v37,
                   (unsigned int)&v65[12],
                   (unsigned int)&v65[20],
                   (__int64)&v65[16]);
        v14 = 0LL;
        if ( (int)result >= 0 )
          goto LABEL_24;
      }
      else
      {
        *(_DWORD *)&v65[12] = v37;
        *(_DWORD *)&v65[20] = v35[10];
        *(_DWORD *)v65 = 3;
        *(_DWORD *)&v65[16] = (_DWORD)v14;
LABEL_24:
        result = (unsigned int)v14;
        v39 = *(_QWORD *)&v65[16];
        *(_OWORD *)&v28[v31] = *(_OWORD *)v65;
        *(_QWORD *)&v28[v31 + 16] = v39;
      }
      *(_QWORD *)v32 = v14;
      if ( (_DWORD)result != -2147483614 )
      {
        if ( (int)result < 0 )
          return result;
        ++v34;
      }
    }
    ++v33;
    v28 += 24;
    v32 = (__int128 *)((char *)v32 + 8);
    if ( v33 < a5 )
      continue;
    break;
  }
  if ( !v34 )
  {
    if ( (unsigned int)dword_140C04328 <= 5 || !tlgKeywordOn((__int64)&dword_140C04328, 0x400000000008LL) )
      return 3221225804LL;
    v53 = byte_140037D6D;
LABEL_58:
    v66 = &v60;
    v60 = 0x1000000LL;
    v67 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C04328,
      (unsigned __int8 *)v53,
      0LL,
      0LL,
      3u,
      (PEVENT_DATA_DESCRIPTOR)v65);
    return 3221225804LL;
  }
  if ( (unsigned int)dword_140C04328 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C04328, 8LL) )
    {
      v54 = v34;
      v66 = (__int64 *)&v54;
      v56 = BYTE8(v64[0]);
      v67 = 1LL;
      v68 = (int *)&v56;
      v57 = v64[2];
      v70 = &v57;
      LODWORD(v59) = HIDWORD(v64[0]);
      v72 = &v59;
      v58 = DWORD1(v64[2]);
      v74 = &v58;
      v69 = 1LL;
      v71 = 1LL;
      v73 = 4LL;
      v75 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04328,
        (unsigned __int8 *)byte_140037D9F,
        0LL,
        0LL,
        7u,
        (PEVENT_DATA_DESCRIPTOR)v65);
    }
  }
  LOBYTE(v12) = v55;
  HvpDetermineLogFileApplicationOrder(v64, v12);
  HvpDetermineResultingLoggingState(v64);
  v40 = v64[1];
  v41 = DWORD2(v64[5]);
  *(_OWORD *)v29 = v64[0];
  v42 = v64[2];
  *(_OWORD *)(v29 + 16) = v40;
  v43 = v64[3];
  *(_OWORD *)(v29 + 32) = v42;
  v44 = v64[4];
  *(_OWORD *)(v29 + 48) = v43;
  *(_QWORD *)&v43 = *(_QWORD *)&v64[5];
  *(_OWORD *)(v29 + 64) = v44;
  *(_QWORD *)(v29 + 80) = v43;
  *(_DWORD *)(v29 + 88) = v41;
  return 0LL;
}
