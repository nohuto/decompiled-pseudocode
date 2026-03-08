/*
 * XREFs of HalpInitializeGhesRecovery @ 0x1403A39F0
 * Callers:
 *     HalpInitializeMce @ 0x140A87FF0 (HalpInitializeMce.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *HalpInitializeGhesRecovery())()
{
  _QWORD *v0; // rax
  __int64 v1; // rcx
  __int64 (__fastcall *result)(); // rax

  v0 = &unk_140C60D80;
  v1 = 32LL;
  do
  {
    v0 += 10;
    *(_OWORD *)(v0 - 13) = 0LL;
    *(_OWORD *)(v0 - 11) = 0LL;
    *(v0 - 9) = 0LL;
    *(v0 - 11) = HalpErrorDeferredHandler;
    *((_DWORD *)v0 - 28) = 0;
    --v1;
  }
  while ( v1 );
  result = HalpRequestGenericErrorRecovery;
  off_140C01DE8[0] = HalpRequestGenericErrorRecovery;
  return result;
}
