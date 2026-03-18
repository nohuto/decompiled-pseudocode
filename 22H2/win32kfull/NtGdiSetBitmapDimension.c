/*
 * XREFs of NtGdiSetBitmapDimension @ 0x1C02C4C60
 * Callers:
 *     <none>
 * Callees:
 *     GreSetBitmapDimension @ 0x1C02DE71C (GreSetBitmapDimension.c)
 */

__int64 __fastcall NtGdiSetBitmapDimension(HSURF a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // r8d

  if ( a1 )
  {
    v5 = GreSetBitmapDimension(a1);
    if ( v5 && a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = 0LL;
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
