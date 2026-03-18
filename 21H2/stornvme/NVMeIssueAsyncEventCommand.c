/*
 * XREFs of NVMeIssueAsyncEventCommand @ 0x1C0009474
 * Callers:
 *     NVMeStartAsyncEventCommands @ 0x1C00093EC (NVMeStartAsyncEventCommands.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00215A0 (NVMeAsyncEventRequestCompletion.c)
 *     NVMeGetLogPageCompletion @ 0x1C0023180 (NVMeGetLogPageCompletion.c)
 *     NVMeReConfigAsyncEventCompletion @ 0x1C00238F0 (NVMeReConfigAsyncEventCompletion.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

__int64 __fastcall NVMeIssueAsyncEventCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // r9

  *(_BYTE *)(a2 + 11) = 0;
  memset(*(void **)(a2 + 96), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a2 + 96) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a2 + 96);
  *(_QWORD *)(a2 + 64) = v4;
  *(_DWORD *)a2 = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
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
    v6 = 0LL;
  }
  else
  {
    result = (unsigned int)(*(_DWORD *)(a1 + 4172) + 1);
    *(_DWORD *)(a1 + 4172) = result;
    if ( !*(_BYTE *)(a1 + 22) )
      return result;
    v6 = 1LL;
  }
  return StorPortExtendedFunction(85LL, a1, 0LL, v6);
}
