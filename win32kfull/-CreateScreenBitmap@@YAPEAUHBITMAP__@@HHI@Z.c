__int64 __fastcall CreateScreenBitmap(__int64 a1, __int64 a2, int a3)
{
  if ( a3 == 1 )
    return GreCreateBitmap(a1, a2, 1LL, 1LL, 0LL);
  else
    return GreCreateCompatibleBitmapInternal(*(_QWORD *)(gpDispInfo + 56LL), a1, a2, 0, 0LL, 0LL);
}
