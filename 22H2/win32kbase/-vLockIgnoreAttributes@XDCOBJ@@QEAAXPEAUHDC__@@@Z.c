/*
 * XREFs of ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C003BD8C
 * Callers:
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0003064 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00397F0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     GreSelectBitmap @ 0x1C003AF40 (GreSelectBitmap.c)
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C00408D0 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C003CAD4 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     HmgLockEx @ 0x1C0043B50 (HmgLockEx.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z @ 0x1C0151CA0 (-LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z.c)
 */

void __fastcall XDCOBJ::vLockIgnoreAttributes(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  struct _W32THREAD *CurrentThread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ebx

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    CurrentThread = (struct _W32THREAD *)W32GetCurrentThread();
    ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(CurrentThread);
    v7 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v7 + 2168) = ThreadCurrentObj;
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0xFFFF;
    }
    else if ( *(struct UMPDOBJ **)(v7 + 2168) != ThreadCurrentObj )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, ThreadCurrentObj);
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
      return;
    }
    v8 = *(_QWORD *)this;
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v8 + 48) + 40LL) & 0x8000) == 0 )
        goto LABEL_10;
      v9 = *(_DWORD *)(v8 + 2112);
      if ( v9 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_10;
    }
    else if ( *(_DWORD *)(v8 + 2112) )
    {
      *(_DWORD *)(v8 + 2112) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
