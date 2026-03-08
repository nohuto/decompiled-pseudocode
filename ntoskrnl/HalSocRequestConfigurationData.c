/*
 * XREFs of HalSocRequestConfigurationData @ 0x1403731C8
 * Callers:
 *     HalpHpetDiscover @ 0x140372BE0 (HalpHpetDiscover.c)
 *     HalpApicSetupRegisterAccess @ 0x14037301C (HalpApicSetupRegisterAccess.c)
 *     HalpTscGetAttributes @ 0x1403736C4 (HalpTscGetAttributes.c)
 *     HalpTimerRegisterBuiltinPlugins @ 0x1403A08F8 (HalpTimerRegisterBuiltinPlugins.c)
 *     HalpHvDiscover @ 0x1403A09D8 (HalpHvDiscover.c)
 * Callees:
 *     HalpIsPartitionCpuManager @ 0x1403732F8 (HalpIsPartitionCpuManager.c)
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x14037333C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpIsHvPresent @ 0x14037337C (HalpIsHvPresent.c)
 *     HalpInterruptGetX2ApicPolicy @ 0x1403739AC (HalpInterruptGetX2ApicPolicy.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall HalSocRequestConfigurationData(int a1, __int64 a2, char *a3)
{
  unsigned int v3; // edi
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  char *p_IsPartitionCpuManager; // rax
  __int64 v14; // rcx
  char v15; // al
  bool v21; // cf
  __int64 v27; // rax
  bool v28; // r11
  bool v34; // al
  bool v35; // [rsp+20h] [rbp-30h] BYREF
  char IsPartitionCpuManager; // [rsp+21h] [rbp-2Fh] BYREF
  char IsHvPresent; // [rsp+22h] [rbp-2Eh] BYREF
  char IsMicrosoftCompatibleHvLoaded; // [rsp+23h] [rbp-2Dh] BYREF
  char v39; // [rsp+24h] [rbp-2Ch] BYREF
  char v40; // [rsp+25h] [rbp-2Bh] BYREF
  char X2ApicPolicy; // [rsp+26h] [rbp-2Ah] BYREF
  char v42; // [rsp+27h] [rbp-29h] BYREF
  char v43; // [rsp+28h] [rbp-28h] BYREF
  int v44; // [rsp+30h] [rbp-20h]
  int v45; // [rsp+34h] [rbp-1Ch]
  __int64 v46; // [rsp+38h] [rbp-18h]

  v3 = 0;
  IsPartitionCpuManager = 0;
  v42 = 0;
  IsHvPresent = 0;
  IsMicrosoftCompatibleHvLoaded = 0;
  v43 = 0;
  v35 = 0;
  v39 = 0;
  X2ApicPolicy = 0;
  v40 = 0;
  v5 = a1 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = (unsigned int)(v6 - 1);
      if ( (_DWORD)v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( (_DWORD)v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = (unsigned int)(v9 - 1);
            if ( (_DWORD)v10 )
            {
              v11 = (unsigned int)(v10 - 1);
              if ( (_DWORD)v11 )
              {
                v14 = (unsigned int)(v11 - 1);
                if ( (_DWORD)v14 )
                {
                  if ( (_DWORD)v14 != 1 )
                  {
                    v3 = -1073741811;
                    HalpTimerLastProblem = 30;
                    return v3;
                  }
                  IsPartitionCpuManager = HalpIsPartitionCpuManager(v14, a2);
                  p_IsPartitionCpuManager = &IsPartitionCpuManager;
                }
                else
                {
                  IsHvPresent = HalpIsHvPresent(v14, a2);
                  p_IsPartitionCpuManager = &IsHvPresent;
                }
              }
              else
              {
                IsMicrosoftCompatibleHvLoaded = HalpIsMicrosoftCompatibleHvLoaded(v11, a2);
                p_IsPartitionCpuManager = &IsMicrosoftCompatibleHvLoaded;
              }
            }
            else
            {
              if ( !(unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded(v10, a2) )
                goto LABEL_16;
              _RAX = 1073741828LL;
              __asm { cpuid }
              v21 = (_RAX & 0x100) != 0;
              v15 = 1;
              if ( !v21 )
LABEL_16:
                v15 = 0;
              v39 = v15;
              p_IsPartitionCpuManager = &v39;
            }
          }
          else
          {
            v40 = HalpIommuX2ApicSupport;
            p_IsPartitionCpuManager = &v40;
          }
        }
        else
        {
          X2ApicPolicy = HalpInterruptGetX2ApicPolicy(v8, a2);
          p_IsPartitionCpuManager = &X2ApicPolicy;
        }
      }
      else
      {
        if ( (unsigned __int8)HalpIsMicrosoftCompatibleHvLoaded(v7, a2) )
        {
          _RAX = 1073741827LL;
          __asm { cpuid }
          v46 = 0LL;
          v44 = _RAX;
          v45 = _RBX;
          v27 = _RAX & 0xE;
          v35 = v27 == 14;
          if ( v27 == 14 )
          {
            if ( (unsigned __int8)HalpIsPartitionCpuManager(_RCX, _RDX) )
            {
              _RAX = 1073741830LL;
              __asm { cpuid }
              v21 = (_RAX & 0x200) != 0;
              v34 = v28;
              if ( v21 )
                v34 = 0;
              v35 = v34;
            }
          }
        }
        p_IsPartitionCpuManager = (char *)&v35;
      }
    }
    else
    {
      p_IsPartitionCpuManager = &v43;
    }
  }
  else
  {
    p_IsPartitionCpuManager = &v42;
    v42 = HalpTimerPlatformSourceForced;
  }
  *a3 = *p_IsPartitionCpuManager;
  return v3;
}
