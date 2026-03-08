/*
 * XREFs of ?ProcessStatusChange@DXGPROCESS@@IEAAXXZ @ 0x1C0188444
 * Callers:
 *     ?DxgkpProcessStatusChangeWork@@YAXPEAX@Z @ 0x1C0187080 (-DxgkpProcessStatusChangeWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00071C4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ @ 0x1C01883CC (-NotifyProcessStatusChange@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGPROCESS::ProcessStatusChange(DXGPROCESS *this)
{
  struct _KPROCESS *v2; // rcx
  char *v3; // rsi
  __int64 Current; // rbx
  struct _KEVENT *v6; // rax
  struct _LIST_ENTRY *Blink; // rcx
  bool v8; // zf
  struct _KEVENT *v9; // rdi
  __int64 v10; // rax
  volatile signed __int64 *v11; // rcx
  volatile signed __int64 *v12; // rax
  __int64 v13; // rcx
  struct DXGADAPTER *v14; // rcx
  struct DXGADAPTER *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  char *v18; // [rsp+38h] [rbp-D0h] BYREF
  char *i; // [rsp+40h] [rbp-C8h]
  __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+58h] [rbp-B0h]
  char v22[8]; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGADAPTER *v23[2]; // [rsp+70h] [rbp-98h] BYREF
  struct DXGADAPTER *v24; // [rsp+80h] [rbp-88h]
  char v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  char v27[8]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-50h]
  struct DXGADAPTER *v29; // [rsp+C0h] [rbp-48h]
  char v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  __int64 v32; // [rsp+F0h] [rbp-18h]
  char v33; // [rsp+F8h] [rbp-10h]
  struct _KAPC_STATE ApcState; // [rsp+108h] [rbp+0h] BYREF

  v2 = (struct _KPROCESS *)*((_QWORD *)this + 7);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(v2, &ApcState);
  v3 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  _InterlockedExchange((volatile __int32 *)this + 109, 0);
  v18 = (char *)this + 320;
  for ( i = (char *)*((_QWORD *)this + 40); i == v18 || !i ? 0LL : i - 24; i = *(char **)i )
  {
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(&v18);
    v6 = *(struct _KEVENT **)(Current + 16);
    Blink = v6->Header.WaitListHead.Blink;
    if ( SLODWORD(Blink[159].Blink) >= 0x2000 || BYTE4(Blink[178].Flink) )
    {
      v8 = *(_DWORD *)(Current + 464) == 2;
      v9 = v6 + 5;
      v20 = Current;
      if ( !v8 )
        v9 = v6 + 4;
      if ( !KeReadStateEvent(v9) )
        KeWaitForSingleObject(v9, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Current + 136), 0) )
      {
        DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, (const EVENT_DESCRIPTOR *)"g", v17, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Current + 136), 1u);
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL));
      }
      v10 = *(_QWORD *)(Current + 16);
      v21 = 1;
      v11 = *(volatile signed __int64 **)(v10 + 16);
      v24 = (struct DXGADAPTER *)v11;
      v25 = 0;
      v26 = 0LL;
      if ( v11 )
      {
        _InterlockedIncrement64(v11 + 3);
        v23[1] = (struct DXGADAPTER *)-1LL;
      }
      v12 = *(volatile signed __int64 **)(Current + 1880);
      if ( !v12 )
        v12 = *(volatile signed __int64 **)(*(_QWORD *)(Current + 16) + 16LL);
      v29 = (struct DXGADAPTER *)v12;
      v30 = 0;
      v31 = 0LL;
      if ( v12 )
      {
        _InterlockedIncrement64(v12 + 3);
        v28 = -1LL;
      }
      v32 = Current;
      v13 = *(_QWORD *)(Current + 1880);
      if ( v13 == *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL) || (v33 = 1, !v13) )
        v33 = 0;
      if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v22, 0LL) < 0 )
      {
        COREACCESS::~COREACCESS((COREACCESS *)v27);
        COREACCESS::~COREACCESS((COREACCESS *)v23);
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v20);
      }
      else
      {
        DXGDEVICE::NotifyProcessStatusChange((DXGDEVICE *)Current);
        v14 = v29;
        if ( v29 )
        {
          if ( v30 )
          {
            COREACCESS::Release((COREACCESS *)v27);
            v14 = v29;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v14 + 2), v14);
        }
        v15 = v24;
        if ( v24 )
        {
          if ( v25 )
          {
            COREACCESS::Release((COREACCESS *)v23);
            v15 = v24;
          }
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v15 + 2), v15);
        }
        ExReleaseResourceLite(*(PERESOURCE *)(Current + 136));
        KeLeaveCriticalRegion();
        v21 = 0;
      }
    }
  }
  KeUnstackDetachProcess(&ApcState);
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
