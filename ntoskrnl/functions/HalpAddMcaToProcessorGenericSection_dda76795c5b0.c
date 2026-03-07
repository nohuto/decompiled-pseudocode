__int64 __fastcall HalpAddMcaToProcessorGenericSection(__int64 a1, __int64 *a2)
{
  __int16 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // al
  int v8; // r8d
  __int64 v9; // rcx

  v2 = *(_WORD *)(a1 + 40);
  if ( (unsigned __int16)(v2 - 1) <= 4u || v2 == 1024 || (v2 & 0xFC00) == 0x400 && (v2 & 0x3FF) != 0 )
  {
    v5 = *a2 | 4;
    *((_BYTE *)a2 + 10) = 8;
  }
  else
  {
    if ( (v2 & 0xEFFC) == 0xC )
    {
      v4 = *a2;
      *((_BYTE *)a2 + 10) = 1;
LABEL_9:
      *((_BYTE *)a2 + 13) = v2 & 3;
      v5 = v4 | 0x24;
      goto LABEL_23;
    }
    v4 = *a2;
    if ( (v2 & 0xEFF0) == 0x10 )
    {
      *((_BYTE *)a2 + 10) = 2;
      goto LABEL_9;
    }
    if ( (v2 & 0xEF00) == 0x100 )
    {
      *((_BYTE *)a2 + 10) = 1;
      v6 = v4 | 0x24;
    }
    else
    {
      v5 = v4 | 4;
      if ( (v2 & 0xE800) != 0x800 )
      {
        *((_BYTE *)a2 + 10) = 0;
        goto LABEL_23;
      }
      *((_BYTE *)a2 + 10) = 4;
      v6 = v5 | 0x20;
    }
    v5 = v6 | 8;
    v7 = v2 & 3;
    v8 = (unsigned __int8)v2 >> 4;
    *((_BYTE *)a2 + 13) = v7;
    switch ( v8 )
    {
      case 3:
        *((_BYTE *)a2 + 11) = 1;
        break;
      case 4:
        *((_BYTE *)a2 + 11) = 2;
        break;
      case 5:
        *((_BYTE *)a2 + 11) = 3;
        break;
      default:
        *((_BYTE *)a2 + 11) = 0;
        break;
    }
  }
LABEL_23:
  v9 = v5 | 0x10;
  *a2 = v9;
  if ( !_bittest64((const signed __int64 *)(a1 + 40), 0x39u) )
    *((_BYTE *)a2 + 12) &= 1u;
  if ( _bittest64((const signed __int64 *)(a1 + 40), 0x3Eu) )
    *((_BYTE *)a2 + 12) &= 4u;
  if ( !_bittest64((const signed __int64 *)(a1 + 40), 0x3Du) )
    *((_BYTE *)a2 + 12) &= 8u;
  if ( (*(_BYTE *)(a1 + 20) & 2) != 0 )
  {
    *a2 = v9 | 0x1000;
    a2[23] = *(_QWORD *)(a1 + 28);
  }
  return 0LL;
}
