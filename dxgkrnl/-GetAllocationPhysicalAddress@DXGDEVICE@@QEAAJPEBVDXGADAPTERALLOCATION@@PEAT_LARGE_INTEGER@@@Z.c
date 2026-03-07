__int64 __fastcall DXGDEVICE::GetAllocationPhysicalAddress(
        DXGDEVICE *this,
        const struct DXGADAPTERALLOCATION *a2,
        union _LARGE_INTEGER *a3)
{
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax

  if ( !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 11510LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockSharedOwner()", 11510LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, union _LARGE_INTEGER *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 248LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
         *((_QWORD *)a2 + 1),
         a3);
  v7 = v6;
  if ( v6 < 0 )
    goto LABEL_8;
  v8 = VIDMM_EXPORT::VidMmInvalidateCache(
         *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
         *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
         *((struct DXGPROCESS **)this + 5),
         *((struct _VIDMM_MULTI_GLOBAL_ALLOC **)a2 + 1),
         0LL,
         0LL,
         0LL);
  v7 = v8;
  if ( !g_OSTestSigningEnabled || v8 != -1073741823 )
  {
    if ( v8 >= 0 )
      return (unsigned int)v7;
LABEL_8:
    WdLogSingleEntry3(3LL, a2, this, v7);
    return (unsigned int)v7;
  }
  LODWORD(v7) = 0;
  return (unsigned int)v7;
}
