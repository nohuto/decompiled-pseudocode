__int64 __fastcall CLegacyRemotingSwapChain::GetPresentStatisticsDWM(
        CLegacyRemotingSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  __int64 v2; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // edx
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v2 = *((_QWORD *)this + 14);
  v11 = 0LL;
  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v2 + 40LL))(v2, &v10);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x6Fu, 0LL);
  }
  else
  {
    v7 = DWORD2(v10);
    *(_QWORD *)a2 = v10;
    v8 = v11;
    *((_QWORD *)a2 + 1) = v11;
    *((_QWORD *)a2 + 3) = v8;
    *((_DWORD *)a2 + 4) = v7;
    *((_DWORD *)a2 + 9) = v7;
  }
  return v6;
}
