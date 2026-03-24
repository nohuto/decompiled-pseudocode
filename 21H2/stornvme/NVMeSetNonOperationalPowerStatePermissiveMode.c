/*
 * XREFs of NVMeSetNonOperationalPowerStatePermissiveMode @ 0x1C001BCD4
 * Callers:
 *     NVMeControllerPostPowerUp @ 0x1C0006760 (NVMeControllerPostPowerUp.c)
 *     NVMePowerSettingChangeNotification @ 0x1C0010838 (NVMePowerSettingChangeNotification.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002C00 (ProcessCommand.c)
 *     memset @ 0x1C0008040 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C001CC1C (WaitForCommandCompleteWithCustomTimeout.c)
 */

void __fastcall NVMeSetNonOperationalPowerStatePermissiveMode(__int64 a1, char a2)
{
  int v3; // eax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx

  if ( !*(_BYTE *)(a1 + 16) )
  {
    v3 = *(_DWORD *)(a1 + 24);
    if ( (v3 & 8) == 0 )
    {
      v4 = a2 & 1;
      if ( (v3 & 4) != 0 )
      {
        *(_DWORD *)(a1 + 4020) = (4 * v4) | *(_DWORD *)(a1 + 4020) & 0xFFFFFFFB | 2;
      }
      else
      {
        *(_BYTE *)(a1 + 851) = 0;
        memset(*(void **)(a1 + 936), 0, 0x10A0uLL);
        *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4232LL) = 0LL;
        v5 = *(_QWORD *)(a1 + 936);
        *(_QWORD *)(a1 + 904) = v5;
        *(_DWORD *)(a1 + 840) = 1;
        *(_BYTE *)(v5 + 4253) |= 1u;
        *(_BYTE *)(*(_QWORD *)(a1 + 936) + 4253LL) &= ~2u;
        *(_WORD *)(*(_QWORD *)(a1 + 936) + 4244LL) = 0;
        v6 = *(_QWORD *)(a1 + 936);
        LODWORD(v5) = *(_DWORD *)(v6 + 4140);
        *(_BYTE *)(v6 + 4096) = 9;
        *(_BYTE *)(v6 + 4136) = 17;
        *(_DWORD *)(v6 + 4140) = v4 | v5 & 0xFFFFFFFE;
        *(_QWORD *)(*(_QWORD *)(a1 + 936) + 4224LL) = NVMeSetNonOperationalPowerStatePermissiveModeCompletion;
        ProcessCommand(a1, a1 + 848);
        WaitForCommandCompleteWithCustomTimeout(a1);
      }
    }
  }
}
