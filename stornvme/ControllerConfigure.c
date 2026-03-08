/*
 * XREFs of ControllerConfigure @ 0x1C0009528
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000D7A8 (NVMeControllerInitPart1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ControllerConfigure(__int64 a1)
{
  __int64 v1; // r8
  int v3; // eax
  int v4; // ecx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 200);
  if ( (v1 & 0x20000) != 0 && (*(_DWORD *)(a1 + 64) & 0x400) != 0 )
    v3 = 2048;
  else
    v3 = 0;
  v4 = v3 | 0x60;
  if ( (v1 & 0x80000000000LL) == 0 )
    v4 = v3;
  *(_DWORD *)(*(_QWORD *)(a1 + 184) + 20LL) = v4 | 0x460000;
  _InterlockedOr(v6, 0);
  return StorPortStallExecution(5000LL);
}
