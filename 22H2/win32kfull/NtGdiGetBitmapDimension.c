/*
 * XREFs of NtGdiGetBitmapDimension @ 0x1C02ADFA0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDimension @ 0x1C02C05D0 (GreGetBitmapDimension.c)
 */

__int64 __fastcall NtGdiGetBitmapDimension(HSURF a1, _QWORD *a2)
{
  unsigned int BitmapDimension; // r8d

  if ( a1 )
  {
    BitmapDimension = GreGetBitmapDimension(a1);
    if ( BitmapDimension )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = 0LL;
    }
  }
  else
  {
    return 0;
  }
  return BitmapDimension;
}
