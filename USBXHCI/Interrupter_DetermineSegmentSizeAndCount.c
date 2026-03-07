__int64 __fastcall Interrupter_DetermineSegmentSizeAndCount(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // r9d
  unsigned int v3; // edx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 32) == *(_DWORD *)(*(_QWORD *)(v1 + 128) + 64LL) )
  {
    v2 = 1;
  }
  else
  {
    v2 = 8;
    if ( (*(_QWORD *)(v1 + 336) & 0x10000000LL) == 0 )
      v2 = 4;
  }
  v3 = *(_DWORD *)(*(_QWORD *)(v1 + 88) + 92LL);
  result = 336LL;
  if ( v3 >= v2 )
    v3 = v2;
  if ( v3 > 2 && _bittest64((const signed __int64 *)(v1 + 336), 0x30u) )
    v3 = 2;
  *(_DWORD *)(a1 + 108) = v3;
  *(_DWORD *)(a1 + 112) = v3;
  *(_DWORD *)(a1 + 104) = 4096;
  *(_DWORD *)(a1 + 116) = 256;
  return result;
}
