__int64 __fastcall EtwpInitializeActivityIdSeed(__int64 a1, __int16 a2)
{
  int v3; // eax
  __int64 result; // rax
  size_t v5; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+38h] [rbp-20h] BYREF

  *(_WORD *)(a1 + 6) = a2;
  v6 = 0LL;
  *(_QWORD *)(a1 + 8) = MEMORY[0xFFFFF78000000014];
  v5 = 16LL;
  if ( (unsigned int)HeadlessDispatch(21LL, 0LL, 0LL, &v6, &v5) )
  {
    v3 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)&v6 = MEMORY[0xFFFFF78000000014];
  }
  else
  {
    v3 = v6;
  }
  *(_DWORD *)a1 = v3;
  result = WORD2(v6);
  *(_WORD *)(a1 + 4) = WORD2(v6);
  return result;
}
