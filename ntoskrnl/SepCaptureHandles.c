__int64 __fastcall SepCaptureHandles(unsigned int a1, __int64 a2, __int64 *a3)
{
  __int64 Pool2; // r8
  __int64 i; // rdx

  *a3 = 0LL;
  if ( a1 > 0xA )
    return 3221225711LL;
  if ( !a1 )
    return 0LL;
  Pool2 = ExAllocatePool2(256LL, 8LL * a1, 1665688915LL);
  if ( !Pool2 )
    return 3221225626LL;
  for ( i = 0LL; (unsigned int)i < a1; i = (unsigned int)(i + 1) )
    *(_QWORD *)(Pool2 + 8 * i) = *(_QWORD *)(a2 + 8 * i);
  *a3 = Pool2;
  return 0LL;
}
