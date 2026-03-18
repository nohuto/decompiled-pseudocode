/*
 * XREFs of GetPointerFlagsFromMouse @ 0x1C01499D0
 * Callers:
 *     <none>
 * Callees:
 *     GetMouseKeyFlags @ 0x1C009CAB0 (GetMouseKeyFlags.c)
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
  unsigned __int16 *v17; // rdx
  unsigned int v18; // ecx
  __int64 v20; // r10
  int v21; // edx
  unsigned __int16 v22; // ax
  int v23; // r11d
  int v24; // r9d
  char v25; // al
  int v26; // ecx
  int v27; // r9d
  int v28; // edx
  int v29; // ecx
  int v30; // edx
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  unsigned int v33; // ebx
  unsigned int v34; // ebx
  unsigned int v35; // ebx
  unsigned int v36; // ebx
  bool v37; // zf
  unsigned int v38; // ebx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  unsigned int v45; // ebx
  unsigned int v46; // ebx
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rsi
  unsigned int v49; // r9d

  v5 = gptiCurrent;
  v8 = a2;
  v10 = (_DWORD *)*((_QWORD *)gptiCurrent + 164);
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
    {
LABEL_24:
      if ( (MouseKeyFlags & 0x73) != 0 )
      {
        if ( v8 - 160 > 0xD )
        {
          if ( v11 )
            v8 -= 352;
        }
        else if ( !v11 )
        {
          v8 += 352;
        }
      }
      goto LABEL_31;
    }
    v14 = v8 - 162;
    v13 = v8 == 162;
  }
  if ( v13 )
    goto LABEL_24;
  v15 = v14 - 3;
  if ( !v15 )
    goto LABEL_24;
  v16 = v15 - 3;
  if ( !v16 || v16 == 4 )
    goto LABEL_24;
LABEL_31:
  v17 = (unsigned __int16 *)&unk_1C0268550;
  v18 = 0;
  while ( *v17 != v8 )
  {
    ++v18;
    v17 += 12;
    if ( v18 >= 0x1C )
      return 0LL;
  }
  v20 = 3LL * v18;
  v21 = *((_DWORD *)&unk_1C0268550 + 6 * v18 + 2);
  if ( (v21 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v21 = *((_DWORD *)&unk_1C0268550 + 6 * v18 + 3);
    v22 = *((_WORD *)&unk_1C0268550 + 12 * v18 + 2);
  }
  else
  {
    v22 = *((_WORD *)&unk_1C0268550 + 12 * v18 + 1);
  }
  v23 = v22;
  v24 = v21;
  *a4 = MouseKeyFlags;
  v25 = *((_BYTE *)&unk_1C0268550 + 24 * v18 + 16);
  if ( v25 )
  {
    if ( v25 == 5 )
    {
      if ( !WORD1(a3) || WORD1(a3) > 2u )
        return 0LL;
      v25 = BYTE2(a3) + 4;
    }
    switch ( v25 )
    {
      case 1:
        v26 = 1;
        break;
      case 2:
        v26 = 2;
        break;
      case 4:
        v26 = 16;
        break;
      case 5:
        v26 = 32;
        break;
      case 6:
        v26 = 64;
        break;
      default:
        v26 = 0;
        break;
    }
    if ( (*((_DWORD *)&unk_1C0268550 + 2 * v20 + 2) & 0x10000) != 0 )
      MouseKeyFlags |= v26;
    else
      MouseKeyFlags &= ~v26;
    *a4 = MouseKeyFlags;
  }
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    v28 = v21 | 4;
    if ( (MouseKeyFlags & 1) != 0 )
      v28 = v24 | 0x14;
    v29 = v28 | 0x20;
    if ( (MouseKeyFlags & 2) == 0 )
      v29 = v28;
    v30 = v29 | 0x40;
    if ( (MouseKeyFlags & 0x10) == 0 )
      v30 = v29;
    v27 = v30 | 0x80;
    if ( (MouseKeyFlags & 0x20) == 0 )
      v27 = v30;
    if ( (MouseKeyFlags & 0x40) != 0 )
      v27 |= 0x100u;
  }
  else
  {
    v23 = *((unsigned __int16 *)&unk_1C0268550 + 4 * v20 + 1);
    v27 = *((_DWORD *)&unk_1C0268550 + 2 * v20 + 2) | v21 & ~*((_DWORD *)&unk_1C0268550 + 2 * v20 + 3);
  }
  *a5 = 0;
  if ( v8 > 0x200 )
  {
    if ( v8 <= 0x207 )
    {
      if ( v8 != 519 )
      {
        v39 = v8 - 513;
        if ( !v39 )
          goto LABEL_94;
        v40 = v39 - 1;
        if ( !v40 )
          goto LABEL_93;
        v41 = v40 - 1;
        if ( !v41 )
          goto LABEL_94;
        v42 = v41 - 1;
        if ( v42 )
        {
          v43 = v42 - 1;
          if ( !v43 )
            goto LABEL_81;
          if ( v43 != 1 )
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
    v38 = v8 - 520;
    v37 = v38 == 0;
LABEL_96:
    if ( v37 )
    {
      *a5 = 6;
      goto LABEL_111;
    }
    v44 = v38 - 1;
    if ( v44 )
    {
      v45 = v44 - 2;
      if ( !v45 )
        goto LABEL_101;
      v46 = v45 - 1;
      if ( !v46 )
      {
        v48 = a3 >> 16;
        if ( (_WORD)v48 == 1 )
        {
          *a5 = 8;
        }
        else if ( (_WORD)v48 == 2 )
        {
          *a5 = 10;
        }
        goto LABEL_111;
      }
      if ( v46 == 1 )
      {
LABEL_101:
        v47 = a3 >> 16;
        if ( (_WORD)v47 == 1 )
        {
          *a5 = 7;
        }
        else if ( (_WORD)v47 == 2 )
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
    v36 = v8 - 167;
    if ( !v36 )
      goto LABEL_109;
    v38 = v36 - 1;
    v37 = v38 == 0;
    goto LABEL_96;
  }
  if ( v8 == 166 )
    goto LABEL_92;
  v31 = v8 - 160;
  if ( !v31 )
    goto LABEL_111;
  v32 = v31 - 1;
  if ( !v32 )
  {
LABEL_94:
    *a5 = 1;
    goto LABEL_111;
  }
  v33 = v32 - 1;
  if ( !v33 )
  {
LABEL_93:
    *a5 = 2;
    goto LABEL_111;
  }
  v34 = v33 - 1;
  if ( !v34 )
    goto LABEL_94;
  v35 = v34 - 1;
  if ( !v35 )
    goto LABEL_92;
  if ( v35 == 1 )
LABEL_81:
    *a5 = 4;
LABEL_111:
  v49 = v27 | 2;
  **((_DWORD **)v5 + 164) ^= (**((_DWORD **)v5 + 164) ^ (32 * *((_DWORD *)&unk_1C0268550 + 2 * v20 + 5))) & 0x20;
  if ( a1 )
    *a1 = v23;
  return v49;
}
