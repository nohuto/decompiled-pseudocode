__int64 __fastcall GetSrbDataBuffer(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r8

  if ( *(_BYTE *)(a1 + 2) == 40 )
  {
    v2 = *(_QWORD *)(a1 + 64);
    if ( a2 )
      *a2 = a1 + 60;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( a2 )
      *a2 = a1 + 16;
  }
  return v2;
}
