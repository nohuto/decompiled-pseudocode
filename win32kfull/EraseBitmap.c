__int64 __fastcall EraseBitmap(__int64 a1)
{
  __int64 v2; // rbx

  GreExtGetObjectW(a1);
  v2 = GreSelectBitmap(ghdcMem, a1);
  NtGdiPatBlt(ghdcMem, 0, 0, 0, 0, 66);
  return GreSelectBitmap(ghdcMem, v2);
}
