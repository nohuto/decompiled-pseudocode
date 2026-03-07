void __fastcall DMMVIDPNPRESENTPATH::SetRotationSupport(
        DMMVIDPNPRESENTPATH *this,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *a2)
{
  int v4; // eax
  unsigned __int8 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 12) + 96LL) + 407LL) )
  {
    *((_DWORD *)this + 31) = 31;
  }
  else
  {
    *((struct _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT *)this + 31) = *a2;
    if ( DMMVIDPNPRESENTPATH::IsDriverSupportPathIndependentRotation(this) )
    {
      if ( g_OSTestSigningEnabled )
      {
        v5 = 0;
        if ( (int)DMMVIDPNPRESENTPATH::IsPrimaryClonePath(this, &v5) >= 0 )
        {
          v4 = *((_DWORD *)this + 31);
          if ( v5 )
          {
            if ( (v4 & 0x10) != 0 )
            {
              if ( (v4 & 0xE0) != 0 )
                WdLogSingleEntry5(0LL, 275LL, 28LL, *(_DWORD *)a2, 2LL, 0LL);
            }
            else
            {
              WdLogSingleEntry5(0LL, 275LL, 28LL, *(_DWORD *)a2, 1LL, 0LL);
            }
          }
          else if ( (v4 & 0xF0) == 0 )
          {
            WdLogSingleEntry5(0LL, 275LL, 28LL, *(_DWORD *)a2, 0LL, 0LL);
          }
        }
      }
    }
    else
    {
      *((_DWORD *)this + 31) |= 0x10u;
    }
  }
}
