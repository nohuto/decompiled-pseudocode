/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C02E5F24
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(DXGDEVICE *this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 Type; // rdx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rax
  D3DKMT_HANDLE v10; // ecx
  __int64 v11; // r10
  __int64 v12; // r9
  int v13; // ecx
  int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rdx
  unsigned int v16; // eax
  _BYTE v17[32]; // [rsp+50h] [rbp-28h] BYREF
  struct _EX_RUNDOWN_REF *v18; // [rsp+80h] [rbp+8h] BYREF

  v4 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 5289LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5289LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Type = a2->Type;
  if ( (_DWORD)Type )
  {
    if ( (_DWORD)Type == 1 )
      return 3221225659LL;
    WdLogSingleEntry2(3LL, Type, -1073741811LL);
    return (unsigned int)-1073741811;
  }
  Current = DXGPROCESS::GetCurrent(v3);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v17, Current);
  v9 = DXGPROCESS::GetCurrent(v8);
  v10 = (a2->VidPnFromAllocation.hPrimaryAllocation >> 6) & 0xFFFFFF;
  if ( v10 >= *((_DWORD *)v9 + 74) )
    goto LABEL_13;
  v11 = *((_QWORD *)v9 + 35);
  v12 = 2LL * v10;
  v13 = *(_DWORD *)(v11 + 16LL * v10 + 8);
  if ( ((a2->VidPnFromAllocation.hPrimaryAllocation >> 25) & 0x60) != (v13 & 0x60) )
    goto LABEL_13;
  if ( (v13 & 0x2000) != 0 )
    goto LABEL_13;
  v14 = v13 & 0x1F;
  if ( !v14 )
    goto LABEL_13;
  if ( v14 != 5 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_13:
    v15 = 0LL;
    goto LABEL_14;
  }
  v15 = *(struct _EX_RUNDOWN_REF **)(v11 + 8 * v12);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v18, v15);
  if ( !v18 || (v16 = *(_DWORD *)(v18[6].Count + 4), (v16 & 0x2003) == 0) )
  {
    WdLogSingleEntry2(3LL, a2->VidPnFromAllocation.hPrimaryAllocation, -1073741811LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v18);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
    return 3221225485LL;
  }
  a2->VidPnFromAllocation.VidPnSourceId = (v16 >> 6) & 0xF;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v18);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v4;
}
