/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C0272128
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C02AE840 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016A260 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(struct PFT **const *this)
{
  unsigned int v1; // ebx
  unsigned int v4; // r14d
  unsigned int CurrentThreadId; // r15d
  __int64 v6; // rdi
  __int64 v7; // rbp
  struct PFF **v8; // rcx
  struct PFF *i; // rcx
  __int64 j; // rcx
  int v11; // r8d
  unsigned int v12; // eax
  struct PFF *v13; // rax
  struct PFF *v14; // rdx
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v15 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v6 = 5LL;
  v7 = 20LL;
  do
  {
    v8 = &(*this)[v6];
    if ( v8 )
    {
      for ( i = *v8; ; i = (struct PFF *)*((_QWORD *)v14 + 1) )
      {
        v13 = SkipInvalidPff(i);
        v14 = v13;
        if ( !v13 )
          break;
        for ( j = *((_QWORD *)v13 + 18); j; j = *(_QWORD *)(j + 16) )
        {
          v11 = *(_DWORD *)(j + 12);
          if ( (*(_DWORD *)(j + 8) & 4) != 0 )
          {
            v12 = v1 + 1;
            if ( v11 != CurrentThreadId )
              v12 = v1;
            v1 = v12;
          }
          else if ( v11 == v4 )
          {
            ++v1;
          }
        }
      }
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
  return v1;
}
