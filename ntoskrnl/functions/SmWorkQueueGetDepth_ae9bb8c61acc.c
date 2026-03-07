__int64 __fastcall SmWorkQueueGetDepth(_DWORD *a1, int a2)
{
  int v2; // r8d

  v2 = a1[1648] + a1[1524];
  if ( a2 )
    return (unsigned int)(a1[1525] + v2);
  else
    return (unsigned int)((a1[1525] >> 8) + v2);
}
