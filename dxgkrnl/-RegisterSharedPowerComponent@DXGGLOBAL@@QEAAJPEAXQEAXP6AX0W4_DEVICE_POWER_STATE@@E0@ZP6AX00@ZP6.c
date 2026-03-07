__int64 __fastcall DXGGLOBAL::RegisterSharedPowerComponent(
        DXGGLOBAL *this,
        struct DXGADAPTER *a2,
        void *const a3,
        void (*a4)(void *, enum _DEVICE_POWER_STATE, unsigned __int8, void *),
        void (*a5)(void *, void *),
        void (*a6)(void *, unsigned int, unsigned int, unsigned __int8, void *),
        void (*a7)(void *, void *, unsigned int, unsigned __int8, unsigned int, struct _GUID *__struct_ptr, unsigned int))
{
  int v8; // esi
  char *v11; // r15
  char *v12; // rbx
  _QWORD *v13; // rbp
  DXGSHAREDPOWERINUSELISTOBJECT *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  DXGSHAREDPOWERINUSELISTOBJECT *v18; // rdi
  __int64 v19; // rax
  unsigned int v20; // r15d
  __int64 v21; // rbx
  KIRQL CurrentIrql; // al
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  KIRQL v26; // al
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v34; // [rsp+20h] [rbp-C8h]
  int v35; // [rsp+30h] [rbp-B8h]
  struct _KTHREAD **v36; // [rsp+60h] [rbp-88h]
  __int128 v37; // [rsp+70h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF

  v8 = 0;
  v36 = (struct _KTHREAD **)((char *)this + 672);
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 672));
  DXGPUSHLOCK::AcquireExclusive((DXGGLOBAL *)((char *)this + 1792));
  v11 = (char *)this + 1824;
  v12 = (char *)*((_QWORD *)this + 228);
  v13 = 0LL;
  v14 = 0LL;
  if ( !DXGGLOBAL::ValidateAdapterValidAndInRunningState(this, a2) )
  {
    v8 = -1073741130;
    goto LABEL_30;
  }
  while ( v12 != v11 && v12 )
  {
    if ( *((void *const *)v12 + 3) == a3 && *((struct DXGADAPTER **)v12 + 4) == a2 )
    {
      v8 = -1073740008;
      WdLogSingleEntry1(3LL, -1073740008LL);
      goto LABEL_30;
    }
    v12 = *(char **)v12;
  }
  v15 = (_QWORD *)operator new[](0x10uLL, 0x4B677844u, 256LL);
  v16 = (__int64)v15;
  if ( !v15 )
  {
    v13 = 0LL;
    WdLogSingleEntry1(6LL, 6569LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v31,
        v30,
        v32,
        0LL,
        1,
        -1,
        L"Out of memory allocating pInUseList of type SHAREDPOWERCOMPONENTINUSELIST",
        6569LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v36);
    goto LABEL_29;
  }
  v15[1] = v15;
  *v15 = v15;
  v17 = operator new[](0x48uLL, 0x4B677844u, 64LL);
  if ( !v17
    || (v18 = (DXGSHAREDPOWERINUSELISTOBJECT *)DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
                                                 v17,
                                                 (_DWORD)this,
                                                 (_DWORD)a3,
                                                 (_DWORD)a2,
                                                 (__int64)a4,
                                                 (__int64)a5,
                                                 (__int64)a6,
                                                 v16),
        (v14 = v18) == 0LL) )
  {
    WdLogSingleEntry1(6LL, 6578LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v28,
        v27,
        v29,
        0LL,
        1,
        -1,
        L"Out of memory allocating pNewSharedPowerObj of type DXGSHAREDPOWERREGISTRATIONOBJECT",
        6578LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v36);
    v13 = (_QWORD *)v16;
LABEL_29:
    v8 = -1073741801;
    goto LABEL_30;
  }
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 223, &LockHandle);
  v19 = *(_QWORD *)v11;
  if ( *(char **)(*(_QWORD *)v11 + 8LL) != v11 )
    __fastfail(3u);
  v13 = (_QWORD *)v16;
  *(_QWORD *)v18 = v19;
  *((_QWORD *)v18 + 1) = v11;
  *(_QWORD *)(v19 + 8) = v18;
  *(_QWORD *)v11 = v18;
  if ( a7 )
  {
    v20 = 0;
    if ( *((_DWORD *)a2 + 792) )
    {
      do
      {
        v21 = *((_QWORD *)a2 + 378) + 520LL * v20;
        if ( *(_DWORD *)(v21 + 208) == 7 )
        {
          CurrentIrql = KeGetCurrentIrql();
          v23 = *(unsigned int *)(v21 + 4);
          v35 = *(_DWORD *)(v21 + 212);
          LOBYTE(v24) = *(_BYTE *)(v21 + 360) == 0;
          v25 = CurrentIrql;
          v34 = *(_DWORD *)(v21 + 344);
          v37 = *(_OWORD *)(v21 + 220);
          ((void (__fastcall *)(struct DXGADAPTER *, void *const, __int64, __int64, int, __int128 *, int))a7)(
            a2,
            a3,
            v23,
            v24,
            v34,
            &v37,
            v35);
          if ( (_BYTE)v25 != KeGetCurrentIrql() )
          {
            v26 = KeGetCurrentIrql();
            WdLogSingleEntry5(0LL, 275LL, 16LL, this, v25, v26);
          }
        }
        ++v20;
      }
      while ( v20 < *((_DWORD *)a2 + 792) );
      v8 = 0;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_30:
  *((_QWORD *)this + 225) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 1792, 0LL);
  KeLeaveCriticalRegion();
  DXGFASTMUTEX::Release(v36);
  if ( v8 < 0 )
  {
    if ( v13 )
      DXGNODELIST<DXGGLOBAL,DXGSHAREDPOWERINUSELISTOBJECT>::`scalar deleting destructor'(v13);
    if ( v14 )
      DXGSHAREDPOWERREGISTRATIONOBJECT::`scalar deleting destructor'(v14);
  }
  return (unsigned int)v8;
}
