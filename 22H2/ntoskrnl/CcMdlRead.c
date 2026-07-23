/*
 * XREFs of CcMdlRead @ 0x140701480
 * Callers:
 *     FsRtlMdlReadDev @ 0x14088B0A0 (FsRtlMdlReadDev.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402096D0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     CcScheduleReadAheadEx @ 0x140279480 (CcScheduleReadAheadEx.c)
 *     CcUpdateReadHistory @ 0x14027A400 (CcUpdateReadHistory.c)
 *     CcFreeVirtualAddress @ 0x1402A1080 (CcFreeVirtualAddress.c)
 *     CcFetchDataForRead @ 0x1402A10C0 (CcFetchDataForRead.c)
 *     CcGetVirtualAddress @ 0x1402A15A0 (CcGetVirtualAddress.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     CcUpdateSharedCacheMapFlag @ 0x14031195C (CcUpdateSharedCacheMapFlag.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 */

void __stdcall CcMdlRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus)
{
  _DWORD *SharedCacheMap; // r13
  _DWORD *PrivateCacheMap; // r12
  __int64 v10; // rbx
  ULONG v11; // esi
  void *VirtualAddress; // rax
  ULONG v13; // r12d
  struct _MDL *Mdl; // rax
  PMDL v15; // rax
  struct _MDL *Next; // rcx
  _DWORD *v17; // r9
  unsigned int v18; // [rsp+44h] [rbp-A4h]
  ULONG v19; // [rsp+48h] [rbp-A0h] BYREF
  _DWORD v20[3]; // [rsp+4Ch] [rbp-9Ch] BYREF
  PVOID P; // [rsp+58h] [rbp-90h] BYREF
  struct _MDL *v22; // [rsp+60h] [rbp-88h]
  __int64 v23; // [rsp+68h] [rbp-80h]
  int v24[2]; // [rsp+70h] [rbp-78h] BYREF
  _DWORD *v25; // [rsp+78h] [rbp-70h]
  void *v26; // [rsp+80h] [rbp-68h]
  PMDL i; // [rsp+88h] [rbp-60h]
  _DWORD *v28; // [rsp+90h] [rbp-58h]
  _DWORD *v29; // [rsp+98h] [rbp-50h]

  v22 = 0LL;
  v20[1] = Length;
  v18 = 0;
  P = 0LL;
  v20[0] = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v25 = SharedCacheMap;
  PrivateCacheMap = FileObject->PrivateCacheMap;
  v28 = PrivateCacheMap;
  v29 = PrivateCacheMap;
  if ( (*PrivateCacheMap & 0x20000) != 0 )
    CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
  __incgsdword(0x8124u);
  KeGetCurrentThread()[1].Timer.DueTime.HighPart = 0;
  *(LARGE_INTEGER *)v24 = *FileOffset;
  v10 = *(_QWORD *)v24;
  v23 = *(_QWORD *)v24;
  v11 = Length;
  while ( v11 )
  {
    v19 = 0;
    VirtualAddress = (void *)CcGetVirtualAddress(
                               (__int64)SharedCacheMap,
                               v10,
                               (volatile signed __int32 **)&P,
                               &v19,
                               0,
                               0);
    v26 = VirtualAddress;
    if ( (SharedCacheMap[38] & 8) == 0 )
    {
      CcFetchDataForRead((__int64)FileObject, v24, v11, 1, v20, P, (*PrivateCacheMap >> 18) & 7);
      VirtualAddress = v26;
    }
    v13 = v19;
    if ( v19 > v11 )
      v13 = v11;
    v19 = v13;
    v10 = v23 + v13;
    v23 = v10;
    Mdl = IoAllocateMdl(VirtualAddress, v13, 0, 0, 0LL);
    v22 = Mdl;
    if ( !Mdl )
      RtlRaiseStatus(-1073741670);
    MmProbeAndLockPages(Mdl, 0, IoReadAccess);
    CcFreeVirtualAddress((__int64)P);
    P = 0LL;
    v15 = *MdlChain;
    if ( *MdlChain )
    {
      for ( i = *MdlChain; ; i = Next )
      {
        Next = v15->Next;
        if ( !v15->Next )
          break;
        v15 = v15->Next;
      }
      v15->Next = v22;
    }
    else
    {
      *MdlChain = v22;
    }
    v22 = 0LL;
    *(_QWORD *)v24 = v10;
    v18 += v13;
    v11 -= v13;
    PrivateCacheMap = v28;
  }
  __addgsdword(0x8160u, KeGetCurrentThread()[1].Timer.DueTime.HighPart);
  if ( (*PrivateCacheMap & 0x20000) == 0 && v20[0] )
    CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, FileOffset, Length, 0LL);
  CcUpdateReadHistory((__int64)FileObject, (__int64 *)FileOffset, Length);
  if ( (SharedCacheMap[38] & 8) != 0 )
    CcUpdateSharedCacheMapFlag((__int64)SharedCacheMap, 8LL, 0LL, v17);
  IoStatus->Status = 0;
  IoStatus->Information = v18;
}
