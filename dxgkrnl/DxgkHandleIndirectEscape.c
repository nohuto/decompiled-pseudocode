__int64 __fastcall DxgkHandleIndirectEscape(unsigned int a1, unsigned int *a2)
{
  __int64 v3; // rdx
  int v5; // eax
  _DWORD *v6; // r12
  __int64 v7; // rbx
  unsigned __int8 *Pool2; // rdi
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rax
  int AdapterSessionDiagnostics; // eax
  PVOID v25; // r15
  __int64 v26; // r14
  __int64 v27; // rcx
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v30[80]; // [rsp+48h] [rbp-50h] BYREF
  int DeviceObjectFromAdapter; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int8 *v32; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+20h] BYREF

  DeviceObjectFromAdapter = 0;
  if ( a1 < 0x30 )
  {
    v3 = -1073741789LL;
    DeviceObjectFromAdapter = -1073741789;
LABEL_3:
    WdLogSingleEntry1(2LL, v3);
    return (unsigned int)DeviceObjectFromAdapter;
  }
  if ( a2[1] != 5 )
  {
    v5 = DpiIndirectEscapeAccessCheck();
    DeviceObjectFromAdapter = v5;
    if ( v5 < 0 )
    {
      v3 = v5;
      goto LABEL_3;
    }
  }
  v6 = a2 + 10;
  a2[10] = 0;
  v7 = 0LL;
  v33 = 0LL;
  Pool2 = 0LL;
  v32 = 0LL;
  v9 = a2[3];
  if ( !v9
    || (v7 = ExAllocatePool2(257LL, v9, 1953656900LL),
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v33),
        v33 = v7,
        Object = 0LL,
        AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&Object),
        v7) )
  {
    v10 = a2[6];
    if ( !v10
      || (Pool2 = (unsigned __int8 *)ExAllocatePool2(257LL, v10, 1953656900LL),
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v32),
          v32 = Pool2,
          *(_QWORD *)&DestinationString.Length = 0LL,
          AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&DestinationString),
          Pool2) )
    {
      v14 = a2[3];
      if ( (_DWORD)v14 )
      {
        v15 = *((_QWORD *)a2 + 2);
        if ( v15 + v14 > MmUserProbeAddress || v15 + v14 < v15 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove((void *)v7, *((const void **)a2 + 2), a2[3]);
      }
      v16 = a2[6];
      if ( v16 )
        ProbeForWrite(*((volatile void **)a2 + 4), v16, 1u);
      v17 = a2[1];
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          Object = 0LL;
          DeviceObjectFromAdapter = DxgkGetDeviceObjectFromAdapter(*a2, (__int64)a2, &Object);
          if ( DeviceObjectFromAdapter >= 0 )
          {
            v25 = Object;
            v26 = *((_QWORD *)Object + 8);
            if ( *(_BYTE *)(v26 + 1159) )
            {
              *(_QWORD *)&DestinationString.Length = *((_QWORD *)Object + 8);
              LOBYTE(DestinationString.Buffer) = 0;
              DeviceObjectFromAdapter = AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)&DestinationString);
              if ( DeviceObjectFromAdapter >= 0 )
              {
                AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v30, (struct _COMMON_PNP_CONTEXT *)v26);
                DeviceObjectFromAdapter = DpiIndirectDdiIoControl(v26);
                AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v30);
              }
              AUTO_REMOVE_LOCK::Release((PVOID *)&DestinationString);
            }
            else
            {
              DeviceObjectFromAdapter = -1073741275;
            }
            ObfDereferenceObject(v25);
          }
          goto LABEL_51;
        }
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                if ( v22 == 1 && (unsigned int)Feature_EnableIddCx110__private_IsEnabledDeviceUsage() )
                {
                  DxgkIddHandleSetDisplayConfig2(*a2, a2[3], (unsigned int *)v7, &DeviceObjectFromAdapter);
                }
                else
                {
                  DeviceObjectFromAdapter = -1073741637;
                  WdLogSingleEntry1(2LL, -1073741637LL);
                }
                goto LABEL_51;
              }
              v23 = a2[6];
              if ( (unsigned int)v23 >= 0x10 )
              {
                DeviceObjectFromAdapter = DxgkGetIndirectDisplayRenderAdapterByHandle(*a2, Pool2, (_QWORD *)Pool2 + 1);
                if ( DeviceObjectFromAdapter >= 0 )
                  *v6 = 16;
                goto LABEL_51;
              }
LABEL_47:
              DeviceObjectFromAdapter = -1073741811;
              v11 = v23;
LABEL_48:
              v12 = 2LL;
              goto LABEL_12;
            }
            AdapterSessionDiagnostics = DxgkIddGetAdapterSessionDiagnostics(*a2, a2[6], Pool2, a2 + 10);
          }
          else
          {
            v23 = a2[3];
            if ( (unsigned int)v23 < 8 )
              goto LABEL_47;
            AdapterSessionDiagnostics = DxgkSetIndirectDisplayRenderAdapterByHandle(*a2, (struct _LUID *)v7);
          }
          DeviceObjectFromAdapter = AdapterSessionDiagnostics;
        }
        else
        {
          DxgkIddHandleSetDisplayConfig(*a2, a2[3], (unsigned int *)v7, &DeviceObjectFromAdapter);
        }
LABEL_51:
        if ( DeviceObjectFromAdapter < 0 )
          goto LABEL_13;
        if ( a2[6] >= *v6 )
        {
          if ( *v6 )
            memmove(*((void **)a2 + 4), Pool2, (unsigned int)*v6);
          goto LABEL_13;
        }
        DeviceObjectFromAdapter = -1073741811;
        v11 = -1073741811LL;
        goto LABEL_48;
      }
      v23 = a2[3];
      if ( (unsigned int)v23 >= 0x250 )
      {
        DestinationString = 0LL;
        *(_WORD *)(v7 + 518) = 0;
        RtlInitUnicodeString(&DestinationString, (PCWSTR)v7);
        DeviceObjectFromAdapter = DpiIndirectStartAdapter(&DestinationString, (const void *)v7, a2[3]);
        if ( DeviceObjectFromAdapter >= 0 )
          DxgkSetIndirectDisplayHostProcess(v27);
        goto LABEL_51;
      }
      goto LABEL_47;
    }
  }
  v11 = -1073741801LL;
  DeviceObjectFromAdapter = -1073741801;
  v12 = 6LL;
LABEL_12:
  WdLogSingleEntry1(v12, v11);
LABEL_13:
  v13 = DeviceObjectFromAdapter;
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v32);
  AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&v33);
  return v13;
}
