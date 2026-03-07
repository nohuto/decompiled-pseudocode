NTSTATUS __stdcall RtlUnicodeToUTF8N(
        PCHAR UTF8StringDestination,
        ULONG UTF8StringMaxByteCount,
        PULONG UTF8StringActualByteCount,
        PCWCH UnicodeStringSource,
        ULONG UnicodeStringByteCount)
{
  NTSTATUS v5; // esi
  unsigned int v6; // r10d
  int v8; // edi
  NTSTATUS result; // eax
  CHAR *v10; // r14
  const WCHAR *v11; // rbp
  int v12; // edx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  const WCHAR *v16; // r11
  unsigned int v17; // edx
  int v18; // r8d
  PCHAR v19; // r10
  __int64 v20; // rax
  CHAR v21; // al
  CHAR v22; // al
  unsigned int v23; // eax
  int v24; // r8d
  unsigned int v25; // eax

  v5 = 0;
  v6 = 0;
  v8 = (int)UTF8StringDestination;
  if ( !UnicodeStringSource )
    return -1073741582;
  if ( !UTF8StringDestination )
  {
    if ( UTF8StringActualByteCount )
      return CountUnicodeToUTF8((unsigned int *)UnicodeStringSource, UnicodeStringByteCount, UTF8StringActualByteCount);
    else
      return -1073741811;
  }
  if ( (UnicodeStringByteCount & 1) != 0 )
    return -1073741581;
  v10 = &UTF8StringDestination[UTF8StringMaxByteCount];
  v11 = &UnicodeStringSource[(unsigned __int64)UnicodeStringByteCount >> 1];
  while ( 1 )
  {
    do
    {
      if ( UnicodeStringSource >= v11 )
      {
        if ( !v6 )
          goto LABEL_20;
        break;
      }
      v12 = *UnicodeStringSource;
      if ( v6 )
      {
        if ( (unsigned int)(v12 - 56320) <= 0x3FF )
        {
          v6 = v12 + (v6 << 10) - 56613888;
          ++UnicodeStringSource;
        }
        break;
      }
      v6 = *UnicodeStringSource++;
LABEL_10:
      ;
    }
    while ( v6 - 55296 <= 0x3FF );
    if ( v6 - 55296 <= 0x7FF )
    {
      v5 = 263;
      v6 = 65533;
LABEL_45:
      v20 = (v6 > 0xFFFF) + 2LL;
      goto LABEL_46;
    }
    v13 = 1LL;
    if ( v6 <= 0x7F )
      goto LABEL_13;
    v20 = 1LL;
    if ( v6 > 0x7FF )
      goto LABEL_45;
LABEL_46:
    v13 = v20 + 1;
LABEL_13:
    if ( UTF8StringDestination > &v10[-v13] )
      break;
    if ( v6 > 0x7F )
    {
      if ( v6 > 0x7FF )
      {
        if ( v6 > 0xFFFF )
        {
          *UTF8StringDestination++ = (v6 >> 18) | 0xF0;
          v22 = (v6 >> 12) & 0x3F | 0x80;
        }
        else
        {
          v22 = (v6 >> 12) | 0xE0;
        }
        *UTF8StringDestination++ = v22;
        v21 = (v6 >> 6) & 0x3F | 0x80;
      }
      else
      {
        v21 = (v6 >> 6) | 0xC0;
      }
      *UTF8StringDestination++ = v21;
      LOBYTE(v6) = v6 & 0x3F | 0x80;
    }
    *UTF8StringDestination++ = v6;
    v14 = v11 - UnicodeStringSource;
    v15 = v10 - UTF8StringDestination;
    if ( v14 > 0xD )
    {
      if ( v15 < v14 )
        v14 = v10 - UTF8StringDestination;
      v16 = &UnicodeStringSource[v14 - 5];
      while ( UnicodeStringSource < v16 )
      {
        v17 = *UnicodeStringSource++;
        if ( v17 <= 0x7F )
        {
          *UTF8StringDestination++ = v17;
          if ( ((unsigned __int8)UnicodeStringSource & 2) == 0 )
            goto LABEL_28;
          v17 = *UnicodeStringSource++;
          if ( v17 <= 0x7F )
          {
            *UTF8StringDestination++ = v17;
LABEL_28:
            while ( UnicodeStringSource < v16 )
            {
              v18 = *((_DWORD *)UnicodeStringSource + 1);
              v19 = UTF8StringDestination;
              v17 = *(_DWORD *)UnicodeStringSource;
              if ( ((*(_DWORD *)UnicodeStringSource | v18) & 0xFF80FF80) != 0 )
              {
                v17 = (unsigned __int16)v17;
                ++UnicodeStringSource;
                if ( (unsigned __int16)v17 > 0x7Fu )
                  goto LABEL_57;
                *UTF8StringDestination = v17;
                goto LABEL_36;
              }
              *UTF8StringDestination = v17;
              UnicodeStringSource += 4;
              UTF8StringDestination[2] = v18;
              UTF8StringDestination[1] = BYTE2(v17);
              UTF8StringDestination[3] = BYTE2(v18);
              UTF8StringDestination += 4;
            }
            break;
          }
        }
LABEL_57:
        if ( v17 > 0x7FF )
        {
          if ( v17 - 55296 > 0x7FF )
          {
            v25 = v17 | 0xE0000;
          }
          else
          {
            if ( v17 > 0xDBFF )
            {
              --UnicodeStringSource;
              break;
            }
            v24 = *UnicodeStringSource++;
            if ( (unsigned int)(v24 - 56320) > 0x3FF )
            {
              UnicodeStringSource -= 2;
              break;
            }
            v17 = v24 + (v17 << 10) - 56613888;
            *UTF8StringDestination++ = (v17 >> 18) | 0xF0;
            v25 = v17 & 0x3F000 | 0x80000;
          }
          --v16;
          *UTF8StringDestination++ = v25 >> 12;
          v23 = v17 & 0xFC0 | 0x2000;
        }
        else
        {
          v23 = v17 | 0x3000;
        }
        v19 = UTF8StringDestination + 1;
        --v16;
        *UTF8StringDestination = v23 >> 6;
        UTF8StringDestination[1] = v17 & 0x3F | 0x80;
LABEL_36:
        UTF8StringDestination = v19 + 1;
      }
      v6 = 0;
    }
    else
    {
      if ( v15 >= v14 )
      {
        while ( UnicodeStringSource < v11 )
        {
          v6 = *UnicodeStringSource++;
          if ( v6 > 0x7F )
            goto LABEL_10;
          *UTF8StringDestination++ = v6;
        }
LABEL_20:
        result = v5;
        goto LABEL_21;
      }
      v6 = 0;
    }
  }
  result = -1073741789;
LABEL_21:
  *UTF8StringActualByteCount = (_DWORD)UTF8StringDestination - v8;
  return result;
}
