__int64 __fastcall sub_1400A65B8(__int64 a1, __int64 *a2, __int128 *a3)
{
  __int64 Pool2; // rax
  __int128 v7; // xmm0
  __int64 v8; // rcx

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1400D5010;
  Pool2 = ExAllocatePool2(64LL, 40LL, 1685091442LL);
  if ( Pool2 )
  {
    v7 = *a3;
    v8 = *a2;
    *(_QWORD *)Pool2 = off_1400D4FF0;
    *(_QWORD *)(Pool2 + 8) = off_1400D5000;
    *(_OWORD *)(Pool2 + 24) = v7;
    *(_QWORD *)(Pool2 + 16) = v8;
  }
  *(_QWORD *)(a1 + 16) = Pool2;
  return a1;
}
