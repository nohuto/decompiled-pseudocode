/*
 * XREFs of VmpProcessAccessedBatch @ 0x1405A4A70
 * Callers:
 *     VmpQueryAccessedState @ 0x1405A4E1C (VmpQueryAccessedState.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HvlGetSparseGpaPagesAccessState @ 0x1405C9B2C (HvlGetSparseGpaPagesAccessState.c)
 */

unsigned __int64 __fastcall VmpProcessAccessedBatch(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4, int a5)
{
  __int64 v6; // rbp
  __int64 v10; // rdx
  int SparseGpaPagesAccessState; // eax
  int v12; // r10d
  unsigned __int64 result; // rax
  _BYTE *i; // r8
  unsigned __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[32]; // [rsp+38h] [rbp-50h] BYREF

  v16 = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  while ( 1 )
  {
    v10 = 0LL;
    if ( v6 == -1 )
    {
      v12 = -1073741823;
      v16 = 0LL;
    }
    else
    {
      if ( a5 && (*(_BYTE *)(a1 + 88) & 1) == 0 )
        LODWORD(v10) = 1;
      SparseGpaPagesAccessState = HvlGetSparseGpaPagesAccessState(v6, v10, a3, a2, (__int64)&v16, (__int64)v17);
      v10 = v16;
      v12 = SparseGpaPagesAccessState;
    }
    result = (unsigned __int64)v17;
    for ( i = v17; i < &v17[v10]; ++a4 )
    {
      v15 = *a4;
      if ( (*i & 1) != 0 )
        v15 |= 1uLL;
      ++i;
      *a4 = v15 & 0xFFFFFFFFFFFFFFF9uLL | 4;
    }
    a2 += 8 * v10;
    a3 -= v10;
    if ( !a3 )
      break;
    if ( v12 < 0 )
    {
      result = *a4;
      if ( (*a4 & 4) == 0 )
      {
        result |= 6uLL;
        *a4 = result;
      }
      a2 += 8LL;
      ++a4;
      if ( !--a3 )
        break;
    }
  }
  return result;
}
