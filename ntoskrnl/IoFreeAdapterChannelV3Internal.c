/*
 * XREFs of IoFreeAdapterChannelV3Internal @ 0x14050DDE4
 * Callers:
 *     HalpContinueProcessingWaitQueue @ 0x14050D774 (HalpContinueProcessingWaitQueue.c)
 *     IoFreeAdapterChannelV3 @ 0x14050DD90 (IoFreeAdapterChannelV3.c)
 * Callees:
 *     IoFreeMapRegistersV3 @ 0x14050DE60 (IoFreeMapRegistersV3.c)
 *     HalpFreeDmaChannels @ 0x140514DEC (HalpFreeDmaChannels.c)
 */

__int64 __fastcall IoFreeAdapterChannelV3Internal(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 248) )
  {
    result = IoFreeMapRegistersV3(a1, *(_QWORD *)(a1 + 240));
    *(_DWORD *)(a1 + 248) = 0;
  }
  if ( !*(_BYTE *)(a1 + 441) )
  {
    if ( *(_DWORD *)(a1 + 392) )
      return HalpFreeDmaChannels(a1);
  }
  return result;
}
