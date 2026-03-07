void __fastcall CLegacySwapChain::SetSDRBoost(CLegacySwapChain *this, float a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( *((float *)this - 82) != a2 )
  {
    v2 = *((_QWORD *)this - 38);
    *((float *)this - 82) = a2;
    if ( v2 )
    {
      v3 = v2 + 8 + *(int *)(*(_QWORD *)(v2 + 8) + 24LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    }
  }
}
