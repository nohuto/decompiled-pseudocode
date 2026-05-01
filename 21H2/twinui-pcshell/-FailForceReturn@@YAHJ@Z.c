/*
 * XREFs of ?FailForceReturn@@YAHJ@Z @ 0x180160300
 * Callers:
 *     SimpleToRealIDListWithContext @ 0x180160CAC (SimpleToRealIDListWithContext.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FailForceReturn(int a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  _BOOL8 result; // rax

  result = 1;
  if ( a1 != -2147024672 && a1 != -2147221008 )
  {
    v1 = (unsigned int)(a1 + 2147024894);
    if ( (unsigned int)v1 > 0x33 || (v2 = 0x800000000300BLL, !_bittest64(&v2, v1)) )
    {
      if ( a1 != -2147024829 && a1 != -2147024542 )
      {
        v3 = (unsigned int)(a1 + 2147023696);
        if ( (unsigned int)v3 > 0x2C || (v4 = 0x100000800009LL, !_bittest64(&v4, v3)) )
        {
          if ( a1 != -2144927486 )
            return 0;
        }
      }
    }
  }
  return result;
}
