__int64 __fastcall SmHpChunkHeapProtect(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int i; // ebx
  __int64 v7; // rcx
  __int64 result; // rax
  _QWORD *v9; // rdx

  for ( i = 1; i < *(_DWORD *)(a1 + 256); ++i )
  {
    _BitScanReverse((unsigned int *)&v7, i);
    result = i;
    v9 = (_QWORD *)(*(_QWORD *)(a1 + 8 * v7) + 16 * (i ^ (unsigned __int64)(unsigned int)(1 << v7)));
    if ( *v9 )
      result = SmHpBufferProtectEx(v7, v9, a2, a3);
  }
  return result;
}
