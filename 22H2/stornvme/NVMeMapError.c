/*
 * XREFs of NVMeMapError @ 0x1C00010FC
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00030F0 (NVMeCompletionDpcRoutine.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C0001008 (NVMeIsAllowedWithinThrottleLimit.c)
 *     GetSrbScsiData @ 0x1C0004498 (GetSrbScsiData.c)
 *     GetLunExtension @ 0x1C0004630 (GetLunExtension.c)
 *     GetSrbExtension @ 0x1C0005A44 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C0005A70 (NVMeZeroMemory.c)
 *     NVMeAdminCommandErrorLog @ 0x1C0006790 (NVMeAdminCommandErrorLog.c)
 *     memmove @ 0x1C0007D80 (memmove.c)
 */

char __fastcall NVMeMapError(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v7; // rdx
  __int64 SrbExtension; // r13
  char v9; // si
  __int64 v10; // r9
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // r15d
  unsigned int v18; // edx
  int v19; // edx
  __int64 LunExtension; // rdi
  unsigned int v21; // edx
  int v22; // ecx
  bool v23; // zf
  char v24; // al
  int v25; // ecx
  bool v26; // zf
  unsigned int v27; // edx
  char v28; // al
  char *v29; // rdi
  unsigned int v30; // ebx
  __int128 Src; // [rsp+D8h] [rbp-80h] BYREF
  __int16 v33; // [rsp+E8h] [rbp-70h]
  unsigned int v34; // [rsp+F0h] [rbp-68h] BYREF
  _BYTE v35[4]; // [rsp+F4h] [rbp-64h] BYREF
  __int128 v36; // [rsp+F8h] [rbp-60h]
  __int128 v37; // [rsp+118h] [rbp-40h]
  __int128 v38; // [rsp+128h] [rbp-30h]
  char *v39; // [rsp+138h] [rbp-20h] BYREF
  void *v40; // [rsp+140h] [rbp-18h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v9 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v10 = 0LL;
  v11 = *(_OWORD *)(SrbExtension + 4096);
  v35[0] = 0;
  v12 = *(_OWORD *)(SrbExtension + 4144);
  v34 = 0;
  v36 = v11;
  v13 = *(_OWORD *)(SrbExtension + 4128);
  v38 = v12;
  v23 = (*(_BYTE *)(SrbExtension + 4253) & 1) == 0;
  v37 = v13;
  Src = 0LL;
  v33 = 0;
  if ( !v23 )
  {
    if ( (unsigned __int8)v36 > 0x11u )
    {
      if ( (unsigned __int8)v36 < 0x19u )
        goto LABEL_20;
      if ( (unsigned __int8)v36 <= 0x1Au )
      {
        LOBYTE(v14) = NVMeIsAllowedWithinThrottleLimit(a1, 3, &v34);
        if ( !(_BYTE)v14 )
          goto LABEL_21;
      }
      else
      {
        if ( (unsigned __int8)v36 == 128 )
          goto LABEL_17;
        if ( (unsigned int)(unsigned __int8)v36 - 129 > 1 )
          goto LABEL_20;
        LOBYTE(v14) = NVMeIsAllowedWithinThrottleLimit(a1, 4, &v34);
        if ( !(_BYTE)v14 )
          goto LABEL_21;
      }
      LunExtension = GetLunExtension(a1, DWORD1(v36));
      LOBYTE(v14) = StorPortExtendedFunction(87LL, a1, LunExtension, 1LL);
      goto LABEL_21;
    }
    switch ( (unsigned __int8)v36 )
    {
      case 0x11u:
        goto LABEL_17;
      case 2u:
        v14 = BYTE8(v37) - 192;
        if ( v14 <= 1 )
          goto LABEL_21;
        if ( BYTE8(v37) != 2 )
          goto LABEL_37;
        v19 = 6;
        break;
      case 9u:
        if ( BYTE8(v37) != 2 )
        {
LABEL_37:
          v7 = a2;
          goto LABEL_20;
        }
        v19 = 7;
        break;
      case 0xAu:
        LOBYTE(v14) = BYTE8(v37);
        if ( BYTE8(v37) == 208 || BYTE8(v37) == 2 )
          goto LABEL_21;
        break;
      case 0x10u:
LABEL_17:
        LOBYTE(v14) = StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
        goto LABEL_21;
      default:
LABEL_20:
        LOBYTE(v14) = NVMeAdminCommandErrorLog(a1, v7, a4, v10);
        goto LABEL_21;
    }
    LOBYTE(v14) = NVMeIsAllowedWithinThrottleLimit(a1, v19, &v34);
    if ( !(_BYTE)v14 )
      goto LABEL_21;
    v10 = v34;
    goto LABEL_37;
  }
  if ( !(_BYTE)v36 )
  {
    LOBYTE(v14) = NVMeIsAllowedWithinThrottleLimit(a1, 0, &v34);
    if ( !(_BYTE)v14 )
      goto LABEL_21;
    goto LABEL_10;
  }
  LOBYTE(v14) = v36 - 1;
  if ( (unsigned __int8)v36 == 1 )
  {
    LOBYTE(v14) = NVMeIsAllowedWithinThrottleLimit(a1, 2, &v34);
    if ( !(_BYTE)v14 )
      goto LABEL_21;
    goto LABEL_10;
  }
  if ( (unsigned __int8)v36 == 2 )
  {
    LOBYTE(v14) = NVMeIsAllowedWithinThrottleLimit(a1, 1, &v34);
    if ( (_BYTE)v14 )
    {
LABEL_10:
      v15 = GetLunExtension(a1, DWORD1(v36));
      LOBYTE(v14) = StorPortExtendedFunction(86LL, a1, v15, 1LL);
    }
  }
LABEL_21:
  if ( a3 )
    return v14;
  v16 = *(unsigned __int16 *)(SrbExtension + 4250);
  v17 = 18;
  if ( ((v16 >> 9) & 7) != 0 )
  {
    if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) != 1 )
    {
      if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) == 2 )
      {
        v18 = v16 >> 1;
        *(_BYTE *)(a2 + 3) = 4;
        switch ( (unsigned __int8)v18 )
        {
          case 0x80u:
            v9 = 2;
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
            WORD6(Src) = 3;
            break;
          case 0x81u:
            v9 = 2;
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
            WORD6(Src) = 17;
            break;
          case 0x82u:
            v9 = 2;
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
            WORD6(Src) = 272;
            break;
          case 0x83u:
            v9 = 2;
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
            WORD6(Src) = 529;
            break;
          case 0x84u:
            v9 = 2;
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
            WORD6(Src) = 785;
            break;
          case 0x85u:
            v9 = 2;
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
            WORD6(Src) = 29;
            break;
          case 0x86u:
            v9 = 2;
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
            WORD6(Src) = 2336;
            break;
        }
        goto LABEL_158;
      }
      goto LABEL_157;
    }
    v21 = v16 >> 1;
    if ( (unsigned __int8)v21 > 0x80u )
    {
      v22 = (unsigned __int8)v21 - 129;
      v26 = (unsigned __int8)v21 == 129;
    }
    else
    {
      if ( (unsigned __int8)v21 == 128 )
        goto LABEL_72;
      if ( (unsigned __int8)v21 <= 0x11u )
      {
        if ( (unsigned __int8)v21 != 17 )
        {
          if ( (unsigned __int8)v21 <= 9u )
          {
            if ( (unsigned __int8)v21 == 9 )
              goto LABEL_72;
            if ( !(_BYTE)v21 || (unsigned __int8)v21 == 1 )
            {
              WORD6(Src) = 38;
              v24 = BYTE2(Src) & 0xF0 | 5;
              goto LABEL_155;
            }
            if ( (unsigned __int8)v21 != 2 && (unsigned __int8)v21 != 3 && (unsigned __int8)v21 != 5 )
            {
              if ( (unsigned __int8)v21 != 6 )
              {
                v22 = (unsigned __int8)v21 - 7;
                if ( (unsigned __int8)v21 != 7 )
                {
LABEL_70:
                  v23 = v22 == 1;
                  goto LABEL_71;
                }
                goto LABEL_92;
              }
LABEL_72:
              WORD6(Src) = 36;
              v24 = BYTE2(Src) & 0xF0 | 5;
LABEL_155:
              v9 = 2;
              goto LABEL_156;
            }
LABEL_92:
            v24 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_154;
          }
          if ( (unsigned __int8)v21 == 10 )
          {
            WORD6(Src) = 305;
            v24 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_155;
          }
          if ( (unsigned __int8)v21 != 11 )
          {
            if ( (unsigned __int8)v21 == 12
              || (unsigned __int8)v21 == 13
              || (unsigned __int8)v21 == 14
              || (unsigned __int8)v21 == 15 )
            {
              goto LABEL_72;
            }
            if ( (unsigned __int8)v21 != 16 )
              goto LABEL_157;
          }
        }
        goto LABEL_81;
      }
      if ( (unsigned __int8)v21 <= 0x1Au )
      {
        if ( (unsigned __int8)v21 == 26 || (unsigned __int8)v21 == 18 )
        {
LABEL_81:
          v24 = BYTE2(Src) & 0xF0 | 6;
          goto LABEL_154;
        }
        if ( (unsigned __int8)v21 == 19
          || (unsigned __int8)v21 == 20
          || (unsigned __int8)v21 == 21
          || (unsigned __int8)v21 == 22 )
        {
          goto LABEL_72;
        }
        v25 = (unsigned __int8)v21 - 24;
        if ( (unsigned __int8)v21 == 24 )
          goto LABEL_92;
LABEL_91:
        if ( v25 != 1 )
          goto LABEL_157;
        goto LABEL_92;
      }
      if ( (unsigned __int8)v21 == 27
        || (unsigned __int8)v21 == 28
        || (unsigned __int8)v21 == 30
        || (unsigned __int8)v21 == 31
        || (unsigned __int8)v21 == 32 )
      {
        goto LABEL_72;
      }
      v22 = (unsigned __int8)v21 - 33;
      v26 = (unsigned __int8)v21 == 33;
    }
    if ( v26 )
      goto LABEL_72;
    goto LABEL_70;
  }
  v27 = v16 >> 1;
  if ( (unsigned __int8)v27 > 0x80u )
  {
    if ( (unsigned __int8)v27 != 129 )
    {
      if ( (unsigned __int8)v27 == 130 )
      {
        v9 = 2;
        v28 = BYTE2(Src) & 0xF2;
        *(_BYTE *)(a2 + 3) = 4;
        LOBYTE(Src) = -16;
        BYTE7(Src) = 10;
        BYTE2(Src) = v28 | 2;
        if ( *(__int16 *)(SrbExtension + 4250) >= 0 )
          WORD6(Src) = 260;
        else
          WORD6(Src) = 4;
        goto LABEL_158;
      }
      if ( (unsigned __int8)v27 != 131 )
        goto LABEL_157;
      v9 = 24;
      WORD6(Src) = 2348;
      v24 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_156;
    }
    goto LABEL_153;
  }
  if ( (unsigned __int8)v27 == 128 )
  {
    WORD6(Src) = 33;
    v24 = BYTE2(Src) & 0xF0 | 5;
    goto LABEL_155;
  }
  if ( (unsigned __int8)v27 > 0xEu )
  {
    if ( (unsigned __int8)v27 <= 0x16u )
    {
      if ( (unsigned __int8)v27 == 22 )
        goto LABEL_72;
      if ( (unsigned __int8)v27 == 15 || (unsigned __int8)v27 == 16 || (unsigned __int8)v27 == 17 )
        goto LABEL_92;
      if ( (unsigned __int8)v27 != 18 )
      {
        if ( (unsigned __int8)v27 == 19 || (unsigned __int8)v27 == 20 )
          goto LABEL_72;
        if ( (unsigned __int8)v27 != 21 )
          goto LABEL_157;
      }
      goto LABEL_136;
    }
    switch ( (unsigned __int8)v27 )
    {
      case 0x18u:
        goto LABEL_72;
      case 0x19u:
        WORD6(Src) = 42;
        v24 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_155;
      case 0x1Au:
        goto LABEL_72;
    }
    if ( (unsigned __int8)v27 != 27 )
    {
      if ( (unsigned __int8)v27 != 28 )
      {
        v23 = (unsigned __int8)v27 == 30;
LABEL_71:
        if ( v23 )
          goto LABEL_72;
LABEL_157:
        *(_BYTE *)(a2 + 3) = 4;
        goto LABEL_158;
      }
      v24 = BYTE2(Src) & 0xF0 | 4;
LABEL_154:
      WORD6(Src) = 0;
      goto LABEL_155;
    }
    goto LABEL_119;
  }
  if ( (unsigned __int8)v27 == 14 )
    goto LABEL_92;
  if ( (unsigned __int8)v27 > 7u )
  {
    if ( (unsigned __int8)v27 != 8 && (unsigned __int8)v27 != 9 && (unsigned __int8)v27 != 10 )
    {
      if ( (unsigned __int8)v27 == 11 )
      {
        WORD6(Src) = 2336;
        v24 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_155;
      }
      v25 = (unsigned __int8)v27 - 12;
      if ( (unsigned __int8)v27 == 12 )
      {
        WORD6(Src) = 44;
        v24 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_155;
      }
      goto LABEL_91;
    }
    goto LABEL_119;
  }
  if ( (unsigned __int8)v27 == 7 )
  {
LABEL_119:
    v9 = 34;
    v24 = BYTE2(Src) & 0xF0 | 0xB;
    WORD6(Src) = 0;
    goto LABEL_156;
  }
  if ( (_BYTE)v27 )
  {
    if ( (unsigned __int8)v27 != 1 )
    {
      if ( (unsigned __int8)v27 == 2 )
        goto LABEL_72;
      if ( (unsigned __int8)v27 == 3 )
      {
        WORD6(Src) = 35;
        v24 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_155;
      }
      if ( (unsigned __int8)v27 != 4 )
      {
        if ( (unsigned __int8)v27 != 5 )
        {
          if ( (unsigned __int8)v27 == 6 )
          {
            WORD6(Src) = 68;
            v24 = BYTE2(Src) & 0xF0 | 4;
            goto LABEL_155;
          }
          goto LABEL_157;
        }
        v9 = 34;
        WORD6(Src) = 2059;
        v24 = BYTE2(Src) & 0xF0 | 0xB;
LABEL_156:
        BYTE2(Src) = v24;
        BYTE7(Src) = 10;
        LOBYTE(Src) = -16;
        goto LABEL_157;
      }
LABEL_153:
      v24 = BYTE2(Src) & 0xF0 | 3;
      goto LABEL_154;
    }
LABEL_136:
    WORD6(Src) = 32;
    v24 = BYTE2(Src) & 0xF0 | 5;
    goto LABEL_155;
  }
  *(_BYTE *)(a2 + 3) = 1;
  v9 = 0;
LABEL_158:
  LOBYTE(v14) = GetSrbScsiData(a2, 0, (unsigned int)&v39, (unsigned int)&v40, (__int64)v35);
  if ( v39 )
    *v39 = v9;
  if ( (Src & 0x80u) != 0LL )
  {
    v29 = (char *)v40;
    if ( v40 )
    {
      v30 = v35[0];
      if ( v35[0] )
      {
        if ( v35[0] <= 0x12u )
          v17 = v35[0];
        LOBYTE(v14) = (unsigned __int8)memmove(v40, &Src, v17);
        *(_BYTE *)(a2 + 3) |= 0x80u;
        if ( v30 > v17 )
          LOBYTE(v14) = NVMeZeroMemory(&v29[v17], v30 - v17);
      }
    }
  }
  return v14;
}
