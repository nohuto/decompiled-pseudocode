/*
 * XREFs of ReadGenAddrEx @ 0x1C0002D5C
 * Callers:
 *     ReadGenAddrHiddenEx @ 0x1C0002E18 (ReadGenAddrHiddenEx.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0002E48 (ReadGenAddrMaybeHiddenEx.c)
 *     GetCpcDifferentialFeedback @ 0x1C00040F0 (GetCpcDifferentialFeedback.c)
 * Callees:
 *     ReadGenAddr @ 0x1C0002D04 (ReadGenAddr.c)
 *     ReadIoMemRawEx @ 0x1C0002EF8 (ReadIoMemRawEx.c)
 */

unsigned __int64 __fastcall ReadGenAddrEx(_BYTE *a1)
{
  unsigned __int64 IoMemRaw; // rax
  __int64 v3; // r11
  unsigned __int64 v4; // rdx
  char v5; // cl
  unsigned __int8 v6; // cl

  if ( *a1 != 10 )
    return ReadGenAddr((__int64)a1);
  IoMemRaw = ReadIoMemRawEx();
  v4 = IoMemRaw;
  if ( IoMemRaw )
  {
    v5 = *(_BYTE *)(v3 + 2);
    if ( v5 )
      v4 = IoMemRaw >> v5;
    v6 = *(_BYTE *)(v3 + 1);
    if ( v6 < 0x40u )
      v4 &= (1LL << v6) - 1;
  }
  return v4;
}
