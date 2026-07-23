/*
 * XREFs of ViCtxCaptureInitialIsrState @ 0x1409E52A4
 * Callers:
 *     ViCtxIsr @ 0x1409E5560 (ViCtxIsr.c)
 *     ViCtxIsrMessageBased @ 0x1409E55C0 (ViCtxIsrMessageBased.c)
 * Callees:
 *     RtlXSave @ 0x14023F600 (RtlXSave.c)
 */

volatile signed __int32 *__fastcall ViCtxCaptureInitialIsrState(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edx
  volatile signed __int32 *v4; // rbx
  unsigned __int64 v5; // rdx

  _InterlockedAdd(&ViCtxInterrupts, 1u);
  v3 = 0;
  while ( 1 )
  {
    v4 = (volatile signed __int32 *)((char *)&ViCtxIsrStateBlocks
                                   + 80 * (((unsigned __int8)_InterlockedExchangeAdd(&ViCtxHintIndex, 1u) + 1) & 0xF));
    if ( !_InterlockedCompareExchange(v4, 1, 0) )
      break;
    if ( (unsigned int)++v3 >= 0x10 )
    {
      v4 = 0LL;
      break;
    }
  }
  if ( v4 )
  {
    v5 = ViCtxXStateEnabledMask;
    *((_BYTE *)v4 + 8) = KeGetCurrentIrql();
    if ( ((v5 & 0xFFFFFFFFFFFFFFFCuLL) != 0 || !*(_BYTE *)(a1 + 94)) && (v4[1] & 1) != 0 )
    {
      RtlXSave(*((_DWORD **)v4 + 4), v5, a3);
      *((_DWORD *)v4 + 1) |= 2u;
    }
    _InterlockedAdd(&ViCtxInterruptsChecked, 1u);
  }
  return v4;
}
