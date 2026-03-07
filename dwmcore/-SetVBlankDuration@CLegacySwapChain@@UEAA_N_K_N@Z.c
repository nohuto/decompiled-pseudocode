char __fastcall CLegacySwapChain::SetVBlankDuration(CLegacySwapChain *this, unsigned __int64 a2, char a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rcx
  __int64 v9; // rdx

  v3 = a2;
  if ( a2 )
  {
    v5 = 10000000 * a2 / g_qpcFrequency.QuadPart;
    if ( !a3 )
    {
      v6 = (*(__int64 (__fastcall **)(CLegacySwapChain *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 168LL))(
             this,
             (unsigned int)v5,
             0LL,
             0LL);
      if ( (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v6 - (float)(int)v5) & _xmm) / (float)(int)v5) >= 0.1
        || (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 28) + 200LL))(
             *((_QWORD *)this + 28),
             v6,
             1LL) < 0 )
      {
        return 0;
      }
      v3 = g_qpcFrequency.QuadPart * (unsigned __int64)v6 / 0x989680;
    }
    *((_QWORD *)this + 41) = v3;
    *((_BYTE *)this + 344) = 1;
    *((_DWORD *)this + 84) = 1;
    v7 = (volatile signed __int32 *)*((_QWORD *)this + 44);
    *((_QWORD *)this + 44) = 0LL;
    if ( v7 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v7);
  }
  else
  {
    *((_BYTE *)this + 344) = 0;
    LOBYTE(v9) = CComposition::GetCompositorClockBoost(g_pComposition);
    (*(void (__fastcall **)(CLegacySwapChain *, __int64))(*(_QWORD *)this + 104LL))(this, v9);
  }
  return 1;
}
