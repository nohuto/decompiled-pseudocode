void __fastcall ACPIFilterIrpStartDeviceWorker(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int64 DeviceExtension; // rax
  __int64 v4; // rdx
  const char *v5; // r12
  PVOID v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rcx
  int v13; // esi
  union _LARGE_INTEGER v14; // rax
  char *IrpText; // rax
  int v16; // edx
  const char *v17; // r8
  const char *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rcx
  char *v21; // rax
  int v22; // edx
  const char *v23; // r8
  const char *v24; // r10
  __int64 v25; // rcx
  NTSTATUS v26; // r8d
  char *v27; // rax
  int v28; // edx
  char v29; // r8
  const char *v30; // r10
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  PVOID P; // [rsp+C0h] [rbp+40h] BYREF
  union _LARGE_INTEGER v33; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v34; // [rsp+D0h] [rbp+50h]

  v2 = *(_QWORD *)(a1 + 32);
  memset(&Event, 0, sizeof(Event));
  DeviceExtension = ACPIInternalGetDeviceExtension(v2);
  v4 = *(_QWORD *)(a1 + 40);
  v5 = byte_1C00622D0;
  v6 = 0LL;
  v7 = DeviceExtension;
  v33.QuadPart = 0LL;
  P = 0LL;
  v8 = *(_QWORD *)(v4 + 184);
  v9 = *(_QWORD *)(DeviceExtension + 112);
  v10 = *(_QWORD *)(v8 + 16);
  v11 = *(_QWORD *)(v8 + 8);
  v34 = v10;
  if ( !v9 )
    goto LABEL_13;
  v13 = PnpCmResourcesExcludeSidebandResources(v9, v11, v10, (unsigned int)&P, (__int64)&v33);
  if ( v13 == -1073741772 )
  {
    v6 = P;
LABEL_13:
    LOBYTE(v13) = 0;
    goto LABEL_14;
  }
  v14.QuadPart = 0LL;
  if ( v13 >= 0 )
  {
    v6 = P;
    if ( *(_DWORD *)P != 1 || *((_DWORD *)P + 4) )
    {
      v14 = v33;
      *(_QWORD *)(v8 + 8) = P;
    }
    else
    {
      *(_QWORD *)(v8 + 8) = 0LL;
    }
    *(union _LARGE_INTEGER *)(v8 + 16) = v14;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      IrpText = ACPIDebugGetIrpText(v12, 0);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v16 + 5,
        v16 + 26,
        (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
        *(_QWORD *)(a1 + 40),
        (__int64)IrpText,
        v13,
        v7,
        v18,
        v17);
    }
    v6 = P;
  }
LABEL_14:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v19 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_OWORD *)(v19 - 72) = *(_OWORD *)v19;
  *(_OWORD *)(v19 - 56) = *(_OWORD *)(v19 + 16);
  *(_OWORD *)(v19 - 40) = *(_OWORD *)(v19 + 32);
  *(_QWORD *)(v19 - 24) = *(_QWORD *)(v19 + 48);
  *(_BYTE *)(v19 - 69) = 0;
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 184LL);
  *(_QWORD *)(v20 - 16) = ACPIRootIrpCompleteRoutine;
  *(_QWORD *)(v20 - 8) = &Event;
  *(_BYTE *)(v20 - 69) = -32;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = ACPIDebugGetIrpText(v20, 0);
    WPP_RECORDER_SF_qsLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      v22 + 5,
      v22 + 27,
      (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
      *(_QWORD *)(a1 + 40),
      (__int64)v21,
      v13,
      v7,
      v24,
      v23);
  }
  v26 = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 776), *(PIRP *)(a1 + 40));
  if ( v26 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v26 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 48LL);
  }
  if ( v26 >= 0 )
  {
    *(_QWORD *)(v8 + 16) = v34;
    *(_QWORD *)(v8 + 8) = v11;
    if ( (*(_QWORD *)(v7 + 8) & 0x102000000LL) != 0 )
      ACPIWakeInitializePciDevice(*(_QWORD *)(v7 + 768));
    *(_QWORD *)(v7 + 1008) &= ~0x10000000000000uLL;
  }
  else
  {
    if ( (*(_QWORD *)(v7 + 8) & 0x200000000000LL) != 0 )
      v5 = *(const char **)(v7 + 608);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v27 = ACPIDebugGetIrpText(v25, 0);
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        v28 + 5,
        v28 + 28,
        (__int64)&WPP_da1e537e7f723164eef71e38dd98447a_Traceguids,
        *(_QWORD *)(a1 + 40),
        (__int64)v27,
        v29,
        v7,
        v5,
        v30);
    }
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( v33.QuadPart )
    ExFreePoolWithTag((PVOID)v33.QuadPart, 0);
  IofCompleteRequest(*(PIRP *)(a1 + 40), 0);
}
