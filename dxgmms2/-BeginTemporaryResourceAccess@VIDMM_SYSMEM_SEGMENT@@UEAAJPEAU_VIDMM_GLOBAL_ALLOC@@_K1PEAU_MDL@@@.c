__int64 __fastcall VIDMM_SYSMEM_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        void *const *a2,
        __int64 a3,
        __int64 a4,
        struct _MDL *a5)
{
  _QWORD *v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 LogicalAddress; // rax
  int v12; // eax

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
  }
  v10 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40179LL) && a5 != *(struct _MDL **)(*((_QWORD *)this + 33) + 8LL) )
  {
    LogicalAddress = SysMmGetLogicalAddress(a2[66]);
    if ( LogicalAddress )
      LogicalAddress += a3;
    v12 = SysMmMapIommuRange(
            *(struct SYSMM_ADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
            LogicalAddress,
            a5,
            0);
    v10 = v12;
    if ( v12 < 0 )
      WdLogSingleEntry1(3LL, v12);
  }
  return v10;
}
