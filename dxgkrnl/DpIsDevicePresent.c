/*
 * XREFs of DpIsDevicePresent @ 0x1C0394530
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpIsDevicePresent(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(_QWORD, __int64); // rax
  __int64 v9; // rdx

  v3 = 0;
  if ( !a1
    || !a2
    || !a3
    || (v7 = *(_QWORD *)(a1 + 64)) == 0
    || *(_DWORD *)(v7 + 16) != 1953656900
    || (unsigned int)(*(_DWORD *)(v7 + 20) - 2) > 1 )
  {
    v3 = -1073741811;
LABEL_14:
    v9 = -1073741811LL;
    goto LABEL_15;
  }
  if ( KeGetCurrentIrql() )
  {
    v3 = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    goto LABEL_14;
  }
  *a3 = 0;
  v8 = *(__int64 (__fastcall **)(_QWORD, __int64))(v7 + 664);
  if ( !v8 )
  {
    v9 = -1073741823LL;
    v3 = -1073741823;
LABEL_15:
    WdLogSingleEntry1(2LL, v9);
    return v3;
  }
  *a3 = v8(*(_QWORD *)(v7 + 632), a2);
  return v3;
}
