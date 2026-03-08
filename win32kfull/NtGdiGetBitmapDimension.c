/*
 * XREFs of NtGdiGetBitmapDimension @ 0x1C02C4BB0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBitmapDimension @ 0x1C02E039C (GreGetBitmapDimension.c)
 */

__int64 __fastcall NtGdiGetBitmapDimension(__int64 a1, _QWORD *a2)
{
  unsigned int BitmapDimension; // r8d
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( a1 )
  {
    BitmapDimension = GreGetBitmapDimension(a1, &v5);
    if ( BitmapDimension )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_QWORD *)MmUserProbeAddress;
      *a2 = v5;
    }
  }
  else
  {
    return 0;
  }
  return BitmapDimension;
}
