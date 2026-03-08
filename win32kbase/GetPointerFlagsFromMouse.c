/*
 * XREFs of GetPointerFlagsFromMouse @ 0x1C0155800
 * Callers:
 *     <none>
 * Callees:
 *     GetMouseKeyFlags @ 0x1C00B96D0 (GetMouseKeyFlags.c)
 */

__int64 __fastcall GetPointerFlagsFromMouse(_DWORD *a1, unsigned int a2, unsigned __int64 a3, int *a4, _DWORD *a5)
{
  struct tagTHREADINFO *v5; // rbp
  unsigned int v8; // ebx
  _DWORD *v10; // rax
  int v11; // edi
  bool v12; // zf
  unsigned int v13; // eax
  int MouseKeyFlags; // r8d
  int v15; // ecx
  bool v16; // zf
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned __int16 *i; // rdx
  __int64 v22; // r10
  int v23; // edx
  unsigned __int16 v24; // ax
  int v25; // r11d
  unsigned __int8 v26; // cl
  int v27; // edi
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // r9d
  int v36; // edx
  int v37; // ecx
  int v38; // edx
  unsigned int v39; // ebx
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  unsigned int v42; // ebx
  unsigned int v43; // ebx
  unsigned int v44; // ebx
  bool v45; // zf
  unsigned int v46; // ebx
  unsigned int v47; // ebx
  unsigned int v48; // ebx
  unsigned int v49; // ebx
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  unsigned int v52; // ebx
  unsigned int v53; // ebx
  unsigned int v54; // ebx
  unsigned __int64 v55; // rsi
  unsigned __int64 v56; // rsi
  unsigned int v57; // r9d

  v5 = gptiCurrent;
  v8 = a2;
  v10 = (_DWORD *)*((_QWORD *)gptiCurrent + 169);
  v11 = -__CFSHR__(*v10, 4);
  if ( __CFSHR__(*v10, 4) )
  {
    if ( a2 > 0x206 )
    {
      if ( a2 == 519 || a2 == 520 || a2 == 521 )
        goto LABEL_10;
      v13 = a2 - 523;
      v12 = a2 == 523;
    }
    else
    {
      if ( a2 == 518 || a2 == 512 || a2 == 513 || a2 == 514 )
        goto LABEL_10;
      v13 = a2 - 515;
      v12 = a2 == 515;
    }
    if ( v12 || v13 - 1 <= 1 )
LABEL_10:
      v8 = a2 - 352;
  }
  MouseKeyFlags = GetMouseKeyFlags(*((unsigned __int8 **)gptiCurrent + 54));
  switch ( v8 )
  {
    case 0xA1u:
      goto LABEL_28;
    case 0xA4u:
      goto LABEL_27;
    case 0xA7u:
      goto LABEL_26;
  }
  if ( v8 != 171 )
  {
    if ( v8 != 513 )
    {
      if ( v8 != 516 )
      {
        if ( v8 != 519 )
        {
          if ( v8 != 523 )
            goto LABEL_29;
          goto LABEL_19;
        }
LABEL_26:
        MouseKeyFlags &= ~0x10u;
        goto LABEL_29;
      }
LABEL_27:
      MouseKeyFlags &= ~2u;
      goto LABEL_29;
    }
LABEL_28:
    MouseKeyFlags &= ~1u;
    goto LABEL_29;
  }
LABEL_19:
  v15 = 32;
  if ( WORD1(a3) != 1 )
    v15 = 64;
  MouseKeyFlags &= ~v15;
LABEL_29:
  if ( v8 > 0x200 )
  {
    v16 = v8 == 514;
    v17 = v8 - 514;
  }
  else
  {
    if ( v8 == 512 || v8 == 160 )
    {
LABEL_37:
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
      goto LABEL_44;
    }
    v17 = v8 - 162;
    v16 = v8 == 162;
  }
  if ( v16 )
    goto LABEL_37;
  v18 = v17 - 3;
  if ( !v18 )
    goto LABEL_37;
  v19 = v18 - 3;
  if ( !v19 || v19 == 4 )
    goto LABEL_37;
LABEL_44:
  v20 = 0LL;
  for ( i = (unsigned __int16 *)&unk_1C02A1DD0; *i != v8; i += 12 )
  {
    v20 = (unsigned int)(v20 + 1);
    if ( (unsigned int)v20 >= 0x1C )
      return 0LL;
  }
  v22 = 3 * v20;
  v23 = *((_DWORD *)&unk_1C02A1DD0 + 6 * v20 + 2);
  if ( (v23 & 0x10000) == 0 || (MouseKeyFlags & 0x73) != 0 )
  {
    v23 = *((_DWORD *)&unk_1C02A1DD0 + 6 * v20 + 3);
    v24 = *((_WORD *)&unk_1C02A1DD0 + 12 * v20 + 2);
  }
  else
  {
    v24 = *((_WORD *)&unk_1C02A1DD0 + 12 * v20 + 1);
  }
  *a4 = MouseKeyFlags;
  v25 = v23;
  v26 = *((_BYTE *)&unk_1C02A1DD0 + 24 * v20 + 16);
  v27 = v24;
  if ( v26 )
  {
    if ( v26 == 5 )
    {
      if ( WORD1(a3) != 1 && WORD1(a3) != 2 )
        return 0LL;
      v26 = BYTE2(a3) + 4;
    }
    v29 = v26 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 2;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            if ( v32 == 1 )
              v33 = 64;
            else
              v33 = 0;
          }
          else
          {
            v33 = 32;
          }
        }
        else
        {
          v33 = 16;
        }
      }
      else
      {
        v33 = 2;
      }
    }
    else
    {
      v33 = 1;
    }
    if ( (*((_DWORD *)&unk_1C02A1DD0 + 2 * v22 + 2) & 0x10000) != 0 )
    {
      MouseKeyFlags |= v33;
      *a4 = MouseKeyFlags;
    }
    else
    {
      v34 = MouseKeyFlags & ~v33;
      LOBYTE(MouseKeyFlags) = v34;
      *a4 = v34;
    }
  }
  if ( (MouseKeyFlags & 0x73) != 0 )
  {
    v36 = v23 | 4;
    if ( (MouseKeyFlags & 1) != 0 )
      v36 = v25 | 0x14;
    v37 = v36 | 0x20;
    if ( (MouseKeyFlags & 2) == 0 )
      v37 = v36;
    v38 = v37 | 0x40;
    if ( (MouseKeyFlags & 0x10) == 0 )
      v38 = v37;
    v35 = v38 | 0x80;
    if ( (MouseKeyFlags & 0x20) == 0 )
      v35 = v38;
    if ( (MouseKeyFlags & 0x40) != 0 )
      v35 |= 0x100u;
  }
  else
  {
    v27 = *((unsigned __int16 *)&unk_1C02A1DD0 + 4 * v22 + 1);
    v35 = *((_DWORD *)&unk_1C02A1DD0 + 2 * v22 + 2) | v23 & ~*((_DWORD *)&unk_1C02A1DD0 + 2 * v22 + 3);
  }
  *a5 = 0;
  if ( v8 > 0x200 )
  {
    if ( v8 <= 0x207 )
    {
      if ( v8 != 519 )
      {
        v47 = v8 - 513;
        if ( !v47 )
          goto LABEL_107;
        v48 = v47 - 1;
        if ( !v48 )
          goto LABEL_106;
        v49 = v48 - 1;
        if ( !v49 )
          goto LABEL_107;
        v50 = v49 - 1;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( !v51 )
            goto LABEL_94;
          if ( v51 != 1 )
            goto LABEL_124;
        }
LABEL_105:
        *a5 = 3;
        goto LABEL_124;
      }
LABEL_122:
      *a5 = 5;
      goto LABEL_124;
    }
    v46 = v8 - 520;
    v45 = v46 == 0;
LABEL_109:
    if ( v45 )
    {
      *a5 = 6;
      goto LABEL_124;
    }
    v52 = v46 - 1;
    if ( v52 )
    {
      v53 = v52 - 2;
      if ( !v53 )
        goto LABEL_114;
      v54 = v53 - 1;
      if ( !v54 )
      {
        v56 = a3 >> 16;
        if ( (_WORD)v56 == 1 )
        {
          *a5 = 8;
        }
        else if ( (_WORD)v56 == 2 )
        {
          *a5 = 10;
        }
        goto LABEL_124;
      }
      if ( v54 == 1 )
      {
LABEL_114:
        v55 = a3 >> 16;
        if ( (_WORD)v55 == 1 )
        {
          *a5 = 7;
        }
        else if ( (_WORD)v55 == 2 )
        {
          *a5 = 9;
        }
      }
      goto LABEL_124;
    }
    goto LABEL_122;
  }
  if ( v8 == 512 )
    goto LABEL_124;
  if ( v8 > 0xA6 )
  {
    v44 = v8 - 167;
    if ( !v44 )
      goto LABEL_122;
    v46 = v44 - 1;
    v45 = v46 == 0;
    goto LABEL_109;
  }
  if ( v8 == 166 )
    goto LABEL_105;
  v39 = v8 - 160;
  if ( !v39 )
    goto LABEL_124;
  v40 = v39 - 1;
  if ( !v40 )
  {
LABEL_107:
    *a5 = 1;
    goto LABEL_124;
  }
  v41 = v40 - 1;
  if ( !v41 )
  {
LABEL_106:
    *a5 = 2;
    goto LABEL_124;
  }
  v42 = v41 - 1;
  if ( !v42 )
    goto LABEL_107;
  v43 = v42 - 1;
  if ( !v43 )
    goto LABEL_105;
  if ( v43 == 1 )
LABEL_94:
    *a5 = 4;
LABEL_124:
  v57 = v35 | 2;
  **((_DWORD **)v5 + 169) ^= (**((_DWORD **)v5 + 169) ^ (32 * *((_DWORD *)&unk_1C02A1DD0 + 2 * v22 + 5))) & 0x20;
  if ( a1 )
    *a1 = v27;
  return v57;
}
