/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x1C001FBC4
 * Callers:
 *     NVMeStartAsyncEventCommands @ 0x1C00107F0 (NVMeStartAsyncEventCommands.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C001BA70 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C001E280 (NVMeGetLogPageCompletion.c)
 *     NVMeReConfigAsyncEventCompletion @ 0x1C0021890 (NVMeReConfigAsyncEventCompletion.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 */

__int64 __fastcall NVMeIssueAsyncEventCommand(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  LocalCommandReuse(a1, a2);
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a2 + 96) + 4244LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a2 + 96) + 4096LL) = 12;
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4224LL) = NVMeAsyncEventRequestCompletion;
  ProcessCommand(a1, a2 + 8);
  result = *(unsigned __int8 *)(a2 + 11);
  if ( (unsigned __int8)result < 2u )
  {
    if ( !*(_BYTE *)(a1 + 24) )
      return result;
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 4492) + 1);
    *(_DWORD *)(a1 + 4492) = result;
    if ( !*(_BYTE *)(a1 + 22) )
      return result;
  }
  return StorPortExtendedFunction(85LL, a1, 0LL);
}
