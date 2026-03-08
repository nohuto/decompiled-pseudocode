/*
 * XREFs of DpWriteDeviceSpace @ 0x1C005D600
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02B3024 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpWriteDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(_QWORD, void *, _QWORD, _QWORD); // rax
  __int64 v12; // rcx
  ULONG v13; // eax
  __int64 (__fastcall *v14)(_QWORD, __int64, void *); // r11

  v6 = 0;
  if ( !a1 )
    goto LABEL_22;
  if ( !a3 )
    goto LABEL_22;
  if ( !a6 )
    goto LABEL_22;
  *a6 = 0;
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    goto LABEL_22;
  if ( *(_DWORD *)(v8 + 16) != 1953656900 )
    goto LABEL_22;
  v9 = *(_DWORD *)(v8 + 20);
  if ( (unsigned int)(v9 - 2) > 1 )
    goto LABEL_22;
  if ( !(_DWORD)a2 || (_DWORD)a2 == 1382638416 )
  {
    v14 = *(__int64 (__fastcall **)(_QWORD, __int64, void *))(v8 + 608);
    if ( !v14 )
    {
      v10 = -1073741823LL;
      goto LABEL_23;
    }
    v13 = v14(*(_QWORD *)(v8 + 568), a2, a3);
    goto LABEL_21;
  }
  if ( (_DWORD)a2 == 0x80000000 )
  {
    v13 = HalSetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
    goto LABEL_21;
  }
  if ( (_DWORD)a2 != -2147483647 || v9 != 2 )
  {
LABEL_22:
    v10 = -1073741811LL;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(v8 + 4004) & 4) == 0 )
  {
    v10 = -1071774661LL;
LABEL_23:
    v6 = v10;
    v12 = 2LL;
    goto LABEL_24;
  }
  v11 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(v8 + 2976);
  if ( v11 )
  {
    v13 = v11(*(_QWORD *)(v8 + 2944), a3, Offset, Length);
LABEL_21:
    *a6 = v13;
    v12 = 4LL;
    v10 = v13;
    goto LABEL_24;
  }
  v10 = -1073741823LL;
  v6 = -1073741823;
  v12 = 3LL;
LABEL_24:
  WdLogSingleEntry1(v12, v10);
  return v6;
}
