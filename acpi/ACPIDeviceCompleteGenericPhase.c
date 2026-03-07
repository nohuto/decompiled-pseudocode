void __fastcall ACPIDeviceCompleteGenericPhase(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  __int64 v6; // r10
  const char *v7; // rdx
  const char *v8; // r8
  __int64 v10; // rcx
  signed __int32 v11; // edx

  v4 = *(_QWORD **)(a4 + 40);
  LOBYTE(v6) = 0;
  v7 = (const char *)&unk_1C00622D0;
  v8 = (const char *)&unk_1C00622D0;
  if ( v4 )
  {
    v10 = v4[1];
    v6 = *(_QWORD *)(a4 + 40);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)v4[76];
      if ( (v10 & 0x400000000000LL) != 0 )
        v8 = (const char *)v4[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0xEu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      v6,
      v7,
      v8);
  *(_DWORD *)(a4 + 56) &= 0xEEFFFFFF;
  if ( a2 >= 0 )
  {
    v11 = *(_DWORD *)(a4 + 212);
  }
  else
  {
    *(_DWORD *)(a4 + 256) = a2;
    v11 = 2;
  }
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 208), v11);
}
