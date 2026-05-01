/*
 * XREFs of ?GetPropertyAsInt@WindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAH@Z @ 0x180060160
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::GetPropertyAsInt(WindowWrapperBase *this, HSTRING a2, int *a3)
{
  const WCHAR *StringRawBuffer; // rax
  const WCHAR *v7; // rax
  const WCHAR *v9; // rax
  int v10; // eax
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 35) + 208LL))(*((_QWORD *)this + 35), &SRWLock);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"BackVisible", -1, 1) == 2 )
  {
    v10 = *((_DWORD *)this + 116);
    goto LABEL_13;
  }
  v7 = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(v7, -1, L"WindowFrameStyle", -1, 1) == 2 )
  {
    if ( !*((_BYTE *)this + 476) )
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return 2147943568LL;
    }
    v10 = *((_DWORD *)this + 118);
    goto LABEL_13;
  }
  v9 = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(v9, -1, L"TitleBarVisible", -1, 1) == 2 )
  {
    if ( !*((_BYTE *)this + 477) )
    {
      if ( SRWLock )
        ReleaseSRWLockShared(SRWLock);
      return 2147943568LL;
    }
    v10 = *((_BYTE *)this + 478) == 0;
LABEL_13:
    *a3 = v10;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 0LL;
  }
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 2147942487LL;
}
