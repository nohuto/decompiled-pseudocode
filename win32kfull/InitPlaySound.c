__int64 InitPlaySound()
{
  __int64 v0; // rcx
  __int64 result; // rax

  v0 = Win32AllocPoolZInit(16LL, 1936749397LL);
  CUserPlaySound::s_pUserPlaySound = (RPC_BINDING_HANDLE *)v0;
  result = 0LL;
  if ( !v0 )
    return 3221225495LL;
  *(_QWORD *)v0 = 0LL;
  *(_QWORD *)(v0 + 8) = 0LL;
  return result;
}
