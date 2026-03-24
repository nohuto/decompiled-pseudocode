/*
 * XREFs of ControllerReset @ 0x1C000B3DC
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000A790 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000E398 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0018290 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     <none>
 */

char __fastcall ControllerReset(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  unsigned int v6; // ebp
  int v7; // ebx
  int v8; // eax
  int v9; // r14d
  int v10; // ebx
  const wchar_t *v11; // rax
  signed __int32 v13[10]; // [rsp+0h] [rbp-78h] BYREF
  const wchar_t *v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h]
  int v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h]
  int *v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+80h] [rbp+8h] BYREF
  int v21; // [rsp+88h] [rbp+10h] BYREF

  v4 = 0;
  v6 = *(_DWORD *)(a1 + 188) / 0xAu;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 28LL);
  if ( (v8 & 1) == 0 && (v7 & 1) != 0 )
  {
    v9 = 0;
    if ( v6 )
    {
      while ( (v8 & 1) == 0 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 160) + 40LL) == -1LL )
        {
LABEL_11:
          v4 = 1;
          goto LABEL_12;
        }
        StorPortExtendedFunction(81LL, a1, 10000LL, a4);
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 28LL);
        if ( ++v9 >= v6 )
          break;
      }
    }
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL) = v7 & 0xFFFFFFFE;
  _InterlockedOr(v13, 0);
  v8 = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 28LL);
  v10 = 0;
  if ( v6 )
  {
    while ( (v8 & 1) != 0 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 160) + 40LL) == -1LL )
        goto LABEL_11;
      StorPortExtendedFunction(81LL, a1, 10000LL, a4);
      v8 = *(_DWORD *)(*(_QWORD *)(a1 + 160) + 28LL);
      if ( ++v10 >= v6 )
        goto LABEL_12;
    }
    return 1;
  }
LABEL_12:
  if ( (v8 & 1) == 0 )
    return 1;
  *(_DWORD *)(a1 + 28) = 5;
  if ( v4 )
  {
    v20 = -1056964606;
    v19 = &v20;
    v11 = L"Controller Reset failed due to surprise remove";
  }
  else
  {
    v21 = -1056964606;
    v19 = &v21;
    v11 = L"Controller Reset failed";
  }
  v18 = 0LL;
  v17 = 0;
  v16 = 0LL;
  v15 = 0;
  v14 = v11;
  v13[8] = 5;
  StorPortNotification(4109LL, a1, 0LL);
  return 0;
}
