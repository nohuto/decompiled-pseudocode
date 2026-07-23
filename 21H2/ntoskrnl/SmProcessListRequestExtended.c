/*
 * XREFs of SmProcessListRequestExtended @ 0x140929EB4
 * Callers:
 *     SmProcessListRequest @ 0x140929CE4 (SmProcessListRequest.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     SmKmStoreReference @ 0x14028A7A8 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x14092B604 (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // r14d
  __int64 v9; // r12
  __int64 v10; // rax
  int Path; // ebp
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rax

  v6 = 0LL;
  v7 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v8 = 1;
    do
    {
      v9 = a2 + 4LL * v7;
      v6 = SmKmStoreReference(a1, *(_DWORD *)(v9 + 4), a3, a4);
      if ( v6 )
      {
        v10 = a2 + ((unsigned __int64)v7 << 7);
        if ( *(_BYTE *)(v6 + 6020) == 1 )
        {
          Path = SmKmFileInfoGetPath(v6 + 6216, v10 + 132, 128LL);
          if ( Path < 0 )
            goto LABEL_12;
        }
        else
        {
          *(_WORD *)(v10 + 132) = 0;
        }
        v12 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v6 + 6016) & 0x3FF);
        ExReleaseRundownProtection(v12 + 1);
        v6 = 0LL;
      }
      else
      {
        memmove((void *)(v9 + 4), (const void *)(a2 + 4 * (v8-- + 1LL)), 4 * (*(unsigned __int8 *)(a2 + 1) - v7--) - 4);
        --*(_BYTE *)(a2 + 1);
      }
      ++v7;
      ++v8;
    }
    while ( v7 < *(unsigned __int8 *)(a2 + 1) );
  }
  Path = 0;
LABEL_12:
  if ( v6 )
  {
    v13 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v6 + 6016) & 0x3FF);
    ExReleaseRundownProtection(v13 + 1);
  }
  return (unsigned int)Path;
}
