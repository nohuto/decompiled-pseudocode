/*
 * XREFs of ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C007F530
 * Callers:
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C0081160 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C020A370 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C004E7C0 (_tlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 *     GetActiveHKL @ 0x1C007F950 (GetActiveHKL.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0182EDC (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall CKeyboardProcessor::CreateKeyboardInputMessage(
        unsigned __int8 a1,
        __int16 a2,
        unsigned __int16 a3,
        __int16 a4,
        void *a5,
        unsigned int a6,
        bool a7,
        unsigned __int16 a8,
        __int16 a9,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a10,
        struct _MIT_KEYBOARD_INPUT_MESSAGE *a11)
{
  int v15; // r12d
  int v16; // r15d
  int v17; // ebx
  _QWORD *v18; // rax
  __int16 v19; // ax
  unsigned __int128 v20; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v22; // rdx
  LARGE_INTEGER v23; // r8
  LARGE_INTEGER v24; // r9
  __int16 v25; // di
  __int16 v26; // cx
  unsigned __int8 v27; // r14
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // r9
  unsigned __int16 v31; // dx
  unsigned __int8 *v32; // rcx
  __int16 v33; // cx
  _WORD *v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int16 v40; // r12
  _BYTE *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int64 v45; // r14
  int v46; // r15d
  __int64 v47; // rdx
  __int64 v48; // rax
  __int16 v49; // ax
  __int64 v50; // rcx
  _OWORD *v51; // rax
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  int v64; // r8d
  int v65; // r9d
  unsigned __int8 *v66; // rcx
  unsigned __int8 v67; // al
  _BYTE *v68; // rcx
  __int64 v69; // rax
  unsigned __int8 *i; // rcx
  _BYTE *v71; // rcx
  __int16 v73; // [rsp+44h] [rbp-BCh]
  int v74; // [rsp+48h] [rbp-B8h] BYREF
  BOOL v75; // [rsp+4Ch] [rbp-B4h] BYREF
  _OWORD v76[22]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v77; // [rsp+1B0h] [rbp+B0h] BYREF

  v15 = a1;
  v73 = a2;
  memset(v76, 0, sizeof(v76));
  v16 = a3 & 0x8000;
  if ( (_BYTE)a3 == 19 && a2 == 69 )
    v73 = -7907;
  v17 = 0;
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 0x4000LL) )
  {
    v74 = v15;
    *(_QWORD *)&v77 = a5;
    v75 = v16 == 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C02CA7E0,
      (unsigned int)&unk_1C029B4C5,
      v64,
      v65,
      (__int64)&v75,
      (__int64)&v77,
      (__int64)&v74);
  }
  if ( a5 )
  {
    v18 = (_QWORD *)HMValidateHandleNoSecure((int)a5, 19);
    if ( v18 )
      *(_QWORD *)&v76[0] = *v18;
  }
  if ( a10 )
    v77 = *(_OWORD *)a10;
  else
    v77 = 0LL;
  v19 = WORD6(v76[20]);
  if ( (_BYTE)v15 )
    v19 = a9;
  WORD6(v76[20]) = v19;
  DWORD2(v76[20]) = a7;
  v76[21] = v77;
  if ( a6 )
    *((_QWORD *)&v20 + 1) = a6;
  else
    v20 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *((_QWORD *)&v76[19] + 1) = *((_QWORD *)&v20 + 1);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  WORD4(v76[0]) = a4;
  *(LARGE_INTEGER *)&v76[20] = PerformanceCounter;
  v25 = v16 != 0;
  v26 = 256;
  if ( (a8 & 0x100) != 0 || (v26 = 512, (a8 & 0x200) != 0) )
    v25 |= v26;
  if ( (a8 & 0x80u) != 0 )
    v25 |= 0x80u;
  v27 = 103;
  if ( (a3 & 0x2000) != 0 )
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      v28 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))SGDGetUserSessionState)(
              128LL,
              (LARGE_INTEGER)v22.QuadPart,
              (LARGE_INTEGER)v23.QuadPart,
              (LARGE_INTEGER)v24.QuadPart);
      v29 = (unsigned __int8)a3;
      v30 = *(_QWORD *)(v28 + 13840);
      if ( (unsigned int)(unsigned __int8)a3 - 16 <= 2 )
        v29 = 2 * (unsigned __int8)a3 + 128;
      v31 = 0;
      if ( *(_BYTE *)(v30 + 56) )
      {
        while ( *(unsigned __int8 *)(*(_QWORD *)(v30 + 48) + 2LL * v31) != v29 )
        {
          if ( ++v31 >= *(unsigned __int8 *)(v30 + 56) )
            goto LABEL_23;
        }
        v33 = (unsigned __int8)v31;
      }
      else
      {
LABEL_23:
        v32 = *(unsigned __int8 **)(v30 + 64);
        if ( v32 )
        {
          while ( *((_WORD *)v32 + 1) )
          {
            if ( v32[2] == v29 )
            {
              v33 = *v32 | 0xE000;
              goto LABEL_26;
            }
            v32 += 4;
          }
        }
        v66 = *(unsigned __int8 **)(v30 + 72);
        if ( v66 )
        {
          while ( *((_WORD *)v66 + 1) )
          {
            if ( v66[2] == v29 )
            {
              v33 = *v66 | 0xE100;
              goto LABEL_26;
            }
            v66 += 4;
            if ( !v66 )
              break;
          }
        }
        v67 = 103;
        v68 = &aVkNumpad;
        while ( v67 != v29 )
        {
          v67 = *++v68;
          if ( !*v68 )
          {
            v33 = 0;
            goto LABEL_26;
          }
        }
        v33 = (_WORD)v68 - (unsigned __int16)&aVkNumpad + 71;
      }
LABEL_26:
      v73 = v33;
      v34 = &ausNumPadCvt;
      v35 = 0LL;
      while ( *(_BYTE *)v34 != (_BYTE)a3 )
      {
        ++v35;
        v34 = (_WORD *)((char *)&ausNumPadCvt + 2 * v35);
        if ( !*v34 )
          goto LABEL_29;
      }
      v25 |= 2u;
    }
LABEL_29:
    v25 |= 0x40u;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v25 |= 0x20u;
  }
  if ( ((GetActiveHKL() & 0x3FF) == 0x11 || (GetActiveHKL() & 0x3FF) == 0x12) && (a3 & 0x400) != 0 )
  {
    v69 = SGDGetUserSessionState(v37, v36, v38, v39);
    v38 = (unsigned __int8)a3;
    v39 = *(_QWORD *)(v69 + 13840);
    if ( (unsigned int)(unsigned __int8)a3 - 16 <= 2 )
      v38 = 2 * (unsigned int)(unsigned __int8)a3 + 128;
    v36 = 0LL;
    if ( *(_BYTE *)(v39 + 56) )
    {
      while ( *(unsigned __int8 *)(*(_QWORD *)(v39 + 48) + 2LL * (unsigned __int16)v36) != (_DWORD)v38 )
      {
        LOWORD(v36) = v36 + 1;
        if ( (unsigned __int16)v36 >= *(unsigned __int8 *)(v39 + 56) )
          goto LABEL_75;
      }
      v37 = (unsigned __int16)v36;
    }
    else
    {
LABEL_75:
      i = *(unsigned __int8 **)(v39 + 64);
      if ( i )
      {
        while ( *((_WORD *)i + 1) )
        {
          if ( i[2] == (_DWORD)v38 )
          {
LABEL_89:
            v37 = *i;
            goto LABEL_91;
          }
          i += 4;
        }
      }
      for ( i = *(unsigned __int8 **)(v39 + 72); i; i += 4 )
      {
        if ( !*((_WORD *)i + 1) )
          break;
        if ( i[2] == (_DWORD)v38 )
          goto LABEL_89;
      }
      v36 = (unsigned __int64)&aVkNumpad;
      v71 = &aVkNumpad;
      while ( v27 != (_DWORD)v38 )
      {
        v27 = *++v71;
        if ( !*v71 )
        {
          v37 = 0LL;
          goto LABEL_91;
        }
      }
      v37 = (unsigned int)v71 - (unsigned int)&aVkNumpad + 71;
    }
LABEL_91:
    v40 = v73;
    if ( (_BYTE)v37 != (_BYTE)v73 )
      v40 = 0;
  }
  else
  {
    v40 = v73;
  }
  WORD6(v76[0]) = (unsigned __int8)a3;
  WORD5(v76[0]) = v40;
  HIWORD(v76[16]) = (a3 >> 7) & 2 | v25;
  v41 = (char *)v76 + 14;
  do
  {
    v42 = SGDGetUserSessionState(v37, v36, v38, v39);
    v45 = (unsigned __int64)(unsigned __int8)v17 >> 2;
    v46 = v17 & 3;
    v47 = (unsigned int)(1 << (2 * v46));
    if ( ((unsigned __int8)v47 & *(_BYTE *)(v45 + v42 + 13992)) != 0 )
      *v41 |= 0x80u;
    v48 = SGDGetUserSessionState((unsigned int)(2 * v46), v47, v43, v44);
    v37 = (unsigned int)(2 * v46 + 1);
    v36 = (unsigned int)(1 << (2 * v46 + 1));
    if ( ((unsigned __int8)v36 & *(_BYTE *)(v48 + v45 + 13992)) != 0 )
      *v41 |= 1u;
    ++v17;
    ++v41;
  }
  while ( v17 < 256 );
  v49 = WORD2(v76[17]);
  v50 = 2LL;
  if ( (_BYTE)a3 == 0xE7 )
    v49 = v40;
  WORD2(v76[17]) = v49;
  v51 = v76;
  do
  {
    v52 = v51[1];
    *(_OWORD *)a11 = *v51;
    v53 = v51[2];
    *((_OWORD *)a11 + 1) = v52;
    v54 = v51[3];
    *((_OWORD *)a11 + 2) = v53;
    v55 = v51[4];
    *((_OWORD *)a11 + 3) = v54;
    v56 = v51[5];
    *((_OWORD *)a11 + 4) = v55;
    v57 = v51[6];
    *((_OWORD *)a11 + 5) = v56;
    v58 = v51[7];
    v51 += 8;
    *((_OWORD *)a11 + 6) = v57;
    a11 = (struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a11 + 128);
    *((_OWORD *)a11 - 1) = v58;
    --v50;
  }
  while ( v50 );
  v59 = v51[1];
  *(_OWORD *)a11 = *v51;
  v60 = v51[2];
  *((_OWORD *)a11 + 1) = v59;
  v61 = v51[3];
  *((_OWORD *)a11 + 2) = v60;
  v62 = v51[4];
  *((_OWORD *)a11 + 3) = v61;
  v63 = v51[5];
  *((_OWORD *)a11 + 4) = v62;
  *((_OWORD *)a11 + 5) = v63;
}
