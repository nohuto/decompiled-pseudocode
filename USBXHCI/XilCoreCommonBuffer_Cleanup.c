/*
 * XREFs of XilCoreCommonBuffer_Cleanup @ 0x1C0052CE4
 * Callers:
 *     CommonBuffer_WdfEvtCleanupCallback @ 0x1C0032380 (CommonBuffer_WdfEvtCleanupCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0017FB0 (WPP_RECORDER_SF_ddd.c)
 */

__int64 __fastcall XilCoreCommonBuffer_Cleanup(__int64 a1)
{
  unsigned int *v2; // rbx
  unsigned int i; // edi
  __int64 result; // rax
  unsigned int v5; // edx

  v2 = (unsigned int *)(a1 + 56);
  for ( i = 0; i < 2; ++i )
  {
    result = *v2;
    v5 = v2[1];
    if ( (_DWORD)result != v5 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 3;
      result = WPP_RECORDER_SF_ddd(
                 *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
                 v5,
                 8,
                 10,
                 (__int64)&WPP_eecfbef36d1a35cfffa7ec1ff8c060f3_Traceguids,
                 i,
                 result,
                 v2[1]);
    }
    v2 += 16;
  }
  return result;
}
