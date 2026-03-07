AutoSharedUmfdLookupLock *__fastcall AutoSharedUmfdLookupLock::AutoSharedUmfdLookupLock(AutoSharedUmfdLookupLock *this)
{
  __int64 v2; // rax

  v2 = SGDGetSessionState(this);
  AutoSharedPushLock::AutoSharedPushLock(this, (struct _EX_PUSH_LOCK *)(*(_QWORD *)(v2 + 32) + 23464LL));
  return this;
}
