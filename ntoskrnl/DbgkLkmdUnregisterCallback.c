/*
 * XREFs of DbgkLkmdUnregisterCallback @ 0x140937D20
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14034C060 (ExReferenceCallBackBlock.c)
 *     ExDereferenceCallBackBlock @ 0x14034C120 (ExDereferenceCallBackBlock.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     ExCompareExchangeCallBack @ 0x140388EF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkLkmdUnregisterCallback(__int64 a1)
{
  unsigned int v2; // edi
  union _RTL_RUN_ONCE *v3; // rsi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx

  v2 = 0;
  while ( 1 )
  {
    v3 = &RunOnce + 2 * v2;
    v4 = ExReferenceCallBackBlock((signed __int64 *)v3);
    v5 = v4;
    if ( v4 )
      break;
LABEL_6:
    if ( ++v2 >= 8 )
      return 3221226021LL;
  }
  if ( a1 != v4[1].Count || !ExCompareExchangeCallBack((signed __int64 *)v3, 0LL, (__int64)v4) )
  {
    ExDereferenceCallBackBlock((signed __int64 *)v3, v5);
    goto LABEL_6;
  }
  ExDereferenceCallBackBlock((signed __int64 *)v3, v5);
  ExWaitForRundownProtectionRelease(v5);
  ExFreePoolWithTag(v5, 0);
  return 0LL;
}
