void __fastcall VIDMM_APERTURE_SEGMENT::EndTemporaryResourceAccess(
        VIDMM_APERTURE_SEGMENT *this,
        void **a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        struct _MDL *a5)
{
  unsigned __int64 LogicalAddress; // rax

  VIDMM_APERTURE_SEGMENT::UnmapTemporaryResource(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, a3, a4, a5);
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40179LL) && a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
  {
    LogicalAddress = SysMmGetLogicalAddress(a2[66]);
    if ( LogicalAddress )
      LogicalAddress += a3;
    SysMmUnmapIommuRange(
      *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
      LogicalAddress,
      a5,
      0);
  }
}
