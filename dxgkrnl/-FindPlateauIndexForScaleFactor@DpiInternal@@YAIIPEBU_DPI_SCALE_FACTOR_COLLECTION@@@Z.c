__int64 __fastcall DpiInternal::FindPlateauIndexForScaleFactor(
        DpiInternal *this,
        __int64 a2,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a2 + 8) != 1 )
  {
    do
    {
      if ( (unsigned int)this < *(_DWORD *)(*(_QWORD *)(a2 + 24) + 4 * result) )
        break;
      result = (unsigned int)(result + 1);
    }
    while ( (unsigned int)result < *(_DWORD *)(a2 + 8) - 1 );
  }
  return result;
}
