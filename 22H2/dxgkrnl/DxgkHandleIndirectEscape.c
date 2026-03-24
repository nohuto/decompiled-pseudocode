/*
 * XREFs of DxgkHandleIndirectEscape @ 0x1C02D5F90
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001E840 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C001E898 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001FBB8 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C001FCD4 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0052B58 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DxgkGetDeviceObjectFromAdapter @ 0x1C0217E50 (DxgkGetDeviceObjectFromAdapter.c)
 *     DxgkSetIndirectDisplayRenderAdapterByHandle @ 0x1C0227248 (DxgkSetIndirectDisplayRenderAdapterByHandle.c)
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C025B77C (DxgkIddGetAdapterSessionDiagnostics.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025B8CC (DxgkIddHandleSetDisplayConfig.c)
 *     ?DpiIndirectEscapeAccessCheck@@YAJXZ @ 0x1C02D4DFC (-DpiIndirectEscapeAccessCheck@@YAJXZ.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C02D5860 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 *     DpiIndirectDdiIoControl @ 0x1C02D5DD8 (DpiIndirectDdiIoControl.c)
 */

__int64 __fastcall DxgkHandleIndirectEscape(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // r12
  struct _LUID *v8; // rbx
  PVOID PoolWithQuotaTag; // rdi
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // rcx
  char *v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  int AdapterSessionDiagnostics; // eax
  PVOID v25; // r15
  __int64 v26; // r14
  __int64 v27; // rax
  __int64 v28; // rcx
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  void *v30; // [rsp+38h] [rbp-80h] BYREF
  void *v31; // [rsp+40h] [rbp-78h] BYREF
  struct _IO_REMOVE_LOCK *v32; // [rsp+48h] [rbp-70h] BYREF
  char v33; // [rsp+50h] [rbp-68h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-60h] BYREF
  _BYTE v35[80]; // [rsp+68h] [rbp-50h] BYREF
  int DeviceObjectFromAdapter; // [rsp+C0h] [rbp+8h] BYREF
  void *v37; // [rsp+D0h] [rbp+18h] BYREF
  struct _LUID *v38; // [rsp+D8h] [rbp+20h] BYREF

  if ( (unsigned int)a1 < 0x30 )
  {
    DeviceObjectFromAdapter = -1073741789;
LABEL_3:
    v3 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v3 + 24) = DeviceObjectFromAdapter;
    WdLogEvent5_WdError(v3);
    return (unsigned int)DeviceObjectFromAdapter;
  }
  DeviceObjectFromAdapter = DpiIndirectEscapeAccessCheck();
  if ( DeviceObjectFromAdapter < 0 )
    goto LABEL_3;
  v7 = a2 + 10;
  a2[10] = 0;
  v8 = 0LL;
  v38 = 0LL;
  PoolWithQuotaTag = 0LL;
  v37 = 0LL;
  v10 = a2[3];
  if ( !v10
    || (v8 = (struct _LUID *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v10, 0x74727044u),
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v38),
        v38 = v8,
        v30 = 0LL,
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v30),
        v8) )
  {
    v12 = a2[6];
    if ( !v12
      || (PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v12, 0x74727044u),
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v37),
          v37 = PoolWithQuotaTag,
          v31 = 0LL,
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v31),
          PoolWithQuotaTag) )
    {
      v15 = a2[3];
      if ( (_DWORD)v15 )
      {
        v16 = (char *)*((_QWORD *)a2 + 2);
        if ( (unsigned __int64)&v16[v15] > MmUserProbeAddress || &v16[v15] < v16 )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          LODWORD(v15) = a2[3];
          v16 = (char *)*((_QWORD *)a2 + 2);
        }
        memmove(v8, v16, (unsigned int)v15);
      }
      v17 = a2[6];
      if ( v17 )
        ProbeForWrite(*((volatile void **)a2 + 4), v17, 1u);
      v18 = a2[1];
      if ( (_DWORD)v18 )
      {
        v19 = v18 - 1;
        if ( !v19 )
        {
          Object = 0LL;
          DeviceObjectFromAdapter = DxgkGetDeviceObjectFromAdapter(*a2, (__int64)a2, &Object, v6);
          if ( DeviceObjectFromAdapter >= 0 )
          {
            v25 = Object;
            v26 = *((_QWORD *)Object + 8);
            if ( *(_BYTE *)(v26 + 1158) )
            {
              v32 = (struct _IO_REMOVE_LOCK *)*((_QWORD *)Object + 8);
              v33 = 0;
              DeviceObjectFromAdapter = AUTO_REMOVE_LOCK::Acquire(&v32);
              if ( DeviceObjectFromAdapter >= 0 )
              {
                AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v35, (struct _COMMON_PNP_CONTEXT *)v26);
                DeviceObjectFromAdapter = DpiIndirectDdiIoControl(v26);
                AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v35);
              }
              AUTO_REMOVE_LOCK::Release((PVOID *)&v32);
            }
            else
            {
              DeviceObjectFromAdapter = -1073741275;
            }
            ObfDereferenceObject(v25);
          }
          goto LABEL_40;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          DxgkIddHandleSetDisplayConfig(*a2, a2[3], (DWORD *)v8, &DeviceObjectFromAdapter);
          goto LABEL_40;
        }
        v18 = (unsigned int)(v20 - 1);
        if ( (_DWORD)v18 )
        {
          if ( (_DWORD)v18 != 1 )
          {
            DeviceObjectFromAdapter = -1073741637;
            v21 = WdLogNewEntry5_WdError(v18, a2);
            *(_QWORD *)(v21 + 24) = DeviceObjectFromAdapter;
            WdLogEvent5_WdError(v21);
LABEL_40:
            if ( DeviceObjectFromAdapter < 0 )
              goto LABEL_10;
            if ( a2[6] >= *v7 )
            {
              if ( *v7 )
                memmove(*((void **)a2 + 4), PoolWithQuotaTag, (unsigned int)*v7);
              goto LABEL_10;
            }
            DeviceObjectFromAdapter = -1073741811;
            v27 = WdLogNewEntry5_WdError(v23, v22);
            v28 = DeviceObjectFromAdapter;
            goto LABEL_37;
          }
          AdapterSessionDiagnostics = DxgkIddGetAdapterSessionDiagnostics(
                                        *a2,
                                        a2[6],
                                        (unsigned __int8 *)PoolWithQuotaTag,
                                        a2 + 10);
LABEL_39:
          DeviceObjectFromAdapter = AdapterSessionDiagnostics;
          goto LABEL_40;
        }
        if ( a2[3] >= 8 )
        {
          AdapterSessionDiagnostics = DxgkSetIndirectDisplayRenderAdapterByHandle(*a2, v8, v5, v6);
          goto LABEL_39;
        }
      }
      else if ( a2[3] >= 0x248 )
      {
        DestinationString = 0LL;
        HIWORD(v8[64].HighPart) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v8);
        AdapterSessionDiagnostics = DpiIndirectStartAdapter(&DestinationString, v8, a2[3]);
        goto LABEL_39;
      }
      DeviceObjectFromAdapter = -1073741811;
      v27 = WdLogNewEntry5_WdError(v18, a2);
      v28 = a2[3];
LABEL_37:
      *(_QWORD *)(v27 + 24) = v28;
      WdLogEvent5_WdError(v27);
      goto LABEL_10;
    }
  }
  DeviceObjectFromAdapter = -1073741801;
  v13 = WdLogNewEntry5_WdLowResource(v11, a2, v5, v6);
  *(_QWORD *)(v13 + 24) = DeviceObjectFromAdapter;
  WdLogEvent5_WdLowResource(v13);
LABEL_10:
  v14 = DeviceObjectFromAdapter;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v37);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v38);
  return v14;
}
