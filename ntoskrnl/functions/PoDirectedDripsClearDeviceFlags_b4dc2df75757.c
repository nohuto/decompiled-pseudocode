__int64 __fastcall PoDirectedDripsClearDeviceFlags(__int64 a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rcx

  v2 = 0;
  if ( a1 && (v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) != 0 && (a2 & 0xFFFFFFC0) == 0 )
    *(_DWORD *)(v3 + 760) &= ~a2;
  else
    return (unsigned int)-1073741811;
  return v2;
}
