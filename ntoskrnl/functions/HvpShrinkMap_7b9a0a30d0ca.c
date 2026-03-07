__int64 __fastcall HvpShrinkMap(__int64 a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rdi
  unsigned int v5; // r10d
  __int64 v7; // r11
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned int v10; // r8d
  __int64 CellMap; // rax
  int v12; // r8d
  unsigned int v13; // r10d
  unsigned int v14; // ebx

  v4 = a2;
  v5 = a4;
  v7 = a1;
  if ( !a4 )
  {
    v8 = *(_QWORD *)(632LL * a2 + a1 + 296);
    if ( v8 == *(_QWORD *)(632LL * a2 + v7 + 288) )
      return (*(__int64 (__fastcall **)(__int64, __int64))(v7 + 32))(v8, 12288LL);
  }
  v10 = (a2 << 31) + a4;
  while ( v10 < ((_DWORD)v4 << 31) + a3 )
  {
    CellMap = HvpGetCellMap(v7, v10);
    v10 = v12 + 4096;
    *(_OWORD *)CellMap = 0LL;
    *(_QWORD *)(CellMap + 16) = 0LL;
  }
  result = 511LL;
  v13 = ((v5 >> 12) + 511) >> 9;
  v14 = ((a3 >> 12) + 511) >> 9;
  if ( v13 < v14 )
    return (__int64)HvpFreeMap(v7, *(_QWORD *)(632 * v4 + v7 + 288), v13, v14 - 1);
  return result;
}
