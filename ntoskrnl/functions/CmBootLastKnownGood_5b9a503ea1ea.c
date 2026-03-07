__int64 __fastcall CmBootLastKnownGood(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  ULONG_PTR BugCheckParameter4; // r10
  ULONG_PTR v6; // r8
  ULONG_PTR v7; // r9

  result = a3;
  BugCheckParameter4 = a4;
  if ( (_BYTE)CmFirstTime == 1 && (unsigned int)(a1 - 2) <= 1 )
  {
    v6 = 0LL;
    if ( result )
      v7 = *(_QWORD *)(result + 8);
    else
      v7 = 0LL;
    if ( a2 )
      v6 = *(_QWORD *)(a2 + 8);
    KeBugCheckEx(0x5Au, 1uLL, v6, v7, BugCheckParameter4);
  }
  return result;
}
