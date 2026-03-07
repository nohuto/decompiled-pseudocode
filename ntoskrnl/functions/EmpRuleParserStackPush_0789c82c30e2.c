__int64 __fastcall EmpRuleParserStackPush(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  __int64 *v10; // rcx

  result = ExAllocatePool2(256LL, 0x28uLL, 0x74734D45u);
  if ( result )
  {
    v10 = (__int64 *)(result + 32);
    *(_DWORD *)(result + 24) = a5;
    *(_DWORD *)result = a2;
    *(_QWORD *)(result + 8) = a3;
    *(_QWORD *)(result + 16) = a4;
    result = *(_QWORD *)(a1 + 8);
    *v10 = result;
    ++*(_DWORD *)a1;
    *(_QWORD *)(a1 + 8) = v10;
  }
  return result;
}
