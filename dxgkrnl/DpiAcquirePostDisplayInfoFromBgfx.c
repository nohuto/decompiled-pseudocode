__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(__int64 a1, char a2, char a3)
{
  char v3; // r15
  char v4; // di
  __int64 v7; // rax
  char v8; // r13
  __int64 v9; // r8
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // r14
  char v18; // r14
  void *Pool2; // rsi
  void *v21; // rdi
  NTSTATUS v22; // eax
  __int64 v23; // r12
  __int64 v24; // rax
  _BYTE v25[4]; // [rsp+20h] [rbp-88h] BYREF
  NTSTATUS v26; // [rsp+24h] [rbp-84h]
  __int128 v27; // [rsp+28h] [rbp-80h] BYREF
  __int128 v28; // [rsp+38h] [rbp-70h]
  __int128 v29; // [rsp+48h] [rbp-60h]
  __int128 SystemInformation; // [rsp+58h] [rbp-50h] BYREF
  __int128 v31; // [rsp+68h] [rbp-40h]

  v25[0] = a2;
  v3 = 0;
  v4 = 0;
  SystemInformation = 0LL;
  v31 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( a3 )
  {
    if ( qword_1C013B740 )
    {
      v7 = *(_QWORD *)(qword_1C013B740 + 64);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v3 = *(_BYTE *)(v7 + 2741);
          if ( v3 )
            v4 = *(_BYTE *)(v7 + 2742);
        }
      }
    }
  }
  v8 = 0;
  v26 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( v26 >= 0 )
  {
    v10 = HIDWORD(SystemInformation);
    v8 = 1;
    v11 = SystemInformation;
    v12 = DWORD2(SystemInformation);
    *(_DWORD *)(a1 + 24) = -1;
    *(_DWORD *)(a1 + 28) = 0;
    *(_QWORD *)(a1 + 16) = v11;
    LODWORD(v11) = DWORD2(v31);
    *(_DWORD *)(a1 + 4) = v10;
    DWORD2(v28) = v10;
    v13 = v31;
    *(_DWORD *)a1 = v12;
    HIDWORD(v28) = v12;
    LODWORD(v29) = v13;
    v14 = v11 - 3;
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v8 = 0;
LABEL_13:
        v16 = ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, (PVOID)(a1 + 32), 0x80u, 0LL);
        v17 = v16;
        if ( v16 < 0 )
        {
          memset((void *)(a1 + 32), 0, 0x80uLL);
          WdLogSingleEntry1(3LL, v17);
        }
        goto LABEL_15;
      }
      *(_DWORD *)(a1 + 12) = 22;
      v15 = 4 * v13;
      DWORD1(v29) = 5;
    }
    else
    {
      *(_DWORD *)(a1 + 12) = 20;
      v15 = 3 * v13;
      DWORD1(v29) = 4;
    }
    *(_DWORD *)(a1 + 8) = v15;
    goto LABEL_13;
  }
LABEL_15:
  if ( !v25[0] )
    goto LABEL_21;
  v18 = 0;
  v25[0] = 0;
  if ( v4 )
  {
    LOBYTE(v9) = v4;
    DxgDetermineBootImageMode(a1, 0LL, v9, v25);
    if ( !v25[0] || (int)InbvSetVirtualFrameBuffer(0LL, DpiEnterSystemDisplay) < 0 )
      goto LABEL_18;
  }
  else
  {
    if ( !a3 )
    {
LABEL_18:
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      goto LABEL_21;
    }
    Pool2 = 0LL;
    v21 = 0LL;
    if ( !v8 )
      goto LABEL_36;
    v22 = RtlCheckRegistryKey(0, (PWSTR)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    v23 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 8));
    if ( v22 >= 0 )
      goto LABEL_36;
    Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)v23, 1953656900LL);
    v24 = ExAllocatePool2(64LL, 32LL, 1953656900LL);
    v21 = (void *)v24;
    if ( !Pool2 || !v24 )
      goto LABEL_36;
    KeInitializeSpinLock((PKSPIN_LOCK)(v24 + 24));
    *(_QWORD *)&v28 = v21;
    *(_QWORD *)&v27 = Pool2;
    *((_QWORD *)&v27 + 1) = v23;
    if ( !v3 || DWORD2(SystemInformation) > 0xBB8 || (BYTE8(v29) = 0, HIDWORD(SystemInformation) > 0x7D0) )
      BYTE8(v29) = 1;
    if ( (int)InbvSetVirtualFrameBuffer(&v27, DpiEnterSystemDisplay) >= 0 )
    {
      DxgDetermineBootImageMode(a1, &v27, 0LL, v25);
      v18 = v25[0];
    }
    else
    {
LABEL_36:
      DxgDetermineBootImageMode(a1, 0LL, 0LL, 0LL);
    }
    if ( !v18 )
    {
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x74727044u);
      if ( v21 )
        ExFreePoolWithTag(v21, 0x74727044u);
    }
  }
LABEL_21:
  if ( !v8 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = -1;
    memset((void *)(a1 + 32), 0, 0x80uLL);
  }
  return (unsigned int)v26;
}
