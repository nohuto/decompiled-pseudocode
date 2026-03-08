/*
 * XREFs of MiGetCurrentMultiplexedVm @ 0x1402998AC
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     MmGetWorkingSetLeafSize @ 0x140299868 (MmGetWorkingSetLeafSize.c)
 *     MmQuerySystemWorkingSetInformation @ 0x1402F71FC (MmQuerySystemWorkingSetInformation.c)
 * Callees:
 *     <none>
 */

__int64 MiGetCurrentMultiplexedVm()
{
  __int64 v0; // rax

  v0 = *(_QWORD *)(qword_140C67048 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]);
  if ( *(_BYTE *)(v0 + 17052) )
    return v0 + 17344;
  else
    return 0LL;
}
