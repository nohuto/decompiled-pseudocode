/*
 * XREFs of NVMeControllerInitPart1 @ 0x1C0007384
 * Callers:
 *     NVMeHwFindAdapter @ 0x1C000ACD0 (NVMeHwFindAdapter.c)
 *     NVMeControllerPowerUp @ 0x1C0018D60 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C001906C (NVMeControllerReset.c)
 *     NVMeControllerReinitialize @ 0x1C00220A4 (NVMeControllerReinitialize.c)
 * Callees:
 *     ControllerConfigure @ 0x1C0007144 (ControllerConfigure.c)
 *     NVMeGetNVMSetAttributeList @ 0x1C00071B8 (NVMeGetNVMSetAttributeList.c)
 *     GetProcessorInformation @ 0x1C00075B8 (GetProcessorInformation.c)
 *     NVMeControllerIdentify @ 0x1C0007C08 (NVMeControllerIdentify.c)
 *     NVMeGetControllerIoCommandSetIdentify @ 0x1C0007D08 (NVMeGetControllerIoCommandSetIdentify.c)
 *     AdminQueueInitialize @ 0x1C0007E00 (AdminQueueInitialize.c)
 *     NVMeNameSpaceIdentify @ 0x1C0007F68 (NVMeNameSpaceIdentify.c)
 *     IsDumpMode @ 0x1C0008544 (IsDumpMode.c)
 *     NVMeGetNamespaceDescriptorListIdentify @ 0x1C0008768 (NVMeGetNamespaceDescriptorListIdentify.c)
 *     ControllerEnable @ 0x1C0009298 (ControllerEnable.c)
 *     NVMeGetNamespaceIoCommandSetIdentify @ 0x1C000B0FC (NVMeGetNamespaceIoCommandSetIdentify.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0017A04 (FillControllerRuntimeLog.c)
 */

__int64 __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  const wchar_t *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  signed __int32 v16[10]; // [rsp+0h] [rbp-E8h] BYREF
  const wchar_t *v17; // [rsp+28h] [rbp-C0h]
  int v18; // [rsp+30h] [rbp-B8h]
  _BYTE *v19; // [rsp+38h] [rbp-B0h]
  int v20; // [rsp+40h] [rbp-A8h]
  _DWORD *v21; // [rsp+48h] [rbp-A0h]
  int *v22; // [rsp+50h] [rbp-98h]
  int v23; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v24[2]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v25[96]; // [rsp+70h] [rbp-78h] BYREF

  memset(v25, 0, 0x58uLL);
  if ( !a2 || (unsigned __int8)AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 36LL) = (*(_WORD *)(a1 + 300) - 1) & 0xFFF | (((*(_WORD *)(a1 + 300) - 1) & 0xFFF) << 16);
    _InterlockedOr(v16, 0);
    v6 = *(_QWORD *)(a1 + 176);
    v7 = *(_QWORD *)(a1 + 456);
    *(_DWORD *)(v6 + 48) = v7;
    _InterlockedOr(v16, 0);
    *(_DWORD *)(v6 + 52) = HIDWORD(v7);
    _InterlockedOr(v16, 0);
    v8 = *(_QWORD *)(a1 + 176);
    v9 = *(_QWORD *)(a1 + 320);
    *(_DWORD *)(v8 + 40) = v9;
    _InterlockedOr(v16, 0);
    *(_DWORD *)(v8 + 44) = HIDWORD(v9);
    _InterlockedOr(v16, 0);
    ControllerConfigure(a1);
    v5 = ControllerEnable(a1);
    if ( v5 )
    {
      v4 = L"Controller enable failed";
      v10 = 8;
    }
    else
    {
      if ( a2 || (*(_DWORD *)(a1 + 32) & 0x20) != 0 )
      {
        *(_DWORD *)(a1 + 32) &= ~0x20u;
        NVMeControllerIdentify(a1);
        NVMeGetControllerIoCommandSetIdentify(a1);
        if ( a2 )
        {
          if ( !(unsigned __int8)IsDumpMode(a1) )
            NVMeGetNVMSetAttributeList(v11);
          NVMeNameSpaceIdentify(a1);
          NVMeGetNamespaceDescriptorListIdentify(a1);
          NVMeGetNamespaceIoCommandSetIdentify(a1);
        }
      }
      if ( (unsigned __int8)IsDumpMode(a1) )
      {
        *(_DWORD *)(a1 + 232) = 65537;
        return v5;
      }
      if ( (unsigned __int8)GetProcessorInformation() )
        return v5;
      v4 = L"Get processor information failed";
      v5 = -1056964607;
      v10 = 10;
    }
    *(_DWORD *)(a1 + 36) = v10;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 7;
    v4 = L"Admin Queue Initialize failed";
    v5 = -1056964607;
  }
  if ( !(unsigned __int8)IsDumpMode(a1) )
  {
    FillControllerRuntimeLog(v12, v25);
    v13 = *(_DWORD *)(a1 + 32);
    v22 = &v23;
    v24[0] = v13;
    v14 = *(_DWORD *)(a1 + 36);
    v21 = v24;
    v20 = 8;
    v19 = v25;
    v24[1] = v14;
    v18 = 88;
    v17 = v4;
    v16[8] = (unsigned __int16)v14;
    v23 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL, 0LL);
  }
  return v5;
}
