/*
 * XREFs of MiIoSpaceGetBounds @ 0x14029C250
 * Callers:
 *     MiDereferenceIoPages @ 0x14029B654 (MiDereferenceIoPages.c)
 *     MiReferenceIoPages @ 0x14029BA60 (MiReferenceIoPages.c)
 *     MiFillSystemPtes @ 0x140328C00 (MiFillSystemPtes.c)
 *     MiMapMdlCommon @ 0x1403A2070 (MiMapMdlCommon.c)
 *     MiLookupIoPageNode @ 0x1403AB558 (MiLookupIoPageNode.c)
 * Callees:
 *     MiIsPageInHugePfn @ 0x14029C30C (MiIsPageInHugePfn.c)
 */

__int64 __fastcall MiIoSpaceGetBounds(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  _QWORD *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // ecx
  unsigned __int64 v10; // rax

  if ( (unsigned int)MiIsPageInHugePfn(a2, a2, a1) )
  {
    v9 = 1;
    *(_QWORD *)v2 = v3 & 0xFFFFFFFFFFFC0000uLL;
    v10 = v3 + 0x40000;
    *(_DWORD *)(v2 + 20) = 1;
    if ( v3 != ((v3 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) )
      v10 = (v3 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
    result = v10 - 1;
    *(_QWORD *)(v2 + 8) = result;
  }
  else
  {
    v4 = qword_140C69258;
    while ( v4 )
    {
      if ( v3 < *(_QWORD *)(v4 + 24) )
      {
        v4 = *(_QWORD *)v4;
      }
      else
      {
        if ( v3 <= *(_QWORD *)(v4 + 32) )
          break;
        v4 = *(_QWORD *)(v4 + 8);
      }
    }
    if ( v4 )
    {
      *(_QWORD *)v2 = *(_QWORD *)(v4 + 24);
      result = *(_QWORD *)(v4 + 32);
      v9 = *(_DWORD *)(v4 + 40);
      *(_QWORD *)(v2 + 8) = result;
      *(_DWORD *)(v2 + 20) = 2;
    }
    else
    {
      v5 = v3 + 0x40000;
      if ( v3 != ((v3 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL) )
        v5 = (v3 + 0x3FFFF) & 0xFFFFFFFFFFFC0000uLL;
      v6 = (_QWORD *)qword_140C69258;
      v7 = v5 - 1;
      while ( v6 )
      {
        if ( v7 < v6[3] )
        {
          v6 = (_QWORD *)*v6;
        }
        else
        {
          if ( v3 <= v6[4] )
            break;
          v6 = (_QWORD *)v6[1];
        }
      }
      if ( v6 )
        v7 = v6[3] - 1LL;
      result = 3LL;
      *(_QWORD *)(v2 + 8) = v7;
      *(_DWORD *)(v2 + 20) = 3;
      v9 = 3;
      *(_QWORD *)v2 = v3;
    }
  }
  *(_DWORD *)(v2 + 16) = v9;
  return result;
}
