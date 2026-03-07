__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(struct ADAPTER_DISPLAY *const a1, struct VIDPN_MGR **a2)
{
  unsigned int v2; // ebx
  VIDPN_MGR *v5; // rax
  VIDPN_MGR *v6; // rdi
  VIDPN_MGR *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v5 = (VIDPN_MGR *)operator new[](0x238uLL, 0x4E506456u, 64LL);
  if ( v5 )
    v6 = VIDPN_MGR::VIDPN_MGR(v5, a1);
  else
    v6 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v6 + 11))((__int64)v6 + 88) )
    {
      v8 = 0LL;
      *a2 = v6;
    }
    else
    {
      WdLogSingleEntry3(7LL, v6, a1, *((int *)v6 + 24));
      v2 = *((_DWORD *)v6 + 24);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, a1);
    v2 = -1073741801;
  }
  auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))&v8);
  return v2;
}
