/*
 * XREFs of DpiSharedPowerRegister @ 0x1C03997D0
 * Callers:
 *     DpiFdoDispatchInternalIoctl @ 0x1C0212B10 (DpiFdoDispatchInternalIoctl.c)
 * Callees:
 *     DxgRegisterSharedPowerComponent @ 0x1C02E0F4C (DxgRegisterSharedPowerComponent.c)
 */

__int64 __fastcall DpiSharedPowerRegister(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r14
  unsigned int v9; // edx
  bool v10; // zf
  __int64 v11; // rdx
  __int64 v12; // rbx
  void *v13; // r10
  void (*v14)(void *, void *); // r9
  void (*v15)(void *, unsigned int, unsigned int, unsigned __int8, void *); // rcx
  void (*v16)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int); // rax
  int v17; // eax

  v7 = *(_QWORD *)(a1 + 64);
  if ( a4 < 0x20 || !a3 )
  {
    v11 = -1073741789LL;
    LODWORD(v12) = -1073741789;
    goto LABEL_27;
  }
  v9 = *(_DWORD *)a3;
  if ( (unsigned int)(*(_DWORD *)a3 - 4096) > 2 )
  {
    v11 = -1073741127LL;
    goto LABEL_10;
  }
  switch ( v9 )
  {
    case 0x1000u:
      v10 = a4 == 32;
      break;
    case 0x1001u:
      v10 = a4 == 40;
      break;
    case 0x1002u:
      v10 = a4 == 48;
      break;
    default:
      goto LABEL_13;
  }
  if ( !v10 )
  {
LABEL_9:
    v11 = -1073741789LL;
LABEL_10:
    LODWORD(v12) = v11;
LABEL_27:
    WdLogSingleEntry1(2LL, v11);
    return (unsigned int)v12;
  }
LABEL_13:
  v13 = *(void **)(a3 + 8);
  if ( !v13 || (v14 = *(void (**)(void *, void *))(a3 + 24)) == 0LL )
  {
    v12 = -1073741811LL;
    goto LABEL_22;
  }
  if ( a6 != 32 || !a5 )
    goto LABEL_9;
  v15 = 0LL;
  if ( v9 >= 0x1001 )
    v15 = *(void (**)(void *, unsigned int, unsigned int, unsigned __int8, void *))(a3 + 32);
  v16 = 0LL;
  if ( v9 >= 0x1002 )
    v16 = *(void (**)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))(a3 + 40);
  v17 = DxgRegisterSharedPowerComponent(
          *(struct DXGADAPTER **)(v7 + 3912),
          v13,
          *(void (**)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *))(a3 + 16),
          v14,
          v15,
          v16);
  v12 = v17;
  if ( v17 < 0 )
  {
LABEL_22:
    v11 = v12;
    goto LABEL_27;
  }
  *(_QWORD *)a5 = *(_QWORD *)(v7 + 3912);
  *(_DWORD *)(a5 + 8) = *(_DWORD *)(*(_QWORD *)(a1 + 64) + 4164LL) != 0 ? 4 : 1;
  *(_QWORD *)(a5 + 16) = DxgSetSharedPowerComponentStateCB;
  *(_QWORD *)(a5 + 24) = DxgUnregisterSharedPowerDriverCB;
  *a7 = 32LL;
  return (unsigned int)v12;
}
