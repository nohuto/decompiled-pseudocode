__int64 __fastcall DmmCollectBlackScreenDiagInfo(DXGADAPTER *a1, size_t a2, void *a3)
{
  unsigned int v3; // ebx
  VIDPN_MGR *v7; // rcx
  int v8; // eax
  size_t v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = 0;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
      WdLogSingleEntry0(1LL);
    if ( *((_QWORD *)a1 + 365) )
    {
      memset(a3, 0, 0x2000uLL);
      v7 = *(VIDPN_MGR **)(*((_QWORD *)a1 + 365) + 104LL);
      if ( v7 )
      {
        v9 = 0LL;
        v8 = VIDPN_MGR::AcquireDiagInfo(v7, a3, 0x2000uLL, 1, 0LL, &v9);
        if ( v8 == -2147483643 )
        {
          WdLogSingleEntry2(3LL, 0x2000LL, v9);
          return 2147483653LL;
        }
        else
        {
          if ( v8 < 0 )
            return (unsigned int)v8;
          return v3;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, a1);
        return 3223192373LL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
}
