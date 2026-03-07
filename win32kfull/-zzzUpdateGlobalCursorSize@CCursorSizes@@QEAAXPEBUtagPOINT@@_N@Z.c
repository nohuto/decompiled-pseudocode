void __fastcall CCursorSizes::zzzUpdateGlobalCursorSize(CCursorSizes *this, const struct tagPOINT *a2, char a3)
{
  CPushLock *v3; // rbx
  _OWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  unsigned __int16 v9; // cx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  char v13; // [rsp+40h] [rbp+18h] BYREF

  v3 = (CCursorSizes *)((char *)this + 64);
  if ( a3 )
  {
    v6 = (_OWORD *)((char *)this + 8);
  }
  else
  {
    CPushLock::AcquireLockShared((CCursorSizes *)((char *)this + 64));
    v6 = (_OWORD *)((char *)this + 8);
    if ( (unsigned int)PtInRect((char *)this + 8, *a2) )
    {
      CPushLock::ReleaseLock(v3);
      return;
    }
    CPushLock::ReleaseLock(v3);
  }
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
  v8 = MonitorFromPoint(*a2, 1LL, 18LL);
  if ( v8 )
  {
    CPushLock::AcquireLockExclusive(v3);
    *v6 = *(_OWORD *)(*(_QWORD *)(v8 + 40) + 28LL);
    v9 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 64LL);
    if ( v9 >= 0x90u )
    {
      if ( v9 >= 0xC0u )
      {
        if ( v9 >= 0x120u )
          v10 = (-(__int64)(v9 < 0x180u) & 0xFFFFFFFFFFFFFFF8uLL) + 60;
        else
          v10 = 44LL;
      }
      else
      {
        v10 = 36LL;
      }
    }
    else
    {
      v10 = 28LL;
    }
    v11 = *(_DWORD *)((char *)this + v10);
    v12 = *(_DWORD *)this;
    *(_DWORD *)this = v11;
    CPushLock::ReleaseLock(v3);
    if ( v11 != v12 )
      zzzUpdateCursorImage();
  }
  if ( !v13 )
    UserSessionSwitchLeaveCrit(v7);
}
