/*
 * XREFs of IoVerifierCheckForSettingsChange @ 0x140ABDBF0
 * Callers:
 *     IoVerifierInit @ 0x140ABDCAC (IoVerifierInit.c)
 *     ViSettingsIoCheckForChanges @ 0x140AD7F18 (ViSettingsIoCheckForChanges.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool3 @ 0x140AAB320 (ExAllocatePool3.c)
 */

void __fastcall IoVerifierCheckForSettingsChange(char a1)
{
  unsigned int i; // eax
  ULONG_PTR v2; // rbx
  void *Pool3; // rax
  __int64 v4; // [rsp+30h] [rbp-18h] BYREF
  int v5; // [rsp+38h] [rbp-10h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  v6 = 0;
  v4 = 1LL;
  v5 = 32;
  if ( (a1 & 0x10) != 0 )
  {
    _InterlockedExchange(&IovpEnabledInThePast, 1);
    _InterlockedExchange(&IovpDisabledWithoutReboot, 0);
    if ( !IovIrpTraces && IovIrpTracesLength && (VfRuleClasses & 0x400000) == 0 )
    {
      for ( i = 2; i < 0x100000; i *= 2 )
      {
        if ( i >= IovIrpTracesLength )
          break;
      }
      v2 = (unsigned __int64)i << 7;
      IovIrpTracesLength = i;
      Pool3 = (void *)ExAllocatePool3(64LL, v2, 0x54496656u, (__int64)&v4, 1u);
      IovIrpTraces = (__int64)Pool3;
      if ( Pool3 )
        memset(Pool3, 0, v2);
    }
  }
  else
  {
    _InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  }
}
