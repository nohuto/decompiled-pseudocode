/*
 * XREFs of DpiGdoHandleVideoParameters @ 0x1C02DA650
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C02DA5F0 (DpiGdoDispatchIoctl.c)
 * Callees:
 *     DxgkHandleVideoParameters @ 0x1C02951E8 (DxgkHandleVideoParameters.c)
 */

__int64 __fastcall DpiGdoHandleVideoParameters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)(a2 + 184);
  v5 = 0LL;
  if ( *(_DWORD *)(v4 + 16) < 0x164u || *(_DWORD *)(v4 + 8) < 0x164u )
  {
    v7 = -1073741306;
    v8 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v8 + 24) = -1073741306LL;
    WdLogEvent5_WdError(v8);
  }
  else
  {
    v7 = DxgkHandleVideoParameters(
           *(DXGADAPTER ****)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL) + 3896LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 64) + 156LL),
           *(char **)(a2 + 24),
           a4);
    v5 = 356LL;
  }
  *(_DWORD *)(a2 + 48) = v7;
  result = v7;
  *(_QWORD *)(a2 + 56) = v5;
  return result;
}
