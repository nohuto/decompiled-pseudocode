ExclusiveWinlognRequestLock *__fastcall ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock(
        ExclusiveWinlognRequestLock *this)
{
  __int64 v2; // rax

  v2 = SGDGetSessionState(this);
  PUSHLOCKEX::PUSHLOCKEX(this, (struct _EX_PUSH_LOCK *)(*(_QWORD *)(v2 + 32) + 23440LL));
  return this;
}
