/*
 * XREFs of GetPointerFlagsFromMouse @ 0x1C011DE80
 * Callers:
 *     <none>
 * Callees:
 *     GetMouseKeyFlags @ 0x1C0093C50 (GetMouseKeyFlags.c)
 */

__int64 __fastcall GetPointerFlagsFromMouse(_DWORD *a1, unsigned int a2, unsigned __int64 a3, _DWORD *a4, _DWORD *a5)
{
  struct tagTHREADINFO *v5; // rbp
  unsigned int v8; // ebx
  _DWORD *v10; // rax
  int v11; // edi
  int MouseKeyFlags; // r8d
  bool v13; // zf
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned __int16 *v18; // rdx
  __int64 v19; // r10
  int v20; // r11d
  unsigned __int16 v21; // ax
  unsigned int v22; // eax
  int v23; // edi
  char v24; // al
  int v25; // ecx
  int v26; // r9d
  int v27; // ecx
  int v28; // edx
  unsigned int v29; // ebx
  unsigned int v30; // ebx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  bool v35; // zf
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rsi
  unsigned int v47; // r9d

  v5 = gptiCurrent;
  v8 = a2;
  v10 = (_DWORD *)*((_QWORD *)gptiCurrent + 160);
  v11 = -__CFSHR__(*v10, 4);
  if ( __CFSHR__(*v10, 4) && a2 >= 0x200 && (a2 <= 0x209 || a2 - 523 <= 2) )
    v8 = a2 - 352;
  MouseKeyFlags = GetMouseKeyFlags(*((unsigned __int8 **)gptiCurrent + 54));
  if ( v8 != 161 )
  {
    switch ( v8 )
    {
      case 0xA4u:
LABEL_14:
        MouseKeyFlags &= ~2u;
        goto LABEL_16;
      case 0xA7u:
LABEL_13:
        MouseKeyFlags &= ~0x10u;
        goto LABEL_16;
      case 0xABu:
        goto LABEL_16;
    }
    if ( v8 != 513 )
    {
      if ( v8 != 516 )
      {
        if ( v8 != 519 )
          goto LABEL_16;
        goto LABEL_13;
      }
      goto LABEL_14;
    }
  }
  MouseKeyFlags &= ~1u;
LABEL_16:
  if ( v8 > 0x200 )
  {
    v13 = v8 == 514;
    v14 = v8 - 514;
  }
  else
  {
    if ( v8 == 512 || v8 == 160 )
      goto LABEL_33;
    v14 = v8 - 162;
    v13 = v8 == 162;
  }
  if ( !v13 )
  {
    v15 = v14 - 3;
    if ( v15 )
    {
      v16 = v15 - 3;
      if ( v16 )
      {
        if ( v16 != 4 )
        {
          v17 = 0;
          goto LABEL_25;
        }
      }
    }
  }
LABEL_33:
  v17 = 0;
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    if ( v8 - 160 > 0xD )
    {
      if ( v11 )
        v8 -= 352;
    }
    else
    {
      v22 = v8 + 352;
      if ( v11 )
        v22 = v8;
      v8 = v22;
    }
  }
LABEL_25:
  v18 = (unsigned __int16 *)&unk_1C02251D0;
  do
  {
    if ( *v18 == v8 )
      break;
    ++v17;
    v18 += 12;
  }
  while ( v17 < 0x1C );
  if ( v17 >= 0x1C )
    return 0LL;
  v19 = 3LL * v17;
  v20 = *((_DWORD *)&unk_1C02251D0 + 6 * v17 + 2);
  if ( (v20 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v20 = *((_DWORD *)&unk_1C02251D0 + 6 * v17 + 3);
    v21 = *((_WORD *)&unk_1C02251D0 + 12 * v17 + 2);
  }
  else
  {
    v21 = *((_WORD *)&unk_1C02251D0 + 12 * v17 + 1);
  }
  v23 = v21;
  *a4 = MouseKeyFlags;
  v24 = *((_BYTE *)&unk_1C02251D0 + 24 * v17 + 16);
  if ( v24 )
  {
    if ( v24 != 5 )
    {
LABEL_46:
      switch ( v24 )
      {
        case 1:
          v25 = 1;
          break;
        case 2:
          v25 = 2;
          break;
        case 4:
          v25 = 16;
          break;
        case 5:
          v25 = 32;
          break;
        case 6:
          v25 = 64;
          break;
        default:
          v25 = 0;
          break;
      }
      if ( (*((_DWORD *)&unk_1C02251D0 + 2 * v19 + 2) & 0x10000) != 0 )
        MouseKeyFlags |= v25;
      else
        MouseKeyFlags &= ~v25;
      *a4 = MouseKeyFlags;
      goto LABEL_61;
    }
    if ( WORD1(a3) && WORD1(a3) <= 2u )
    {
      v24 = BYTE2(a3) + 4;
      goto LABEL_46;
    }
    return 0LL;
  }
LABEL_61:
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    v27 = v20 | (16 * (MouseKeyFlags & 1) + 4) | 0x20;
    if ( (MouseKeyFlags & 2) == 0 )
      v27 = v20 | (16 * (MouseKeyFlags & 1) + 4);
    v28 = v27 | 0x40;
    if ( (MouseKeyFlags & 0x10) == 0 )
      v28 = v27;
    v26 = v28 | 0x80;
    if ( (MouseKeyFlags & 0x20) == 0 )
      v26 = v28;
    if ( (MouseKeyFlags & 0x40) != 0 )
      v26 |= 0x100u;
  }
  else
  {
    v23 = *((unsigned __int16 *)&unk_1C02251D0 + 4 * v19 + 1);
    v26 = *((_DWORD *)&unk_1C02251D0 + 2 * v19 + 2) | v20 & ~*((_DWORD *)&unk_1C02251D0 + 2 * v19 + 3);
  }
  *a5 = 0;
  if ( v8 > 0x200 )
  {
    if ( v8 <= 0x207 )
    {
      if ( v8 != 519 )
      {
        v37 = v8 - 513;
        if ( !v37 )
          goto LABEL_94;
        v38 = v37 - 1;
        if ( !v38 )
          goto LABEL_93;
        v39 = v38 - 1;
        if ( !v39 )
          goto LABEL_94;
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( !v41 )
            goto LABEL_81;
          if ( v41 != 1 )
            goto LABEL_111;
        }
LABEL_92:
        *a5 = 3;
        goto LABEL_111;
      }
LABEL_109:
      *a5 = 5;
      goto LABEL_111;
    }
    v36 = v8 - 520;
    v35 = v36 == 0;
LABEL_96:
    if ( v35 )
    {
      *a5 = 6;
      goto LABEL_111;
    }
    v42 = v36 - 1;
    if ( v42 )
    {
      v43 = v42 - 2;
      if ( !v43 )
        goto LABEL_101;
      v44 = v43 - 1;
      if ( !v44 )
      {
        v46 = a3 >> 16;
        if ( (_WORD)v46 == 1 )
        {
          *a5 = 8;
        }
        else if ( (_WORD)v46 == 2 )
        {
          *a5 = 10;
        }
        goto LABEL_111;
      }
      if ( v44 == 1 )
      {
LABEL_101:
        v45 = a3 >> 16;
        if ( (_WORD)v45 == 1 )
        {
          *a5 = 7;
        }
        else if ( (_WORD)v45 == 2 )
        {
          *a5 = 9;
        }
      }
      goto LABEL_111;
    }
    goto LABEL_109;
  }
  if ( v8 == 512 )
    goto LABEL_111;
  if ( v8 > 0xA6 )
  {
    v34 = v8 - 167;
    if ( !v34 )
      goto LABEL_109;
    v36 = v34 - 1;
    v35 = v36 == 0;
    goto LABEL_96;
  }
  if ( v8 == 166 )
    goto LABEL_92;
  v29 = v8 - 160;
  if ( !v29 )
    goto LABEL_111;
  v30 = v29 - 1;
  if ( !v30 )
  {
LABEL_94:
    *a5 = 1;
    goto LABEL_111;
  }
  v31 = v30 - 1;
  if ( !v31 )
  {
LABEL_93:
    *a5 = 2;
    goto LABEL_111;
  }
  v32 = v31 - 1;
  if ( !v32 )
    goto LABEL_94;
  v33 = v32 - 1;
  if ( !v33 )
    goto LABEL_92;
  if ( v33 == 1 )
LABEL_81:
    *a5 = 4;
LABEL_111:
  v47 = v26 | 2;
  **((_DWORD **)v5 + 160) ^= (**((_DWORD **)v5 + 160) ^ (32 * *((_DWORD *)&unk_1C02251D0 + 2 * v19 + 5))) & 0x20;
  if ( a1 )
    *a1 = v23;
  return v47;
}
