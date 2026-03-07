__int64 __fastcall HalpGetFullPmuOwnership(__int64 *a1)
{
  __int64 v1; // r8
  __int64 v2; // rax

  v1 = 0LL;
  if ( (_BYTE)KeNumberProcessors_0 )
  {
    do
    {
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(KiProcessorBlock[v1] + 88), 1, 0) )
        break;
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (int)v1 < (unsigned __int8)KeNumberProcessors_0 );
  }
  if ( (_DWORD)v1 == (unsigned __int8)KeNumberProcessors_0 )
  {
    v2 = HalpFullPmuHandle + 1;
    HalpFullPmuHandle = v2;
    if ( v2 == 3221225472LL )
    {
      v2 = 0x80000000LL;
      HalpFullPmuHandle = 0x80000000LL;
    }
    *a1 = v2;
    return 0LL;
  }
  else
  {
    while ( (int)v1 > 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(KiProcessorBlock[(unsigned int)(v1 - 1)] + 88));
      LODWORD(v1) = v1 - 1;
    }
    return 3221225626LL;
  }
}
