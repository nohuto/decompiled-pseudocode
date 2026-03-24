/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C000DC0C
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000A790 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C000E398 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E684 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C0018290 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     AdminQueueInitialize @ 0x1C000B088 (AdminQueueInitialize.c)
 *     ControllerEnable @ 0x1C000B354 (ControllerEnable.c)
 *     GetProcessorInformation @ 0x1C000BAB4 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C0018128 (NVMeControllerIdentify.c)
 *     NVMeNameSpaceIdentify @ 0x1C001A730 (NVMeNameSpaceIdentify.c)
 */

char __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  signed __int32 v4; // ecx
  const wchar_t *v5; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int32 v14[10]; // [rsp+0h] [rbp-78h] BYREF
  const wchar_t *v15; // [rsp+28h] [rbp-50h]
  int v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+40h] [rbp-38h]
  __int64 v19; // [rsp+48h] [rbp-30h]
  int *v20; // [rsp+50h] [rbp-28h]
  int v21; // [rsp+88h] [rbp+10h] BYREF
  int v22; // [rsp+90h] [rbp+18h] BYREF
  int v23; // [rsp+98h] [rbp+20h] BYREF

  if ( a2 && !AdminQueueInitialize(a1) )
  {
    v21 = -1056964606;
    v20 = &v21;
    v4 = 7;
    v5 = L"Admin Queue Initialize failed";
LABEL_4:
    v19 = 0LL;
    v18 = 0;
    v17 = 0LL;
    v16 = 0;
    v15 = v5;
    v14[8] = v4;
    *(_DWORD *)(a1 + 28) = v4;
    StorPortNotification(4109LL, a1, 0LL);
    return 0;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 160) + 36LL) = (*(_WORD *)(a1 + 284) - 1) & 0xFFF | (((*(_WORD *)(a1 + 284) - 1) & 0xFFF) << 16);
  _InterlockedOr(v14, 0);
  v7 = *(_QWORD *)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 440);
  *(_DWORD *)(v7 + 48) = v8;
  _InterlockedOr(v14, 0);
  *(_DWORD *)(v7 + 52) = HIDWORD(v8);
  _InterlockedOr(v14, 0);
  v9 = *(_QWORD *)(a1 + 160);
  v10 = *(_QWORD *)(a1 + 304);
  *(_DWORD *)(v9 + 40) = v10;
  _InterlockedOr(v14, 0);
  *(_DWORD *)(v9 + 44) = HIDWORD(v10);
  _InterlockedOr(v14, 0);
  *(_DWORD *)(*(_QWORD *)(a1 + 160) + 20LL) = 4587520;
  _InterlockedOr(v14, 0);
  StorPortStallExecution(5000LL);
  if ( !ControllerEnable(a1) )
  {
    v22 = -1056964606;
    v20 = &v22;
    v4 = 8;
    v5 = L"Controller enable failed";
    goto LABEL_4;
  }
  if ( a2 || (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 24) &= ~0x20u;
    NVMeControllerIdentify(a1);
    if ( a2 )
      NVMeNameSpaceIdentify(a1);
  }
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_DWORD *)(a1 + 216) = 65537;
  }
  else if ( !GetProcessorInformation(a1, v11, v12, v13) )
  {
    v23 = -1056964606;
    v20 = &v23;
    v4 = 10;
    v5 = L"Get processor information failed";
    goto LABEL_4;
  }
  return 1;
}
