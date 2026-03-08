/*
 * XREFs of ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x1C00DE830
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C004344C (--1SURFREF@@QEAA@XZ.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     GreCreateBitmap @ 0x1C005A690 (GreCreateBitmap.c)
 */

HBITMAP GrepCreateDefaultBitmap(void)
{
  HBITMAP v0; // rbx
  HBITMAP result; // rax
  HBITMAP v2; // rdi
  __int64 v3; // rax
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0LL;
  result = (HBITMAP)GreCreateBitmap(1LL, 1, 1u, 1u, 0LL);
  v2 = result;
  if ( result )
  {
    v3 = HmgShareLockCheck((unsigned int)result, 5);
    v4 = v3;
    if ( v3 )
    {
      v0 = v2;
      *(_WORD *)(v3 + 14) |= 0x4000u;
    }
    SURFREF::~SURFREF((SURFREF *)&v4);
    return v0;
  }
  return result;
}
