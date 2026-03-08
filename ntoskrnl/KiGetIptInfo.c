/*
 * XREFs of KiGetIptInfo @ 0x140397F50
 * Callers:
 *     KiInitializeXSave @ 0x140A8CAA0 (KiInitializeXSave.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HviGetIptFeatures @ 0x1406130AC (HviGetIptFeatures.c)
 *     KiGetCpuVendor @ 0x140A85800 (KiGetCpuVendor.c)
 */

__int64 __fastcall KiGetIptInfo(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax
  char v24; // r8
  int v25; // r8d
  __int128 v26; // [rsp+30h] [rbp-20h] BYREF

  *a1 = 0;
  *a2 = 0;
  v26 = 0LL;
  result = KiGetCpuVendor();
  if ( (_DWORD)result == 2 )
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (unsigned int)result >= 0x14 )
    {
      _RAX = 7LL;
      __asm { cpuid }
      if ( (_RBX & 0x2000000) != 0 || (result = HviGetIptFeatures(&v26, _RDX), (v26 & 0xFFFFF000) != 0) )
      {
        *a1 = 16;
        *a2 |= 9u;
        _RAX = 20LL;
        __asm { cpuid }
        if ( (_RCX & 1) != 0 || (_RCX & 4) != 0 )
        {
          *a1 += 16;
          *a2 |= 6u;
        }
        if ( (_RBX & 1) != 0 )
        {
          *a1 += 8;
          *a2 |= 0x10u;
        }
        if ( (_RBX & 4) != 0 && (_DWORD)_RAX )
        {
          _RAX = 20LL;
          __asm { cpuid }
          v24 = _RAX;
          if ( ((unsigned __int8)_RAX & 7u) > 4 )
            v24 = -4;
          v25 = v24 & 7;
          *a1 += 16 * v25;
          *a2 |= (32 << v25) - 32;
        }
        result = (*a1 + 63) & 0xFFFFFFC0;
        *a1 = result;
      }
    }
  }
  return result;
}
