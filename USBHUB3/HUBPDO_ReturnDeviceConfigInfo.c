/*
 * XREFs of HUBPDO_ReturnDeviceConfigInfo @ 0x1C0016420
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C0018550 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     HUBID_FreeID @ 0x1C001DB90 (HUBID_FreeID.c)
 *     HUBID_BuildHardwareID @ 0x1C001E034 (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C001E9A8 (HUBID_BuildCompatibleID.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBPDO_ReturnDeviceConfigInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned __int16 v4; // r9
  int v5; // edi
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  void *Pool2; // rax

  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 8LL);
  if ( !v3 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v4 = 19;
LABEL_4:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      v4,
      (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)v3 != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)-1073741811;
    v4 = 20;
    goto LABEL_4;
  }
  if ( *(_DWORD *)(v3 + 4) != 204 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x15u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        *(_DWORD *)(v3 + 4),
        204);
    return (unsigned int)-1073741789;
  }
  memset((void *)(v3 + 12), 0, 0xC0uLL);
  *(_DWORD *)(v3 + 8) = 0;
  v6 = 0;
  *(_DWORD *)v3 = 1;
  *(_DWORD *)(v3 + 4) = 204;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 2496LL) & 2) != 0 )
  {
    *(_DWORD *)(v3 + 8) = 1;
    v6 = 1;
  }
  if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 2458LL) >= 0x200u )
  {
    *(_DWORD *)(v3 + 8) = 1;
    v6 = 1;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 2) != 0 )
  {
    v6 |= 8u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 2) != 0 )
  {
    v6 |= 4u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 256LL) == 2 )
  {
    v6 |= 2u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 40LL) & 0x100) != 0 )
  {
    v6 |= 0x20u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 16) + 240LL) )
  {
    v6 |= 0x10u;
    *(_DWORD *)(v3 + 8) = v6;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 92LL) == 100 )
    *(_DWORD *)(v3 + 8) = v6 | 0x40;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 24) + 1632LL) & 1) != 0 )
  {
    *(_DWORD *)(v3 + 132) |= 1u;
    v7 = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(v3 + 136) = *(_OWORD *)(v7 + 1664);
    *(_OWORD *)(v3 + 152) = *(_OWORD *)(v7 + 1680);
    *(_OWORD *)(v3 + 168) = *(_OWORD *)(v7 + 1696);
    *(_OWORD *)(v3 + 184) = *(_OWORD *)(v7 + 1712);
    *(_DWORD *)(v3 + 200) = *(_DWORD *)(v7 + 1728);
  }
  v5 = HUBID_BuildCompatibleID(*(_QWORD *)(a1 + 24), 0LL, v3 + 28);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x16u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v5);
    v8 = v3 + 12;
LABEL_45:
    HUBID_FreeID(v3 + 28);
    HUBID_FreeID(v8);
    HUBID_FreeID(v3 + 44);
    return (unsigned int)v5;
  }
  v5 = HUBID_BuildHardwareID(*(_QWORD *)(a1 + 24), 0LL, v3 + 12);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
        3u,
        5u,
        0x17u,
        (__int64)&WPP_89394142541e3c268d3f106ce98d6cb5_Traceguids,
        v5);
    v8 = v3 + 12;
    goto LABEL_45;
  }
  v9 = *(_QWORD *)(a1 + 24) + 2160LL;
  v5 = 0;
  *(_OWORD *)(v3 + 44) = 0LL;
  if ( *(_QWORD *)(v9 + 8) && *(_DWORD *)(v9 + 4) )
  {
    *(_OWORD *)(v3 + 44) = *(_OWORD *)v9;
    Pool2 = (void *)ExAllocatePool2(64LL, *(unsigned int *)(v9 + 4), 1681082453LL);
    *(_QWORD *)(v3 + 52) = Pool2;
    if ( Pool2 )
      memmove(Pool2, *(const void **)(v9 + 8), *(unsigned int *)(v9 + 4));
    else
      v5 = -1073741670;
  }
  v8 = v3 + 12;
  if ( v5 < 0 )
    goto LABEL_45;
  return (unsigned int)v5;
}
