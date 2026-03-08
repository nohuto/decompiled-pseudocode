/*
 * XREFs of HalpTscInitializeSynchronizationContext @ 0x140396E74
 * Callers:
 *     HalpTscSynchronization @ 0x140396C20 (HalpTscSynchronization.c)
 *     HalpPostSleepMP @ 0x140A93F28 (HalpPostSleepMP.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __fastcall HalpTscInitializeSynchronizationContext(__int64 a1, char a2, int *a3, ULONG *a4)
{
  int v4; // edi
  ULONG result; // eax

  v4 = 0;
  *(_BYTE *)(a1 + 33) = a2;
  if ( a4 )
  {
    *(_DWORD *)a1 = *a4;
    result = *a4;
    *(_DWORD *)(a1 + 40) = *a4;
  }
  else
  {
    result = KeQueryActiveProcessorCountEx(0xFFFFu);
    *(_DWORD *)(a1 + 40) = result;
    *(_DWORD *)a1 = result;
  }
  if ( a3 )
  {
    *(_BYTE *)(a1 + 34) = 1;
    v4 = *a3;
  }
  else
  {
    *(_BYTE *)(a1 + 34) = 0;
  }
  *(_DWORD *)(a1 + 36) = v4;
  return result;
}
