/*
 * XREFs of EtwTraceBeginPointerMessageGeneration @ 0x1C0121CC0
 * Callers:
 *     ?GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInputDest@@@Z @ 0x1C018FB6C (-GenerateMessage@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@_KPEBUCPointerInputFrame@@IKHHVCInp.c)
 * Callees:
 *     McTemplateK0hh_EtwWriteTransfer @ 0x1C01257B0 (McTemplateK0hh_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceBeginPointerMessageGeneration(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0hh_EtwWriteTransfer(a1, &BeginPointerMessageGeneration, a3, (unsigned __int16)a1, a2);
  return result;
}
