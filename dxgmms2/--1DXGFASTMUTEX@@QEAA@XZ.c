/*
 * XREFs of ??1DXGFASTMUTEX@@QEAA@XZ @ 0x1C0001DB8
 * Callers:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0095F98 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C0103198 (--1VIDMM_PROCESS_HEAP@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGFASTMUTEX::~DXGFASTMUTEX(DXGFASTMUTEX *this)
{
  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry1(1LL, 471LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"NULL == m_OwningThread",
      471LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_DWORD *)this + 8) )
  {
    WdLogSingleEntry1(1LL, 472LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"0 == m_OwnerAcquireCount",
      472LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
}
