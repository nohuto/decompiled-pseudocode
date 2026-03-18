/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C0270684
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C027A900 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(struct PFT **const *this, struct PFF *a2)
{
  unsigned int v4; // r8d
  __int64 *v5; // rcx
  unsigned int v6; // ebx
  __int64 i; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *this != gpPFTPrivate )
    return 0LL;
  v9 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v4 = 0;
  v5 = (__int64 *)(*this + 5);
  v6 = 1;
  do
  {
    if ( v5 )
    {
      for ( i = *v5; i; i = *(_QWORD *)(i + 8) )
      {
        if ( a2 == (struct PFF *)i )
          goto LABEL_10;
      }
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0x14 );
  v6 = 0;
LABEL_10:
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v6;
}
