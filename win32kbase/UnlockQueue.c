void __fastcall UnlockQueue(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a1[100]-- == 1 && (a1[99] & 0x4000000) != 0 )
    FreeQueue(a1, a2, a3, a4);
}
