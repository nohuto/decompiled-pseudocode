__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        int a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4,
        unsigned __int8 a5)
{
  bool v5; // cf
  struct DXGPROCESS *v7; // rdi
  struct _KEVENT *hAsyncEvent; // r14
  NTSTATUS v11; // eax
  int v12; // edi
  UINT ObjectCount; // eax
  struct DXGKVMB_COMMAND_BASE *v14; // r13
  UINT v15; // r8d
  _DWORD *v16; // r9
  const D3DKMT_HANDLE *ObjectHandleArray; // rax
  __int64 v18; // rdi
  D3DKMT_HANDLE v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // r11
  int v22; // edx
  __int64 v23; // rax
  char *v25; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v30; // [rsp+90h] [rbp-70h]
  char v31; // [rsp+98h] [rbp-68h]
  _BYTE v32[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGKVMB_COMMAND_BASE *v33[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+D0h] [rbp-30h]

  v5 = a4->ObjectCount < 0x2AAA;
  v7 = a2;
  v27[0] = a2;
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, 9176LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"ObjectCount is too big", 9176LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  v30 = *((_QWORD *)this + 9);
  v31 = 0;
  if ( !a5 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  if ( *(_DWORD *)(*((_QWORD *)this + 9) + 200LL) != 1 )
  {
    WdLogSingleEntry1(3LL, 9183LL);
    v12 = -1073741130;
    goto LABEL_40;
  }
  hAsyncEvent = (struct _KEVENT *)a4->hAsyncEvent;
  memset(&Event, 0, sizeof(Event));
  if ( !hAsyncEvent )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    hAsyncEvent = &Event;
    goto LABEL_12;
  }
  if ( (*((_DWORD *)v7 + 106) & 0x10) != 0 )
  {
LABEL_12:
    ObjectCount = a4->ObjectCount;
    *(_OWORD *)v33 = 0LL;
    v34 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v33, this, 12 * ObjectCount + 56, 0LL, 0LL, 0LL);
    v14 = v33[0];
    if ( !v33[0] )
    {
      WdLogSingleEntry1(6LL, 9229LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU",
        9229LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      goto LABEL_14;
    }
    *((_BYTE *)v33[0] + 12) = 0;
    *((_DWORD *)v14 + 3) &= 0x1FFu;
    *(_QWORD *)v14 = 0LL;
    *((_DWORD *)v14 + 2) = 0;
    *((_QWORD *)v14 + 2) = 22LL;
    *((_DWORD *)v14 + 2) = DXGPROCESS::GetHostProcess(v7);
    *((_DWORD *)v14 + 8) = a4->Flags.0;
    *((_DWORD *)v14 + 6) = a3;
    *((_DWORD *)v14 + 7) = a4->ObjectCount;
    *((_QWORD *)v14 + 5) = hAsyncEvent;
    *((_BYTE *)v14 + 48) = hAsyncEvent != &Event;
    v25 = (char *)v14 + 4 * a4->ObjectCount + 56;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v32, v7);
    v15 = 0;
    if ( a4->ObjectCount )
    {
      v16 = v27[0];
      do
      {
        ObjectHandleArray = a4->ObjectHandleArray;
        v18 = v15;
        v19 = ObjectHandleArray[v15];
        if ( v19 )
        {
          v20 = (v19 >> 6) & 0xFFFFFF;
          if ( v20 >= v16[74] )
            goto LABEL_35;
          v21 = *((_QWORD *)v16 + 35);
          if ( ((v19 >> 25) & 0x60) != (*(_BYTE *)(v21 + 16LL * v20 + 8) & 0x60) )
            goto LABEL_35;
          if ( (*(_DWORD *)(v21 + 16LL * v20 + 8) & 0x2000) != 0 )
            goto LABEL_35;
          v22 = *(_DWORD *)(v21 + 16LL * v20 + 8) & 0x1F;
          if ( !v22 )
            goto LABEL_35;
          if ( v22 != 11 )
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_35:
            WdLogSingleEntry1(3LL, a4->ObjectHandleArray[v18]);
            goto LABEL_36;
          }
          v23 = *(_QWORD *)(v21 + 16LL * v20);
          if ( !v23 )
            goto LABEL_35;
          *((_DWORD *)v14 + v15 + 14) = *(_DWORD *)(v23 + 44);
        }
        else if ( v15 )
        {
          WdLogSingleEntry2(3LL, ObjectHandleArray[v15], 9266LL);
LABEL_36:
          v12 = -1073741811;
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
LABEL_14:
          if ( hAsyncEvent && hAsyncEvent != &Event )
            ObfDereferenceObject(hAsyncEvent);
          goto LABEL_17;
        }
        ++v15;
        *(_QWORD *)&v25[8 * v18] = a4->FenceValueArray[v18];
      }
      while ( v15 < a4->ObjectCount );
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
    v12 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            (struct _KTHREAD **)this,
            (unsigned __int8 *)v33[1],
            v33[0],
            v34);
    if ( v12 < 0 )
      goto LABEL_14;
    if ( !a4->hAsyncEvent )
    {
      v27[0] = (PVOID)(*((_QWORD *)this + 9) + 2896LL);
      v27[1] = hAsyncEvent;
      if ( !KeWaitForMultipleObjects(2u, v27, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
        WdLogSingleEntry1(4LL, this);
        v12 = -1073741130;
        goto LABEL_14;
      }
      v12 = 0;
    }
LABEL_17:
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v33);
    goto LABEL_40;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
  hAsyncEvent = (struct _KEVENT *)Object;
  v12 = v11;
  if ( v11 >= 0 )
  {
    v7 = (struct DXGPROCESS *)v27[0];
    goto LABEL_12;
  }
  WdLogSingleEntry2(3LL, a4->hAsyncEvent, v11);
LABEL_40:
  if ( v31 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  return (unsigned int)v12;
}
