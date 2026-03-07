__int64 __fastcall VIDMM_GLOBAL::PinOneAllocation(
        VIDMM_GLOBAL *this,
        struct VIDMM_ALLOC *a2,
        struct VIDMM_PAGING_QUEUE *a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  VIDMM_DEVICE *v10; // rcx
  __int64 result; // rax
  __int64 *v12; // rax
  __int64 v13; // rdx
  char v14; // r9
  int v15; // edi
  _QWORD v16[12]; // [rsp+30h] [rbp-68h] BYREF
  bool v17; // [rsp+A8h] [rbp+10h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  v10 = (VIDMM_DEVICE *)*((_QWORD *)a2 + 1);
  v17 = 0;
  result = VIDMM_DEVICE::ReferencePinnedAllocation(v10, a2, &v17);
  if ( (int)result >= 0 && !v17 )
  {
    memset(v16, 0, 0x58uLL);
    v16[5] = a5;
    v12 = *(__int64 **)a2;
    LODWORD(v16[0]) = 203;
    v16[2] = a2;
    HIDWORD(v16[4]) = a4;
    v13 = *v12;
    v14 = 0;
    LODWORD(v16[4]) = (**(_DWORD **)(*v12 + 536) & 0x20000) != 0 ? 5 : 0;
    if ( !a3 )
    {
      v14 = 1;
      a3 = (struct VIDMM_PAGING_QUEUE *)(*(_QWORD *)(*((_QWORD *)a2 + 1) + 80LL) + 176LL
                                                                                 * (*(_DWORD *)(v13 + 68) & 0x3F));
    }
    v15 = VIDMM_GLOBAL::QueueDeferredCommand(this, a3, (struct _VIDMM_DEFERRED_COMMAND *)v16, v14, a6);
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(3LL, a2);
      VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)a2 + 1), a2, 1);
    }
    return (unsigned int)v15;
  }
  return result;
}
