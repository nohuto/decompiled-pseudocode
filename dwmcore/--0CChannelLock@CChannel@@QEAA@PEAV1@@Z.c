CChannel::CChannelLock *__fastcall CChannel::CChannelLock::CChannelLock(
        CChannel::CChannelLock *this,
        struct CChannel *a2)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)a2 + 8);
  *((_QWORD *)this + 1) = v3;
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  }
  else
  {
    *(_QWORD *)this = (char *)a2 + 184;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 184));
  }
  return this;
}
