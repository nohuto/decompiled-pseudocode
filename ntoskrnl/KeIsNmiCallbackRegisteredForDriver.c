/*
 * XREFs of KeIsNmiCallbackRegisteredForDriver @ 0x14056A100
 * Callers:
 *     MmIsVerifierApplicableToImage @ 0x140619C10 (MmIsVerifierApplicableToImage.c)
 * Callees:
 *     KiEnumerateNmiSxCallback @ 0x1403D0194 (KiEnumerateNmiSxCallback.c)
 */

__int64 __fastcall KeIsNmiCallbackRegisteredForDriver(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v5; // ebx
  PVOID *v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( !KiNmiCallbackListHead )
    return 0LL;
  v6 = 0LL;
  v5 = 0;
  while ( (unsigned int)KiEnumerateNmiSxCallback(&v6, &CurrentIrql, &v8) )
  {
    if ( v8 >= a1 && v8 < a2 )
      v5 = 1;
  }
  return v5;
}
