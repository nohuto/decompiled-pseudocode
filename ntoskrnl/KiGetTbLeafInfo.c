/*
 * XREFs of KiGetTbLeafInfo @ 0x140B92F78
 * Callers:
 *     KeGetTbSize @ 0x140B5CBF8 (KeGetTbSize.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 KiGetTbLeafInfo()
{
  __int64 v0; // rdi
  unsigned int v1; // r10d
  unsigned int v7; // esi
  unsigned int v8; // r11d
  char v14; // r9
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rbx

  v0 = 0LL;
  v1 = 0;
  _RAX = 24LL;
  __asm { cpuid }
  v7 = _RAX;
  v8 = 1;
  do
  {
    _RAX = 24LL;
    __asm { cpuid }
    v14 = _RDX;
    if ( (unsigned int)_RAX | (unsigned int)_RBX | (unsigned int)_RCX | (unsigned int)_RDX )
    {
      v15 = (unsigned __int8)_RDX >> 5;
      if ( v15 >= v8 && (_RBX & 1) != 0 && (((v14 & 0x1F) - 1) & 0xFFFFFFFD) == 0 )
      {
        v16 = 0LL;
        v17 = (unsigned int)_RCX * WORD1(_RBX);
        if ( v15 <= v8 )
        {
          v16 = v0;
          v15 = v8;
        }
        v8 = v15;
        v0 = v16 + v17;
      }
    }
    ++v1;
  }
  while ( v1 <= v7 );
  return v0;
}
