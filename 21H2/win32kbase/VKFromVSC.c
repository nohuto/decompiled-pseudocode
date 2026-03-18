/*
 * XREFs of VKFromVSC @ 0x1C00CD590
 * Callers:
 *     ProcessKeyboardInjectedInput @ 0x1C00053AC (ProcessKeyboardInjectedInput.c)
 *     NtMITSynthesizeKeyboardInput @ 0x1C0005F10 (NtMITSynthesizeKeyboardInput.c)
 *     ProcessKeyboardInputWorker @ 0x1C01E9C00 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     GetActiveHKL @ 0x1C003F290 (GetActiveHKL.c)
 *     GetModifierBits @ 0x1C003FFA0 (GetModifierBits.c)
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x1C004FF00 (-IsWinstaLessSession@@YA_NXZ.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, char a2)
{
  __int16 v3; // bx
  __int16 ActiveHKL; // si
  unsigned __int8 v6; // cl
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int16 v10; // ax
  unsigned __int8 v11; // cl
  unsigned __int16 ModifierBits; // ax
  __int64 v13; // rcx
  __int64 v14; // rdx

  v3 = 255;
  *((_WORD *)a1 + 1) = 255;
  ActiveHKL = GetActiveHKL();
  if ( ((*(_DWORD *)gpsi & 4) != 0 || IsWinstaLessSession()) && (unsigned __int16)((ActiveHKL & 0x3FF) - 17) <= 1u )
  {
    v11 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      v6 = v11 | 0x80;
      a2 = -32;
    }
    else
    {
      v6 = v11 & 0x7F;
    }
    *a1 = v6;
  }
  else
  {
    *a1 &= ~0x80u;
    v6 = *a1;
  }
  if ( gptiForeground && (v7 = *((_QWORD *)gptiForeground + 55)) != 0 )
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL);
  else
    v8 = gpKbdTbl;
  if ( !a2 )
  {
    if ( v6 < *(_BYTE *)(v8 + 56) )
    {
      v3 = *(_WORD *)(*(_QWORD *)(v8 + 48) + 2LL * v6);
      if ( v3 )
        goto LABEL_19;
    }
    goto LABEL_25;
  }
  if ( a2 == -32 )
  {
    v3 = 511;
    if ( v6 == 42 || v6 == 54 )
      goto LABEL_34;
    v9 = *(_QWORD *)(v8 + 64);
    goto LABEL_12;
  }
  if ( a2 != -31 )
  {
LABEL_25:
    LOBYTE(v10) = -1;
    return v10;
  }
  v9 = *(_QWORD *)(v8 + 72);
LABEL_12:
  if ( v9 )
  {
    while ( *(_WORD *)(v9 + 2) )
    {
      if ( *(_BYTE *)v9 == v6 )
      {
        v3 = *(_WORD *)(v9 + 2);
        break;
      }
      v9 += 4LL;
    }
  }
LABEL_19:
  if ( dword_1C029D860 )
  {
    dword_1C029D860 = 0;
LABEL_34:
    LOBYTE(v10) = 0;
    return v10;
  }
  if ( v3 == 19 )
  {
    *a1 = 69;
    dword_1C029D860 = 1;
  }
  else if ( (v3 & 0x200) != 0 )
  {
    ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_VK_STANDARD, (__int64)gafRawKeyState);
    if ( ModifierBits <= (unsigned __int16)word_1C028F018 )
    {
      _mm_lfence();
      v13 = *((unsigned __int8 *)&Modifiers_VK_STANDARD + ModifierBits + 10);
      if ( (_BYTE)v13 != 15 )
      {
        v14 = *((_QWORD *)gapulCvt_VK + v13);
        if ( v14 )
        {
          while ( *(_DWORD *)v14 )
          {
            if ( *(_BYTE *)v14 == (_BYTE)v3 )
            {
              v10 = *(_WORD *)(v14 + 2);
              *((_WORD *)a1 + 1) = v10;
              return v10;
            }
            v14 += 4LL;
          }
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v3;
  LOBYTE(v10) = v3;
  return v10;
}
