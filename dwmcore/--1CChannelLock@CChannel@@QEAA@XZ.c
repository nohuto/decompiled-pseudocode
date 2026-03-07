void __fastcall CChannel::CChannelLock::~CChannelLock(CChannel::CChannelLock *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 80LL))(*((_QWORD *)this + 1));
  else
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)this);
}
