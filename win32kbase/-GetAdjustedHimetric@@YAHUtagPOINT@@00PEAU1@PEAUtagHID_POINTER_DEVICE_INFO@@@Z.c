__int64 __fastcall GetAdjustedHimetric(
        struct tagPOINT a1,
        struct tagPOINT a2,
        struct tagPOINT a3,
        struct tagPOINT *a4,
        struct tagHID_POINTER_DEVICE_INFO *a5)
{
  unsigned int v5; // ebx
  __int64 v7; // r9
  LONG v9; // [rsp+64h] [rbp+Ch]
  LONG v10; // [rsp+6Ch] [rbp+14h]
  LONG y; // [rsp+74h] [rbp+1Ch]

  y = a3.y;
  v10 = a2.y;
  v9 = a1.y;
  v5 = 0;
  if ( a5 )
  {
    if ( (unsigned int)GetAdjustedHimetricWithoutRoundTripError(
                         *((_DWORD *)a5 + 40),
                         *((_DWORD *)a5 + 42),
                         *((_DWORD *)a5 + 44),
                         *((_DWORD *)a5 + 46),
                         a1.x,
                         a2.x,
                         a3.x,
                         (int *)a4) )
      return (unsigned int)GetAdjustedHimetricWithoutRoundTripError(
                             *((_DWORD *)a5 + 41),
                             *((_DWORD *)a5 + 43),
                             *((_DWORD *)a5 + 45),
                             *((_DWORD *)a5 + 47),
                             v9,
                             v10,
                             y,
                             &a4->y) != 0;
  }
  else
  {
    if ( !GetAdjustedHimetricLong(a1.x, a2.x, a3.x, (int *)a4) )
      return 0LL;
    LOBYTE(v5) = GetAdjustedHimetricLong(v9, v10, y, (int *)(v7 + 4)) != 0;
  }
  return v5;
}
