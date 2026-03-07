void __fastcall XDCOBJ::vLockIgnoreAttributes(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  struct UMPDOBJ *v8; // rdx
  __int64 v9; // rax
  int v10; // ebx

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v6 = *ThreadWin32Thread) != 0 && (v7 = *(_QWORD *)(v6 + 40), v7 != v6 + 40) )
      v8 = (struct UMPDOBJ *)(v7 - 40);
    else
      v8 = 0LL;
    v9 = *(_QWORD *)this;
    if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
    {
      *(_QWORD *)(v9 + 2168) = v8;
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = 0xFFFF;
    }
    else if ( *(struct UMPDOBJ **)(v9 + 2168) != v8 )
    {
      XDCOBJ::LogUmpdCallbackStatus(this, v8);
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x8000) == 0
        || (v10 = *(_DWORD *)(*(_QWORD *)this + 2112LL), v10 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
        *(_QWORD *)this = 0LL;
      }
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
