/*
 * XREFs of xxxInternalToUnicode @ 0x1C003FB30
 * Callers:
 *     xxxToUnicodeEx @ 0x1C003FA20 (xxxToUnicodeEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HKLtoPKL @ 0x1C003FF30 (HKLtoPKL.c)
 *     GetModifierBits @ 0x1C003FFA0 (GetModifierBits.c)
 *     WPP_RECORDER_AND_TRACE_SF_hD @ 0x1C003FFFC (WPP_RECORDER_AND_TRACE_SF_hD.c)
 *     InternalVkKeyScanEx @ 0x1C0040B30 (InternalVkKeyScanEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01EA740 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_hDhD @ 0x1C01EAB70 (WPP_RECORDER_AND_TRACE_SF_hDhD.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C02064DC (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionMessageBeep @ 0x1C02097E8 (ApiSetEditionMessageBeep.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        unsigned int a1,
        __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  int *v13; // rcx
  int v14; // ebp
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned __int16 v19; // bx
  int v20; // r13d
  __int64 result; // rax
  unsigned __int16 ModifierBits; // ax
  int v23; // r8d
  char v24; // r10
  PDEVICE_OBJECT *v25; // rdx
  unsigned __int16 v26; // r14
  char v27; // di
  __int64 v28; // r9
  __int64 v29; // rcx
  char *v30; // rbx
  unsigned __int8 v31; // r8
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rbp
  struct tagKL *v35; // r14
  struct DEADKEY *v36; // rdx
  __int16 v37; // ax
  __int64 v38; // rcx
  unsigned int v39; // eax
  int v40; // edx
  PDEVICE_OBJECT v41; // rcx
  __int16 v42; // ax
  int v43; // ebp
  int v44; // ebp
  __int16 v45; // bx
  char v46; // al
  char v47; // al
  __int16 v48; // r10
  int v49; // edx
  int v50; // r9d
  unsigned __int16 v51; // dx
  char *v52; // rcx
  char v53; // al
  char v54; // dl
  int v55; // ebp
  int v56; // ebx
  unsigned __int16 *v57; // rsi
  unsigned __int16 v58; // dx
  int v59; // eax
  int v60; // [rsp+20h] [rbp-78h]
  char v61[4]; // [rsp+28h] [rbp-70h]
  int v62; // [rsp+38h] [rbp-60h]
  char v63; // [rsp+40h] [rbp-58h]
  char v64; // [rsp+48h] [rbp-50h]
  struct tagKL *v65; // [rsp+68h] [rbp-30h]

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v13 = a7;
  v14 = a2 & 0x8000;
  v15 = ThreadWin32Thread;
  *a7 = v14;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  if ( a8 || (v17 = *(_QWORD *)(ThreadWin32Thread + 440), (v65 = (struct tagKL *)v17) == 0LL) )
  {
    v16 = HKLtoPKL(ThreadWin32Thread, a8);
    v65 = (struct tagKL *)v16;
    v17 = v16;
    if ( !v16 )
      return 0LL;
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 32LL);
    v13 = a7;
  }
  else
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 32LL);
  }
  v19 = word_1C0296EAC;
  v20 = a2 & 0x1FF;
  if ( v14 )
  {
    if ( a1 != 18 )
    {
      if ( a1 == (unsigned __int16)word_1C0296EB0 )
        word_1C0296EB0 = 0;
      goto LABEL_6;
    }
    if ( !word_1C0296EAC )
    {
      if ( byte_1C0296EAE )
        byte_1C0296EAE = 0;
      goto LABEL_6;
    }
    if ( byte_1C0296EAE == 3 )
      goto LABEL_73;
    if ( byte_1C0296EAE )
    {
      v38 = *(unsigned __int16 *)(v17 + 72);
    }
    else
    {
      if ( (*(_DWORD *)(v15 + 488) & 8) != 0 )
      {
        *v13 = v14 | 0x4000000;
LABEL_73:
        *a4 = v19;
LABEL_86:
        gfInNumpadHexInput &= ~2u;
        result = 1LL;
        word_1C0296EB0 = 0;
        byte_1C0296EAE = 0;
        word_1C0296EAC = 0;
        return result;
      }
      v38 = NlsOemCodePage;
    }
    v39 = (unsigned __int16)v38;
    if ( (unsigned __int16)(v38 - 932) <= 0x12u && (v40 = 393233, LOWORD(v39) = v38 - 932, _bittest(&v40, v39)) )
    {
      if ( (word_1C0296EAC & 0xFF00) != 0 )
      {
        v19 = _byteswap_ushort(word_1C0296EAC);
        word_1C0296EAC = v19;
      }
      else if ( ((_WORD)v38 != 932 || (unsigned __int16)(word_1C0296EAC - 161) > 0x3Eu)
             && (unsigned __int16)(word_1C0296EAC - 128) <= 0x7Fu )
      {
        v38 = 1252LL;
      }
    }
    else
    {
      HIBYTE(word_1C0296EAC) = 0;
      v19 = word_1C0296EAC;
    }
    *a4 = ApiSetEditionClientCharToWchar(v38, v19, 932LL, 0LL);
    goto LABEL_86;
  }
LABEL_6:
  if ( (v14 & 0x8000) != 0 && (a6 & 2) == 0 )
    return 0LL;
  ModifierBits = GetModifierBits(*(_QWORD *)v18, a3, v17, 0LL);
  v24 = a6;
  v25 = &WPP_GLOBAL_Control;
  v26 = ModifierBits;
  v27 = 1;
  if ( !v14 && (ModifierBits & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
      goto LABEL_49;
    if ( !gfEnableHexNumpad )
    {
LABEL_45:
      if ( (unsigned int)(v20 - 71) <= 0xB )
      {
        v43 = (unsigned __int8)aVkNumpad[v20 - 71];
        if ( v43 == 255 )
          goto LABEL_49;
        v44 = v43 - 96;
      }
      else
      {
        if ( (gfInNumpadHexInput & 2) == 0 )
          goto LABEL_49;
        if ( a1 < 0x41 )
        {
          if ( a1 < 0x30 || a1 > 0x39 )
            goto LABEL_49;
          v44 = a1 - 48;
        }
        else
        {
          if ( a1 > 0x46 )
            goto LABEL_49;
          v44 = a1 - 55;
        }
      }
      if ( v44 < 0 )
      {
LABEL_49:
        word_1C0296EB0 = 0;
        v26 = ModifierBits & 0xFFFB;
        byte_1C0296EAE = 0;
        gfInNumpadHexInput &= ~2u;
        word_1C0296EAC = 0;
        goto LABEL_11;
      }
      if ( (unsigned __int16)word_1C0296EB0 == a1 )
        return 0LL;
      if ( (unsigned __int8)(byte_1C0296EAE - 2) > 1u )
      {
        word_1C0296EAC = v44 + 10 * v19;
        if ( !word_1C0296EAC )
        {
          v46 = byte_1C0296EAE;
          if ( !v44 )
            v46 = 1;
          byte_1C0296EAE = v46;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
          || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v25) = 0;
        }
        if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v25,
            v23,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            16,
            20,
            (__int64)&WPP_b629efd1997c37e0b825559eed89807c_Traceguids,
            v19);
          v19 = word_1C0296EAC;
        }
        v45 = v44 + 16 * v19;
        word_1C0296EAC = v45;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
          || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v25) = 0;
        }
        if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v25,
            v23,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            16,
            21,
            (__int64)&WPP_b629efd1997c37e0b825559eed89807c_Traceguids,
            v45);
        }
      }
LABEL_99:
      v24 = a6;
      word_1C0296EB0 = a1;
      goto LABEL_11;
    }
    if ( v20 == 83 )
    {
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_49;
      byte_1C0296EAE = 2;
      gfInNumpadHexInput |= 2u;
      v41 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v25) = 0;
      }
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_99;
      v42 = 18;
    }
    else
    {
      if ( v20 != 78 )
        goto LABEL_45;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_49;
      byte_1C0296EAE = 3;
      gfInNumpadHexInput |= 2u;
      v41 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || (LOBYTE(v25) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v25) = 0;
      }
      LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v25 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_99;
      v42 = 19;
    }
    WPP_RECORDER_AND_TRACE_SF_(
      v41->AttachedDevice,
      (_DWORD)v25,
      v23,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      16,
      v42,
      (__int64)&WPP_b629efd1997c37e0b825559eed89807c_Traceguids);
    goto LABEL_99;
  }
LABEL_11:
  if ( a1 == 8 && (*(_DWORD *)(v18 + 80) & 4) != 0 )
  {
    v28 = a3;
    v47 = *(_BYTE *)(a3 + 40);
    if ( (v47 & 1) != 0 )
    {
      v37 = 8206;
      goto LABEL_41;
    }
    if ( (v47 & 4) != 0 )
    {
      v37 = 8207;
      goto LABEL_41;
    }
  }
  else
  {
    if ( (_WORD)a1 == 231 && !(_BYTE)v20 )
    {
      *a4 = *((_WORD *)gptiCurrent + 437);
      return 1LL;
    }
    v28 = a3;
  }
  v29 = *(_QWORD *)(v18 + 8);
  if ( !v29 )
    return 0LL;
LABEL_17:
  v30 = *(char **)v29;
  if ( !*(_QWORD *)v29 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v30 )
    {
      v29 += 16LL;
      goto LABEL_17;
    }
    if ( *v30 == (_BYTE)a1 )
      break;
    v30 += *(unsigned __int8 *)(v29 + 9);
  }
  v31 = v30[1];
  if ( (v31 & 8) != 0 && (*(_BYTE *)(v28 + 5) & 8) != 0 )
  {
    v26 |= 8u;
  }
  else if ( (((v26 & 0xFFFE) == 0) & v31) != 0 && (*(_BYTE *)(v28 + 5) & 2) != 0
         || (v31 & 4) != 0 && (v26 & 6) == 6 && (*(_BYTE *)(v28 + 5) & 2) != 0 )
  {
    v26 ^= 1u;
  }
  if ( (v31 & 2) != 0 && (v26 & 0xFFFE) == 0 && (*(_BYTE *)(v28 + 5) & 2) != 0 )
    v30 += *(unsigned __int8 *)(v29 + 9);
  if ( v26 > *(_WORD *)(*(_QWORD *)v18 + 8LL) )
    return 0LL;
  _mm_lfence();
  v32 = *(unsigned __int8 *)(v26 + *(_QWORD *)v18 + 10LL);
  if ( (_DWORD)v32 == 15 )
    return 0LL;
  if ( (unsigned __int16)v32 >= *(unsigned __int8 *)(v29 + 8)
    || (v33 = *(unsigned __int16 *)&v30[2 * v32 + 2],
        v28 = 61440LL,
        v34 = *(unsigned __int8 *)(v26 + *(_QWORD *)v18 + 10LL),
        (_WORD)v33 == 0xF000) )
  {
    if ( ((v26 - 2) & 0xFFF6) != 0 )
      return 0LL;
    if ( a1 <= 0x5A && a1 >= 0x41 )
    {
      *a4 = a1 & 0x1F;
      return 1LL;
    }
    if ( a1 < 0xFF61 || a1 > 0xFF91 )
      return 0LL;
    v37 = InternalVkKeyScanEx((unsigned __int16)a1, v18, v32, v28) & 0x1F;
    goto LABEL_41;
  }
  if ( (_WORD)v33 == 0xF001 )
  {
    v35 = v65;
    v30 += *(unsigned __int8 *)(v29 + 9);
    v48 = *((_WORD *)v65 + 37);
    if ( v48 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v33) = 0;
      }
      LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v33 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v50 = *(unsigned __int16 *)&v30[2 * v34 + 2];
        WPP_RECORDER_AND_TRACE_SF_hDhD(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          v32,
          v50,
          v60,
          *(_DWORD *)v61,
          23,
          v62,
          v48,
          v48,
          *(_WORD *)&v30[2 * v34 + 2],
          v50);
      }
      if ( !qword_1C029CA08 || (qword_1C029CA08(1024LL, v33, v32) & 0x8000) == 0 )
        goto LABEL_39;
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v27 = 0;
      }
      if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v49 = 22;
        v63 = *(_WORD *)&v30[2 * v34 + 2];
        LOBYTE(v49) = v27;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_hD(
          WPP_GLOBAL_Control->AttachedDevice,
          v49,
          v32,
          61440,
          v60,
          *(_DWORD *)v61,
          22,
          v62,
          v63,
          v63);
      }
    }
    v51 = *(_WORD *)&v30[2 * v34 + 2];
    *a4 = v51;
    if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
      *((_WORD *)v65 + 37) = v51;
    return 0xFFFFFFFFLL;
  }
  else
  {
    if ( (_WORD)v33 != 0xF002 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) == 0
        || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v28) = 0;
      }
      if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v64 = *(_WORD *)&v30[2 * v32 + 2];
        LOBYTE(v33) = v28;
        LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_hD(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          v32,
          v28,
          v60,
          *(_DWORD *)v61,
          24,
          v62,
          v64,
          v64);
      }
      v35 = v65;
LABEL_39:
      v36 = *(struct DEADKEY **)(v18 + 16);
      if ( v36 && *((_WORD *)v35 + 37) )
      {
        result = ComposeDeadKeys(v35, v36, *(_WORD *)&v30[2 * v34 + 2], a4, a5, a6, *a7 & 0x8000);
        if ( (_DWORD)result )
          *a7 |= 0x8000000u;
        return result;
      }
      v37 = *(_WORD *)&v30[2 * v34 + 2];
LABEL_41:
      *a4 = v37;
      return 1LL;
    }
    if ( !*(_WORD *)(v18 + 82) || (v52 = *(char **)(v18 + 88)) == 0LL || (v53 = *v52) == 0 )
    {
LABEL_183:
      ApiSetEditionMessageBeep();
      return 0LL;
    }
    v54 = *v30;
    v55 = 0;
    v56 = 0;
    while ( v53 != v54 || *((_WORD *)v52 + 1) != (_WORD)v32 )
    {
      v52 += *(unsigned __int8 *)(v18 + 85);
      v53 = *v52;
      if ( !*v52 )
        goto LABEL_183;
    }
    if ( *(_BYTE *)(v18 + 84) )
    {
      v57 = (unsigned __int16 *)(v52 + 4);
      do
      {
        if ( v56 >= a5 )
          break;
        v58 = *v57;
        if ( *v57 == 0xF000 )
          break;
        if ( *((_WORD *)v65 + 37) )
        {
          v59 = ComposeDeadKeys(v65, *(struct DEADKEY **)(v18 + 16), v58, &a4[v56], a5 - v56, v24, *a7 & 0x8000);
          if ( v59 > 0 )
            v56 += v59;
        }
        else
        {
          a4[v56++] = v58;
        }
        ++v55;
        v24 = a6;
        ++v57;
      }
      while ( v55 < *(unsigned __int8 *)(v18 + 84) );
      if ( v56 )
        *a7 |= 0x8000000u;
    }
    return (unsigned int)v56;
  }
}
