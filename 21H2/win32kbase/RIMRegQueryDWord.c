/*
 * XREFs of RIMRegQueryDWord @ 0x1C00D5034
 * Callers:
 *     ShouldEnableInputVirtualization @ 0x1C0053D88 (ShouldEnableInputVirtualization.c)
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C0086B34 (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     rimObsReadMaxQueueSize @ 0x1C01B553C (rimObsReadMaxQueueSize.c)
 * Callees:
 *     RIMRegOpenKey @ 0x1C00D50AC (RIMRegOpenKey.c)
 *     RIMRegQueryDWordFromKey @ 0x1C00D510C (RIMRegQueryDWordFromKey.c)
 */

__int64 __fastcall RIMRegQueryDWord(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned int DWordFromKey; // edi
  void *v7; // rax
  void *v8; // rsi
  __int64 result; // rax

  v4 = a3;
  DWordFromKey = 0;
  v7 = (void *)RIMRegOpenKey();
  v8 = v7;
  if ( v7 )
  {
    DWordFromKey = RIMRegQueryDWordFromKey(v7);
    ZwClose(v8);
    v4 = a3;
  }
  result = DWordFromKey;
  *a4 = v4;
  return result;
}
