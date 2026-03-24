/*
 * XREFs of ?GrepCreateDefaultBitmap@@YAPEAUHBITMAP__@@XZ @ 0x1C00C9D20
 * Callers:
 *     <none>
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C001C608 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     GreCreateBitmap @ 0x1C00271A0 (GreCreateBitmap.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 */

HSURF GrepCreateDefaultBitmap(void)
{
  HSURF v0; // rbx
  HSURF result; // rax
  HSURF v2; // rdi
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v4; // [rsp+50h] [rbp-18h]

  v0 = 0LL;
  result = (HSURF)GreCreateBitmap(1, 1, 1u, 1u, 0LL);
  v2 = result;
  if ( result )
  {
    SURFREF::SURFREF((SURFREF *)v3, result);
    if ( v4 )
    {
      v0 = v2;
      *(_WORD *)(v4 + 14) |= 0x4000u;
    }
    SURFREF::~SURFREF((SURFREF *)v3);
    return v0;
  }
  return result;
}
