_OWORD *__fastcall XilUsbDevice_QueryAttributes(
        __int64 a1,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4,
        _OWORD *a5,
        _BYTE *a6,
        _OWORD *a7)
{
  _OWORD *v8; // rcx
  _OWORD *result; // rax
  _OWORD *v10; // rcx

  if ( a2 )
    *a2 = *(_BYTE *)(a1 + 672);
  if ( a3 )
    *a3 = *(_BYTE *)(a1 + 673);
  if ( a4 )
    *a4 = *(_BYTE *)(a1 + 674);
  if ( a5 )
  {
    *a5 = 0LL;
    a5[1] = 0LL;
    v8 = *(_OWORD **)(a1 + 680);
    if ( v8 )
    {
      *a5 = *v8;
      a5[1] = v8[1];
    }
  }
  if ( a4 )
    *a6 = *(_BYTE *)(a1 + 688);
  result = a7;
  if ( a7 )
  {
    *a7 = 0LL;
    a7[1] = 0LL;
    v10 = *(_OWORD **)(a1 + 696);
    if ( v10 )
    {
      *a7 = *v10;
      a7[1] = v10[1];
    }
  }
  return result;
}
