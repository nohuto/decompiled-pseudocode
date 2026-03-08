/*
 * XREFs of MiQueryProcessActivePatches @ 0x140A3892C
 * Callers:
 *     NtManageHotPatch @ 0x140784740 (NtManageHotPatch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiFillActivePatchesQueryBuffer @ 0x140A33DC0 (MiFillActivePatchesQueryBuffer.c)
 *     MiGetProcessHotPatchContext @ 0x140A345D0 (MiGetProcessHotPatchContext.c)
 *     MiIsActiveSystemHotPatch @ 0x140A35270 (MiIsActiveSystemHotPatch.c)
 */

__int64 __fastcall MiQueryProcessActivePatches(
        HANDLE Handle,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5,
        KPROCESSOR_MODE AccessMode,
        int a7)
{
  int v7; // r14d
  __int64 v8; // r15
  _QWORD *v9; // rdi
  unsigned __int64 k; // rsi
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  struct _KTHREAD *Lock; // rax
  _QWORD *v14; // rcx
  unsigned __int64 i; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _QWORD **v21; // rax
  _QWORD *v22; // rdx
  PVOID *v23; // rcx
  PVOID *v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  NTSTATUS v27; // edi
  void *v28; // rax
  BOOLEAN v29; // al
  _QWORD *v30; // rdi
  signed __int64 *v31; // r14
  __int64 v32; // rdi
  _QWORD *v33; // rcx
  unsigned __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rax
  _DWORD *v37; // rax
  int v38; // r13d
  _QWORD *Pool; // rax
  _QWORD *v40; // rdi
  HANDLE v41; // r9
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // r14
  __int64 *v47; // r15
  __int64 *j; // rsi
  _QWORD **v49; // rax
  unsigned __int64 v50; // rcx
  _QWORD *v51; // rcx
  PVOID *m; // rsi
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // r8
  _DWORD *v56; // rcx
  struct _KTHREAD *v57; // r15
  _QWORD *v58; // rsi
  bool v59; // zf
  __int64 v61; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v64; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-80h]
  _QWORD *ProcessHotPatchContext; // [rsp+88h] [rbp-78h]
  __int64 v67; // [rsp+90h] [rbp-70h] BYREF
  __int64 v68; // [rsp+98h] [rbp-68h] BYREF
  __int64 v69; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h] BYREF
  _DWORD *v71; // [rsp+B0h] [rbp-50h]
  HANDLE v72; // [rsp+B8h] [rbp-48h]
  __int64 v73; // [rsp+C0h] [rbp-40h]
  $115DCDF994C6370D29323EAB0E0C9502 v74; // [rsp+D0h] [rbp-30h] BYREF

  v7 = a7;
  v72 = Handle;
  v73 = a4;
  v71 = a3;
  memset(&v74, 0, sizeof(v74));
  v8 = 40LL;
  v9 = a2;
  v64 = a2;
  k = 0LL;
  v11 = 0;
  CurrentThread = KeGetCurrentThread();
  if ( a7 != 2 )
    v8 = 48LL;
  v61 = 0LL;
  BugCheckParameter1 = 0LL;
  ProcessHotPatchContext = 0LL;
  if ( !Handle )
  {
    v12 = 8;
    Lock = MmAcquireLoadLock();
    v14 = (_QWORD *)qword_140C694C0;
    CurrentThread = Lock;
    while ( v14 )
    {
      k = (unsigned __int64)v14;
      v14 = (_QWORD *)*v14;
    }
    i = k;
    v16 = v8;
    if ( k )
    {
      v17 = v8;
      do
      {
        ++v11;
        v18 = 28LL;
        if ( a7 == 2 )
          v18 = 24LL;
        v19 = v17 + v18;
        v20 = i;
        v16 = v19 + *(unsigned __int16 *)(i + 48);
        v21 = *(_QWORD ***)(i + 8);
        if ( v21 )
        {
          v22 = *v21;
          for ( i = *(_QWORD *)(i + 8); v22; v22 = (_QWORD *)*v22 )
            i = (unsigned __int64)v22;
        }
        else
        {
          while ( 1 )
          {
            i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( !i || *(_QWORD *)i == v20 )
              break;
            v20 = i;
          }
        }
        v17 = v16;
      }
      while ( i );
    }
    v23 = (PVOID *)PsLoadedModuleList;
    v24 = &PsLoadedModuleList;
    while ( v23 != v24 )
    {
      LOBYTE(v25) = MiIsActiveSystemHotPatch((__int64)v23);
      if ( v25 )
      {
        v16 += *(unsigned __int16 *)(v26 + 72) + 24LL;
        ++v11;
        if ( a7 != 2 )
          v16 += 4LL;
      }
      v23 = *(PVOID **)v26;
    }
    goto LABEL_40;
  }
  Object = 0LL;
  v27 = ObReferenceObjectByHandle(Handle, 0x1000u, (POBJECT_TYPE)PsProcessType, AccessMode, &Object, 0LL);
  v28 = Object;
  BugCheckParameter1 = (ULONG_PTR)Object;
  if ( v27 < 0 )
    goto LABEL_87;
  v29 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)Object + 139);
  v12 = 2 * (v29 & 1);
  if ( (v29 & 1) != 0 )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v74);
    v12 |= 4u;
    ProcessHotPatchContext = MiGetProcessHotPatchContext(BugCheckParameter1, 0);
    v30 = ProcessHotPatchContext;
    v16 = v8;
    if ( ProcessHotPatchContext )
    {
      v31 = ProcessHotPatchContext + 2;
      v12 |= 1u;
      --CurrentThread->SpecialApcDisable;
      v32 = KeAbPreAcquire((__int64)(v30 + 2), 0LL);
      if ( _InterlockedCompareExchange64(v31, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v31, 0, v32, (__int64)v31);
      if ( v32 )
        *(_BYTE *)(v32 + 18) = 1;
      v16 = v8;
      v7 = a7;
      v33 = (_QWORD *)*ProcessHotPatchContext;
      if ( (_QWORD *)*ProcessHotPatchContext != ProcessHotPatchContext )
      {
        v34 = v8;
        do
        {
          v35 = *((unsigned __int16 *)v33 + 20);
          ++v11;
          v33 = (_QWORD *)*v33;
          v36 = 28LL;
          if ( a7 == 2 )
            v36 = 24LL;
          v16 = v34 + v36 + v35;
          v34 = v16;
        }
        while ( v33 != ProcessHotPatchContext );
      }
    }
    v9 = v64;
LABEL_40:
    if ( a5 >= v16 )
    {
      v38 = v16;
      Pool = MiAllocatePool(256, (unsigned int)v16, 0x71486D4Du);
      v40 = Pool;
      if ( !Pool )
      {
        v27 = -1073741670;
        goto LABEL_74;
      }
      v41 = v72;
      Pool[1] = v72;
      *(_DWORD *)Pool = v7;
      if ( v11 )
      {
        v42 = (__int64)&Pool[(unsigned __int64)v8 / 8];
        v43 = (__int64)&Pool[2 * v11 + (unsigned __int64)v8 / 8];
        v68 = (__int64)&Pool[(unsigned __int64)v8 / 8];
        v69 = v43;
        v44 = v43 + 8LL * v11;
        if ( v7 == 2 )
        {
          v45 = v43 + 8LL * v11;
          v44 = 0LL;
        }
        else
        {
          v45 = v44 + 4LL * v11;
        }
        v63 = v44;
        v67 = v45;
        v40[3] = v42;
        v40[4] = v43;
        if ( v44 )
          v40[5] = v44;
        v46 = (__int64)v40 - v73;
        if ( v41 )
        {
          v47 = ProcessHotPatchContext;
          for ( j = (__int64 *)*ProcessHotPatchContext; j != v47; j = (__int64 *)*j )
            MiFillActivePatchesQueryBuffer(
              (__int64)v40,
              (__int64)(j + 4),
              v43,
              v46,
              (_QWORD **)&v69,
              (UNICODE_STRING **)&v68,
              (wchar_t **)&v67,
              (_DWORD **)&v63,
              j + 4,
              (PCUNICODE_STRING)(j + 5),
              *((_DWORD *)j + 16));
        }
        else
        {
          while ( k )
          {
            v61 = *(_QWORD *)(k + 24);
            MiFillActivePatchesQueryBuffer(
              (__int64)v40,
              v42,
              v43,
              v46,
              (_QWORD **)&v69,
              (UNICODE_STRING **)&v68,
              (wchar_t **)&v67,
              (_DWORD **)&v63,
              &v61,
              (PCUNICODE_STRING)(k + 48),
              *(_DWORD *)(k + 40));
            v49 = *(_QWORD ***)(k + 8);
            v50 = k;
            if ( v49 )
            {
              v51 = *v49;
              for ( k = *(_QWORD *)(k + 8); v51; v51 = (_QWORD *)*v51 )
                k = (unsigned __int64)v51;
            }
            else
            {
              while ( 1 )
              {
                k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !k || *(_QWORD *)k == v50 )
                  break;
                v50 = k;
              }
            }
          }
          for ( m = (PVOID *)PsLoadedModuleList; m != &PsLoadedModuleList; m = (PVOID *)*m )
          {
            LOBYTE(v53) = MiIsActiveSystemHotPatch((__int64)m);
            if ( v53 )
            {
              v56 = m[35];
              LODWORD(v61) = v56[30];
              HIDWORD(v61) = v56[39];
              MiFillActivePatchesQueryBuffer(
                (__int64)v40,
                v54,
                v55,
                v46,
                (_QWORD **)&v69,
                (UNICODE_STRING **)&v68,
                (wchar_t **)&v67,
                (_DWORD **)&v63,
                &v61,
                (PCUNICODE_STRING)(m + 9),
                *((_DWORD *)m + 78));
            }
          }
        }
        v40[4] -= v46;
        v40[3] -= v46;
        if ( v63 )
          v40[5] -= v46;
      }
      *v64 = v40;
      *v71 = v38;
    }
    else
    {
      if ( v16 > 0xFFFFFFFF )
      {
        v27 = -1073741675;
        goto LABEL_74;
      }
      v37 = v71;
      *v9 = 0LL;
      *v37 = v16;
    }
    v27 = 0;
    goto LABEL_74;
  }
  v27 = -1073741558;
LABEL_74:
  v57 = CurrentThread;
  if ( v12 >= 8 )
    MmReleaseLoadLock((__int64)CurrentThread);
  if ( (v12 & 1) != 0 )
  {
    v58 = ProcessHotPatchContext;
    if ( _InterlockedCompareExchange64(ProcessHotPatchContext + 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v58 + 2);
    KeAbPostRelease((ULONG_PTR)(v58 + 2));
    v59 = v57->SpecialApcDisable++ == -1;
    if ( v59 && ($C71981A45BEB2B45F82C232A7085991E *)v57->ApcState.ApcListHead[0].Flink != &v57->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( (v12 & 4) != 0 )
    KiUnstackDetachProcess(&v74);
  if ( (v12 & 2) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
  v28 = (void *)BugCheckParameter1;
LABEL_87:
  if ( v28 )
    ObfDereferenceObject(v28);
  return (unsigned int)v27;
}
