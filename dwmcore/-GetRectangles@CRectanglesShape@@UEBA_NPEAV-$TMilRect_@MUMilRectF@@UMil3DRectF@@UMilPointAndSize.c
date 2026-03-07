char __fastcall CRectanglesShape::GetRectangles(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v5; // rcx

  v3 = 0;
  if ( a3 && a3 == *(_DWORD *)(a1 + 40) )
  {
    if ( *(_DWORD *)(a1 + 40) )
    {
      do
      {
        v5 = v3++;
        *(_OWORD *)(a2 + 16 * v5) = *(_OWORD *)(*(_QWORD *)(a1 + 16) + 16 * v5);
      }
      while ( v3 < *(_DWORD *)(a1 + 40) );
    }
    LOBYTE(v3) = 1;
  }
  return v3;
}
