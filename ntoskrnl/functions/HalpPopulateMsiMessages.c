__int64 __fastcall HalpPopulateMsiMessages(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  _DWORD *v8; // rbx
  __int64 v9; // r14
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v3 = 0;
  v10[0] = 0LL;
  result = 0LL;
  if ( a3 )
  {
    v8 = (_DWORD *)(a2 + 48);
    do
    {
      v9 = a2 + 88LL * v3;
      result = HalpInterruptGenerateMessage(a1, v9, &v11, v10);
      if ( (int)result < 0 )
        break;
      ++v3;
      *(_QWORD *)(v9 + 44) = 0LL;
      *(_DWORD *)(v9 + 52) = 0;
      *(v8 - 1) = HIDWORD(v11);
      *v8 = v11;
      v8[1] = v10[0];
      v8 += 22;
    }
    while ( v3 < a3 );
  }
  return result;
}
