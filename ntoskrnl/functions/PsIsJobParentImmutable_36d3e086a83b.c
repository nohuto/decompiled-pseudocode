char __fastcall PsIsJobParentImmutable(__int64 a1)
{
  char result; // al

  if ( (*(_DWORD *)(a1 + 1540) & 1) != 0 )
    return 1;
  result = 0;
  if ( *(_QWORD *)(a1 + 1288) )
    return 1;
  return result;
}
