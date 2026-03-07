PVOID __stdcall CcRemapBcb(PVOID Bcb)
{
  unsigned __int64 v1; // rcx
  __int64 v2; // rdx
  __int16 v3; // ax

  v1 = (unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_WORD *)v1 == 762 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 56LL);
  }
  else if ( *(_WORD *)v1 == 765 )
  {
    v1 = *(_QWORD *)(v1 + 56);
  }
  if ( !*(_WORD *)(v1 + 16) )
    KeBugCheckEx(0x34u, 0x25C6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v2 = *(_QWORD *)(v1 + 8);
  if ( !*(_DWORD *)(v2 + 4) )
    KeBugCheckEx(0x34u, 0x25C7uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = _InterlockedIncrement((volatile signed __int32 *)(v1 + 16));
  if ( !v3 )
    KeBugCheckEx(0x34u, 0xAECuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( v3 == 1 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 552));
  return (PVOID)(v1 | 1);
}
