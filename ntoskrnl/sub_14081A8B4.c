/*
 * XREFs of sub_14081A8B4 @ 0x14081A8B4
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14081A5DC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall sub_14081A8B4(__int64 a1, char a2, void *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // ebx
  unsigned __int64 v10; // r10
  unsigned __int16 *v11; // rdx
  char *v12; // rcx
  __int64 v13; // r8
  char *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rax
  unsigned __int16 *v19; // rcx

  v5 = 0;
  if ( a3 )
    memset(a3, 0, 16LL * a4);
  v10 = (unsigned int)(*(_DWORD *)(a1 + 4) + 20);
  v11 = 0LL;
  if ( a1 + 20 != v10 + a1 )
    v11 = (unsigned __int16 *)(a1 + 20);
  while ( v11 )
  {
    v12 = (char *)v11 - a1;
    if ( a2 == 1 )
    {
      if ( (unsigned __int64)(v12 + 20) > v10 )
        return 3221225534LL;
      v13 = *v11;
      if ( (unsigned __int64)&v12[v13] > v10 )
        return 3221225534LL;
      if ( v11[1] > (unsigned __int16)v13 )
        return 3221225534LL;
      v14 = (char *)v11 + v13;
      if ( (unsigned __int16 *)((char *)v11 + v13) < v11 )
        return 3221225534LL;
      v15 = (unsigned __int64)v11 + v11[1] + 16;
      if ( v15 < (unsigned __int64)(v11 + 8) )
        return 3221225534LL;
      if ( v15 > (unsigned __int64)v14 )
        return 3221225534LL;
      v16 = (unsigned __int64)v11 + v11[1] + (unsigned __int64)v11[3] + 16;
      if ( v16 < (unsigned __int64)(v11 + 8) )
        return 3221225534LL;
      if ( v16 > (unsigned __int64)v14 )
        return 3221225534LL;
      v17 = *((_DWORD *)v11 + 2);
      if ( v17 )
      {
        if ( (v17 & 3) == 0 )
          return 3221225534LL;
      }
    }
    if ( a3 && v5 < a4 )
    {
      v18 = 2LL * v5;
      *((_BYTE *)a3 + 8 * v18) = 2;
      *((_QWORD *)a3 + v18 + 1) = v11;
    }
    ++v5;
    v19 = (unsigned __int16 *)((char *)v11 + *v11);
    v11 = 0LL;
    if ( v19 != (unsigned __int16 *)(v10 + a1) )
      v11 = v19;
  }
  if ( a5 )
    *a5 = v5;
  return a4 < v5 ? 0xC0000023 : 0;
}
