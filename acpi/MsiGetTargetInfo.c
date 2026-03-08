/*
 * XREFs of MsiGetTargetInfo @ 0x1C00A0698
 * Callers:
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     memset @ 0x1C0002180 (memset.c)
 *     ProcessorGetMsiConnectionData @ 0x1C009ACE4 (ProcessorGetMsiConnectionData.c)
 */

__int64 __fastcall MsiGetTargetInfo(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[12]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x5CuLL);
  result = ProcessorGetMsiConnectionData(a1);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)a3 = v6[10];
    *(_WORD *)(a3 + 8) = v6[11];
  }
  return result;
}
