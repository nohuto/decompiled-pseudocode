/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C0023F44
 * Callers:
 *     NVMeControllerPowerUp @ 0x1C000E1A4 (NVMeControllerPowerUp.c)
 *     NVMePowerSettingChangeNotification @ 0x1C00104A0 (NVMePowerSettingChangeNotification.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     NVMeControllerGetLocalCommand @ 0x1C00043E0 (NVMeControllerGetLocalCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetNonOperationalPowerStatePermissiveMode(__int64 a1, unsigned __int8 a2)
{
  int v2; // esi
  int v4; // eax
  _BYTE *LocalCommand; // rax
  _BYTE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax

  v2 = a2;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    v4 = *(_DWORD *)(a1 + 32);
    if ( (v4 & 8) == 0 )
    {
      if ( (v4 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 4336) = *(_DWORD *)(a1 + 4336) ^ (*(_DWORD *)(a1 + 4336) ^ (4 * a2)) & 4 | 2;
      }
      else
      {
        LocalCommand = NVMeControllerGetLocalCommand(a1);
        v6 = LocalCommand;
        if ( LocalCommand )
        {
          v7 = (__int64)(LocalCommand + 8);
          *(_BYTE *)(*((_QWORD *)LocalCommand + 12) + 4253LL) |= 1u;
          *(_BYTE *)(*((_QWORD *)LocalCommand + 12) + 4253LL) &= ~2u;
          *(_WORD *)(*((_QWORD *)LocalCommand + 12) + 4244LL) = 0;
          v8 = *((_QWORD *)LocalCommand + 12);
          v9 = *(_DWORD *)(v8 + 4140) ^ v2;
          *(_BYTE *)(v8 + 4096) = 9;
          *(_DWORD *)(v8 + 4140) ^= v9 & 1;
          *(_BYTE *)(v8 + 4136) = 17;
          *(_QWORD *)(*((_QWORD *)v6 + 12) + 4224LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
          ProcessCommand(a1, v7);
          WaitForCommandCompleteWithCustomTimeout(a1);
        }
      }
    }
  }
}
