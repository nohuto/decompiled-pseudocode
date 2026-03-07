struct _FD_KERNINGPAIR *__fastcall ProbeAndReadFD_KERNINGPAIR(
        const struct _FD_KERNINGPAIR *Src,
        int a2,
        unsigned __int64 a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // eax
  void *v6; // rdi
  int v8; // [rsp+68h] [rbp+20h] BYREF
  __int16 v9; // [rsp+6Ch] [rbp+24h]

  v8 = 0;
  v9 = 0;
  v4 = 0;
  if ( !a2 )
  {
    if ( ((unsigned __int8)Src & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&Src[1] > MmUserProbeAddress || &Src[1] < Src )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  while ( a3 >= 6 )
  {
    v5 = v4 + 1;
    if ( v4 + 1 < v4 )
      break;
    ++v4;
    if ( !operator!=(&Src[v5 - 1].wcFirst, &v8) )
      goto LABEL_12;
  }
  v4 = 0;
LABEL_12:
  if ( v4 - 1 > 0x682AA9 )
    return 0LL;
  v6 = 6 * v4 ? (void *)Win32AllocPoolZInit(6 * v4, 1886221639LL) : 0LL;
  if ( !v6 )
    return 0LL;
  memmove(v6, Src, 6LL * v4);
  if ( operator!=((_WORD *)v6 + 3 * v4 - 3, &v8) )
  {
    Win32FreePool(v6);
    return 0LL;
  }
  return (struct _FD_KERNINGPAIR *)v6;
}
