__int64 __fastcall MiUpdateZeroFreeBitmap(__int64 a1, int a2, int a3, unsigned int a4, int a5)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r9
  char v8; // cl
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rbx
  __int64 result; // rax
  __int64 v12; // rcx

  v6 = a4;
  v7 = a4 & dword_140C65778;
  v8 = v7;
  v9 = v7 >> 6;
  v10 = 1LL << (v8 & 0x3F);
  result = *(_QWORD *)(a1 + 16);
  v12 = *(_QWORD *)(result + 16 * (a2 + 2 * (a3 + 794 * (v6 >> byte_140C6570D))) + 22472);
  if ( a5 )
    _InterlockedOr64((volatile signed __int64 *)(v12 + 8 * v9), v10);
  else
    _InterlockedAnd64((volatile signed __int64 *)(v12 + 8 * v9), ~v10);
  return result;
}
