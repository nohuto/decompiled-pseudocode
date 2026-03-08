/*
 * XREFs of NVMeMapError @ 0x1C00200A8
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025560 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0001D98 (GetSrbExtension.c)
 *     memmove @ 0x1C0004280 (memmove.c)
 *     NVMeZeroMemory @ 0x1C0009218 (NVMeZeroMemory.c)
 *     GetSrbScsiData @ 0x1C0012B7C (GetSrbScsiData.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C00168B4 (NVMeIsAllowedWithinThrottleLimit.c)
 *     GetLunExtension @ 0x1C001B754 (GetLunExtension.c)
 *     NVMeAdminCommandErrorLog @ 0x1C001B794 (NVMeAdminCommandErrorLog.c)
 */

__int64 __fastcall NVMeMapError(__int64 a1, __int64 a2, char a3)
{
  char v4; // di
  __int64 SrbExtension; // r13
  char v7; // si
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int64 v11; // r10
  __int64 LunExtension; // r8
  int v13; // ecx
  __int64 result; // rax
  int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // edx
  unsigned int v18; // r15d
  unsigned int v19; // edx
  unsigned int v20; // edx
  int v21; // ecx
  bool v22; // zf
  char v23; // al
  int v24; // ecx
  bool v25; // zf
  int v26; // ecx
  unsigned int v27; // edx
  char v28; // al
  char *v29; // rdi
  unsigned int v30; // ebx
  __int128 Src; // [rsp+D0h] [rbp-80h] BYREF
  __int16 v32; // [rsp+E0h] [rbp-70h]
  int v33; // [rsp+E8h] [rbp-68h] BYREF
  char *v34; // [rsp+F0h] [rbp-60h] BYREF
  void *v35; // [rsp+F8h] [rbp-58h] BYREF
  __int128 v36; // [rsp+100h] [rbp-50h]
  __int128 v37; // [rsp+120h] [rbp-30h]
  __int128 v38; // [rsp+130h] [rbp-20h]
  unsigned __int8 v39; // [rsp+180h] [rbp+30h] BYREF
  int v40; // [rsp+190h] [rbp+40h]

  LOBYTE(v40) = a3;
  v4 = a3;
  SrbExtension = GetSrbExtension(a2);
  v7 = 0;
  v34 = 0LL;
  v35 = 0LL;
  v8 = *(_OWORD *)(SrbExtension + 4096);
  v39 = 0;
  v9 = *(_OWORD *)(SrbExtension + 4144);
  v33 = 0;
  v36 = v8;
  v10 = *(_OWORD *)(SrbExtension + 4128);
  v38 = v9;
  v22 = (*(_BYTE *)(SrbExtension + 4253) & 1) == 0;
  v37 = v10;
  Src = 0LL;
  v32 = 0;
  if ( !v22 )
  {
    if ( (unsigned __int8)v36 > 0x19u )
    {
      if ( (unsigned __int8)v36 != 26 )
      {
        if ( (unsigned __int8)v36 == 128 )
        {
          if ( !*(_BYTE *)(a1 + 22) )
            goto LABEL_28;
          LunExtension = 0LL;
          goto LABEL_46;
        }
        if ( (unsigned int)(unsigned __int8)v36 - 129 <= 1 )
        {
          if ( !NVMeIsAllowedWithinThrottleLimit(a1, 4, &v33) || !*(_BYTE *)(a1 + 22) )
            goto LABEL_28;
          LunExtension = GetLunExtension(a1, SDWORD1(v36));
LABEL_46:
          StorPortExtendedFunction(87LL, a1, LunExtension, 1LL);
          goto LABEL_28;
        }
        goto LABEL_27;
      }
    }
    else if ( (unsigned __int8)v36 != 25 )
    {
      switch ( (unsigned __int8)v36 )
      {
        case 2u:
          if ( (unsigned int)BYTE8(v37) - 192 <= 5 || (unsigned int)BYTE8(v37) - 200 <= 1 )
            goto LABEL_28;
          if ( BYTE8(v37) == 2 )
          {
            v15 = 6;
LABEL_34:
            if ( !NVMeIsAllowedWithinThrottleLimit(a1, v15, &v33) )
              goto LABEL_28;
          }
          break;
        case 9u:
          if ( BYTE8(v37) == 2 )
          {
            v15 = 7;
            goto LABEL_34;
          }
          break;
        case 0xAu:
          if ( BYTE8(v37) == 208 || BYTE8(v37) == 2 )
            goto LABEL_28;
          break;
        case 0x10u:
          if ( !*(_BYTE *)(a1 + 22) )
            goto LABEL_28;
LABEL_22:
          LunExtension = 0LL;
          goto LABEL_46;
        case 0x11u:
          if ( !*(_BYTE *)(a1 + 22) )
            goto LABEL_28;
          goto LABEL_22;
        default:
LABEL_27:
          NVMeAdminCommandErrorLog(a1, a2);
          goto LABEL_28;
      }
      NVMeAdminCommandErrorLog(a1, a2);
      goto LABEL_28;
    }
    if ( NVMeIsAllowedWithinThrottleLimit(a1, 3, &v33) && *(_BYTE *)(a1 + 22) )
    {
      v16 = GetLunExtension(a1, SDWORD1(v36));
      StorPortExtendedFunction(87LL, a1, v16, 1LL);
      v4 = v40;
    }
    goto LABEL_28;
  }
  if ( (_BYTE)v36 )
  {
    if ( (unsigned __int8)v36 == 1 )
    {
      if ( NVMeIsAllowedWithinThrottleLimit(a1, 2, &v33) && *(_BYTE *)(a1 + 22) )
        goto LABEL_13;
    }
    else if ( (unsigned __int8)v36 == 2 && NVMeIsAllowedWithinThrottleLimit(a1, 1, &v33) && *(_BYTE *)(a1 + 22) )
    {
LABEL_13:
      v11 = GetLunExtension(a1, SDWORD1(v36));
      StorPortExtendedFunction(86LL, a1, v11, 1LL);
    }
  }
  else if ( NVMeIsAllowedWithinThrottleLimit(a1, 0, &v33) && *(_BYTE *)(a1 + 22) )
  {
    goto LABEL_13;
  }
LABEL_28:
  v13 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
  result = 0xFFFFFFFFLL;
  if ( v13 == -1 || *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) == -1 )
  {
    if ( *(_BYTE *)(a1 + 22) )
      result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  else
  {
    v40 = *(_DWORD *)(*(_QWORD *)(a1 + 184) + 28LL);
    if ( (v13 & 2) != 0 )
      result = StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  }
  if ( !v4 )
  {
    v17 = *(unsigned __int16 *)(SrbExtension + 4250);
    v18 = 18;
    if ( ((v17 >> 9) & 7) != 0 )
    {
      if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) != 1 )
      {
        if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) == 2 )
        {
          v19 = v17 >> 1;
          *(_BYTE *)(a2 + 3) = 4;
          switch ( (unsigned __int8)v19 )
          {
            case 0x80u:
              v7 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 3;
              break;
            case 0x81u:
              v7 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 17;
              break;
            case 0x82u:
              v7 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 272;
              break;
            case 0x83u:
              v7 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 529;
              break;
            case 0x84u:
              v7 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 785;
              break;
            case 0x85u:
              v7 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
              WORD6(Src) = 29;
              break;
            case 0x86u:
              v7 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
              WORD6(Src) = 2336;
              break;
          }
          goto LABEL_173;
        }
        goto LABEL_172;
      }
      v20 = v17 >> 1;
      if ( (unsigned __int8)v20 > 0x80u )
      {
        v26 = (unsigned __int8)v20 - 129;
        v25 = (unsigned __int8)v20 == 129;
      }
      else
      {
        if ( (unsigned __int8)v20 == 128 )
          goto LABEL_87;
        if ( (unsigned __int8)v20 <= 0x11u )
        {
          if ( (unsigned __int8)v20 != 17 )
          {
            if ( (unsigned __int8)v20 <= 9u )
            {
              if ( (unsigned __int8)v20 == 9 )
                goto LABEL_87;
              if ( !(_BYTE)v20 || (unsigned __int8)v20 == 1 )
              {
                WORD6(Src) = 38;
                v23 = BYTE2(Src) & 0xF0 | 5;
                goto LABEL_170;
              }
              if ( (unsigned __int8)v20 != 2 && (unsigned __int8)v20 != 3 && (unsigned __int8)v20 != 5 )
              {
                if ( (unsigned __int8)v20 != 6 )
                {
                  v21 = (unsigned __int8)v20 - 7;
                  if ( (unsigned __int8)v20 != 7 )
                  {
LABEL_85:
                    v22 = v21 == 1;
                    goto LABEL_86;
                  }
                  goto LABEL_107;
                }
LABEL_87:
                WORD6(Src) = 36;
                v23 = BYTE2(Src) & 0xF0 | 5;
LABEL_170:
                v7 = 2;
                goto LABEL_171;
              }
LABEL_107:
              v23 = BYTE2(Src) & 0xF0 | 5;
              goto LABEL_169;
            }
            if ( (unsigned __int8)v20 == 10 )
            {
              WORD6(Src) = 305;
              v23 = BYTE2(Src) & 0xF0 | 5;
              goto LABEL_170;
            }
            if ( (unsigned __int8)v20 != 11 )
            {
              if ( (unsigned __int8)v20 == 12
                || (unsigned __int8)v20 == 13
                || (unsigned __int8)v20 == 14
                || (unsigned __int8)v20 == 15 )
              {
                goto LABEL_87;
              }
              if ( (unsigned __int8)v20 != 16 )
                goto LABEL_172;
            }
          }
          goto LABEL_96;
        }
        if ( (unsigned __int8)v20 <= 0x1Au )
        {
          if ( (unsigned __int8)v20 == 26 || (unsigned __int8)v20 == 18 )
          {
LABEL_96:
            v23 = BYTE2(Src) & 0xF0 | 6;
            goto LABEL_169;
          }
          if ( (unsigned __int8)v20 == 19
            || (unsigned __int8)v20 == 20
            || (unsigned __int8)v20 == 21
            || (unsigned __int8)v20 == 22 )
          {
            goto LABEL_87;
          }
          v24 = (unsigned __int8)v20 - 24;
          if ( (unsigned __int8)v20 == 24 )
            goto LABEL_107;
LABEL_106:
          if ( v24 != 1 )
            goto LABEL_172;
          goto LABEL_107;
        }
        if ( (unsigned __int8)v20 == 27
          || (unsigned __int8)v20 == 28
          || (unsigned __int8)v20 == 30
          || (unsigned __int8)v20 == 31 )
        {
          goto LABEL_87;
        }
        v26 = (unsigned __int8)v20 - 32;
        v25 = (unsigned __int8)v20 == 32;
      }
      if ( v25 )
        goto LABEL_87;
      v21 = v26 - 1;
      if ( !v21 )
        goto LABEL_87;
      goto LABEL_85;
    }
    v27 = v17 >> 1;
    if ( (unsigned __int8)v27 > 0x80u )
    {
      if ( (unsigned __int8)v27 != 129 )
      {
        if ( (unsigned __int8)v27 == 130 )
        {
          v7 = 2;
          v28 = BYTE2(Src) & 0xF2;
          *(_BYTE *)(a2 + 3) = 4;
          LOBYTE(Src) = -16;
          BYTE7(Src) = 10;
          BYTE2(Src) = v28 | 2;
          if ( _bittest16((const signed __int16 *)(SrbExtension + 4250), 0xFu) )
            WORD6(Src) = 4;
          else
            WORD6(Src) = 260;
          goto LABEL_173;
        }
        if ( (unsigned __int8)v27 != 131 )
          goto LABEL_172;
        v7 = 24;
        WORD6(Src) = 2348;
        v23 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_171;
      }
      goto LABEL_168;
    }
    if ( (unsigned __int8)v27 == 128 )
    {
      WORD6(Src) = 33;
      v23 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_170;
    }
    if ( (unsigned __int8)v27 > 0xEu )
    {
      if ( (unsigned __int8)v27 <= 0x16u )
      {
        if ( (unsigned __int8)v27 == 22 )
          goto LABEL_87;
        if ( (unsigned __int8)v27 == 15 || (unsigned __int8)v27 == 16 || (unsigned __int8)v27 == 17 )
          goto LABEL_107;
        if ( (unsigned __int8)v27 != 18 )
        {
          if ( (unsigned __int8)v27 == 19 || (unsigned __int8)v27 == 20 )
            goto LABEL_87;
          if ( (unsigned __int8)v27 != 21 )
            goto LABEL_172;
        }
        goto LABEL_151;
      }
      switch ( (unsigned __int8)v27 )
      {
        case 0x18u:
          goto LABEL_87;
        case 0x19u:
          WORD6(Src) = 42;
          v23 = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_170;
        case 0x1Au:
          goto LABEL_87;
      }
      if ( (unsigned __int8)v27 != 27 )
      {
        if ( (unsigned __int8)v27 != 28 )
        {
          v22 = (unsigned __int8)v27 == 30;
LABEL_86:
          if ( v22 )
            goto LABEL_87;
LABEL_172:
          *(_BYTE *)(a2 + 3) = 4;
          goto LABEL_173;
        }
        v23 = BYTE2(Src) & 0xF0 | 4;
LABEL_169:
        WORD6(Src) = 0;
        goto LABEL_170;
      }
    }
    else
    {
      if ( (unsigned __int8)v27 == 14 )
        goto LABEL_107;
      if ( (unsigned __int8)v27 > 7u )
      {
        if ( (unsigned __int8)v27 != 8 && (unsigned __int8)v27 != 9 && (unsigned __int8)v27 != 10 )
        {
          if ( (unsigned __int8)v27 == 11 )
          {
            WORD6(Src) = 2336;
            v23 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_170;
          }
          v24 = (unsigned __int8)v27 - 12;
          if ( (unsigned __int8)v27 == 12 )
          {
            WORD6(Src) = 44;
            v23 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_170;
          }
          goto LABEL_106;
        }
      }
      else if ( (unsigned __int8)v27 != 7 )
      {
        if ( !(_BYTE)v27 )
        {
          *(_BYTE *)(a2 + 3) = 1;
          v7 = 0;
LABEL_173:
          result = GetSrbScsiData(a2, 0LL, &v34, &v35, &v39);
          if ( v34 )
            *v34 = v7;
          if ( (Src & 0x80) != 0 )
          {
            v29 = (char *)v35;
            if ( v35 )
            {
              v30 = v39;
              if ( v39 )
              {
                if ( v39 <= 0x12u )
                  v18 = v39;
                result = (__int64)memmove(v35, &Src, v18);
                *(_BYTE *)(a2 + 3) |= 0x80u;
                if ( v30 > v18 )
                  return (__int64)NVMeZeroMemory(&v29[v18], v30 - v18);
              }
            }
          }
          return result;
        }
        if ( (unsigned __int8)v27 != 1 )
        {
          if ( (unsigned __int8)v27 == 2 )
            goto LABEL_87;
          if ( (unsigned __int8)v27 == 3 )
          {
            WORD6(Src) = 35;
            v23 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_170;
          }
          if ( (unsigned __int8)v27 != 4 )
          {
            if ( (unsigned __int8)v27 != 5 )
            {
              if ( (unsigned __int8)v27 == 6 )
              {
                WORD6(Src) = 68;
                v23 = BYTE2(Src) & 0xF0 | 4;
                goto LABEL_170;
              }
              goto LABEL_172;
            }
            v7 = 34;
            WORD6(Src) = 2059;
            v23 = BYTE2(Src) & 0xF0 | 0xB;
LABEL_171:
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = v23;
            goto LABEL_172;
          }
LABEL_168:
          v23 = BYTE2(Src) & 0xF0 | 3;
          goto LABEL_169;
        }
LABEL_151:
        WORD6(Src) = 32;
        v23 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_170;
      }
    }
    v7 = 34;
    v23 = BYTE2(Src) & 0xF0 | 0xB;
    WORD6(Src) = 0;
    goto LABEL_171;
  }
  return result;
}
