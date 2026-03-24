/*
 * XREFs of ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0240FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0239474 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C024DD40 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C026B488 (-ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusDuplicateHandle(struct DXGADAPTER_VMBUS_PACKET *a1, __int64 a2)
{
  __int64 v2; // rdi
  PVOID v3; // rsi
  struct _KPROCESS *v4; // r14
  DXGGLOBAL *Global; // rax
  struct ADAPTER_RENDER **v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // ebx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGGLOBAL *v22; // rax
  struct _MDL *v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  void *ProcessHandle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v32; // [rsp+40h] [rbp-C0h] BYREF
  void *Handle; // [rsp+48h] [rbp-B8h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+50h] [rbp-B0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+90h] [rbp-70h] BYREF
  int v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+9Ch] [rbp-64h]
  int v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  int v42; // [rsp+B8h] [rbp-48h]
  void *v43; // [rsp+C0h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v45[144]; // [rsp+100h] [rbp+0h] BYREF

  v2 = *((_QWORD *)a1 + 10);
  Handle = 0LL;
  v3 = 0LL;
  v32 = 0LL;
  v4 = 0LL;
  Object = 0LL;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v6 = (struct ADAPTER_RENDER **)DXGGLOBAL::ReferenceAdapterByHostLuid(
                                   Global,
                                   *(struct _LUID *)(v2 + 24),
                                   (unsigned __int64 *)&Object);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, (struct DXGADAPTER *const)v6, 0LL);
  if ( !v6
    || (v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL),
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v6),
        v13 < 0) )
  {
    v9 = WdLogNewEntry5_WdTrace(v8, v7);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v9 + 24) = *(int *)(v2 + 28);
    v12 = *(unsigned int *)(v2 + 24);
    *(_QWORD *)(v9 + 32) = v12;
    goto LABEL_12;
  }
  ClientId.UniqueProcess = *(HANDLE *)(v2 + 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ClientId.UniqueThread = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ProcessHandle = 0LL;
  v14 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  v11 = v14;
  if ( v14 < 0
    || (Object = 0LL,
        v18 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL),
        v4 = (struct _KPROCESS *)Object,
        v11 = v18,
        ZwClose(ProcessHandle),
        (int)v11 < 0) )
  {
    v17 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v2 + 40);
    *(_QWORD *)(v17 + 32) = v11;
LABEL_11:
    WdLogEvent5_WdError(v17);
    goto LABEL_12;
  }
  LODWORD(v11) = DxgkpCreateSharedObjectFromHostDesc(v6[338], (const unsigned __int8 *)v2, (struct _LIST_ENTRY **)&v32);
  if ( (int)v11 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v21 + 24) = 12396LL;
    WdLogEvent5_WdError(v21);
    v3 = v32;
    goto LABEL_12;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v4, &ApcState);
  v3 = v32;
  LODWORD(v11) = ObInsertObject(v32, 0LL, *(_DWORD *)(v2 + 48), 0, 0LL, &Handle);
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v11 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v12, v10);
    *(_QWORD *)(v17 + 24) = 12421LL;
    goto LABEL_11;
  }
LABEL_12:
  v41 = *(_QWORD *)(v2 + 32);
  v43 = Handle;
  v36 = 0LL;
  v37 = 0;
  v38 = 1;
  v39 = 1011;
  v40 = v11;
  v42 = 8;
  v22 = DXGGLOBAL::GetGlobal(v12, v10);
  v24 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
          *((DXG_VMBUS_CHANNEL_BASE **)v22 + 197),
          (struct DXGKVMB_COMMAND_BASE *)&v36,
          0x38u,
          v23);
  v27 = v24;
  if ( v24 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v28 + 24) = v27;
    WdLogEvent5_WdError(v28);
    LODWORD(v11) = -1073741823;
  }
  if ( (int)v11 < 0 )
  {
    if ( Handle )
    {
      ObCloseHandle(Handle, 1);
    }
    else if ( v3 )
    {
      ObfDereferenceObject(v3);
    }
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45, v25);
  return 0;
}
