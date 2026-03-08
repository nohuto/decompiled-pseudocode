/*
 * XREFs of HalpWriteRtcStdPCAT @ 0x14051DC40
 * Callers:
 *     HalpCmosRangeHandler @ 0x14051DA5C (HalpCmosRangeHandler.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x1402D1A0C (HalpAcquireCmosSpinLock.c)
 */

__int64 __fastcall HalpWriteRtcStdPCAT(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // ebx
  char v6; // al
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  __int64 i; // r8
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al

  v4 = a1 + a3;
  v5 = a1;
  HalpAcquireCmosSpinLock(a1, a2, a3);
  do
  {
    __outbyte(0x70u, 0xAu);
    v6 = __inbyte(0x71u);
  }
  while ( v6 < 0 );
  __outbyte(0x70u, 0xBu);
  v7 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  v8 = v7 | 0x80;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    __outbyte(0x71u, v8);
    if ( v5 >= v4 )
      break;
    v10 = v5++;
    __outbyte(0x70u, v10);
    v8 = *(_BYTE *)(i + a2);
  }
  __outbyte(0x70u, 0xBu);
  v11 = __inbyte(0x71u);
  __outbyte(0x70u, 0xBu);
  __outbyte(0x71u, v11 & 0x7F);
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return (unsigned int)i;
}
