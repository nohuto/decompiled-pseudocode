/*
 * XREFs of RtlpInternEntryMatch @ 0x140703894
 * Callers:
 *     RtlpInternEntryFind @ 0x1407033D0 (RtlpInternEntryFind.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

char __fastcall RtlpInternEntryMatch(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  size_t v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 i; // rdi
  size_t v9; // r8
  size_t v10; // rbx
  const void *v11; // rcx

  v3 = *(_QWORD *)(a1 + 24);
  v5 = (unsigned __int16)v3;
  if ( *a2 == (unsigned __int16)v3 && a3 == (unsigned __int16)v3 + ((v3 >> 16) & 0x3FFFFFFF) )
  {
    v6 = a2[2];
    v7 = 0LL;
    if ( !v6 )
      return 1;
    for ( i = a2[1]; ; i += 32LL )
    {
      v9 = *(_QWORD *)(i + 16);
      v10 = *(_QWORD *)(i + 24) - ((*(_QWORD *)(i + 24) - 1LL) & (*(_QWORD *)(i + 24) + v5 - 1)) - 1 + v5;
      v11 = (const void *)(v10 + a1);
      v5 = v9 + v10;
      if ( memcmp(v11, *(const void **)i, v9) )
        break;
      if ( ++v7 >= v6 )
        return 1;
    }
  }
  return 0;
}
