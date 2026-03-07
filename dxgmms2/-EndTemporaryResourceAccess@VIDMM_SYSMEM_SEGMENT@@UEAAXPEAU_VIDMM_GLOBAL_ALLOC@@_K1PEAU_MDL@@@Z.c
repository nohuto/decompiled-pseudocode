void __fastcall VIDMM_SYSMEM_SEGMENT::EndTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        void *const *a2,
        __int64 a3,
        __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  unsigned __int64 LogicalAddress; // rax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
  }
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
