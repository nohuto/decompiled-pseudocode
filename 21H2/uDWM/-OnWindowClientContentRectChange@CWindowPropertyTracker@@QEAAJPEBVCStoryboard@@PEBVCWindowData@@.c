/*
 * XREFs of ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800B59B0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001B930 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z @ 0x18000ADB0 (-_EnsureRecordExists@CWindowPropertyTracker@@AEAAJPEBVCStoryboard@@PEBVCWindowData@@PEAH@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800135CC (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

__int64 __fastcall CWindowPropertyTracker::OnWindowClientContentRectChange(
        CWindowPropertyTracker *this,
        const struct CStoryboard *a2,
        const struct CWindowData *a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  const struct tagRECT *v9; // rdi
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v9 = a5;
  v10 = 0;
  if ( a4 || a5 )
  {
    v11 = CWindowPropertyTracker::_EnsureRecordExists(this, a2, a3, &v16);
    v10 = v11;
    if ( v11 >= 0 )
    {
      if ( a4 )
      {
        v12 = (unsigned int)v16;
        *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v16) + 120LL) = *a4;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v12) + 40LL) |= 8u;
      }
      if ( v9 )
      {
        v13 = (unsigned int)v16;
        *(struct tagRECT *)(*(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v16) + 136LL) = *v9;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v13) + 40LL) |= 0x10u;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x4Au);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v10;
}
