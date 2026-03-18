/*
 * XREFs of ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C00D8EEC
 * Callers:
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C001BE60 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002E7BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     hbmSelectBitmap @ 0x1C009A990 (hbmSelectBitmap.c)
 * Callees:
 *     ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0020114 (-SaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     HmgLockEx @ 0x1C00226A0 (HmgLockEx.c)
 *     W32GetCurrentThread @ 0x1C0023364 (W32GetCurrentThread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0093754 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?Feature_3190902075__private_IsEnabled@@YAHXZ @ 0x1C00D8D30 (-Feature_3190902075__private_IsEnabled@@YAHXZ.c)
 *     ?LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z @ 0x1C00D94A0 (-LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0168F80 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4; // rax
  struct _W32THREAD *CurrentThread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx

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
      *(_QWORD *)(v7 + 2128) = ThreadCurrentObj;
      *(_DWORD *)(*(_QWORD *)this + 2136LL) = 0xFFFF;
    }
    else if ( *(struct UMPDOBJ **)(v7 + 2128) != ThreadCurrentObj )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, ThreadCurrentObj);
LABEL_10:
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_11:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x8000) == 0 )
        goto LABEL_10;
      v8 = *(_DWORD *)(*(_QWORD *)this + 2112LL);
      if ( v8 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_10;
    }
    else if ( (unsigned int)Feature_3190902075__private_IsEnabled() && *(_DWORD *)(*(_QWORD *)this + 2112LL) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2112LL) = 0;
    }
    v9 = XDCOBJ::SaveAttributes(this);
    v10 = *(_QWORD *)this;
    if ( !v9 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
      goto LABEL_11;
    }
    if ( (*(_DWORD *)(v10 + 520) & 4) != 0 )
      DC::vMarkTransformDirty((DC *)v10);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
