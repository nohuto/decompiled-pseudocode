void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v6; // rax
  _QWORD *v7; // rax
  struct UMPDOBJ *v8; // rdx
  __int64 v9; // rax
  int v10; // ebx
  struct _DC_ATTR *UserAttr; // rax

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread && (v6 = *ThreadWin32Thread) != 0 && (v7 = (_QWORD *)(v6 + 40), (_QWORD *)*v7 != v7) )
      v8 = (struct UMPDOBJ *)(*v7 - 40LL);
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
LABEL_15:
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
      goto LABEL_19;
    }
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 48LL) + 40LL) & 0x8000) == 0 )
        goto LABEL_15;
      v10 = *(_DWORD *)(*(_QWORD *)this + 2112LL);
      if ( v10 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_15;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
LABEL_19:
  if ( !*(_QWORD *)this )
    return;
  if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
  {
    if ( !*((_DWORD *)this + 3) )
    {
      UserAttr = XDCOBJ::GetUserAttr(this);
      if ( UserAttr )
      {
        if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
          *(_QWORD *)this = 0LL;
          return;
        }
      }
    }
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
    *((_DWORD *)this + 2) = 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 520LL) & 4) != 0 )
    DC::vMarkTransformDirty(*(DC **)this);
}
