/*
 * XREFs of SdbpCheckForMatch @ 0x140754964
 * Callers:
 *     SdbpCheckKObject @ 0x140754F1C (SdbpCheckKObject.c)
 *     SdbpCheckExe @ 0x1407D237C (SdbpCheckExe.c)
 * Callees:
 *     SdbpMatchList @ 0x140754A68 (SdbpMatchList.c)
 *     SdbpMatchOsVersion @ 0x140754CD8 (SdbpMatchOsVersion.c)
 *     SdbReadWORDTag @ 0x14075A08C (SdbReadWORDTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbpGetExeEntryFlags @ 0x1407C2080 (SdbpGetExeEntryFlags.c)
 */

__int64 __fastcall SdbpCheckForMatch(int a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  unsigned int v6; // r14d
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v12; // r15d
  BOOL v13; // r12d
  _DWORD *v15; // rdi
  unsigned int FirstTag; // eax
  unsigned int v17; // [rsp+88h] [rbp+20h] BYREF

  v6 = a3;
  v9 = 0;
  v10 = (unsigned int)a3;
  v17 = 0;
  LOWORD(a3) = 4109;
  v12 = 1;
  v13 = SdbFindFirstTag(a2, v10, a3) != 0;
  if ( (unsigned int)SdbpMatchOsVersion(a2, v6) )
  {
    if ( (unsigned int)SdbpMatchList((unsigned int)&v17, 0, a1, a2, v6, a4, 0)
      && (v9 = v17) != 0
      && (unsigned int)SdbpGetExeEntryFlags(a2, v6, a6) )
    {
      v15 = a5;
      if ( a5 )
      {
        FirstTag = SdbFindFirstTag(a2, v6, 12289LL);
        if ( FirstTag )
          *v15 = (unsigned __int16)SdbReadWORDTag(a2, FirstTag, 2LL);
        else
          *v15 = 2;
      }
    }
    else
    {
      v9 = 0;
    }
  }
  if ( !*(_DWORD *)(a4 + 80) || v13 )
    v12 = 0;
  *(_DWORD *)(a4 + 80) = v12;
  return v9;
}
