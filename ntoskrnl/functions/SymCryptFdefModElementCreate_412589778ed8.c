__int64 __fastcall SymCryptFdefModElementCreate(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdx

  v3 = (_QWORD *)(a1 + (unsigned int)((*(_DWORD *)(a3 + 4) << 6) - 64));
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 0LL;
  v3[4] = 0LL;
  v3[5] = 0LL;
  v3[6] = 0LL;
  v3[7] = 0LL;
  return a1;
}
