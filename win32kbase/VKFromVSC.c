/*
 * XREFs of VKFromVSC @ 0x1C021B5D0
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C00087B0 (NtMITSynthesizeKeyboardInput.c)
 *     ProcessKeyboardInjectedInput @ 0x1C000E730 (ProcessKeyboardInjectedInput.c)
 *     ProcessKeyboardInputWorker @ 0x1C021A7E0 (ProcessKeyboardInputWorker.c)
 * Callees:
 *     GetModifierBits @ 0x1C0002C40 (GetModifierBits.c)
 *     GetActiveHKL @ 0x1C007F950 (GetActiveHKL.c)
 *     ?IsWinstaLessSession@@YA_NXZ @ 0x1C0082864 (-IsWinstaLessSession@@YA_NXZ.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, char a2)
{
  __int16 v3; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int16 ActiveHKL; // si
  __int64 v8; // r9
  __int64 v9; // r8
  char v10; // cl
  __int64 v11; // rax
  __int64 v12; // rax
  __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned __int16 ModifierBits; // ax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  __int64 v26; // rdx

  v3 = 255;
  *((_WORD *)a1 + 1) = 255;
  ActiveHKL = GetActiveHKL();
  v9 = *(unsigned int *)gpsi;
  if ( ((v9 & 4) != 0 || IsWinstaLessSession()) && (unsigned __int16)((ActiveHKL & 0x3FF) - 17) <= 1u )
  {
    v10 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      LOBYTE(v6) = v10 | 0x80;
      a2 = -32;
    }
    else
    {
      LOBYTE(v6) = v10 & 0x7F;
    }
    *a1 = v6;
  }
  else
  {
    *a1 &= ~0x80u;
  }
  if ( gptiForeground && (v11 = *((_QWORD *)gptiForeground + 55)) != 0 )
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 32LL);
  else
    v12 = *(_QWORD *)(SGDGetUserSessionState(v6, v5, v9, v8) + 13840);
  if ( a2 )
  {
    if ( a2 == -32 )
    {
      LOBYTE(v6) = *a1;
      v3 = 511;
      if ( *a1 == 42 || (_BYTE)v6 == 54 )
        goto LABEL_32;
      v14 = *(_QWORD *)(v12 + 64);
    }
    else
    {
      if ( a2 != -31 )
      {
LABEL_16:
        LOBYTE(v13) = -1;
        return v13;
      }
      v14 = *(_QWORD *)(v12 + 72);
    }
    if ( v14 && *(_WORD *)(v14 + 2) )
    {
      LOBYTE(v6) = *a1;
      while ( *(_BYTE *)v14 != (_BYTE)v6 )
      {
        v14 += 4LL;
        if ( !*(_WORD *)(v14 + 2) )
          goto LABEL_30;
      }
      v3 = *(_WORD *)(v14 + 2);
    }
  }
  else
  {
    v6 = *a1;
    if ( (unsigned __int8)v6 >= *(_BYTE *)(v12 + 56) )
      goto LABEL_16;
    v3 = *(_WORD *)(*(_QWORD *)(v12 + 48) + 2 * v6);
    if ( !v3 )
      goto LABEL_16;
  }
LABEL_30:
  if ( *(_DWORD *)(SGDGetUserSessionState(v6, v5, v9, v8) + 13772) )
  {
    *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 13772) = 0;
LABEL_32:
    LOBYTE(v13) = 0;
    return v13;
  }
  if ( v3 == 19 )
  {
    *a1 = 69;
    *(_DWORD *)(SGDGetUserSessionState(v16, v15, v17, v18) + 13772) = 1;
  }
  else if ( (v3 & 0x200) != 0 )
  {
    v19 = SGDGetUserSessionState(v16, v15, v17, v18);
    ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_VK_STANDARD, v19 + 14056);
    if ( ModifierBits <= 4u )
    {
      _mm_lfence();
      v25 = *((unsigned __int8 *)&Modifiers_VK_STANDARD + ModifierBits + 10);
      if ( (_BYTE)v25 != 15 )
      {
        v26 = *(_QWORD *)(*(_QWORD *)(SGDGetUserSessionState(v22, v21, v23, v24) + 13760) + 8 * v25);
        if ( v26 )
        {
          while ( *(_DWORD *)v26 )
          {
            if ( *(_BYTE *)v26 == (_BYTE)v3 )
            {
              v13 = *(_WORD *)(v26 + 2);
              *((_WORD *)a1 + 1) = v13;
              return v13;
            }
            v26 += 4LL;
          }
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v3;
  LOBYTE(v13) = v3;
  return v13;
}
