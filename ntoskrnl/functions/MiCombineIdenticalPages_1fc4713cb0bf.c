__int64 __fastcall MiCombineIdenticalPages(
        unsigned __int16 *a1,
        void *a2,
        int a3,
        void *a4,
        KPROCESSOR_MODE AccessMode,
        _QWORD *a6)
{
  PVOID v9; // rsi
  PVOID v10; // r15
  NTSTATUS v11; // eax
  unsigned int v12; // ebx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v14; // rdi
  signed __int32 v15; // eax
  signed __int32 v16; // edx
  signed __int32 v17; // ecx
  unsigned int v18; // eax
  __int64 v20; // rax
  NTSTATUS v21; // eax
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  PVOID v23; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v24[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v25; // [rsp+48h] [rbp-B8h]
  _QWORD *v26; // [rsp+50h] [rbp-B0h]
  _QWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29[42]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v30; // [rsp+1D0h] [rbp+D0h] BYREF
  __int128 v31; // [rsp+1E0h] [rbp+E0h]
  $115DCDF994C6370D29323EAB0E0C9502 v32; // [rsp+1F0h] [rbp+F0h] BYREF

  v25 = a1;
  v26 = a6;
  v30 = 0LL;
  v31 = 0LL;
  memset(v29, 0, sizeof(v29));
  *a6 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(&v32, 0, sizeof(v32));
  v28 = 0LL;
  if ( (a3 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741583;
  if ( (a3 & 2) != 0 )
  {
    v20 = -1LL;
    if ( a4 )
      v20 = (__int64)a4;
    a4 = (void *)v20;
  }
  else if ( a4 )
  {
    return (unsigned int)-1073741811;
  }
  if ( (dword_140D1D1C8 & 1) != 0 )
    return (unsigned int)-1073741637;
  if ( !a2
    || (Object = 0LL,
        v11 = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &Object, 0LL),
        v10 = Object,
        v12 = v11,
        v11 >= 0) )
  {
    if ( a4 )
    {
      v23 = 0LL;
      v21 = ObReferenceObjectByHandle(a4, 0x18u, (POBJECT_TYPE)PsProcessType, AccessMode, &v23, 0LL);
      v9 = v23;
      v12 = v21;
      if ( v21 < 0 )
      {
LABEL_18:
        if ( v9 )
        {
          KiUnstackDetachProcess(&v32);
          ObfDereferenceObject(v9);
        }
        goto LABEL_20;
      }
      KiStackAttachProcess((_KPROCESS *)v23, 0, (__int64)&v32);
    }
    CurrentThread = KeGetCurrentThread();
    v14 = (__int64)(v25 + 8260);
    if ( (a3 & 1) == 0 || v25 == MiSystemPartition )
    {
      --CurrentThread->KernelApcDisable;
      MiCombiningInProgress((__int64 *)v14, (unsigned __int64 *)&v29[2], 1);
      v24[0] = 0;
      v24[1] = -1;
      v27[0] = qword_140C693A8;
      v27[1] = qword_140C693B0;
      v29[15] = (__int64)v27;
      v29[16] = (__int64)v24;
      v29[13] = (__int64)&v30;
      v15 = dword_140C66EDC;
      LODWORD(v29[17]) = 2;
      v29[0] = v14;
      v29[1] = (__int64)v10;
      HIDWORD(v29[17]) = a3;
      do
      {
        v16 = v15 + 1;
        v17 = v15;
        if ( (unsigned int)(v15 + 1) < 2 )
          v16 = 2;
        LODWORD(v29[36]) = v16;
        v15 = _InterlockedCompareExchange(&dword_140C66EDC, v16, v15);
      }
      while ( v15 != v17 );
      MiInitializePageColorBase(
        (__int64)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26],
        0,
        (__int64)&v28);
      if ( (unsigned int)MiCreateUltraThreadContext((__int64)&v29[20], (__int64)&v28, 8, 0) )
      {
        if ( (a3 & 2) != 0 )
        {
          v29[14] = (__int64)v9 + 1664;
          v18 = MiCombineWorkingSet((__int64)v29);
        }
        else
        {
          v29[14] = 0LL;
          v18 = MiCombineAllPhysicalMemory(v29);
        }
        v12 = v18;
        MiDeleteUltraThreadContext((__int64)&v29[20]);
        *v26 = v30;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 384));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 376), *((unsigned __int64 *)&v30 + 1));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 360), v31);
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 368), *((unsigned __int64 *)&v31 + 1));
      }
      else
      {
        v12 = -1073741670;
      }
      MiCombiningInProgress((__int64 *)v14, (unsigned __int64 *)&v29[2], 0);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      v12 = -1073741637;
    }
    goto LABEL_18;
  }
LABEL_20:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v12;
}
