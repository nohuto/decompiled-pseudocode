unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusDuplicateHandle(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rsi
  PVOID v2; // r14
  struct _KPROCESS *v3; // r15
  DXGGLOBAL *Global; // rax
  struct ADAPTER_RENDER **v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ebx
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  struct DXG_VMBUS_CHANNEL_BASE *v15; // rbx
  struct DXGKVMB_COMMAND_BASE *v16; // rcx
  void *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rbx
  struct _MDL *Object; // [rsp+28h] [rbp-E0h]
  PVOID v23; // [rsp+58h] [rbp-B0h] BYREF
  void *ProcessHandle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v25; // [rsp+68h] [rbp-A0h] BYREF
  void *Handle; // [rsp+70h] [rbp-98h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  struct DXGKVMB_COMMAND_BASE *v29[2]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v30; // [rsp+C8h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v32[144]; // [rsp+208h] [rbp+100h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  Handle = 0LL;
  v2 = 0LL;
  v25 = 0LL;
  v3 = 0LL;
  v23 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v5 = (struct ADAPTER_RENDER **)DXGGLOBAL::ReferenceAdapterByHostLuid(
                                   Global,
                                   *(struct _LUID *)(v1 + 24),
                                   (unsigned __int64 *)&v23);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, (struct DXGADAPTER *const)v5, 0LL);
  if ( v5
    && (v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL),
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v5),
        v12 >= 0) )
  {
    ClientId.UniqueProcess = *(HANDLE *)(v1 + 40);
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ClientId.UniqueThread = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ProcessHandle = 0LL;
    v13 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
    v11 = v13;
    if ( v13 >= 0 )
    {
      v23 = 0LL;
      v14 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &v23, 0LL);
      v3 = (struct _KPROCESS *)v23;
      v11 = v14;
      ZwClose(ProcessHandle);
      if ( (int)v11 >= 0 )
      {
        LODWORD(v11) = DxgkpCreateSharedObjectFromHostDesc(
                         v5[366],
                         (const unsigned __int8 *)v1,
                         (struct _LIST_ENTRY **)&v25);
        if ( (int)v11 >= 0 )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(v3, &ApcState);
          LODWORD(v11) = ObInsertObject(v25, 0LL, *(_DWORD *)(v1 + 48), 0, 0LL, &Handle);
          KeUnstackDetachProcess(&ApcState);
          if ( (int)v11 < 0 )
          {
            WdLogSingleEntry1(2LL, 14414LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to create nt handle in guest process",
              14414LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 14382LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create shared resource for guest",
            14382LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v2 = v25;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 40), v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to reference process by handle for process id 0x%I64x, Status=0x%.8x",
          *(_QWORD *)(v1 + 40),
          v11,
          0LL,
          0LL,
          0LL);
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 40), v13);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open process handle for process id 0x%I64x, Status=0x%.8x",
        *(_QWORD *)(v1 + 40),
        v11,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v10 + 24) = *(int *)(v1 + 28);
    *(_QWORD *)(v10 + 32) = *(unsigned int *)(v1 + 24);
  }
  while ( 1 )
  {
    v15 = (struct DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 214);
    *(_OWORD *)v29 = 0LL;
    v30 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v29, v15, 0x38u, 0LL, 0LL, 0LL);
    v16 = v29[0];
    if ( v29[0] )
      break;
    LODWORD(v11) = -1073741801;
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v29);
  }
  v17 = Handle;
  v18 = *(_QWORD *)(v1 + 32);
  *((_BYTE *)v29[0] + 12) = 1;
  *((_DWORD *)v16 + 3) &= 0x1FFu;
  *((_QWORD *)v16 + 4) = v18;
  *((_QWORD *)v16 + 6) = v17;
  *(_QWORD *)v16 = 0LL;
  *((_DWORD *)v16 + 2) = 0;
  *((_QWORD *)v16 + 2) = 1011LL;
  *((_DWORD *)v16 + 6) = v11;
  *((_DWORD *)v16 + 10) = 8;
  v19 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v15, (unsigned __int8 *)v29[1], v29[0], v30, Object);
  if ( v19 >= 0 )
  {
    if ( (int)v11 >= 0 )
      goto LABEL_21;
  }
  else
  {
    v20 = v19;
    WdLogSingleEntry1(2LL, v19);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"VmBusSendCompleteTransaction failed: 0x%I64x",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( Handle )
  {
    ObCloseHandle(Handle, 1);
  }
  else if ( v2 )
  {
    ObfDereferenceObject(v2);
  }
LABEL_21:
  if ( v3 )
    ObfDereferenceObject(v3);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v29);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  return 0;
}
