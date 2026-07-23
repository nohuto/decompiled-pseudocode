/*
 * XREFs of PsSetThreadProperty @ 0x140210340
 * Callers:
 *     <none>
 * Callees:
 *     PspRemoveProperty @ 0x140210268 (PspRemoveProperty.c)
 *     PspValidateThread @ 0x140210380 (PspValidateThread.c)
 *     PspInsertProperty @ 0x140210400 (PspInsertProperty.c)
 */

__int64 __fastcall PsSetThreadProperty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx

  result = PspValidateThread(a1, a2, a3, a3);
  if ( (int)result >= 0 )
  {
    v7 = v4 + 1480;
    if ( v5 )
      return PspInsertProperty(v7, v6, v5);
    else
      return PspRemoveProperty(v7, v6, 0LL);
  }
  return result;
}
