__int64 __fastcall RtlpHashStringToAtom(
        __int64 a1,
        unsigned __int64 a2,
        char a3,
        __int64 *a4,
        _DWORD *a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  __int64 i; // rsi
  unsigned __int16 *v12; // rbx
  unsigned int v13; // r9d
  unsigned __int16 v14; // dx
  unsigned int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdi
  __int64 LowBox; // rax
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v22; // dx

  i = 0LL;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = (unsigned __int16 *)a2;
    v13 = 0;
    v14 = *(_WORD *)a2;
    if ( v14 )
    {
      do
      {
        ++v12;
        if ( v14 >= 0x61u )
        {
          if ( v14 > 0x7Au )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            v14 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v22);
          }
          else
          {
            v14 -= 32;
          }
        }
        v15 = v14;
        v14 = *v12;
        v13 += v15 + (v15 >> 1) + 2 * v15;
      }
      while ( *v12 );
    }
    v16 = (__int64)((__int64)v12 - a2) >> 1;
    if ( (unsigned int)v16 > 0xFF )
    {
      v18 = 0LL;
    }
    else
    {
      v17 = v13 % *(_DWORD *)(a1 + 28);
      v18 = *(_QWORD *)(a1 + 32 + 8 * v17);
      for ( i = a1 + 32 + 8LL * (unsigned int)v17; v18; v18 = *(_QWORD *)v18 )
      {
        if ( *(unsigned __int8 *)(v18 + 40) == (_DWORD)v16 && !wcsicmp((const wchar_t *)(v18 + 42), (const wchar_t *)a2) )
          break;
        i = v18;
      }
    }
    if ( a4 )
      *a4 = i;
    if ( !v18 )
    {
      if ( a5 )
        *a5 = 2 * v16;
      goto LABEL_19;
    }
  }
  else
  {
    v18 = 0LL;
    if ( (unsigned __int16)a2 >= 0xC000u )
      v18 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
    if ( a4 )
      *a4 = 0LL;
    if ( !v18 )
      goto LABEL_19;
  }
  if ( !a6 )
  {
LABEL_19:
    *a7 = v18;
    return 0LL;
  }
  LowBox = RtlpLookupOrCreateLowBox(a1, v18, a3);
  if ( LowBox )
  {
    *a6 = LowBox;
    goto LABEL_19;
  }
  return 3221225495LL;
}
