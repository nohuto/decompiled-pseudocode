__int64 __fastcall MiLockHotPatchUndoPages(__int64 *a1, int a2)
{
  int i; // ebx
  char v5; // dl
  __int64 result; // rax
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  v7 = 0;
  for ( i = 0; (unsigned __int8)RtlDetermineHotPatchUndoExtent(a2, 1, i, (unsigned int)&v8, (__int64)&v7); ++i )
  {
    result = MiLockDriverPageRange(a1, v8, v7, v5, 0LL);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
