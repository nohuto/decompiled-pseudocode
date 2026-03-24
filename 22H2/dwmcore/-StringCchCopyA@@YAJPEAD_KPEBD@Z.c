/*
 * XREFs of ?StringCchCopyA@@YAJPEAD_KPEBD@Z @ 0x18014E6E8
 * Callers:
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x18014D540 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyA(char *a1, __int64 a2, const char *a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  char v6; // al
  char *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = a1[v5];
        if ( !v6 )
          break;
        *a1++ = v6;
        --a2;
      }
      while ( a2 );
    }
    v7 = a1 - 1;
    if ( a2 )
      v7 = a1;
    v3 = a2 == 0 ? 0x8007007A : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
