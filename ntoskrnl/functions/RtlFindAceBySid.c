unsigned __int8 *__fastcall RtlFindAceBySid(__int64 a1, _WORD *a2, unsigned int *a3)
{
  unsigned int v5; // r14d
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  int v8; // r15d
  unsigned int v9; // ecx
  __int64 v10; // rcx
  unsigned __int8 *v11; // rcx
  unsigned __int64 v12; // rax

  if ( !a1 )
    return 0LL;
  v5 = *(unsigned __int16 *)(a1 + 4);
  v6 = (unsigned __int8 *)(a1 + 8);
  v7 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    return 0LL;
  v8 = 4089359;
  while ( 1 )
  {
    v9 = *v6;
    if ( (unsigned __int8)v9 <= 0x15u && _bittest(&v8, v9) )
    {
      v10 = 8LL;
    }
    else if ( (_BYTE)v9 == 4 )
    {
      v10 = 12LL;
    }
    else
    {
      if ( (unsigned __int8)(v9 - 5) > 3u && (unsigned __int8)(v9 - 11) > 1u && (unsigned __int8)(v9 - 15) > 1u )
        goto LABEL_10;
      v10 = 16LL * (*((_DWORD *)v6 + 2) & 1) + ((8LL * (*((_DWORD *)v6 + 2) & 2)) | 0xC);
    }
    v11 = &v6[v10];
    if ( v11 )
      break;
LABEL_10:
    ++v7;
    v6 += *((unsigned __int16 *)v6 + 1);
    if ( v7 >= v5 )
      return 0LL;
  }
  if ( !a3 )
  {
    v12 = *(unsigned __int16 *)v11;
    if ( (_WORD)v12 == *a2 && !memcmp(v11, a2, 4 * (v12 >> 8) + 8) )
      return v6;
    goto LABEL_10;
  }
  if ( v7 < *a3 || !RtlEqualSid(v11, a2) )
    goto LABEL_10;
  *a3 = v7;
  return v6;
}
