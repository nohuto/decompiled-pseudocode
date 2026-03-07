__int64 __fastcall NVMeControllerInitPart1(__int64 a1, char a2)
{
  int *v4; // rsi
  unsigned int v5; // edi
  const wchar_t *v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  int v16; // eax
  int v17; // eax
  signed __int32 v18[10]; // [rsp+0h] [rbp-F8h] BYREF
  const wchar_t *v19; // [rsp+28h] [rbp-D0h]
  int v20; // [rsp+30h] [rbp-C8h]
  _DWORD *v21; // [rsp+38h] [rbp-C0h]
  int v22; // [rsp+40h] [rbp-B8h]
  _DWORD *v23; // [rsp+48h] [rbp-B0h]
  int *v24; // [rsp+50h] [rbp-A8h]
  int v25; // [rsp+60h] [rbp-98h] BYREF
  _DWORD v26[2]; // [rsp+68h] [rbp-90h] BYREF
  _DWORD v27[24]; // [rsp+70h] [rbp-88h] BYREF

  memset(v27, 0, 0x58uLL);
  if ( !a2 || AdminQueueInitialize(a1) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 36LL) = (*(_WORD *)(a1 + 332) - 1) & 0xFFF | (((*(_WORD *)(a1 + 332) - 1) & 0xFFF) << 16);
    _InterlockedOr(v18, 0);
    v7 = *(_QWORD *)(a1 + 184);
    v8 = *(_QWORD *)(a1 + 488);
    *(_DWORD *)(v7 + 48) = v8;
    _InterlockedOr(v18, 0);
    *(_DWORD *)(v7 + 52) = HIDWORD(v8);
    _InterlockedOr(v18, 0);
    v9 = *(_QWORD *)(a1 + 184);
    v10 = *(_QWORD *)(a1 + 352);
    *(_DWORD *)(v9 + 40) = v10;
    _InterlockedOr(v18, 0);
    *(_DWORD *)(v9 + 44) = HIDWORD(v10);
    _InterlockedOr(v18, 0);
    ControllerConfigure(a1);
    v5 = ControllerEnable(a1);
    if ( v5 )
    {
      v6 = L"Controller enable failed";
      v14 = 8;
LABEL_18:
      v4 = (int *)(a1 + 36);
      *(_DWORD *)(a1 + 36) = v14;
      goto LABEL_19;
    }
    if ( a2 || (*(_DWORD *)(a1 + 32) & 0x20) != 0 )
    {
      *(_DWORD *)(a1 + 32) &= ~0x20u;
      NVMeControllerIdentify(a1);
      NVMeGetControllerIoCommandSetIdentify(a1);
      if ( a2 )
      {
        if ( !*(_BYTE *)(a1 + 20) )
          NVMeGetNVMSetAttributeList(a1);
        NVMeNameSpaceIdentify(a1);
        NVMeGetNamespaceDescriptorListIdentify(a1);
        NVMeGetNamespaceIoCommandSetIdentify(a1);
      }
    }
    if ( *(_BYTE *)(a1 + 20) )
    {
      *(_DWORD *)(a1 + 240) = 65537;
    }
    else if ( !GetProcessorInformation(a1, v11, v12, v13) )
    {
      v6 = L"Get processor information failed";
      v5 = -1056964607;
      v14 = 10;
      goto LABEL_18;
    }
    ++*(_DWORD *)(a1 + 4464);
    return v5;
  }
  v4 = (int *)(a1 + 36);
  v5 = -1056964607;
  *(_DWORD *)(a1 + 36) = 7;
  v6 = L"Admin Queue Initialize failed";
LABEL_19:
  if ( !*(_BYTE *)(a1 + 20) )
  {
    FillControllerRuntimeLog(a1, v27);
    v16 = *(_DWORD *)(a1 + 32);
    v24 = &v25;
    v26[0] = v16;
    v17 = *v4;
    v23 = v26;
    v22 = 8;
    v21 = v27;
    v26[1] = v17;
    v20 = 88;
    v19 = v6;
    v18[8] = (unsigned __int16)v17;
    v25 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
  }
  ++*(_DWORD *)(a1 + 4468);
  return v5;
}
