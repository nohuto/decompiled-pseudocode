/*
 * XREFs of PcGetChannelAdapter @ 0x140519A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall PcGetChannelAdapter(__int64 a1)
{
  char *v2; // r10
  int v3; // r8d
  unsigned __int8 v4; // cl
  char v5; // r11
  __int64 v6; // rax
  __int64 v7; // rdx
  char *result; // rax
  char v9; // dl

  v2 = (char *)&PcDmaChannelState + 24 * *(unsigned int *)(a1 + 16);
  *(_OWORD *)v2 = 0LL;
  *((_QWORD *)v2 + 2) = 0LL;
  v3 = *(unsigned __int8 *)(a1 + 16);
  v2[16] = v3;
  if ( (_BYTE)v3 )
  {
    switch ( v3 )
    {
      case 1:
        *((_QWORD *)v2 + 1) = 3LL;
        break;
      case 2:
        *((_QWORD *)v2 + 1) = 1LL;
        break;
      case 3:
        *((_QWORD *)v2 + 1) = 2LL;
        break;
      default:
        switch ( v3 )
        {
          case 5:
            *((_QWORD *)v2 + 1) = 11LL;
            break;
          case 6:
            *((_QWORD *)v2 + 1) = 9LL;
            break;
          case 7:
            *((_QWORD *)v2 + 1) = 10LL;
            break;
          default:
            goto LABEL_16;
        }
        *(_QWORD *)v2 = 192LL;
        break;
    }
  }
  else
  {
    *((_QWORD *)v2 + 1) = 7LL;
  }
LABEL_16:
  v4 = v3 & 3;
  v5 = v3 | 4;
  if ( *(_BYTE *)(a1 + 4) )
  {
    v4 |= 0xC0u;
    v5 = v3;
    v6 = *(_QWORD *)v2;
    if ( (unsigned __int8)v3 >= 4u )
    {
      __outbyte(v6 + 22, v4);
      v7 = *(_QWORD *)v2 + 20LL;
    }
    else
    {
      __outbyte(v6 + 11, v4);
      v7 = *(_QWORD *)v2 + 10LL;
    }
    __outbyte(v7, v3);
  }
  else if ( !*(_BYTE *)(a1 + 6) )
  {
    v4 |= 0x40u;
  }
  result = v2;
  v9 = v4 | 0x10;
  if ( !*(_BYTE *)(a1 + 7) )
    v9 = v4;
  v2[18] = 0;
  v2[17] = v9;
  v2[19] = v5;
  v2[20] = 1;
  v2[21] = *(_DWORD *)(a1 + 24) == 1;
  return result;
}
