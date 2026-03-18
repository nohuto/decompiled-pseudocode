/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0187A80
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C01CD980 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0003F24 (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0008100 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(DXGDEVICE *this, const struct DXGALLOCATION *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // ebp
  _QWORD *v6; // r8
  int v8; // eax
  int v9; // [rsp+70h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 3676LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocation->m_pAllocation->m_Primary",
      3676LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3677LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3677LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 235)) )
  {
    WdLogSingleEntry1(1LL, 3681LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceSharedOwner()",
      3681LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v5 >= *((_DWORD *)this + 472) )
  {
    WdLogSingleEntry1(1LL, 3682LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3682LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = 0;
  if ( DXGDEVICE::InsertPrimaryAllocation(this, v5, a2, &v9) )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 2);
    if ( !v9 || *((_QWORD *)this + 235) != v6[2] || *((_DWORD *)this + 116) != 1 || (*((_DWORD *)a2 + 18) & 0x800) != 0 )
      return 0LL;
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v6[95] + 8LL) + 216LL))(
           v6[96],
           *((_QWORD *)a2 + 3),
           0LL,
           0LL,
           0LL,
           0LL);
    if ( v8 < 0 )
      return (unsigned int)v8;
  }
  else
  {
    v2 = -1073741801;
    WdLogSingleEntry3(3LL, this, a2, -1073741801LL);
  }
  return v2;
}
