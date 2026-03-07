void ProcessChannelClosed()
{
  struct _EX_RUNDOWN_REF *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  v0 = (struct _EX_RUNDOWN_REF *)((__int64 (*)(void))qword_1C013CE58)();
  if ( v0 )
    DXGVMBUSCHANNEL::NotifyChannelClosed(v0, v1, v2, v3);
}
