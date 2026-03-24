/*
 * XREFs of DpiFdoIsCompatibleWithHighResolutionBoot @ 0x1C0185C24
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 * Callees:
 *     DpiReadPnpRegistryValue @ 0x1C0188F90 (DpiReadPnpRegistryValue.c)
 */

char __fastcall DpiFdoIsCompatibleWithHighResolutionBoot(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v6; // rax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  if ( !v1 || *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 2 )
    return 1;
  v7 = 0;
  if ( (int)DpiReadPnpRegistryValue(a1, L"HighResBootCompatible", &v7, 4LL) < 0 )
  {
    v4 = WdLogNewEntry5_WdEvent(v3, v2);
    *(_QWORD *)(v4 + 24) = 1LL;
LABEL_6:
    WdLogEvent5_WdEvent(v4);
    return 1;
  }
  if ( v7 )
  {
    v4 = WdLogNewEntry5_WdEvent(v3, v2);
    *(_QWORD *)(v4 + 24) = v7;
    goto LABEL_6;
  }
  v6 = WdLogNewEntry5_WdEvent(v3, v2);
  *(_QWORD *)(v6 + 24) = 0LL;
  WdLogEvent5_WdEvent(v6);
  return 0;
}
