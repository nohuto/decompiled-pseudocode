char __fastcall RtlpOwnerAcesPresent(unsigned __int8 a1, __int64 a2)
{
  _WORD *SeOwnerRightsSid; // r14
  unsigned int v4; // ebp
  char *v5; // rbx
  unsigned int v6; // edi
  unsigned __int8 v7; // si
  unsigned __int8 v8; // cl
  char *v9; // rcx

  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
  if ( !a2 )
    return 0;
  v4 = *(unsigned __int16 *)(a2 + 4);
  v5 = (char *)(a2 + 8);
  v6 = 0;
  if ( !*(_WORD *)(a2 + 4) )
    return 0;
  while ( 1 )
  {
    v7 = v5[1];
    if ( (v7 & 8) != 0 )
      goto LABEL_13;
    v8 = *v5;
    if ( (unsigned __int8)(*v5 - 5) <= 3u || (unsigned __int8)(v8 - 11) <= 1u )
      break;
    if ( v8 >= 0xFu )
    {
      if ( v8 <= 0x10u )
        break;
    }
    else
    {
      if ( v8 == 4 )
      {
        v9 = v5 + 12;
        goto LABEL_10;
      }
      if ( v8 < 0xBu )
        goto LABEL_9;
    }
    if ( (unsigned __int8)(v8 - 13) <= 1u )
    {
LABEL_9:
      v9 = v5 + 8;
      goto LABEL_10;
    }
LABEL_13:
    ++v6;
    v5 += *((unsigned __int16 *)v5 + 1);
    if ( v6 >= v4 )
      return 0;
  }
  v9 = &v5[16 * (*((_DWORD *)v5 + 2) & 1) + ((8LL * (*((_DWORD *)v5 + 2) & 2)) | 0xC)];
LABEL_10:
  if ( !v9
    || *(_WORD *)v9 != *SeOwnerRightsSid
    || memcmp(v9, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v9 >> 8) + 8)
    || a1 && (v7 & a1) == 0 )
  {
    goto LABEL_13;
  }
  return 1;
}
