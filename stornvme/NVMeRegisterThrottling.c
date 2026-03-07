__int64 __fastcall NVMeRegisterThrottling(__int64 a1, int a2, unsigned int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 result; // rax

  v4 = a3;
  v5 = a2;
  if ( a2 < 0 || *(_QWORD *)(a1 + 8LL * a2 + 4096) )
    return 3238002695LL;
  result = StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL);
  if ( !(_DWORD)result )
  {
    MEMORY[0] = v5;
    MEMORY[8] = 0LL;
    MEMORY[0x10] = 10 * v4;
    MEMORY[0x18] = 0;
    *(_QWORD *)(a1 + 8 * v5 + 4096) = 0LL;
    return 0LL;
  }
  return result;
}
