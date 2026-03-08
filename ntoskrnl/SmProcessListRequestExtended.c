/*
 * XREFs of SmProcessListRequestExtended @ 0x1409D4208
 * Callers:
 *     SmProcessListRequest @ 0x1409D3FBC (SmProcessListRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x140356410 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x1409D5DBC (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2)
{
  unsigned int v4; // esi
  unsigned int v5; // r14d
  __int64 v6; // r12
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  int Path; // ebp
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rax

  v4 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v5 = 1;
    do
    {
      v6 = a2 + 4LL * v4;
      v7 = SmKmStoreReference(a1, *(_DWORD *)(v6 + 16));
      if ( v7 )
      {
        v8 = a2 + ((unsigned __int64)v4 << 7);
        if ( *(_BYTE *)(v7 + 6020) == 1 )
        {
          Path = SmKmFileInfoGetPath(v7 + 6216, v8 + 144, 128LL);
          if ( Path < 0 )
          {
            v11 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v7 + 6016) & 0x3FF);
            ExReleaseRundownProtection_0(v11 + 1);
            return (unsigned int)Path;
          }
        }
        else
        {
          *(_WORD *)(v8 + 144) = 0;
        }
        v10 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v7 + 6016) & 0x3FF);
        ExReleaseRundownProtection_0(v10 + 1);
      }
      else
      {
        memmove((void *)(v6 + 16), (const void *)(a2 + 4 * (v5-- + 4LL)), 4 * (*(unsigned __int8 *)(a2 + 1) - v4--) - 4);
        --*(_BYTE *)(a2 + 1);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < *(unsigned __int8 *)(a2 + 1) );
  }
  return 0;
}
