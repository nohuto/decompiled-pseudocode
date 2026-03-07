__int64 __fastcall DxgEscapeSuspendResumeProcess(
        struct _D3DKMT_ESCAPE *a1,
        unsigned __int8 *a2,
        struct DXGADAPTER *a3,
        void *a4,
        bool a5,
        bool a6)
{
  unsigned int v10; // ebx
  int v11; // eax
  struct DXGPROCESS *Process; // rax
  DXGPROCESS *v13; // r14
  __int64 v14; // rax
  UINT PrivateDriverDataSize; // edi
  struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A Value; // ebx
  enum _D3DKMT_ESCAPETYPE Type; // esi
  unsigned int v18; // ebp
  unsigned int HostProcess; // eax
  _BYTE v21[8]; // [rsp+50h] [rbp-98h] BYREF
  void *v22; // [rsp+58h] [rbp-90h]
  __int64 v23; // [rsp+60h] [rbp-88h]
  int v24; // [rsp+68h] [rbp-80h]
  __int16 v25; // [rsp+6Ch] [rbp-7Ch]
  char v26; // [rsp+6Eh] [rbp-7Ah]

  v22 = a4;
  v23 = 0LL;
  v24 = 2048;
  v25 = 0;
  v26 = 0;
  v10 = 0;
  if ( a4 )
  {
    v11 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v21, 1);
    v10 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(3LL, a4, v11);
      goto LABEL_12;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v21);
  }
  else
  {
    Process = DXGPROCESS::GetCurrent((__int64)a1);
  }
  v13 = Process;
  KeEnterCriticalRegion();
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)v13 + 216, 0LL);
  *((_QWORD *)v13 + 28) = KeGetCurrentThread();
  v14 = *((_QWORD *)a3 + 366);
  if ( v14 )
  {
    if ( *((_BYTE *)a3 + 209) )
    {
      PrivateDriverDataSize = a1->PrivateDriverDataSize;
      Value = (struct _D3DDDI_ESCAPEFLAGS::$DB860278E5E511C34FE0F76D94154466::$9A2C51F7B5B2EC690ABA117774D32C3A)a1->Flags.Value;
      Type = a1->Type;
      v18 = *((_DWORD *)a3 + 1140);
      HostProcess = DXGPROCESS::GetHostProcess(v13);
      v10 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
              (struct DXGADAPTER *)((char *)a3 + 4472),
              HostProcess,
              v18,
              0,
              0,
              Type,
              (struct _D3DDDI_ESCAPEFLAGS)Value,
              PrivateDriverDataSize,
              a2);
    }
    else if ( *(_QWORD *)(v14 + 744) )
    {
      DXGPROCESS::SuspendResumeEscapeAllDevices(v13, a3, a5, a6);
    }
  }
  KeLeaveCriticalRegion();
  *((_QWORD *)v13 + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)v13 + 216, 0LL);
  KeLeaveCriticalRegion();
LABEL_12:
  if ( (_BYTE)v25 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v21);
  return v10;
}
