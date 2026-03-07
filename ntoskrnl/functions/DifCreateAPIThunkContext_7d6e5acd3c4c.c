__int64 __fastcall DifCreateAPIThunkContext(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rcx

  result = ExAllocatePool2(64LL, 32LL, 1883334212LL);
  if ( result )
  {
    if ( a2 )
      v7 = *(_QWORD *)(a1 + 16);
    else
      v7 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(result + 8) = v7;
    *(_BYTE *)(result + 4) = a2 != 0;
    *(_DWORD *)result = a3;
  }
  return result;
}
