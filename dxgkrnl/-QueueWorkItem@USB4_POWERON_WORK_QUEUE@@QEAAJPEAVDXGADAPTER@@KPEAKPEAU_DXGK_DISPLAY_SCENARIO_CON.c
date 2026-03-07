__int64 __fastcall USB4_POWERON_WORK_QUEUE::QueueWorkItem(
        USB4_POWERON_WORK_QUEUE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rax
  char *v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rsi
  const wchar_t *v13; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // rax
  struct _IO_WORKITEM *WorkItem; // rsi
  unsigned int v16; // edi
  int v18; // [rsp+58h] [rbp-31h] BYREF
  DXGFASTMUTEX *v19; // [rsp+60h] [rbp-29h] BYREF
  __int128 v20; // [rsp+68h] [rbp-21h] BYREF
  struct DXGADAPTER **v21; // [rsp+78h] [rbp-11h]
  unsigned int *v22; // [rsp+80h] [rbp-9h]
  __int64 v23[4]; // [rsp+88h] [rbp-1h] BYREF
  char v24; // [rsp+A8h] [rbp+1Fh]
  struct DXGADAPTER *v25; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v26; // [rsp+F8h] [rbp+6Fh] BYREF
  void *Src; // [rsp+100h] [rbp+77h] BYREF

  Src = a4;
  v26 = a3;
  v25 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
    WdLogSingleEntry0(1LL);
  v18 = 0;
  *(_QWORD *)&v20 = &Src;
  *((_QWORD *)&v20 + 1) = &v18;
  v21 = &v25;
  v22 = &v26;
  DXGKCALLONEXIT__lambda_fc7202455dba02ed8d6fa3d1dee33716_((__int64)v23, &v20);
  if ( !v26 || !Src )
  {
    WdLogSingleEntry0(2LL);
    v16 = -1073741811;
    v18 = -1073741811;
    goto LABEL_20;
  }
  v6 = operator new[](0x68uLL, 0x4D677844u, 256LL);
  v7 = (char *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 96) = 0LL;
    v8 = 4LL * v26;
    if ( !is_mul_ok(v26, 4uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4D677844u, 256LL);
    v10 = (void *)*((_QWORD *)v7 + 12);
    *((_QWORD *)v7 + 12) = v9;
    if ( v10 )
      operator delete(v10);
    v11 = (void *)*((_QWORD *)v7 + 12);
    if ( v11 )
    {
      *(_QWORD *)v7 = this;
      *((_QWORD *)v7 + 10) = *(_QWORD *)((char *)v25 + 404);
      *((_DWORD *)v7 + 22) = v26;
      memmove(v11, Src, 4LL * v26);
      v14 = a5;
      *(_OWORD *)(v7 + 8) = *(_OWORD *)a5;
      *(_OWORD *)(v7 + 24) = *((_OWORD *)v14 + 1);
      *(_OWORD *)(v7 + 40) = *((_OWORD *)v14 + 2);
      *(_OWORD *)(v7 + 56) = *((_OWORD *)v14 + 3);
      *((_QWORD *)v7 + 9) = *((_QWORD *)v14 + 8);
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v25 + 27));
      if ( WorkItem )
      {
        MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v19, (USB4_POWERON_WORK_QUEUE *)((char *)this + 8));
        ++*(_DWORD *)this;
        KeClearEvent((PRKEVENT)((char *)this + 56));
        MUTEX_LOCK::~MUTEX_LOCK(&v19);
        IoQueueWorkItemEx(WorkItem, USB4_POWERON_WORK_QUEUE::_HandlePowerOn, DelayedWorkQueue, v7);
        v16 = v18;
        goto LABEL_20;
      }
      WdLogSingleEntry1(6LL, 117LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Can't allocate memory to hold IO work item.",
        117LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v16 = -1073741801;
      v18 = -1073741801;
      goto LABEL_17;
    }
    v12 = 101LL;
    WdLogSingleEntry1(6LL, 101LL);
    v13 = L"Failed to allocate memory for Usb4 power on target list";
  }
  else
  {
    v7 = 0LL;
    v12 = 92LL;
    WdLogSingleEntry1(6LL, 92LL);
    v13 = L"Failed to allocate memory for Usb4 power on context";
  }
  v16 = -1073741801;
  DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
  v18 = -1073741801;
LABEL_17:
  if ( v7 )
    USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'(v7);
LABEL_20:
  if ( v24 )
    lambda_fc7202455dba02ed8d6fa3d1dee33716_::operator()(v23);
  return v16;
}
