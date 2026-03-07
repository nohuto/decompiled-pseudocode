__int64 __fastcall IsTopLevelOrLayeredChildWindow(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( IsTopLevelWindow(a1) )
    return 1LL;
  if ( (*(_BYTE *)(*(_QWORD *)(v1 + 40) + 26LL) & 8) == 0 )
    return 0LL;
  LOBYTE(v2) = GetTopLevelWindow(v1) != 0;
  return v2;
}
