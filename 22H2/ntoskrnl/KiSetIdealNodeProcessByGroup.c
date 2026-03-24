/*
 * XREFs of KiSetIdealNodeProcessByGroup @ 0x14035AC64
 * Callers:
 *     KeSetAffinityProcess @ 0x1403CABCC (KeSetAffinityProcess.c)
 *     KiExtendProcessAffinity @ 0x14052433C (KiExtendProcessAffinity.c)
 *     KeInitializeProcess @ 0x140703B8C (KeInitializeProcess.c)
 * Callees:
 *     KiSelectIdealProcessorForProcess @ 0x14035ACF4 (KiSelectIdealProcessorForProcess.c)
 *     KeSelectNodeForAffinity @ 0x14035E2C0 (KeSelectNodeForAffinity.c)
 */

__int64 __fastcall KiSetIdealNodeProcessByGroup(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  __int64 v6; // r11
  __int64 result; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  v8 = 0LL;
  WORD4(v8) = a3;
  v6 = *(_QWORD *)(a1 + 8LL * a3 + 88);
  *(_QWORD *)&v8 = v6;
  if ( !a2 )
    v4 = KeSelectNodeForAffinity(&v8);
  *(_WORD *)(a1 + 2 * v3 + 772) = *(_WORD *)(v4 + 146);
  *(_QWORD *)&v8 = v6 & *(_QWORD *)(v4 + 136);
  result = KiSelectIdealProcessorForProcess(v4, &v8);
  *(_WORD *)(a1 + 2 * v3 + 708) = result;
  *(_WORD *)(a1 + 2 * v3 + 644) = result;
  return result;
}
