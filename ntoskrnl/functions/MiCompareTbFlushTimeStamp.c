char __fastcall MiCompareTbFlushTimeStamp(int a1, int a2)
{
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  while ( 1 )
  {
    _InterlockedOr(v4, 0);
    if ( (unsigned int)(KiTbFlushTimeStamp - a1) > 2 || (a1 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - a1) >= 2 )
      return 0;
    if ( (KiTbFlushTimeStamp & 1) == 0 )
      break;
    v5 = 0;
    _InterlockedOr(v4, 0);
    while ( _bittest(&KiTbFlushTimeStamp, 0) )
      KeYieldProcessorEx(&v5);
    if ( (a1 & 1) == 0 )
      return 0;
  }
  return 1;
}
