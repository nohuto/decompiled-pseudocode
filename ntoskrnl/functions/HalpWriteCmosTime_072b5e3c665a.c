__int64 __fastcall HalpWriteCmosTime(unsigned __int8 *a1)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d
  unsigned int v4; // r8d
  unsigned int v5; // ecx
  unsigned int v6; // r8d
  unsigned int v7; // r8d
  unsigned int v8; // r8d
  unsigned __int8 v9; // al
  __int64 result; // rax

  HalpAcquireCmosSpinLockAndWait();
  v2 = a1[10];
  __outbyte(0x70u, 0);
  __outbyte(0x71u, v2 % 0xA + 16 * (v2 / 0xA));
  v3 = a1[8];
  __outbyte(0x70u, 2u);
  __outbyte(0x71u, v3 % 0xA + 16 * (v3 / 0xA));
  v4 = a1[6];
  __outbyte(0x70u, 4u);
  __outbyte(0x71u, v4 % 0xA + 16 * (v4 / 0xA));
  v5 = a1[14];
  __outbyte(0x70u, 6u);
  __outbyte(0x71u, v5 % 0xA + 16 * (v5 / 0xA));
  v6 = a1[4];
  __outbyte(0x70u, 7u);
  __outbyte(0x71u, v6 % 0xA + 16 * (v6 / 0xA));
  v7 = a1[2];
  __outbyte(0x70u, 8u);
  __outbyte(0x71u, v7 % 0xA + 16 * (v7 / 0xA));
  v8 = *(__int16 *)a1;
  if ( v8 > 0x270F )
    v8 = 9999;
  if ( (HalpCmosCenturyOffset & 0x100) != 0 )
  {
    __outbyte(0x70u, 0xAu);
    v9 = __inbyte(0x71u);
    __outbyte(0x70u, 0xAu);
    __outbyte(0x71u, v9 | 0x10);
    __outbyte(0x70u, HalpCmosCenturyOffset);
    __outbyte(0x71u, (unsigned __int8)(v8 / 0x64) % 0xAu + 16 * ((unsigned __int8)(v8 / 0x64) / 0xAu));
    __outbyte(0x70u, 0xAu);
  }
  else
  {
    __outbyte(0x70u, HalpCmosCenturyOffset);
    v9 = (unsigned __int8)(v8 / 0x64) % 0xAu + 16 * ((unsigned __int8)(v8 / 0x64) / 0xAu);
  }
  __outbyte(0x71u, v9);
  __outbyte(0x70u, 9u);
  __outbyte(0x71u, v8 % 0x64 % 0xA + 16 * (v8 % 0x64 / 0xA));
  result = (unsigned int)_InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return result;
}
