/*
 * XREFs of Etw_CommandWaitlisted @ 0x1C004A8B4
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000A998 (Command_InternalSendCommand.c)
 * Callees:
 *     McTemplateK0ppb16u_EtwWriteTransfer @ 0x1C004AF70 (McTemplateK0ppb16u_EtwWriteTransfer.c)
 */

__int64 __fastcall Etw_CommandWaitlisted(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax

  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 0x20) != 0 )
    return McTemplateK0ppb16u_EtwWriteTransfer(a1, a2, a3, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL), a3, a3 + 24, a4);
  return result;
}
