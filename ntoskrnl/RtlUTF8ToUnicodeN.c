/*
 * XREFs of RtlUTF8ToUnicodeN @ 0x14075A870
 * Callers:
 *     RtlAnsiCharToUnicodeChar @ 0x1406EA670 (RtlAnsiCharToUnicodeChar.c)
 *     RtlMultiByteToUnicodeSize @ 0x1407A3AB0 (RtlMultiByteToUnicodeSize.c)
 *     RtlCustomCPToUnicodeN @ 0x1407A3C10 (RtlCustomCPToUnicodeN.c)
 *     RtlUTF8StringToUnicodeString @ 0x1409BF3B0 (RtlUTF8StringToUnicodeString.c)
 *     EtwpApplyContainerFilter @ 0x1409F1F18 (EtwpApplyContainerFilter.c)
 * Callees:
 *     CountUTF8ToUnicode @ 0x140390FD0 (CountUTF8ToUnicode.c)
 */

NTSTATUS __stdcall RtlUTF8ToUnicodeN(
        PWSTR UnicodeStringDestination,
        ULONG UnicodeStringMaxByteCount,
        PULONG UnicodeStringActualByteCount,
        PCCH UTF8StringSource,
        ULONG UTF8StringByteCount)
{
  PWSTR v5; // rax
  NTSTATUS v8; // r8d
  WCHAR *v9; // rdi
  unsigned int v10; // edx
  const CHAR *v11; // r11
  const CHAR *v12; // rbp
  unsigned int v13; // esi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  WCHAR *v17; // rbp
  unsigned int v18; // edx
  unsigned int v19; // esi
  unsigned int v20; // ecx
  unsigned int v21; // edx
  char v22; // si
  int v23; // esi
  CHAR v24; // r14
  unsigned int v25; // esi
  CHAR v26; // dl
  int v27; // esi
  __int64 v28; // rcx
  WCHAR v29; // si
  unsigned int v30; // edx

  v5 = UnicodeStringDestination;
  v8 = 0;
  v9 = &UnicodeStringDestination[(unsigned __int64)UnicodeStringMaxByteCount >> 1];
  v10 = 0;
  v11 = &UTF8StringSource[UTF8StringByteCount];
  if ( !UTF8StringSource )
    return -1073741582;
  if ( UnicodeStringDestination )
  {
LABEL_3:
    while ( 2 )
    {
      while ( 2 )
      {
        v12 = UTF8StringSource;
        if ( UTF8StringSource >= v11 )
        {
          if ( v10 )
          {
            v8 = 263;
            if ( v5 < v9 )
              *v5++ = -3;
            else
              v8 = -1073741789;
          }
LABEL_13:
          if ( UnicodeStringActualByteCount )
            *UnicodeStringActualByteCount = 2 * (v5 - UnicodeStringDestination);
          return v8;
        }
        v13 = *UTF8StringSource++;
        if ( !v10 )
        {
          LOWORD(v10) = v13;
          if ( v13 <= 0x7F )
          {
LABEL_6:
            if ( v5 >= v9 )
              goto LABEL_76;
            *v5++ = v10;
            v14 = v11 - UTF8StringSource;
            v15 = v9 - v5;
            if ( (unsigned __int64)(v11 - UTF8StringSource) <= 0xD )
            {
              if ( v15 < v14 )
                goto LABEL_32;
              while ( UTF8StringSource < v11 )
              {
                v10 = *UTF8StringSource++;
                if ( v10 > 0x7F )
                  goto LABEL_38;
                *v5++ = v10;
              }
              goto LABEL_13;
            }
            if ( v14 < v15 )
              v15 = v11 - UTF8StringSource;
            v17 = &v5[v15 - 7];
            if ( v5 >= v17 )
              goto LABEL_32;
            while ( 1 )
            {
              v18 = *UTF8StringSource++;
              if ( v18 > 0x7F )
                goto LABEL_59;
              *v5++ = v18;
              if ( ((unsigned __int8)UTF8StringSource & 1) != 0 )
              {
                v18 = *UTF8StringSource++;
                if ( v18 > 0x7F )
                  goto LABEL_59;
                *v5++ = v18;
              }
              if ( ((unsigned __int8)UTF8StringSource & 2) == 0 )
                goto LABEL_26;
              v18 = *(unsigned __int16 *)UTF8StringSource;
              if ( (v18 & 0x8080) == 0 )
              {
                UTF8StringSource += 2;
                *v5 = v18 & 0x7F;
                v5[1] = (v18 >> 8) & 0x7F;
                v5 += 2;
LABEL_26:
                while ( v5 < v17 )
                {
                  v19 = *((_DWORD *)UTF8StringSource + 1);
                  v18 = *(_DWORD *)UTF8StringSource;
                  if ( ((*(_DWORD *)UTF8StringSource | v19) & 0x80808080) != 0 )
                    goto LABEL_29;
                  UTF8StringSource += 8;
                  *v5 = v18 & 0x7F;
                  v5[1] = (v18 >> 8) & 0x7F;
                  v5[2] = BYTE2(v18) & 0x7F;
                  v5[3] = HIBYTE(v18) & 0x7F;
                  v5[4] = v19 & 0x7F;
                  v5[5] = (v19 >> 8) & 0x7F;
                  v5[6] = BYTE2(v19) & 0x7F;
                  v5[7] = HIBYTE(v19) & 0x7F;
                  v5 += 8;
                }
LABEL_32:
                v10 = 0;
                goto LABEL_3;
              }
LABEL_29:
              ++UTF8StringSource;
              if ( (unsigned __int8)v18 <= 0x7Fu )
              {
                *v5 = (unsigned __int8)v18;
                goto LABEL_31;
              }
LABEL_59:
              v22 = *UTF8StringSource++;
              if ( (v18 & 0x40) == 0 || (v22 & 0xC0) != 0x80 )
              {
LABEL_75:
                UTF8StringSource -= 2;
                v10 = 0;
                goto LABEL_3;
              }
              v23 = v22 & 0x3F;
              if ( (v18 & 0x20) != 0 )
              {
                v24 = *UTF8StringSource;
                v25 = ((v18 & 0xF) << 6) | v23;
                if ( (v18 & 0x10) != 0 )
                {
                  if ( (v25 >> 4) - 1 > 0xF )
                    goto LABEL_75;
                  if ( (v24 & 0xC0) != 0x80 )
                    goto LABEL_75;
                  v26 = UTF8StringSource[1];
                  v27 = v24 & 0x3F | (v25 << 6);
                  if ( (v26 & 0xC0) != 0x80 )
                    goto LABEL_75;
                  *v5++ = (((v26 & 0x3F | (unsigned int)(v27 << 6)) >> 10) & 0x7FF) - 10304;
                  v28 = 2LL;
                  v29 = (v26 & 0x3F | ((_WORD)v27 << 6) & 0x3FF) - 9216;
                }
                else
                {
                  if ( (v25 & 0x3E0) == 0 || (v25 & 0x3E0) == 0x360 || (v24 & 0xC0) != 0x80 )
                    goto LABEL_75;
                  v29 = v24 & 0x3F | ((_WORD)v25 << 6);
                  v28 = 1LL;
                }
                UTF8StringSource += v28;
                --v17;
              }
              else
              {
                v30 = v18 & 0x1F;
                if ( v30 <= 1 )
                  goto LABEL_75;
                v29 = ((_WORD)v30 << 6) | v23;
              }
              *v5 = v29;
              --v17;
LABEL_31:
              if ( ++v5 >= v17 )
                goto LABEL_32;
            }
          }
LABEL_38:
          if ( (v10 & 0x40) != 0 )
          {
            if ( (v10 & 0x20) != 0 )
            {
              v20 = v10 & 0xF;
              if ( (v10 & 0x10) == 0 )
              {
                v10 = v20 | 0x48228000;
                continue;
              }
              if ( v20 <= 4 )
              {
                v10 = v20 | 0x504D0C00;
                continue;
              }
            }
            else
            {
              v21 = v10 & 0x1F;
              if ( v21 > 1 )
              {
                v10 = v21 | 0x800000;
                continue;
              }
            }
          }
LABEL_37:
          v8 = 263;
          LOWORD(v10) = -3;
          goto LABEL_6;
        }
        break;
      }
      if ( (v13 & 0xC0) != 0x80 )
      {
        UTF8StringSource = v12;
        goto LABEL_37;
      }
      v10 = (v10 << 6) | v13 & 0x3F;
      if ( (v10 & 0x20000000) == 0 )
      {
        if ( (v10 & 0x10000000) != 0 )
        {
          if ( (v10 & 0x800000) != 0 || (v10 & 0x1F0) - 16 <= 0xF0 )
            continue;
        }
        else if ( (v10 & 0x3E0) != 0 && (v10 & 0x3E0) != 0x360 )
        {
          continue;
        }
        goto LABEL_37;
      }
      break;
    }
    if ( (v10 & 0x101F0000) <= 0x10000000 )
      goto LABEL_6;
    if ( v5 < v9 )
    {
      *v5++ = ((v10 >> 10) & 0x7FF) - 10304;
      LOWORD(v10) = (v10 & 0x3FF) - 9216;
      goto LABEL_6;
    }
LABEL_76:
    if ( UnicodeStringActualByteCount )
      *UnicodeStringActualByteCount = 2 * (v5 - UnicodeStringDestination);
    return -1073741789;
  }
  else if ( UnicodeStringActualByteCount )
  {
    return CountUTF8ToUnicode((char *)UTF8StringSource, UTF8StringByteCount, UnicodeStringActualByteCount);
  }
  else
  {
    return -1073741811;
  }
}
