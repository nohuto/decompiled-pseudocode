/*
 * XREFs of xxxInterSendMsgEx @ 0x1C004D920
 * Callers:
 *     NtUserReplyMessage @ 0x1C000C2E0 (NtUserReplyMessage.c)
 *     xxxSendMessageCallback @ 0x1C004D5BC (xxxSendMessageCallback.c)
 *     xxxReceiverDied @ 0x1C006C930 (xxxReceiverDied.c)
 *     ClearSendMessages @ 0x1C00EAFAC (ClearSendMessages.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C011F720 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     xxxReceiveMessage @ 0x1C01267C0 (xxxReceiveMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C01271B0 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     ProcessSuspendedSendMessage @ 0x1C0016438 (ProcessSuspendedSendMessage.c)
 *     wcsncpycch @ 0x1C0024788 (wcsncpycch.c)
 *     HMValidateHandle @ 0x1C002D0F8 (HMValidateHandle.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C004F0AC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C004F148 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     ?IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z @ 0x1C0071E94 (-IsThreadHungTimeCheck@@YA_NPEBUtagTHREADINFO@@K@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1C011F610 (TransformMessageBetweenCoordinateSpaces.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C0125FC0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ??0CKernelStackSwapAuto@@QEAA@XZ @ 0x1C013C754 (--0CKernelStackSwapAuto@@QEAA@XZ.c)
 *     ??1CKernelStackSwapAuto@@QEAA@XZ @ 0x1C013C7E4 (--1CKernelStackSwapAuto@@QEAA@XZ.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 *     strncpycch @ 0x1C0157AA8 (strncpycch.c)
 *     _FreeTouchInputInfo @ 0x1C01B0580 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C0204B90 (_FreeGestureInfo.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInterSendMsgEx(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int64 a3,
        void **a4,
        int a5,
        struct tagTHREADINFO *a6,
        __int64 a7,
        int a8,
        int a9)
{
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v12; // rdi
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // rbx
  int v17; // eax
  int v18; // r11d
  _QWORD *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // r10
  int v22; // ebx
  __int64 v23; // r10
  int v24; // eax
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r10
  unsigned __int64 v29; // r13
  void **v30; // rsi
  unsigned int v31; // ebx
  unsigned __int8 v32; // dl
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 CurrentProcess; // rax
  __int64 v36; // rax
  __int64 v37; // r8
  void **v38; // r10
  unsigned int v39; // edi
  void **v40; // r15
  _OWORD *v42; // r9
  void **v43; // rdx
  __int64 v44; // rcx
  _OWORD *v45; // rax
  void **v46; // r15
  const void *v47; // rdx
  size_t v48; // r8
  void **v49; // r15
  __int64 v50; // rbx
  void **v51; // rbx
  size_t v52; // r8
  int v53; // edx
  size_t v54; // r8
  int *v57; // r15
  __int64 v58; // rax
  struct tagTHREADINFO *v59; // r13
  unsigned __int64 v60; // rcx
  int v61; // ecx
  int v62; // ecx
  struct tagTHREADINFO **v63; // rcx
  _QWORD *v64; // rdx
  unsigned int v65; // eax
  int v66; // eax
  bool v67; // zf
  int v68; // eax
  int v69; // eax
  int v70; // eax
  __int64 v71; // rax
  int v72; // eax
  int v73; // edi
  unsigned int v74; // r13d
  struct tagTHREADINFO *v75; // rdx
  size_t v76; // rcx
  int v77; // eax
  _DWORD *v78; // rbx
  char v79; // si
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // rcx
  int v83; // eax
  int v84; // ecx
  int v85; // eax
  size_t v86; // r13
  _QWORD *v87; // rbx
  void *v88; // rdx
  int v89; // ebx
  _OWORD *v90; // rax
  __int128 v91; // xmm0
  __int64 v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rsi
  int v95; // eax
  _QWORD *v96; // rdx
  __int64 v97; // rcx
  _QWORD *v98; // rax
  int v99; // ecx
  unsigned int *v100; // r13
  __int64 *v101; // rdi
  _WORD *v102; // rcx
  int v103; // eax
  int v104; // eax
  int v105; // eax
  __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rdx
  _QWORD *v109; // rax
  unsigned int Size; // [rsp+34h] [rbp-174h]
  size_t Size_4; // [rsp+38h] [rbp-170h]
  __int64 v112; // [rsp+40h] [rbp-168h]
  void **v113; // [rsp+48h] [rbp-160h]
  unsigned int v114; // [rsp+50h] [rbp-158h]
  int v115; // [rsp+58h] [rbp-150h]
  int v116; // [rsp+60h] [rbp-148h]
  void *Src[2]; // [rsp+68h] [rbp-140h] BYREF
  __int64 v118; // [rsp+78h] [rbp-130h] BYREF
  void **v119; // [rsp+80h] [rbp-128h]
  void *v120; // [rsp+88h] [rbp-120h]
  _QWORD *v121; // [rsp+90h] [rbp-118h]
  __int64 *v122; // [rsp+98h] [rbp-110h]
  unsigned __int64 LowLimit; // [rsp+A0h] [rbp-108h] BYREF
  void **v124; // [rsp+A8h] [rbp-100h]
  _QWORD *v125; // [rsp+B0h] [rbp-F8h]
  __int64 v126; // [rsp+B8h] [rbp-F0h]
  _QWORD *v127; // [rsp+C0h] [rbp-E8h]
  unsigned __int64 HighLimit[3]; // [rsp+C8h] [rbp-E0h] BYREF
  _DWORD *v129; // [rsp+E0h] [rbp-C8h]
  _QWORD **v130; // [rsp+E8h] [rbp-C0h]
  unsigned int *v131; // [rsp+F0h] [rbp-B8h]
  _WORD *v132; // [rsp+F8h] [rbp-B0h]
  _QWORD **v133; // [rsp+100h] [rbp-A8h]
  __int64 v134; // [rsp+108h] [rbp-A0h]
  void **v135; // [rsp+110h] [rbp-98h]
  _QWORD v136[4]; // [rsp+120h] [rbp-88h] BYREF
  _BYTE v137[16]; // [rsp+140h] [rbp-68h] BYREF
  __int128 v138; // [rsp+150h] [rbp-58h] BYREF
  __int64 v139; // [rsp+160h] [rbp-48h]

  v126 = 0LL;
  v124 = 0LL;
  v119 = 0LL;
  *(_OWORD *)Src = 0LL;
  v120 = 0LL;
  v116 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v12 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process && !*CurrentProcessWin32Process )
    v12 = 0LL;
  v13 = gptiCurrent;
  if ( !a5 )
    v13 = 0LL;
  Size_4 = v13;
  HighLimit[2] = v13;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v13 && (*(_DWORD *)(v13 + 488) & 1) != 0 )
    return 0LL;
  HighLimit[0] = 0LL;
  LowLimit = 0LL;
  IoGetStackLimits(&LowLimit, HighLimit);
  if ( (unsigned __int64)HighLimit - LowLimit < 0x2000 )
    return 0LL;
  if ( !a1 )
  {
    v18 = 1;
    goto LABEL_34;
  }
  v16 = *(_QWORD *)(a1[2] + 424LL);
  if ( (_QWORD *)v16 == v12 )
  {
    v17 = 0;
    v18 = 1;
    goto LABEL_31;
  }
  if ( a2 > 0xD0 )
  {
    if ( a2 == 272 )
      goto LABEL_30;
    if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
    {
LABEL_23:
      v17 = 0;
      v18 = 1;
      goto LABEL_31;
    }
  }
  else if ( a2 != 208 )
  {
    switch ( a2 )
    {
      case 0xCu:
      case 0xBCu:
        goto LABEL_24;
      case 0xDu:
      case 0xC4u:
      case 0xCCu:
        v14 = *(unsigned __int16 *)(*(_QWORD *)(a1[17] + 8LL) + 2LL);
        if ( *(_WORD *)(gpsi + 870LL) != (_WORD)v14 || (*(_BYTE *)(a1[5] + 28LL) & 0x20) == 0 )
          goto LABEL_29;
        UserSetLastError(5LL);
        break;
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x47u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Fu:
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x63u:
      case 0x64u:
      case 0x65u:
      case 0x66u:
      case 0x67u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Bu:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
      case 0x80u:
      case 0x81u:
      case 0x82u:
      case 0x83u:
      case 0x84u:
      case 0x85u:
      case 0x86u:
      case 0x87u:
      case 0x88u:
      case 0x89u:
      case 0x8Au:
      case 0x8Bu:
      case 0x8Cu:
      case 0x8Du:
      case 0x8Eu:
      case 0x8Fu:
      case 0x90u:
      case 0x91u:
      case 0x92u:
      case 0x93u:
      case 0x94u:
      case 0x95u:
      case 0x96u:
      case 0x97u:
      case 0x98u:
      case 0x99u:
      case 0x9Au:
      case 0x9Bu:
      case 0x9Cu:
      case 0x9Du:
      case 0x9Eu:
      case 0x9Fu:
      case 0xA0u:
      case 0xA1u:
      case 0xA2u:
      case 0xA3u:
      case 0xA4u:
      case 0xA5u:
      case 0xA6u:
      case 0xA7u:
      case 0xA8u:
      case 0xA9u:
      case 0xAAu:
      case 0xABu:
      case 0xACu:
      case 0xADu:
      case 0xAEu:
      case 0xAFu:
      case 0xB0u:
      case 0xB1u:
      case 0xB2u:
      case 0xB3u:
      case 0xB4u:
      case 0xB5u:
      case 0xB6u:
      case 0xB7u:
      case 0xB8u:
      case 0xB9u:
      case 0xBAu:
      case 0xBBu:
      case 0xBDu:
      case 0xBEu:
      case 0xBFu:
      case 0xC0u:
      case 0xC1u:
      case 0xC2u:
      case 0xC3u:
      case 0xC5u:
      case 0xC6u:
      case 0xC7u:
      case 0xC8u:
      case 0xC9u:
      case 0xCAu:
      case 0xCBu:
        goto LABEL_29;
      case 0x4Eu:
        goto LABEL_30;
      default:
        goto LABEL_23;
    }
    goto LABEL_30;
  }
LABEL_24:
  if ( (unsigned __int8)Enforced() && *(_QWORD *)v16 != gpepCSRSS )
  {
    v17 = 0;
    v18 = 1;
    goto LABEL_31;
  }
  if ( *(_DWORD *)(v16 + 772) == *((_DWORD *)v12 + 193) && *(_DWORD *)(v16 + 776) == *((_DWORD *)v12 + 194) )
  {
LABEL_29:
    v17 = 0;
    v18 = 1;
    goto LABEL_31;
  }
LABEL_30:
  v18 = 1;
  v17 = 1;
LABEL_31:
  if ( v17 )
  {
    UserSetLastError(5LL);
    return 0LL;
  }
LABEL_34:
  if ( a8 )
  {
LABEL_85:
    v29 = a3;
    v30 = a4;
    goto LABEL_86;
  }
  v19 = 0LL;
  if ( a1 )
  {
    v19 = *(_QWORD **)(a1[2] + 424LL);
  }
  else if ( a6 )
  {
    v19 = (_QWORD *)*((_QWORD *)a6 + 53);
  }
  if ( v19 == v12 )
  {
    v13 = Size_4;
    goto LABEL_85;
  }
  if ( a2 == 717 )
    return 0LL;
  v20 = v19[108];
  if ( !v20
    || (v15 = (unsigned __int16)a2, (v14 = *(_QWORD *)(v20 + 8 * ((unsigned __int64)(unsigned __int16)a2 >> 13))) == 0)
    || (v21 = *(_QWORD *)(v14 + 8LL * (((unsigned __int16)a2 >> 9) & 0xF))) == 0
    || (v14 = (unsigned int)(1 << (a2 & 7)),
        v15 = ((unsigned __int64)(unsigned __int16)a2 >> 3) & 0x3F,
        v22 = 1,
        ((unsigned __int8)v14 & *(_BYTE *)(v15 + v21)) == 0) )
  {
    v22 = 0;
  }
  if ( v22 )
    goto LABEL_73;
  if ( a1 )
  {
    v23 = 0LL;
    v15 = *(_QWORD *)(*(_QWORD *)(a1[2] + 424LL) + 872LL);
    if ( v15 )
    {
      v25 = 0LL;
      v14 = *(unsigned int *)v15;
      if ( (_DWORD)v14 )
      {
        v26 = (_QWORD *)(v15 + 24);
        do
        {
          if ( a1 == (_QWORD *)*v26 )
            break;
          v25 = (unsigned int)(v25 + 1);
          v26 += 2;
        }
        while ( (unsigned int)v25 < (unsigned int)v14 );
      }
      if ( (unsigned int)v25 < (unsigned int)v14 )
      {
        _mm_lfence();
        v23 = *(_QWORD *)(v15 + 16 * (v25 + 1));
        v24 = 1;
      }
      else
      {
        v24 = 0;
      }
    }
    else
    {
      v24 = 0;
    }
    v27 = 0LL;
    if ( v24 )
      v27 = v23;
    if ( !v27
      || (v15 = (unsigned __int16)a2, (v14 = *(_QWORD *)(v27 + 8 * ((unsigned __int64)(unsigned __int16)a2 >> 13))) == 0)
      || (v28 = *(_QWORD *)(v14 + 8 * (((unsigned __int64)(unsigned __int16)a2 >> 9) & 0xF))) == 0
      || (v14 = (unsigned int)(1 << (a2 & 7)),
          v15 = ((unsigned __int64)(unsigned __int16)a2 >> 3) & 0x3F,
          v22 = 1,
          ((unsigned __int8)v14 & *(_BYTE *)(v15 + v28)) == 0) )
    {
      v22 = 0;
    }
  }
  if ( v22 || (v22 = IsMessageAlwaysAllowedAcrossIL(a2)) != 0 )
  {
LABEL_73:
    v29 = a3;
  }
  else
  {
    v29 = a3;
    if ( a2 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      goto LABEL_80;
    if ( *v19 == gpepCSRSS )
      v118 = 0x2000LL;
    else
      v118 = v19[111];
    v22 = (unsigned __int8)CheckAccess(v12 + 111, &v118);
    v18 = 1;
  }
  if ( v22 )
  {
LABEL_81:
    v30 = a4;
    goto LABEL_82;
  }
  if ( a1 )
  {
    if ( a2 == 793 )
    {
      v14 = a1[2];
      if ( *(_QWORD **)(v14 + 1432) == a1 && *(_QWORD *)(v14 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
      {
LABEL_80:
        v22 = v18;
        goto LABEL_81;
      }
    }
  }
  v30 = a4;
  EtwTraceUIPIMsgError(v12, v19, a2, v29, a4);
  UserSetLastError(5LL);
LABEL_82:
  if ( !v22 )
    return 0LL;
  v13 = Size_4;
LABEL_86:
  v31 = a2;
  if ( a2 == 576 )
  {
    v32 = 20;
  }
  else
  {
    if ( a2 != 281 )
      goto LABEL_91;
    v32 = 21;
  }
  if ( !HMValidateHandle((__int64)v30, v32) )
    return 0LL;
LABEL_91:
  if ( (*((_DWORD *)a6 + 318) & 0x20) == 0 )
    goto LABEL_104;
  v33 = a7;
  if ( a7 )
  {
    if ( (*(_DWORD *)(a7 + 32) & 0x40) != 0 )
      goto LABEL_99;
    if ( *(_DWORD *)a7 == 2 && *(_DWORD *)(a7 + 36) )
      return 0LL;
  }
  if ( v13 )
  {
    v34 = **((_QWORD **)a6 + 53);
    CurrentProcess = PsGetCurrentProcess(a7, v14, v15);
    if ( !PsGetProcessCommonJob(CurrentProcess, v34) )
      return 0LL;
    v31 = a2;
    v33 = a7;
LABEL_99:
    if ( v13 )
      goto LABEL_104;
  }
  if ( !v33
    && (v31 == 537 || !(unsigned int)ProcessSuspendedSendMessage((__int64)a6, (__int64)a1, v31, v29, (__int64)v30))
    || *((_DWORD *)a6 + 134) > 0x2710u )
  {
    return 0LL;
  }
LABEL_104:
  v36 = Win32AllocateFromPagedLookasideList(SMSLookaside);
  v37 = v36;
  v112 = v36;
  if ( !v36 )
    return 0LL;
  v38 = (void **)(v36 + 120);
  v113 = (void **)(v36 + 120);
  *(_QWORD *)(v36 + 120) = 0LL;
  Size = 0;
  v39 = 0;
  v40 = v30;
  v135 = v30;
  *(_DWORD *)(v36 + 128) = *(_DWORD *)(gptiCurrent + 1452LL);
  if ( !a7 || *(_DWORD *)a7 != 33 )
  {
    if ( v31 > 0x143 )
    {
      if ( v31 > 0x283 )
      {
        switch ( v31 )
        {
          case 0x30Cu:
LABEL_153:
            *(_OWORD *)Src = *(_OWORD *)v30;
            v116 = (SHIDWORD(Src[0]) >= 0) + 1;
            v30 = Src;
            a4 = Src;
            if ( _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !Size_4 )
              v39 = HIDWORD(Src[0]) & 0x7FFFFFFF;
            break;
          case 0x341u:
            v39 = 104;
            Size = 104;
            break;
          case 0x342u:
            v39 = 80;
            goto LABEL_157;
          case 0x344u:
            v39 = 1204;
            Size = 1204;
            break;
        }
      }
      else
      {
        if ( v31 != 643 )
        {
          switch ( v31 )
          {
            case 0x145u:
            case 0x18Du:
            case 0x196u:
              goto LABEL_128;
            case 0x148u:
            case 0x189u:
              goto LABEL_153;
            case 0x14Au:
            case 0x14Cu:
            case 0x14Du:
            case 0x158u:
            case 0x180u:
            case 0x181u:
            case 0x18Cu:
            case 0x18Fu:
            case 0x1A2u:
              goto LABEL_127;
            case 0x191u:
            case 0x192u:
LABEL_143:
              v39 = 4 * v29;
              goto LABEL_156;
            case 0x218u:
              if ( v30 && (v29 & 0x8000) != 0 && (v30 < MmSystemRangeStart || !Size_4) )
              {
                v39 = *((_DWORD *)v30 + 4) + 20;
                if ( *((_DWORD *)v30 + 4) >= 0xFFFFFFEC )
                  goto LABEL_131;
              }
              goto LABEL_156;
            case 0x219u:
              if ( v30 && (v29 & 0x8000) != 0 && (v30 < MmSystemRangeStart || !Size_4) )
LABEL_136:
                v39 = *(_DWORD *)v30;
              goto LABEL_156;
            case 0x220u:
              v119 = v30;
              v39 = (*((_DWORD *)v30 + 15) & 0x7FFFFFFF) + (*((_DWORD *)v30 + 19) & 0x7FFFFFFF);
              goto LABEL_156;
            default:
              goto LABEL_156;
          }
        }
        if ( v29 == 24 )
          v39 = (*(_DWORD *)v30 << 9) + 4;
      }
    }
    else if ( v31 == 323 )
    {
LABEL_127:
      if ( *(_DWORD *)(gptiCurrent + 1452LL) != 1 )
      {
LABEL_128:
        *(_OWORD *)Src = *(_OWORD *)v30;
        if ( _mm_srli_si128(*(__m128i *)Src, 8).m128i_u64[0] < (unsigned __int64)MmSystemRangeStart || !Size_4 )
        {
          v39 = LODWORD(Src[0]) + 18;
          if ( (unsigned int)(LODWORD(Src[0]) + 18) < LODWORD(Src[0]) )
          {
LABEL_131:
            Win32FreeToPagedLookasideList(SMSLookaside, v36);
            return 8LL;
          }
        }
      }
    }
    else
    {
      switch ( v31 )
      {
        case 1u:
        case 0x81u:
          UserSetLastError(5LL);
          Win32FreeToPagedLookasideList(SMSLookaside, v112);
          return 0LL;
        case 0xCu:
        case 0x1Au:
        case 0xC2u:
          if ( !v30 )
            break;
          goto LABEL_128;
        case 0xDu:
        case 0xC4u:
          goto LABEL_153;
        case 0x1Bu:
          goto LABEL_128;
        case 0x38u:
          v39 = *(unsigned __int16 *)v30;
          break;
        case 0x46u:
        case 0x47u:
          v39 = 40;
          Size = 40;
          break;
        case 0x49u:
          v39 = v29;
          break;
        case 0x4Au:
          v124 = v30;
          if ( !v30[2] )
          {
            v39 = 24;
            goto LABEL_157;
          }
          v39 = *((_DWORD *)v30 + 2) + 24;
          if ( v39 < 0x18 )
          {
            Win32FreeToPagedLookasideList(SMSLookaside, v36);
            return 0LL;
          }
          break;
        case 0x53u:
          goto LABEL_136;
        case 0x83u:
          v39 = 96;
          if ( !v29 )
            v39 = 16;
          Size = v39;
          break;
        case 0xCBu:
          goto LABEL_143;
        default:
          break;
      }
    }
LABEL_156:
    if ( !v39 )
    {
LABEL_179:
      if ( v39 && !*v38 )
      {
        Win32FreeToPagedLookasideList(SMSLookaside, v37);
        return 0LL;
      }
      if ( a9
        && a1
        && (unsigned int)IsWindowDesktopComposed(a1)
        && v31 - 577 > 3
        && (v31 < 0x245 || v31 > 0x257 || v31 == 589) )
      {
        TransformMessageBetweenCoordinateSpaces(v31, (__int64)a1, 0LL);
        v30 = a4;
      }
      goto LABEL_196;
    }
LABEL_157:
    v42 = (_OWORD *)Win32AllocPoolWithQuotaZInit(v39, 1668510549LL);
    v38 = v113;
    *v113 = v42;
    if ( v42 )
    {
      v120 = v30;
      if ( a2 > 0x143 )
      {
        if ( a2 > 0x30C )
        {
LABEL_176:
          memmove(v42, v40, v39);
          v38 = v113;
LABEL_177:
          v30 = (void **)*v38;
          a4 = (void **)*v38;
        }
        else if ( a2 == 780 )
        {
LABEL_164:
          Size = v39;
          v120 = Src[1];
          Src[1] = *v113;
        }
        else
        {
          switch ( a2 )
          {
            case 0x145u:
            case 0x14Au:
            case 0x14Cu:
            case 0x14Du:
            case 0x158u:
            case 0x180u:
            case 0x181u:
            case 0x18Cu:
            case 0x18Du:
            case 0x18Fu:
            case 0x196u:
            case 0x1A2u:
              goto LABEL_174;
            case 0x148u:
            case 0x189u:
              goto LABEL_164;
            case 0x191u:
              Size = v39;
              goto LABEL_176;
            case 0x220u:
              v46 = v119;
              v47 = v119[10];
              if ( v47 )
              {
                v48 = *((unsigned int *)v119 + 19);
                LODWORD(v48) = v48 & 0x7FFFFFFF;
                memmove(v42, v47, v48);
                v38 = v113;
                *v46 = *v113;
              }
              v49 = v119;
              if ( *((_DWORD *)v119 + 14) )
              {
                v50 = *((unsigned int *)v119 + 19);
                LODWORD(v50) = v50 & 0x7FFFFFFF;
                v51 = (void **)((char *)*v38 + v50);
                v135 = v51;
                v52 = *((unsigned int *)v119 + 15);
                LODWORD(v52) = v52 & 0x7FFFFFFF;
                memmove(v51, v119[8], v52);
                v49[1] = v51;
                v38 = v113;
              }
              break;
            default:
              goto LABEL_176;
          }
        }
      }
      else
      {
        if ( a2 != 323 )
        {
          switch ( a2 )
          {
            case 0xCu:
            case 0x1Au:
            case 0x1Bu:
            case 0xC2u:
              break;
            case 0xDu:
              goto LABEL_164;
            case 0x4Au:
              v30 = (void **)v42;
              a4 = (void **)v42;
              v43 = v124;
              *v42 = *(_OWORD *)v124;
              *((_QWORD *)v42 + 2) = v43[2];
              if ( v43[2] )
              {
                *((_QWORD *)v42 + 2) = (char *)v42 + 24;
                memmove((char *)v42 + 24, v43[2], *((unsigned int *)v43 + 2));
                v38 = v113;
              }
              goto LABEL_178;
            case 0x83u:
              if ( !v29 )
                goto LABEL_176;
              *v42 = *(_OWORD *)v40;
              v42[1] = *((_OWORD *)v40 + 1);
              v42[2] = *((_OWORD *)v40 + 2);
              *((_QWORD *)v42 + 6) = v40[6];
              v44 = (__int64)*v113 + 56;
              *((_QWORD *)v42 + 6) = v44;
              v45 = v40[6];
              *(_OWORD *)v44 = *v45;
              *(_OWORD *)(v44 + 16) = v45[1];
              *(_QWORD *)(v44 + 32) = *((_QWORD *)v45 + 4);
              goto LABEL_177;
            case 0xC4u:
              *(_WORD *)v42 = *(_WORD *)Src[1];
              goto LABEL_164;
            default:
              goto LABEL_176;
          }
        }
LABEL_174:
        v30 = (void **)v42;
        a4 = (void **)v42;
        v53 = HIDWORD(Src[0]) ^ (*((_DWORD *)v42 + 1) ^ HIDWORD(Src[0])) & 0x7FFFFFFF;
        *((_DWORD *)v42 + 1) = v53;
        *(_DWORD *)v42 = Src[0];
        *((_QWORD *)v42 + 1) = v42 + 1;
        v54 = v53 ^ (v53 ^ (v39 - 16)) & 0x7FFFFFFF;
        *((_DWORD *)v42 + 1) = v54;
        LODWORD(v54) = v54 & 0x7FFFFFFF;
        memmove(v42 + 1, Src[1], v54);
        v38 = v113;
      }
    }
LABEL_178:
    v31 = a2;
    v37 = v112;
    goto LABEL_179;
  }
LABEL_196:
  v134 = v112 + 112;
  *(_QWORD *)(v112 + 112) = 0LL;
  v127 = (_QWORD *)(v112 + 16);
  *(_QWORD *)(v112 + 16) = 0LL;
  v136[0] = v112 + 112;
  v136[1] = a1;
  HMAssignmentLock(v136, 0LL);
  v131 = (unsigned int *)(v112 + 104);
  *(_DWORD *)(v112 + 104) = v31;
  v132 = (_WORD *)(v112 + 88);
  *(_QWORD *)(v112 + 88) = v29;
  v122 = (__int64 *)(v112 + 96);
  *(_QWORD *)(v112 + 96) = v30;
  v57 = (int *)(v112 + 84);
  HighLimit[1] = v112 + 84;
  *(_DWORD *)(v112 + 84) = 0;
  v121 = (_QWORD *)(v112 + 72);
  *(_QWORD *)(v112 + 72) = 0LL;
  if ( v31 == 576 || v31 == 281 )
  {
    v58 = _HMObjectFromHandle(v30);
    v59 = a6;
    if ( v58 )
      HMChangeOwnerThread(v58, a6);
  }
  else
  {
    v59 = a6;
  }
  if ( *(_QWORD *)(gsmsList + 8LL) != gsmsList )
    goto LABEL_346;
  *(_QWORD *)v112 = gsmsList;
  v133 = (_QWORD **)(v112 + 8);
  *(_QWORD *)(v112 + 8) = gsmsList;
  *(_QWORD *)(gsmsList + 8LL) = v112;
  gsmsList = v112;
  v60 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(v112 + 80) = v60;
  *(_QWORD *)(v112 + 40) = v59;
  *(_QWORD *)(v112 + 32) = Size_4;
  *(_DWORD *)(v112 + 132) = W32GetCurrentThreadDpiAwarenessContext(v60);
  *(_QWORD *)(v112 + 64) = 0LL;
  if ( a7 && (*(_DWORD *)a7 & 1) != 0 )
  {
    v61 = 1024;
    if ( (*(_DWORD *)a7 & 0x100) == 0 )
      v61 = 2048;
    v62 = *v57 | v61;
    *v57 = v62;
    *(_QWORD *)(v112 + 48) = *(_QWORD *)(a7 + 8);
    *(_QWORD *)(v112 + 56) = *(_QWORD *)(a7 + 16);
    if ( (*(_DWORD *)a7 & 0x20) != 0 )
    {
      *v57 = v62 | 0x200;
      *v121 = *(_QWORD *)(a7 + 24);
    }
    else
    {
      *v57 = v62 | 0x100;
      *(_QWORD *)(v112 + 64) = gptiCurrent;
    }
  }
  if ( a9 )
    *v57 |= 0x10000u;
  v63 = (struct tagTHREADINFO **)*((_QWORD *)v59 + 66);
  if ( *v63 != (struct tagTHREADINFO *)((char *)v59 + 520) )
    goto LABEL_346;
  v64 = v127;
  *v127 = (char *)v59 + 520;
  v130 = (_QWORD **)(v64 + 1);
  v64[1] = v63;
  *v63 = (struct tagTHREADINFO *)v64;
  *((_QWORD *)v59 + 66) = v64;
  v129 = (_DWORD *)((char *)v59 + 536);
  v65 = *((_DWORD *)v59 + 134) + 1;
  *((_DWORD *)v59 + 134) = v65;
  if ( v65 > WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters )
    WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters = v65;
  if ( Size_4 )
  {
    v126 = *(_QWORD *)(Size_4 + 504);
    *(_QWORD *)(Size_4 + 504) = v112;
  }
  else
  {
    *v57 |= 8u;
  }
  if ( (*v57 & 0x200) == 0 )
  {
    if ( v31 - 577 <= 3 )
      goto LABEL_224;
    if ( v31 < 0x245 || v31 > 0x257 || (v66 = 1, v31 == 589) )
      v66 = 0;
    v67 = v66 == 0;
    v68 = 0;
    if ( !v67 )
LABEL_224:
      v68 = 1;
    if ( !v68 || (v69 = 1, v31 == 595) )
      v69 = 0;
    if ( v69 )
      goto LABEL_233;
    if ( v31 != 528 || (v70 = 1, (_WORD)a3 != 582) )
      v70 = 0;
    if ( v70 )
    {
LABEL_233:
      v71 = SGDGetUserSessionState(v31 - 577 <= 3);
      CTouchProcessor::ReferenceMsgDataExternal(*(_QWORD *)(v71 + 3424), a4, 6LL, v112);
    }
  }
  EtwTraceBeginSendMessage(v112, Size_4, a7);
  v72 = *((_DWORD *)a6 + 122) & 1;
  if ( Size_4 )
  {
    v73 = 0;
    v114 = 0;
    v74 = 512;
    v115 = 0;
    if ( !v72 )
    {
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 8LL), 0x40u);
      _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 4LL), 0x40u);
      if ( (*(_DWORD *)(*((_QWORD *)a6 + 56) + 16LL) & 0x40) != 0 )
        KeSetEvent(*((PRKEVENT *)a6 + 92), 2, 0);
    }
    if ( a7 )
    {
      v114 = *(_DWORD *)(a7 + 36);
      v74 = ((*(_DWORD *)(a7 + 32) & 1) << 15) + 512;
    }
    CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v137);
    v75 = a6;
    v76 = Size_4;
    if ( *(_QWORD *)(Size_4 + 432) == *((_QWORD *)a6 + 54) )
    {
      v77 = *(_DWORD *)(Size_4 + 488);
      if ( (v77 & 0x10000) == 0 )
      {
        *(_DWORD *)(Size_4 + 488) = v77 | 0x10000;
        v115 = 1;
      }
    }
    if ( (*v57 & 1) == 0 )
    {
      do
      {
        if ( v73 )
          break;
        v78 = 0LL;
        v138 = 0LL;
        v139 = 0LL;
        v79 = 0;
        _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v76 + 448) + 4LL), 0xFFFFFDFF);
        if ( a2 == 788 )
        {
          if ( a4 )
          {
            if ( *((_DWORD *)v75 + 158) <= 0x501u )
            {
              if ( *((_DWORD *)v75 + 162) )
              {
                v78 = *a4;
                if ( *((_DWORD *)*a4 + 12) == 13 || *((_DWORD *)*a4 + 12) == 14 )
                {
                  ThreadLock(v78, &v138);
                  v79 = 1;
                }
              }
            }
          }
        }
        v73 = xxxRealSleepThread(v74, v114, 0, 0, 0LL) == 0;
        if ( v79 )
        {
          v82 = v78[22] & 0xFFFFFF7F | (v73 << 7);
          v78[22] = v82;
          if ( v73 )
          {
            v83 = v82 ^ ((unsigned __int8)v82 ^ (unsigned __int8)(v82 + 1)) & 0x7F;
            v78[22] = v83;
            if ( (v83 & 0x7Fu) > 0xA )
              v78[16] |= 0x10u;
          }
          ThreadUnlock1(v82, v80, v81);
        }
        if ( v73 && a7 )
        {
          v84 = *(_DWORD *)(a7 + 32);
          v85 = *v57;
          if ( ((v84 & 0x10) != 0 || (v85 & 0x20) != 0) && (v85 & 0x10) != 0 )
          {
            v114 = 0;
            v73 = 0;
          }
          if ( (v84 & 8) != 0 && !IsThreadHungTimeCheck(a6, gdwHungAppTimeout) )
            v73 = 0;
          if ( !v73 )
            EtwTraceConvertTimeOutToBlocking();
        }
        v75 = a6;
        v76 = Size_4;
      }
      while ( (*v57 & 1) == 0 );
      v31 = a2;
    }
    CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v137);
    v86 = Size_4;
    if ( v115 )
    {
      *(_DWORD *)(Size_4 + 488) &= ~0x10000u;
      MergeDeferredMessagesOfThreadOnQueue(Size_4);
    }
    if ( (*(_DWORD *)(Size_4 + 488) & 1) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(Size_4 + 448) + 8LL), 0x200u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(Size_4 + 448) + 4LL), 0x200u);
      if ( (*(_DWORD *)(*(_QWORD *)(Size_4 + 448) + 16LL) & 0x200) != 0 )
        KeSetEvent(*(PRKEVENT *)(Size_4 + 736), 2, 0);
    }
    if ( !v73 )
    {
      if ( Size )
      {
        v87 = v120;
        v125 = v120;
        if ( a2 != 131 )
        {
          v88 = *v113;
          if ( v116 )
          {
            if ( v116 == 1 )
              strncpycch(v120, v88, Size);
            else
              wcsncpycch(v120, (__int64)v88, Size >> 1);
          }
          else
          {
            memmove(v120, v88, Size);
          }
          v89 = 1;
LABEL_303:
          EtwTraceEndSendMessage(v112);
          *(_QWORD *)(v86 + 504) = v126;
          if ( a7 )
          {
            **(_QWORD **)(a7 + 40) = *v121;
            if ( (*(_DWORD *)(a7 + 32) & 0x20) != 0 && (*v57 & 0x8000) != 0 )
            {
              v94 = 0LL;
              UserSetLastError(1400LL);
            }
            else
            {
              v94 = v73 == 0;
            }
          }
          else
          {
            v94 = *v121;
          }
          if ( (a7 || v73) && (*v57 & 1) == 0 )
          {
            v95 = *v57 | 1;
            *v57 = v95;
            if ( (v95 & 0x4000) != 0 )
            {
              *v57 = v95 | 8;
            }
            else
            {
              --*v129;
              v96 = v127;
              v97 = *v127;
              v98 = *v130;
              if ( *(_QWORD **)(*v127 + 8LL) != v127 || (_QWORD *)*v98 != v127 )
                goto LABEL_346;
              *v98 = v97;
              *(_QWORD *)(v97 + 8) = v98;
              *v96 = 0LL;
              *v57 |= 0x10u;
            }
          }
          v99 = *v57;
          if ( (*v57 & 0x4010) != 0x10 )
          {
            v99 |= 8u;
            *v57 = v99;
          }
          if ( (v99 & 0x8008) == 8 )
            return v94;
          v100 = v131;
          v101 = v122;
          if ( *v131 == 576 )
          {
            FreeTouchInputInfo(*v122, 0LL);
          }
          else if ( *v131 == 281 )
          {
            FreeGestureInfo(*v122, 0LL);
          }
          if ( (*v57 & 0x200) == 0 )
          {
            v102 = (_WORD *)*v100;
            if ( (unsigned int)((_DWORD)v102 - 577) <= 3 )
              goto LABEL_330;
            if ( (unsigned int)((_DWORD)v102 - 581) > 0x12 || (v103 = 1, (_DWORD)v102 == 589) )
              v103 = 0;
            v67 = v103 == 0;
            v104 = 0;
            if ( !v67 )
LABEL_330:
              v104 = 1;
            if ( !v104 || (v105 = 1, (_DWORD)v102 == 595) )
              v105 = 0;
            if ( v105 )
              goto LABEL_339;
            if ( (_DWORD)v102 != 528 || (v102 = v132, *v132 != 582) )
              v89 = 0;
            if ( v89 )
            {
LABEL_339:
              v106 = *v101;
              v107 = SGDGetUserSessionState(v102);
              CTouchProcessor::UnreferenceMsgDataExternal(*(_QWORD *)(v107 + 3424), v106, 6LL, v112);
            }
          }
          v108 = *(_QWORD *)v112;
          v109 = *v133;
          if ( *(_QWORD *)(*(_QWORD *)v112 + 8LL) == v112 && *v109 == v112 )
          {
            *v109 = v108;
            *(_QWORD *)(v108 + 8) = v109;
            HMAssignmentUnlock(v134);
            if ( *v113 )
              Win32FreePool(*v113);
            Win32FreeToPagedLookasideList(SMSLookaside, v112);
            return v94;
          }
LABEL_346:
          __fastfail(3u);
        }
        if ( a9 )
        {
          if ( a1 && (unsigned int)IsWindowDesktopComposed(a1) )
          {
            TransformMessageBetweenCoordinateSpaces(a2, 0LL, (__int64)a1);
            v87 = v125;
          }
          v86 = Size_4;
        }
        v90 = *v113;
        v91 = *(_OWORD *)*v113;
        if ( a3 )
        {
          v92 = v87[6];
          *(_OWORD *)v87 = v91;
          *((_OWORD *)v87 + 1) = v90[1];
          *((_OWORD *)v87 + 2) = v90[2];
          v87[6] = v92;
          v93 = *((_QWORD *)v90 + 6);
          v89 = 1;
          if ( v93 )
          {
            *(_OWORD *)v92 = *(_OWORD *)v93;
            *(_OWORD *)(v92 + 16) = *(_OWORD *)(v93 + 16);
            *(_QWORD *)(v92 + 32) = *(_QWORD *)(v93 + 32);
          }
          goto LABEL_303;
        }
        *(_OWORD *)v87 = v91;
      }
      else if ( v31 == 831 && a9 && a1 && (unsigned int)IsWindowDesktopComposed(a1) )
      {
        TransformMessageBetweenCoordinateSpaces(0x33Fu, 0LL, (__int64)a1);
      }
    }
    v89 = 1;
    goto LABEL_303;
  }
  if ( !v72 )
  {
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 8LL), 0x40u);
    _InterlockedOr((volatile signed __int32 *)(*((_QWORD *)a6 + 56) + 4LL), 0x40u);
    if ( (*(_DWORD *)(*((_QWORD *)a6 + 56) + 16LL) & 0x40) != 0 )
      KeSetEvent(*((PRKEVENT *)a6 + 92), 2, 0);
  }
  EtwTraceEndSendMessage(v112);
  return 1LL;
}
