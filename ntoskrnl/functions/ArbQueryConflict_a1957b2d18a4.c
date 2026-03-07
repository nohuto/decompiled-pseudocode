__int64 __fastcall ArbQueryConflict(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  void *Pool2; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 *v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS DeviceProperty; // eax
  int v13; // ecx
  NTSTATUS v14; // eax
  int v15; // ecx
  void *v16; // r12
  void *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r13
  _QWORD *v22; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+38h] [rbp-C8h]
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  _QWORD v26[10]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v27[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28[8]; // [rsp+100h] [rbp+0h] BYREF

  memset(v27, 0, sizeof(v27));
  memset(v28, 0, sizeof(v28));
  v22 = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  LODWORD(v6) = 10;
  memset(v26, 0, sizeof(v26));
  v7 = *(_QWORD *)(a1 + 336);
  v8 = *(__int64 **)(a1 + 40);
  v23 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 336) = ArbpQueryConflictCallback;
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 328) = &v22;
  v25 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_21;
  v10 = ArbpBuildAlternative(a1, *(_QWORD *)(a2 + 8), v28);
  if ( v10 < 0 )
    goto LABEL_21;
  *(_QWORD *)((char *)&v26[8] + 2) = 0LL;
  *(_DWORD *)((char *)&v26[9] + 2) = 0;
  HIWORD(v26[9]) = 0;
  v26[1] = v28[1];
  v26[3] = v28[1];
  v26[5] = v28;
  v26[7] = v28;
  v26[4] = v27;
  v26[0] = v28[0];
  v26[2] = v28[0];
  v11 = *(struct _DEVICE_OBJECT **)a2;
  v26[6] = 1LL;
  LOWORD(v26[8]) = 4;
  LODWORD(v27[5]) = 4;
  v27[4] = v11;
  DeviceProperty = IoGetDeviceProperty(v11, DevicePropertyLegacyBusType, 4u, &v27[7], &ResultLength);
  v13 = v27[7];
  if ( DeviceProperty < 0 )
    v13 = 1;
  LODWORD(v27[7]) = v13;
  v14 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)a2, DevicePropertyBusNumber, 4u, &v27[8], &ResultLength);
  v15 = v27[8];
  if ( v14 < 0 )
    v15 = 0;
  LODWORD(v27[8]) = v15;
  Pool2 = (void *)ExAllocatePool2(256LL, 240LL, 1130525249LL);
  if ( !Pool2 )
  {
    v10 = -1073741670;
LABEL_21:
    v20 = v23;
    goto LABEL_22;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(a1 + 224))(a1, v26);
  if ( v10 < 0 )
    goto LABEL_21;
  RtlDeleteOwnersRanges(*(__int64 ***)(a1 + 48), *(_QWORD *)(v26[4] + 32LL));
  v10 = 0;
  v22 = 0LL;
  while ( 1 )
  {
    v26[2] = v26[0];
    v26[3] = v26[1];
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(a1 + 248))(a1, v26) )
      break;
    if ( v4 == (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 + 5);
      v16 = Pool2;
      v17 = (void *)ExAllocatePool2(256LL, 24 * v6, 1130525249LL);
      Pool2 = v17;
      if ( !v17 )
      {
        v10 = -1073741670;
        Pool2 = v16;
LABEL_20:
        v7 = v25;
        goto LABEL_21;
      }
      v18 = v4;
      memmove(v17, v16, 24LL * v4);
      ExFreePoolWithTag(v16, 0);
    }
    else
    {
      v18 = v4;
    }
    v19 = 3 * v18;
    v10 = 0;
    ++v4;
    if ( !v22 )
    {
      *((_QWORD *)Pool2 + v19 + 2) = -1LL;
      *((_QWORD *)Pool2 + v19) = 0LL;
      *((_QWORD *)Pool2 + v19 + 1) = 0LL;
      break;
    }
    *((_QWORD *)Pool2 + v19) = v22[3];
    *((_QWORD *)Pool2 + v19 + 1) = *v22;
    *((_QWORD *)Pool2 + v19 + 2) = v22[1];
    v10 = RtlDeleteOwnersRanges(*(__int64 ***)(a1 + 48), v22[3]);
    if ( v10 < 0 )
      goto LABEL_20;
    v22 = 0LL;
    v10 = 0;
  }
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  v7 = v25;
  v20 = v23;
  *(_QWORD *)(a1 + 336) = v25;
  *(_QWORD *)(a1 + 328) = v20;
  **(_QWORD **)(a2 + 24) = Pool2;
  **(_DWORD **)(a2 + 16) = v4;
LABEL_22:
  if ( (v26[8] & 0x10) != 0 )
  {
    ExFreePoolWithTag((PVOID)v26[9], 0);
    LOWORD(v26[8]) &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    RtlFreeRangeList(*(_QWORD *)(a1 + 48));
    *(_QWORD *)(a1 + 336) = v7;
    *(_QWORD *)(a1 + 328) = v20;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
