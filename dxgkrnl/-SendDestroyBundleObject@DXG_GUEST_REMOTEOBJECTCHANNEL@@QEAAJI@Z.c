__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendDestroyBundleObject(DXG_GUEST_REMOTEOBJECTCHANNEL *this, int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v9; // [rsp+50h] [rbp-30h] BYREF
  int v10; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+5Ch] [rbp-24h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  _DWORD v14[4]; // [rsp+68h] [rbp-18h] BYREF

  if ( DXGPROCESS::GetCurrent((__int64)this) )
  {
    if ( a2 )
    {
      v5 = *((_QWORD *)this + 1);
      v13 = 0;
      v14[2] = 3;
      v14[0] = 1869901170;
      v10 = 1869901170;
      v14[1] = -1073741823;
      v11 = -1073741823;
      v12 = 4;
      v9 = 16;
      v14[3] = a2;
      v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v5 + 32LL))(
             v5,
             v14,
             16LL,
             &v10,
             &v9);
      v4 = v6;
      if ( v6 >= 0 )
      {
        if ( v9 == 16 )
        {
          if ( v12 == 4 )
            return v11;
          v7 = v12;
        }
        else
        {
          v7 = v9;
        }
        WdLogSingleEntry2(3LL, v7, -1073741823LL);
        return (unsigned int)-1073741823;
      }
      else
      {
        WdLogSingleEntry1(3LL, v6);
      }
    }
    else
    {
      v4 = -1073741811;
      WdLogSingleEntry2(3LL, 0LL, -1073741811LL);
    }
  }
  else
  {
    v4 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v4;
}
