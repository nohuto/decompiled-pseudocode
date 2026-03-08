/*
 * XREFs of KeRegisterBoundCallback @ 0x14056A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140388EF8 (ExCompareExchangeCallBack.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x14078FD20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     ExAllocateCallBack @ 0x140819790 (ExAllocateCallBack.c)
 *     MmVerifyCallbackFunction @ 0x140A2DAA8 (MmVerifyCallbackFunction.c)
 */

__int64 __fastcall KeRegisterBoundCallback(__int64 a1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rax
  struct _EX_RUNDOWN_REF *v4; // rsi

  v2 = 0LL;
  if ( (unsigned int)MmVerifyCallbackFunction() )
  {
    v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, 0LL);
    v4 = v3;
    if ( v3 )
    {
      if ( ExCompareExchangeCallBack(&KiBoundsCallback, v3, 0LL) )
        return a1;
      else
        SC_ENV::Free(v4);
    }
  }
  return v2;
}
