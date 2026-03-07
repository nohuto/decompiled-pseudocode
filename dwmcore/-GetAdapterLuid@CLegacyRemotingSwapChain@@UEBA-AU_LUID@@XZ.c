struct _LUID __fastcall CLegacyRemotingSwapChain::GetAdapterLuid(CLegacyRemotingSwapChain *this, _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, _BYTE *); // r8
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))*((_QWORD *)this - 24);
  if ( v2 )
    *a2 = *(_QWORD *)(**v2)(*((_QWORD *)this - 24), v5);
  else
    *a2 = *(_QWORD *)(*((_QWORD *)this - 25) + 896LL);
  return (struct _LUID)a2;
}
