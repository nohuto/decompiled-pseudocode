/*
 * XREFs of ?AllocateElements@?$NonPagedPoolZeroedArray@_K$01$0DAGBGJFG@@@QEAAPEA_KI@Z @ 0x1C0017220
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C008E2C0 (VidSchInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0018D80 (memset.c)
 */

PVOID __fastcall NonPagedPoolZeroedArray<unsigned __int64,2,811690326>::AllocateElements(_DWORD *a1, unsigned int a2)
{
  __int64 v4; // rbx
  PVOID result; // rax

  v4 = a2;
  if ( a2 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 8 )
      return 0LL;
    result = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x30616956u);
  }
  else
  {
    result = a1 + 2;
  }
  *(_QWORD *)a1 = result;
  a1[6] = a2;
  if ( result )
  {
    if ( a2 )
    {
      memset(result, 0, 8 * v4);
      return *(PVOID *)a1;
    }
  }
  return result;
}
