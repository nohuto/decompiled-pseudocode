/*
 * XREFs of MxReleaseFreeDescriptor @ 0x140B371A0
 * Callers:
 *     MiCreateFreePfns @ 0x140B37598 (MiCreateFreePfns.c)
 * Callees:
 *     MxCreateFreePfns @ 0x140B37690 (MxCreateFreePfns.c)
 */

__int64 __fastcall MxReleaseFreeDescriptor(unsigned __int64 *a1, int a2)
{
  int v3; // esi
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // [rsp+20h] [rbp-30h] BYREF
  __int128 v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-18h]
  int v11; // [rsp+3Ch] [rbp-14h]
  unsigned __int64 v12; // [rsp+40h] [rbp-10h]
  __int64 v13; // [rsp+48h] [rbp-8h]

  v8 = 0LL;
  v11 = 0;
  v3 = 0;
  v4 = *a1;
  v9 = 0LL;
  result = a1[3];
  v12 = v4;
  v10 = a2;
  if ( result != -1 )
  {
    v13 = result - v4 + 512;
    result = MxCreateFreePfns(&v8);
    v3 = 1;
  }
  v6 = a1[2];
  if ( v6 != -1LL )
  {
    v7 = *a1;
    if ( (v6 & 0xFFFFFFFFFFFFFE00uLL) <= *a1 )
      v3 = 1;
    else
      v7 = v6 & 0xFFFFFFFFFFFFFE00uLL;
    v12 = v7;
    v13 = v6 - v7 + 1;
    result = MxCreateFreePfns(&v8);
    if ( !v3 )
    {
      result = *a1 & 0x1FF;
      if ( (*a1 & 0x1FF) != 0 )
      {
        v12 = *a1;
        v13 = 512 - result;
        return MxCreateFreePfns(&v8);
      }
    }
  }
  return result;
}
