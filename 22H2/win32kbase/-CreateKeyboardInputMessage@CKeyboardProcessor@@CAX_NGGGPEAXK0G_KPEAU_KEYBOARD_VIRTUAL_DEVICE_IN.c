/*
 * XREFs of ?CreateKeyboardInputMessage@CKeyboardProcessor@@CAX_NGGGPEAXK0G_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@PEAU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1C004EA48
 * Callers:
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C004CEE0 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0_KPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A1F80 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0046930 (HMValidateHandleNoSecure.c)
 *     _tlgKeywordOn @ 0x1C004BCA0 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C013E504 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
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
  int v14; // r13d
  int v15; // r12d
  int v16; // ebx
  __int128 *v17; // rax
  __int128 v18; // xmm0
  __int16 v19; // ax
  __int16 v20; // dx
  __int64 v21; // r12
  int v22; // r9d
  unsigned __int16 v23; // r8
  unsigned __int8 *v24; // rcx
  __int16 v25; // cx
  __int64 v26; // rcx
  __int16 *v27; // rax
  _BYTE *v28; // rdx
  int v29; // r9d
  __int16 v30; // ax
  _OWORD *v31; // rax
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  unsigned __int8 *v44; // rcx
  unsigned __int8 v45; // r8
  char *v46; // rcx
  int v47; // r8d
  int v48; // r9d
  _QWORD *v49; // rax
  int v52; // [rsp+44h] [rbp-BCh] BYREF
  BOOL v53; // [rsp+48h] [rbp-B8h] BYREF
  void *v54; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v55[22]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v56; // [rsp+1C0h] [rbp+C0h] BYREF
  __int128 v57; // [rsp+1D0h] [rbp+D0h] BYREF

  v14 = a1;
  memset(v55, 0, sizeof(v55));
  v15 = a3 & 0x8000;
  if ( (_BYTE)a3 == 19 && a2 == 69 )
    a2 = -7907;
  v16 = 0;
  if ( (unsigned int)dword_1C024AA90 > 4 && tlgKeywordOn((__int64)&dword_1C024AA90, 0x4000LL) )
  {
    v52 = v14;
    v54 = a5;
    v53 = v15 == 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1C024AA90,
      (unsigned int)&unk_1C021E1CF,
      v47,
      v48,
      (__int64)&v53,
      (__int64)&v54,
      (__int64)&v52);
  }
  if ( a5 )
  {
    v49 = (_QWORD *)HMValidateHandleNoSecure((unsigned __int64)a5, 19);
    if ( v49 )
      *(_QWORD *)&v55[0] = *v49;
  }
  if ( a10 )
  {
    v17 = &v56;
    v56 = *(_OWORD *)a10;
  }
  else
  {
    v17 = &v57;
    v57 = 0LL;
  }
  v18 = *v17;
  v19 = WORD6(v55[20]);
  if ( (_BYTE)v14 )
    v19 = a9;
  WORD6(v55[20]) = v19;
  DWORD2(v55[20]) = a7;
  v55[21] = v18;
  if ( a6 )
    *((_QWORD *)&v55[19] + 1) = a6;
  else
    *((_QWORD *)&v55[19] + 1) = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  *(LARGE_INTEGER *)&v55[20] = KeQueryPerformanceCounter(0LL);
  WORD4(v55[0]) = a4;
  v20 = v15 != 0;
  if ( (a8 & 0x100) != 0 )
  {
    v20 |= 0x100u;
  }
  else if ( (a8 & 0x200) != 0 )
  {
    v20 |= 0x200u;
  }
  if ( (a8 & 0x80u) != 0 )
    v20 |= 0x80u;
  v21 = 2LL;
  if ( (a3 & 0x2000) != 0 )
  {
    if ( (unsigned __int8)(a3 - 127) > 1u )
    {
      v22 = (unsigned __int8)a3;
      if ( (unsigned int)(unsigned __int8)a3 - 16 <= 2 )
        v22 = 2 * (unsigned __int8)a3 + 128;
      v23 = 0;
      if ( *(_BYTE *)(gpKbdTbl + 56) )
      {
        while ( *(unsigned __int8 *)(*(_QWORD *)(gpKbdTbl + 48) + 2LL * v23) != v22 )
        {
          if ( ++v23 >= *(unsigned __int8 *)(gpKbdTbl + 56) )
            goto LABEL_22;
        }
        v25 = (unsigned __int8)v23;
      }
      else
      {
LABEL_22:
        v24 = *(unsigned __int8 **)(gpKbdTbl + 64);
        if ( v24 )
        {
          while ( *((_WORD *)v24 + 1) )
          {
            if ( v24[2] == v22 )
            {
              v25 = *v24 | 0xE000;
              goto LABEL_27;
            }
            v24 += 4;
          }
        }
        v44 = *(unsigned __int8 **)(gpKbdTbl + 72);
        if ( v44 )
        {
          while ( *((_WORD *)v44 + 1) )
          {
            if ( v44[2] == v22 )
            {
              v25 = *v44 | 0xE100;
              goto LABEL_27;
            }
            v44 += 4;
            if ( !v44 )
              break;
          }
        }
        v45 = aVkNumpad[0];
        v46 = aVkNumpad;
        if ( aVkNumpad[0] )
        {
          while ( v45 != v22 )
          {
            v45 = *++v46;
            if ( !*v46 )
              goto LABEL_48;
          }
          v25 = (_WORD)v46 - (unsigned __int16)aVkNumpad + 71;
        }
        else
        {
LABEL_48:
          v25 = 0;
        }
      }
LABEL_27:
      a2 = v25;
      if ( ausNumPadCvt[0] )
      {
        v26 = 0LL;
        v27 = ausNumPadCvt;
        while ( *(_BYTE *)v27 != (_BYTE)a3 )
        {
          v27 = &ausNumPadCvt[++v26];
          if ( !*v27 )
            goto LABEL_31;
        }
        v20 |= 2u;
      }
    }
LABEL_31:
    v20 |= 0x40u;
  }
  else if ( (a3 & 0x1000) != 0 )
  {
    v20 |= 0x20u;
  }
  WORD6(v55[0]) = (unsigned __int8)a3;
  WORD5(v55[0]) = a2;
  HIWORD(v55[16]) = (a3 >> 7) & 2 | v20;
  v28 = (char *)v55 + 14;
  do
  {
    v29 = *((unsigned __int8 *)&gafAsyncKeyState + ((unsigned __int64)(unsigned __int8)v16 >> 2));
    if ( _bittest(&v29, (unsigned __int8)(2 * (v16 & 3))) )
      *v28 |= 0x80u;
    if ( _bittest(&v29, (unsigned __int8)(2 * (v16 & 3) + 1)) )
      *v28 |= 1u;
    ++v16;
    ++v28;
  }
  while ( v16 < 256 );
  v30 = WORD2(v55[17]);
  if ( (_BYTE)a3 == 0xE7 )
    v30 = a2;
  WORD2(v55[17]) = v30;
  v31 = v55;
  do
  {
    v32 = v31[1];
    *(_OWORD *)a11 = *v31;
    v33 = v31[2];
    *((_OWORD *)a11 + 1) = v32;
    v34 = v31[3];
    *((_OWORD *)a11 + 2) = v33;
    v35 = v31[4];
    *((_OWORD *)a11 + 3) = v34;
    v36 = v31[5];
    *((_OWORD *)a11 + 4) = v35;
    v37 = v31[6];
    *((_OWORD *)a11 + 5) = v36;
    v38 = v31[7];
    v31 += 8;
    *((_OWORD *)a11 + 6) = v37;
    a11 = (struct _MIT_KEYBOARD_INPUT_MESSAGE *)((char *)a11 + 128);
    *((_OWORD *)a11 - 1) = v38;
    --v21;
  }
  while ( v21 );
  v39 = v31[1];
  *(_OWORD *)a11 = *v31;
  v40 = v31[2];
  *((_OWORD *)a11 + 1) = v39;
  v41 = v31[3];
  *((_OWORD *)a11 + 2) = v40;
  v42 = v31[4];
  *((_OWORD *)a11 + 3) = v41;
  v43 = v31[5];
  *((_OWORD *)a11 + 4) = v42;
  *((_OWORD *)a11 + 5) = v43;
}
