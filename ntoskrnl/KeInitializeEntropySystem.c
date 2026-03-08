/*
 * XREFs of KeInitializeEntropySystem @ 0x14085E4DC
 * Callers:
 *     NtSetSystemInformation @ 0x1407E1F30 (NtSetSystemInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeInitializeEntropySystem(__int64 a1, void (__fastcall *a2)(__int64, __int64, __int64), __int64 a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rsi

  if ( KiEntropyTimingRoutine )
    return 3221225485LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v6 = KiProcessorBlock;
    v7 = (unsigned int)KeNumberProcessors_0;
    do
    {
      a2(*v6++ + 35300, 256LL, a3);
      --v7;
    }
    while ( v7 );
  }
  KiEntropyTimingRoutine = a1;
  return 0LL;
}
