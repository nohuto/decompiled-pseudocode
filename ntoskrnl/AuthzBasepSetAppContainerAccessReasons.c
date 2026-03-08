/*
 * XREFs of AuthzBasepSetAppContainerAccessReasons @ 0x14066CAFC
 * Callers:
 *     AuthzBasepAddAccessTypeList @ 0x140206EC4 (AuthzBasepAddAccessTypeList.c)
 * Callees:
 *     <none>
 */

void __fastcall AuthzBasepSetAppContainerAccessReasons(int a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r10
  int v5; // edx
  int v6; // eax

  v4 = 0LL;
  v5 = 1;
  if ( a4 )
  {
    while ( v5 )
    {
      if ( (v5 & a1) != 0 )
      {
        v6 = *(_DWORD *)(a4 + 4 * v4);
        if ( v6 == 0x10000 || v6 == 196608 || v6 == 0x400000 )
          *(_DWORD *)(a4 + 4 * v4) = a3 | 0x70000;
      }
      v4 = (unsigned int)(v4 + 1);
      v5 *= 2;
    }
  }
}
