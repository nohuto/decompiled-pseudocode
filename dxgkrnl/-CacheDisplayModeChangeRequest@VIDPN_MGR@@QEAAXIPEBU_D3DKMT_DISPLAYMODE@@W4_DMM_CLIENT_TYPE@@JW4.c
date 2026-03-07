__int64 __fastcall VIDPN_MGR::CacheDisplayModeChangeRequest(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v12; // rax
  __int64 v13; // rax

  v12 = operator new[](0x90uLL, 0x4E506456u, 256LL);
  if ( v12 && (v13 = VIDPN_MGR::DISPMODECHANGEREQUEST::DISPMODECHANGEREQUEST(v12, a2, a3, a4, a5, a7, a6, a8)) != 0 )
    return Queue<VIDPN_MGR::DISPMODECHANGEREQUEST>::Enqueue(a1 + 328, v13);
  else
    return WdLogSingleEntry1(6LL, 144LL);
}
