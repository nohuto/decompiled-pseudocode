/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02729FC
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C027CD90 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016AAC0 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C026D7BC (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(struct PFT **const *this, struct PFF *a2)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int v7; // ebx
  struct PFF **v8; // rcx
  struct PFF *i; // rcx
  struct PFF *v10; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *this != gpPFTPrivate )
    return 0LL;
  v11 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = 0;
  v6 = 5LL;
  v7 = 1;
  do
  {
    v8 = &(*this)[v6];
    if ( v8 )
    {
      for ( i = *v8; ; i = (struct PFF *)*((_QWORD *)v10 + 1) )
      {
        v10 = SkipInvalidPff(i);
        if ( !v10 )
          break;
        if ( a2 == v10 )
          goto LABEL_11;
      }
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 0x14 );
  v7 = 0;
LABEL_11:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v11);
  return v7;
}
