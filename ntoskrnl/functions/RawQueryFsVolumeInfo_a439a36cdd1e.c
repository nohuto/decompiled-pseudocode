__int64 __fastcall RawQueryFsVolumeInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  if ( !RawBeginOperation(a1, a2) )
    return 3221226094LL;
  *a4 -= 18;
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 192) + 24LL);
  RawEndOperation(a1, a2);
  return 0LL;
}
