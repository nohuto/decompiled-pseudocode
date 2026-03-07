__int64 __fastcall DirectComposition::CGenericMarshaler::CGenericMarshaler(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 24) = 1LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &DirectComposition::CGenericMarshaler::`vftable';
  result = a1;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 36) = a2;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  return result;
}
