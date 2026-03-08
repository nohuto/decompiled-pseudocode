/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@I$01@@QEAAPEAII@Z @ 0x1C0311B58
 * Callers:
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C022245C (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall PagedPoolZeroedArray<unsigned int,2>::AllocateElements(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  void *v5; // rcx

  if ( a2 <= 2 )
  {
    v5 = a1 + 1;
    *a1 = (__int64)v5;
    if ( a2 )
      memset(v5, 0, 4LL * a2);
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 4 )
      return 0LL;
    *a1 = ExAllocatePool2(256LL, 4LL * a2, 1265072196LL);
  }
  result = *a1;
  *((_DWORD *)a1 + 4) = a2;
  return result;
}
