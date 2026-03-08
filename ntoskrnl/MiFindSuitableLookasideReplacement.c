/*
 * XREFs of MiFindSuitableLookasideReplacement @ 0x1402C7240
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiReplaceStandbyLookaside @ 0x1402C6D1C (MiReplaceStandbyLookaside.c)
 * Callees:
 *     MiPageStandbyLookasideStatus @ 0x1402C7560 (MiPageStandbyLookasideStatus.c)
 *     MiPurgingPageFromLookaside @ 0x1402C75C0 (MiPurgingPageFromLookaside.c)
 *     MiSetStandbyLookasideState @ 0x1402C7730 (MiSetStandbyLookasideState.c)
 *     MiIsDecayPfn @ 0x140319ED0 (MiIsDecayPfn.c)
 *     MiGetStandbyPageType @ 0x14064E190 (MiGetStandbyPageType.c)
 */

__int64 __fastcall MiFindSuitableLookasideReplacement(int a1, _QWORD *a2, int a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // edi
  __int64 v8; // r15
  __int64 v9; // r14
  int v10; // r13d
  __int64 v11; // r10
  int StandbyPageType; // ecx
  unsigned __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r11
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  ULONG_PTR v22; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r10
  unsigned __int64 v29; // r11
  int v30; // eax
  unsigned __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rcx
  int v34; // [rsp+20h] [rbp-48h]
  int v35; // [rsp+70h] [rbp+8h]
  __int64 v37; // [rsp+88h] [rbp+20h]

  v37 = a4;
  v5 = 0;
  v8 = 0LL;
  v9 = 0x3FFFFFFFFFLL;
  v10 = 0;
  v11 = a4;
  if ( a1 )
    StandbyPageType = 0;
  else
    StandbyPageType = MiGetStandbyPageType(0xAAAAAAAAAAAAAAABuLL * ((a4 + 0x220000000000LL) >> 4));
  v35 = StandbyPageType;
  v13 = 0LL;
  v34 = StandbyPageType;
  v14 = 0x3FFFFFFFFFLL;
LABEL_4:
  v15 = a5;
  while ( 1 )
  {
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v19 = v13 + 1;
        if ( !v10 )
          v11 += 24LL;
        v18 = *(_QWORD *)v11 & 0xFFFFFFFFFFLL;
      }
      else
      {
        if ( v10 )
        {
          v16 = ((*(_QWORD *)v11 >> 20) | *(_QWORD *)(v11 + 40) & 0xF80000000000000uLL) >> 20;
          v17 = 8LL * (*(_DWORD *)(v11 + 36) & 0xFFE00000);
        }
        else
        {
          v16 = (*(_QWORD *)(v11 + 24) >> 40) & 0x7FFFFLL;
          v17 = (unsigned __int64)(*(_DWORD *)(v11 + 36) & 0x1FFFFF) << 19;
        }
        v18 = v17 | v16;
        v19 = v13 + 1;
      }
    }
    else
    {
      v19 = v13 + 1;
      v24 = v10 ? *(_QWORD *)(v11 + 24) : *(_QWORD *)v11;
      v25 = v24 & 0xFFFFFFFFFFLL;
      v18 = v25;
      if ( v25 == 0x3FFFFFFFFFLL )
      {
        v14 = 0x3FFFFFFFFFLL;
      }
      else
      {
        if ( (unsigned int)MiIsDecayPfn(v25, v15, v25, 48 * v25 - 0x220000000000LL) )
        {
          v15 = a5;
          if ( !a5 || v29 > 1 )
          {
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
            {
              a4 = v37;
              v14 = 0x3FFFFFFFFFLL;
              goto LABEL_48;
            }
            if ( v8 )
              _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v8 = v27;
          }
          if ( v34 == 2 )
          {
            v30 = MiGetStandbyPageType(v26);
            a4 = v37;
            v14 = 0x3FFFFFFFFFLL;
            v34 = v30;
LABEL_22:
            v11 = 48 * v18 - 0x220000000000LL;
            if ( v13 >= 0x10 )
              goto LABEL_30;
            StandbyPageType = v35;
            goto LABEL_4;
          }
          v31 = *(_QWORD *)(8 * v28 - 0x21FFFFFFFFF0LL);
          if ( qword_140C657C0 && (v31 & 0x10) == 0 )
            v31 &= ~qword_140C657C0;
          v18 = (v31 >> 12) & 0xFFFFFFFFFFLL;
        }
        v32 = MiGetStandbyPageType(v18);
        StandbyPageType = v35;
        v14 = 0x3FFFFFFFFFLL;
        v15 = a5;
        a4 = v37;
        v34 = v32;
      }
    }
    if ( v18 == v14 )
      goto LABEL_49;
    if ( (_DWORD)v15 && v19 <= 1 )
      goto LABEL_13;
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(48 * v18 - 0x220000000000LL + 24), 0x3FuLL) )
      break;
LABEL_48:
    StandbyPageType = v35;
LABEL_49:
    if ( v10 )
      goto LABEL_30;
    if ( v8 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v8 = 0LL;
    }
    v10 = 1;
    v34 = StandbyPageType;
    v13 = 0LL;
    StandbyPageType = v35;
    v11 = 16 * ((a4 + 0x220000000000LL) >> 4) - 0x220000000000LL;
  }
  if ( v8 )
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v8 = 48 * v18 - 0x220000000000LL;
LABEL_13:
  if ( !a1 && (unsigned int)MiIsDecayPfn(v18, v15, v14, a4) )
  {
    v34 = MiGetStandbyPageType(v33);
    goto LABEL_22;
  }
  if ( (unsigned int)MiPageStandbyLookasideStatus(v18) != 1 )
  {
    v20 = 0;
    v21 = a2;
    while ( 1 )
    {
      if ( *v21 == v18 )
        goto LABEL_22;
      if ( v21[1] == v18 )
      {
        ++v20;
        goto LABEL_21;
      }
      if ( v21[2] == v18 )
        break;
      if ( v21[3] == v18 )
      {
        v20 += 3;
LABEL_21:
        if ( v20 == 64 )
          goto LABEL_24;
        goto LABEL_22;
      }
      v21 += 4;
      v20 += 4;
      if ( v20 >= 0x40 )
        goto LABEL_21;
    }
    v20 += 2;
    goto LABEL_21;
  }
LABEL_24:
  v22 = a2[a3];
  a2[a3] = v18;
  if ( v22 != -1LL && (v22 < qword_140C67DE0 || v22 >= qword_140C67DE0 + 2048) )
    MiPurgingPageFromLookaside(3LL, v22);
  if ( v18 < qword_140C67DE0 || v18 >= qword_140C67DE0 + 2048 )
    MiSetStandbyLookasideState(v18, 1LL);
  v9 = v18;
LABEL_30:
  if ( v8 )
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v5) = v9 != 0x3FFFFFFFFFLL;
  return v5;
}
