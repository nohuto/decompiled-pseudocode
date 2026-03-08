/*
 * XREFs of KdpDeleteBreakpoint @ 0x140AAEB50
 * Callers:
 *     KdpSendWaitContinue @ 0x140AAD824 (KdpSendWaitContinue.c)
 *     KdpDeleteBreakpointRange @ 0x140AADCBC (KdpDeleteBreakpointRange.c)
 *     KdpRestoreBreakPointEx @ 0x140AB1530 (KdpRestoreBreakPointEx.c)
 *     KdpWriteBreakPointEx @ 0x140AB1D94 (KdpWriteBreakPointEx.c)
 * Callees:
 *     KdpLowWriteContent @ 0x140AB29EC (KdpLowWriteContent.c)
 */

char __fastcall KdpDeleteBreakpoint(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rbx
  int v3; // eax

  v1 = (unsigned int)(a1 - 1);
  if ( (unsigned int)(a1 - 1) > 0x1F )
    return 0;
  v2 = 5 * v1;
  v3 = *((_DWORD *)&unk_140C49560 + 10 * v1);
  if ( !v3 )
    return 0;
  if ( (v3 & 0xC) == 4 )
  {
    *((_DWORD *)&unk_140C49560 + 10 * v1) = 0;
    ++KdpBreakpointChangeCount;
  }
  else if ( (unsigned __int8)KdpLowWriteContent((unsigned int)v1) )
  {
    *((_DWORD *)&unk_140C49560 + 2 * v2) = 0;
  }
  return 1;
}
