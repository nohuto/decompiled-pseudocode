__int64 __fastcall KiInitializeHgsPlusWorkloadClasses(__int64 a1, unsigned int a2)
{
  ULONG_PTR v3; // r10
  unsigned int v4; // r8d
  __int64 result; // rax

  _RAX = 0LL;
  v3 = a2;
  v4 = 1;
  __asm { cpuid }
  if ( (unsigned int)result >= 6 )
  {
    _RAX = 6LL;
    __asm { cpuid }
    result = _RAX & 0x880000;
    if ( (_DWORD)result == 8912896 )
    {
      v4 = BYTE1(_RCX);
      if ( BYTE1(_RCX) > 8u )
        KeBugCheckEx(0x5Du, 0x48475350uLL, v3, 8uLL, BYTE1(_RCX));
    }
  }
  if ( (_DWORD)v3 )
  {
    if ( (_DWORD)KiHgsPlusConfiguration != v4 )
      KeBugCheckEx(0x5Du, 0x48475350uLL, v3, (unsigned int)KiHgsPlusConfiguration, v4);
  }
  else
  {
    LODWORD(KiHgsPlusConfiguration) = v4;
  }
  return result;
}
