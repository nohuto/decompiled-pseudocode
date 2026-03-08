/*
 * XREFs of ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0052C24
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001ADD0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectBitmap @ 0x1C0043B10 (GreSelectBitmap.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0052A00 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     GreGetDCPoint @ 0x1C0053880 (GreGetDCPoint.c)
 *     GrepDeleteDC @ 0x1C00549D0 (GrepDeleteDC.c)
 *     GreIntersectClipRect @ 0x1C0056F30 (GreIntersectClipRect.c)
 *     GreSelectPalette @ 0x1C0092ED0 (GreSelectPalette.c)
 *     GreRestoreOwnedDC @ 0x1C00A46A0 (GreRestoreOwnedDC.c)
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0045394 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     HmgLockEx @ 0x1C004AED0 (HmgLockEx.c)
 *     W32GetCurrentThread @ 0x1C004DBF0 (W32GetCurrentThread.c)
 *     ?LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z @ 0x1C017F440 (-LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z.c)
 */

void __fastcall XDCOBJ::vLockIgnoreAttributes(XDCOBJ *this, HDC a2)
{
  __int64 v3; // rax
  struct _W32THREAD *CurrentThread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v6; // rcx
  int v7; // ebx

  v3 = HmgLockEx((unsigned int)a2, 1, *((_DWORD *)this + 3));
  *(_QWORD *)this = v3;
  if ( v3 )
  {
    CurrentThread = (struct _W32THREAD *)W32GetCurrentThread();
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(CurrentThread);
    v6 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v6 + 2168) = ThreadCurrentObj;
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0xFFFF;
    }
    else if ( *(struct UMPDOBJ **)(v6 + 2168) != ThreadCurrentObj )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, ThreadCurrentObj);
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x8000) == 0 )
        goto LABEL_10;
      v7 = *(_DWORD *)(*(_QWORD *)this + 2112LL);
      if ( v7 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_10;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
