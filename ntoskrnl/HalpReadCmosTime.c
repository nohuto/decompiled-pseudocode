/*
 * XREFs of HalpReadCmosTime @ 0x1402D181C
 * Callers:
 *     HalQueryRealTimeClock @ 0x1402D0F30 (HalQueryRealTimeClock.c)
 * Callees:
 *     HalpAcquireCmosSpinLockAndWait @ 0x1402D19D8 (HalpAcquireCmosSpinLockAndWait.c)
 */

__int64 __fastcall HalpReadCmosTime(_WORD *a1)
{
  unsigned __int8 v2; // al
  unsigned __int8 v3; // al
  unsigned __int8 v4; // al
  unsigned __int8 v5; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // al
  __int16 v8; // cx
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r9
  unsigned __int8 v11; // al
  __int16 v12; // dx
  __int16 v13; // cx
  __int64 result; // rax
  unsigned __int8 v15; // al
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // al

  HalpAcquireCmosSpinLockAndWait();
  a1[6] = 500;
  __outbyte(0x70u, 0);
  v2 = __inbyte(0x71u);
  a1[5] = (unsigned __int8)((v2 & 0xF) + 10 * (v2 >> 4));
  __outbyte(0x70u, 2u);
  v3 = __inbyte(0x71u);
  a1[4] = (unsigned __int8)((v3 & 0xF) + 10 * (v3 >> 4));
  __outbyte(0x70u, 4u);
  v4 = __inbyte(0x71u);
  a1[3] = (unsigned __int8)((v4 & 0xF) + 10 * (v4 >> 4));
  __outbyte(0x70u, 6u);
  v5 = __inbyte(0x71u);
  a1[7] = (unsigned __int8)((v5 & 0xF) + 10 * (v5 >> 4));
  __outbyte(0x70u, 7u);
  v6 = __inbyte(0x71u);
  a1[2] = (unsigned __int8)((v6 & 0xF) + 10 * (v6 >> 4));
  __outbyte(0x70u, 8u);
  v7 = __inbyte(0x71u);
  v8 = HalpCmosCenturyOffset;
  a1[1] = (unsigned __int8)((v7 & 0xF) + 10 * (v7 >> 4));
  if ( (v8 & 0x100) != 0 )
  {
    __outbyte(0x70u, 0xAu);
    v15 = __inbyte(0x71u);
    v16 = v15;
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v15 | 0x10);
    __outbyte(0x70u, HalpCmosCenturyOffset);
    v17 = __inbyte(0x71u);
    v10 = v17;
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v16);
  }
  else
  {
    __outbyte(0x70u, v8);
    v9 = __inbyte(0x71u);
    v10 = v9;
  }
  __outbyte(0x70u, 9u);
  v11 = __inbyte(0x71u);
  v12 = (unsigned __int8)((v11 & 0xF) + 10 * (v11 >> 4)) + 100 * (unsigned __int8)((v10 & 0xF) + 10 * (v10 >> 4));
  v13 = v12 + 100;
  if ( (unsigned __int16)(v12 - 1900) > 0x13u )
    v13 = (unsigned __int8)((v11 & 0xF) + 10 * (v11 >> 4)) + 100 * (unsigned __int8)((v10 & 0xF) + 10 * (v10 >> 4));
  *a1 = v13;
  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return result;
}
