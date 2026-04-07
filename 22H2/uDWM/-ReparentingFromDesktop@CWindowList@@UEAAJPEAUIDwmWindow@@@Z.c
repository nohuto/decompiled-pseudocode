/*
 * XREFs of ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BC20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180010F34 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800156D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800183C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ReparentingFromDesktop(CWindowList *this, struct IDwmWindow *a2)
{
  struct CWindowData *v4; // rsi
  int v5; // ebx
  CWindowList *v6; // rcx
  CWindowData *v7; // rdi
  char v9; // al
  CWindowData *v10; // rax
  int v11; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = 0LL;
  v5 = 0;
  v7 = (CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_3;
  v10 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         768LL);
  if ( v10 )
    v7 = CWindowData::CWindowData(v10);
  else
    v7 = 0LL;
  if ( !v7 )
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x88Bu);
    goto LABEL_14;
  }
  *((_QWORD *)v7 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v7);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v11 = CWindowList::SyncWindowData(this, a2, v7);
  v5 = v11;
  if ( v11 >= 0 )
LABEL_3:
    v4 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x88Fu);
  if ( v5 < 0 )
  {
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xE24u);
    goto LABEL_6;
  }
  if ( v4 )
  {
    v9 = *((_BYTE *)v4 + 609);
    if ( (v9 & 0x20) != 0 )
    {
      *((_BYTE *)v4 + 609) = v9 & 0xDF;
      CWindowList::OnGDISurfaceChange(v6, v4);
    }
  }
LABEL_6:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v5;
}
