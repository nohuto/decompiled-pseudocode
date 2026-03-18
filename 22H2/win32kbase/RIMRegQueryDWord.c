/*
 * XREFs of RIMRegQueryDWord @ 0x1C006DA64
 * Callers:
 *     ?ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ @ 0x1C006D960 (-ReadSettingsFromRegKey@DelayZonePalmRejection@@AEAAXXZ.c)
 *     ShouldEnableInputVirtualization @ 0x1C00837F0 (ShouldEnableInputVirtualization.c)
 *     rimObsReadMaxQueueSize @ 0x1C01AF234 (rimObsReadMaxQueueSize.c)
 * Callees:
 *     RIMRegQueryDWordFromKey @ 0x1C006C9F0 (RIMRegQueryDWordFromKey.c)
 *     RIMRegOpenKey @ 0x1C006DADC (RIMRegOpenKey.c)
 */

__int64 __fastcall RIMRegQueryDWord(__int64 a1, const WCHAR *a2, int a3, int *a4)
{
  int v4; // ebx
  unsigned int v7; // edi
  void *v8; // rax
  void *v9; // rsi
  __int64 result; // rax
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  v11 = a3;
  v7 = 0;
  v8 = (void *)RIMRegOpenKey(a1);
  v9 = v8;
  if ( v8 )
  {
    v7 = RIMRegQueryDWordFromKey(v8, a2, v4, &v11);
    ZwClose(v9);
    v4 = v11;
  }
  result = v7;
  *a4 = v4;
  return result;
}
