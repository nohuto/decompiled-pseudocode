/*
 * XREFs of ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C00781F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z @ 0x1C0078480 (-CreateSyncObject@CAdapter@@AEAAJU_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAI@Z.c)
 *     DxgkShareObjectsInternal @ 0x1C0186240 (DxgkShareObjectsInternal.c)
 *     DxgkGetSharedSyncObjectType @ 0x1C01DEFE0 (DxgkGetSharedSyncObjectType.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C01DF030 (DxgkCreateContextVirtualInternal.c)
 */

__int64 __fastcall CAdapter::AllocateCascadedSignalingResources(
        CAdapter *this,
        void **a2,
        unsigned int *a3,
        void **a4,
        unsigned int *a5,
        unsigned int *a6)
{
  unsigned int v6; // ebx
  PVOID v8; // r12
  PVOID v9; // r15
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // r13d
  int ContextVirtualInternal; // edi
  int v14; // eax
  int CurrentProcess; // eax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v17; // eax
  int v18; // eax
  struct _OBJECT_TYPE *v19; // rax
  NTSTATUS v20; // eax
  int v21; // eax
  PVOID Src; // [rsp+58h] [rbp-69h] BYREF
  PVOID Object; // [rsp+60h] [rbp-61h] BYREF
  HANDLE Handle[2]; // [rsp+68h] [rbp-59h] BYREF
  _OWORD v26[2]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v27; // [rsp+98h] [rbp-29h]
  __int64 v28[4]; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-1h]

  v6 = 0;
  LODWORD(Src) = 0;
  v8 = 0LL;
  LODWORD(Object) = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = CAdapter::CreateSyncObject(this, 18LL, &Src);
  v12 = (unsigned int)Src;
  ContextVirtualInternal = v11;
  if ( v11 < 0 )
    goto LABEL_14;
  v14 = CAdapter::CreateSyncObject(this, 19LL, &Object);
  v10 = (unsigned int)Object;
  ContextVirtualInternal = v14;
  if ( v14 < 0 )
    goto LABEL_14;
  Src = (PVOID)__PAIR64__((unsigned int)Object, v12);
  *(_OWORD *)Handle = 0LL;
  v29 = 0LL;
  v28[0] = 48LL;
  v28[3] = 512LL;
  v28[1] = 0LL;
  v28[2] = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ContextVirtualInternal = DxgkShareObjectsInternal(
                             0,
                             0,
                             CurrentProcess,
                             1,
                             &Src,
                             (__int64)v28,
                             0x10000000u,
                             (__int64)Handle,
                             0LL);
  if ( ContextVirtualInternal >= 0 )
  {
    SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
    Object = 0LL;
    v17 = ObReferenceObjectByHandle(Handle[0], 0x1F0000u, SharedSyncObjectType, 0, &Object, 0LL);
    v8 = Object;
    ContextVirtualInternal = v17;
    if ( v17 >= 0 )
    {
      v18 = PsGetCurrentProcess();
      ContextVirtualInternal = DxgkShareObjectsInternal(
                                 0,
                                 0,
                                 v18,
                                 1,
                                 (char *)&Src + 4,
                                 (__int64)v28,
                                 0x10000000u,
                                 (__int64)&Handle[1],
                                 0LL);
      if ( ContextVirtualInternal >= 0 )
      {
        v19 = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
        Src = 0LL;
        v20 = ObReferenceObjectByHandle(Handle[1], 0x1F0000u, v19, 0, &Src, 0LL);
        v9 = Src;
        ContextVirtualInternal = v20;
      }
    }
  }
  if ( Handle[0] )
    ObCloseHandle(Handle[0], 0);
  if ( Handle[1] )
    ObCloseHandle(Handle[1], 0);
  if ( ContextVirtualInternal < 0
    || (v27 = 0LL,
        v21 = *((_DWORD *)this + 11),
        memset(v26, 0, sizeof(v26)),
        HIDWORD(v26[0]) = 8,
        LODWORD(v26[0]) = v21,
        ContextVirtualInternal = DxgkCreateContextVirtualInternal(v26),
        ContextVirtualInternal < 0) )
  {
LABEL_14:
    (*(void (__fastcall **)(CAdapter *, PVOID, _QWORD, PVOID, unsigned int, _DWORD))(*(_QWORD *)this + 40LL))(
      this,
      v8,
      v12,
      v9,
      v10,
      0);
    *a2 = 0LL;
    *a3 = 0;
    *a4 = 0LL;
    *a5 = 0;
  }
  else
  {
    v6 = v27;
    *a2 = v8;
    *a3 = v12;
    *a4 = v9;
    *a5 = v10;
  }
  *a6 = v6;
  return (unsigned int)ContextVirtualInternal;
}
