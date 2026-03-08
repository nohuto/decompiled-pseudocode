/*
 * XREFs of HalpInitializeProfiling @ 0x140A8DF54
 * Callers:
 *     HalpHwPerfCntInitSystem @ 0x140A8DE90 (HalpHwPerfCntInitSystem.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strncmp @ 0x1403D3310 (strncmp.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpHvCpuid @ 0x140508E4C (HalpHvCpuid.c)
 *     HalpLbrInitialize @ 0x140A8E07C (HalpLbrInitialize.c)
 */

__int64 __fastcall HalpInitializeProfiling(int a1)
{
  __int64 v8; // rcx
  char Str1[16]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h] BYREF

  *(_OWORD *)Str1 = 0LL;
  v14 = 0LL;
  LODWORD(KeGetCurrentPrcb()->HalReserved[2]) = 0;
  if ( !a1 )
  {
    if ( (HalpFeatureBits & 1) != 0 )
    {
      _RAX = 0LL;
      __asm { cpuid }
      *(_DWORD *)&Str1[4] = _RBX;
      *(_DWORD *)&Str1[8] = _RDX;
      *(_DWORD *)&Str1[12] = _RCX;
      *(_DWORD *)Str1 = _RAX;
      if ( !strncmp(&Str1[4], "AuthenticAMD", 0xCuLL) )
      {
        HalpProfileInterface = &Amd64ProfileInterface;
      }
      else if ( *(_DWORD *)Str1 >= 0xAu && !strncmp(&Str1[4], "GenuineIntel", 0xCuLL) )
      {
        _RAX = 10LL;
        __asm { cpuid }
        *(_DWORD *)&Str1[8] = _RCX;
        v8 = (unsigned __int8)_RAX;
        *(_DWORD *)&Str1[4] = _RBX;
        *(_DWORD *)&Str1[12] = _RDX;
        if ( (_BYTE)_RAX )
        {
          if ( (_RAX & 0xFF000000) != 0 && (_RBX & 1) == 0 )
          {
            HalpProfileInterface = &EmonProfileInterface;
            if ( (unsigned __int8)_RAX >= 4u )
              HalpProfileFeatures |= 1u;
          }
        }
      }
      HalpPerfInterruptHandler = 0LL;
      if ( HalpIsMicrosoftCompatibleHvLoaded(v8, _RDX) )
      {
        HalpHvCpuid(0x40000003u, &v14);
        if ( (BYTE12(v14) & 4) == 0 )
          HalpProfileInterface = &DefaultProfileInterface;
      }
    }
    HalpLbrInitialize();
  }
  return (*HalpProfileInterface)();
}
