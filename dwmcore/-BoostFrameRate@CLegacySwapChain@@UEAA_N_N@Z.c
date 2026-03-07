char __fastcall CLegacySwapChain::BoostFrameRate(CLegacySwapChain *this, char a2)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r9
  volatile signed __int32 *v6; // rcx
  __int64 v8; // rcx
  __int128 v9; // rax

  if ( !*((_BYTE *)this + 344) )
  {
    if ( !a2 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 28) + 200LL))(
        *((_QWORD *)this + 28),
        0LL,
        1LL);
      v8 = *((unsigned int *)this + 72);
      v9 = g_qpcFrequency.QuadPart * *((unsigned int *)this + 73);
      *((_DWORD *)this + 84) = 1;
      *((_QWORD *)this + 41) = v9 / v8;
      return 1;
    }
    v3 = *((unsigned int *)this + 78);
    if ( (unsigned int)v3 > 1 )
    {
      v4 = g_qpcFrequency.QuadPart
         * (unsigned __int64)*((unsigned int *)this + 73)
         / (v3
          * (unsigned __int64)*((unsigned int *)this + 72));
      if ( CLegacySwapChain::IsValidVariableRefreshDuration(this, v4)
        && (*(int (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 28) + 200LL))(
             *((_QWORD *)this + 28),
             10000000 * v4 / v5) >= 0 )
      {
        *((_DWORD *)this + 84) = *((_DWORD *)this + 78);
        *((_QWORD *)this + 41) = v4;
        v6 = (volatile signed __int32 *)*((_QWORD *)this + 44);
        *((_QWORD *)this + 44) = 0LL;
        if ( v6 )
          CMILRefCountBaseT<IUnknown>::InternalRelease(v6);
        return 1;
      }
    }
  }
  return 0;
}
