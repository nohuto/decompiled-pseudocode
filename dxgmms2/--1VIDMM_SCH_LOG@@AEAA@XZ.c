void __fastcall VIDMM_SCH_LOG::~VIDMM_SCH_LOG(VIDMM_SCH_LOG *this)
{
  __int64 v2; // rdi
  unsigned int v3; // eax
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  BOOL v5; // r8d
  VIDMM_GLOBAL *v6; // r10
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  _QWORD v10[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( *((_QWORD *)this + 1) )
    VIDMM_GLOBAL::RemoveSchLog(*(VIDMM_GLOBAL **)this, this);
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
  {
    memset(v10, 0, 0x58uLL);
    v3 = VIDMM_GLOBAL::AdapterId(*(VIDMM_GLOBAL **)this);
    VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                g_pVidMmSystemProcess,
                                v3,
                                *((_DWORD *)this + 6));
    v10[7] = *((_QWORD *)this + 4) >> 12;
    HIDWORD(v10[0]) = v5;
    LODWORD(v10[0]) = 120;
    v10[6] = v2;
    v10[5] = VirtualAddressAllocator;
    LOBYTE(v10[8]) = 1;
    VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(v6, (struct _VIDMM_SYSTEM_COMMAND *)v10, v5);
    VIDMM_PROCESS::CloseAdapter(g_pVidMmSystemProcess, *(struct VIDMM_GLOBAL **)this);
  }
  if ( *((_BYTE *)this + 88) )
    MmUnlockPages(*((PMDL *)this + 9));
  v7 = (void *)*((_QWORD *)this + 9);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = (void *)*((_QWORD *)this + 6);
  if ( v8 )
    MmUnmapViewInSystemSpace(v8);
  v9 = (void *)*((_QWORD *)this + 5);
  if ( v9 )
    ObfDereferenceObject(v9);
  if ( *((_QWORD *)this + 10) )
    ((void (__fastcall *)(_QWORD))DxgCoreInterface[89])(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 24LL) + 224LL));
}
