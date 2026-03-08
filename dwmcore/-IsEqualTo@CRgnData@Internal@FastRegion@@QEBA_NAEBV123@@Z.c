/*
 * XREFs of ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x1801DAA98
 * Callers:
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180052DC0 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall FastRegion::Internal::CRgnData::IsEqualTo(
        FastRegion::Internal::CRgnData *this,
        const struct FastRegion::Internal::CRgnData *a2)
{
  int v4; // ebx
  int v5; // eax
  __int64 v6; // rsi
  int *v7; // rdx
  __int64 v8; // r10
  signed __int64 v9; // r15
  _DWORD *v10; // rcx
  char *v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rcx
  signed __int64 v14; // r14

  if ( *(_DWORD *)this == *(_DWORD *)a2 )
  {
    v4 = 0;
    v5 = *(_DWORD *)this - 1;
    if ( v5 <= 0 )
      return *((_DWORD *)this + 2 * v4 + 3) == *((_DWORD *)a2 + 2 * v4 + 3);
    v6 = 0LL;
    v7 = (int *)((char *)a2 + 24);
    v8 = this - a2;
    v9 = this - a2 - 4;
    while ( 1 )
    {
      v10 = (int *)((char *)v7 + v8 - 12);
      if ( *v10 != *(v7 - 3) )
        break;
      v11 = (char *)v10 + *(int *)((char *)v7 + v8 - 8);
      v12 = ((__int64)v7 + v9 + *(int *)((char *)v7 + v8) - (_QWORD)v11) >> 2;
      if ( (unsigned int)((*v7 - (*(v7 - 2) - 12LL) - 4) >> 2) != (_DWORD)v12 )
        break;
      v13 = 0LL;
      if ( (int)v12 > 0 )
      {
        v14 = (char *)v7 + *(v7 - 2) - 12 - v11;
        while ( *(_DWORD *)v11 == *(_DWORD *)&v11[v14] )
        {
          ++v13;
          v11 += 4;
          if ( v13 >= (int)v12 )
            goto LABEL_10;
        }
        return 0;
      }
LABEL_10:
      ++v4;
      ++v6;
      v7 += 2;
      if ( v6 >= v5 )
        return *((_DWORD *)this + 2 * v4 + 3) == *((_DWORD *)a2 + 2 * v4 + 3);
    }
  }
  return 0;
}
