/*
 * XREFs of ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0007ED8
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0069938 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01A0140 (-UpdatePathSupportInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PE.c)
 * Callees:
 *     ?IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A08A4 (-IsDriverSupportPathIndependentRotation@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C03B4E60 (-IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z.c)
 */

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
