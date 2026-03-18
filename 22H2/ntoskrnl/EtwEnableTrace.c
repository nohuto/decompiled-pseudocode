/*
 * XREFs of EtwEnableTrace @ 0x140833850
 * Callers:
 *     WdipSemEnableDisableTrace @ 0x1408337F0 (WdipSemEnableDisableTrace.c)
 *     EtwWmitraceWorker @ 0x1409EBA9C (EtwWmitraceWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEnableTrace @ 0x14080BDF4 (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  _OWORD *v9; // rdx
  __int16 v10; // r8
  int v11; // r9d
  __int128 *v12; // r10
  size_t Size; // [rsp+60h] [rbp-38h]
  size_t v15; // [rsp+70h] [rbp-28h]
  size_t v16; // [rsp+80h] [rbp-18h]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  LODWORD(v16) = 0;
  LODWORD(v15) = 0;
  LODWORD(Size) = 0;
  return EtwpEnableTrace(
           CurrentServerSiloGlobals[108],
           v12,
           v9,
           v10,
           v11,
           a5,
           a6,
           a7,
           a8,
           0LL,
           0LL,
           0LL,
           Size,
           0LL,
           v15,
           0LL,
           v16,
           0LL);
}
