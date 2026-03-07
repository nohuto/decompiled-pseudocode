__int64 __fastcall ACPIDeviceIrpDeviceFilterRequest(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, __int64))
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  char v7; // r8
  __int64 v8; // rbx
  int v9; // r15d
  int v10; // ebp
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  int v14; // esi
  int v16; // eax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = 0;
  v8 = DeviceExtension;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = (const char *)&unk_1C00622D0;
  v12 = (const char *)&unk_1C00622D0;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v13 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v13 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v8 + 608);
      if ( (v13 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v8 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v12,
      0xAu,
      0x1Eu,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      a2,
      v9 - 1,
      v7,
      v11,
      v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v14 = *(_DWORD *)(a2 + 48);
  if ( v14 >= 0 )
  {
    if ( v9 == 1 || !_bittest64((const signed __int64 *)(v8 + 1008), 0x24u) )
    {
      if ( (unsigned int)(v10 - 4) <= 1 || (v16 = 0, v10 == 6) )
        v16 = 1;
      return ACPIDeviceInitializePowerRequest(v8, v9, 0LL, a3, a2, v10, 0, 8 * v16);
    }
    else
    {
      if ( a3 )
        a3(v8, a2, (unsigned int)v14);
      return 3221225494LL;
    }
  }
  else
  {
    ACPIInternalDecrementIrpReferenceCount(v8);
    return (unsigned int)v14;
  }
}
