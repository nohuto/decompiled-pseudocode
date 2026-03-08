/*
 * XREFs of HalpReadRtcStdPCAT @ 0x14051DB40
 * Callers:
 *     HalpCmosRangeHandler @ 0x14051DA5C (HalpCmosRangeHandler.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpReadRtcStdPCAT(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  char v6; // al
  __int64 v7; // r8
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al

  v4 = a1 + a3;
  v5 = a1;
  HalpAcquireCmosSpinLock(a1, a2, a3);
  do
  {
    __outbyte(0x70u, 0xAu);
    v6 = __inbyte(0x71u);
  }
  while ( v6 < 0 );
  v7 = 0LL;
  while ( v5 < v4 )
  {
    v8 = v5++;
    __outbyte(0x70u, v8);
    v9 = __inbyte(0x71u);
    *(_BYTE *)(v7 + a2) = v9;
    v7 = (unsigned int)(v7 + 1);
  }
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return (unsigned int)v7;
}
