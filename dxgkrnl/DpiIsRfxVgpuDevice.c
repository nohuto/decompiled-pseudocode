/*
 * XREFs of DpiIsRfxVgpuDevice @ 0x1C0394B40
 * Callers:
 *     ?RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C004CC90 (-RfxVgpuResetCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030AA20 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DpiIsRfxVgpuDevice(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 64);
  return v1
      && *(_DWORD *)(v1 + 16) == 1953656900
      && (unsigned int)(*(_DWORD *)(v1 + 20) - 2) <= 1
      && *(_BYTE *)(v1 + 2694) != 0;
}
