/*
 * XREFs of ?StubDispDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C00B78A0
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C001CE70 (bDeleteSurface.c)
 */

void __fastcall StubDispDisableSurface(struct DHPDEV__ *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 1);
  if ( v2 )
    bDeleteSurface(v2);
  *((_QWORD *)a1 + 1) = 0LL;
}
