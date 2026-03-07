__int64 __fastcall sub_1400A2E8C(__int64 a1, __int64 a2)
{
  __int64 Pool2; // rax
  __int64 v5; // rbx
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = off_1400D44C8;
  Pool2 = ExAllocatePool2(64LL, 40LL, 1685091442LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 8) = 0;
    *(_QWORD *)Pool2 = &off_1400D41D0;
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_QWORD *)(Pool2 + 32) = 0LL;
    if ( a2 )
      sub_1400011A8((_QWORD *)Pool2, a2, 0x19uLL);
  }
  else
  {
    v5 = 0LL;
  }
  result = a1;
  *(_QWORD *)(a1 + 16) = v5;
  return result;
}
