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
