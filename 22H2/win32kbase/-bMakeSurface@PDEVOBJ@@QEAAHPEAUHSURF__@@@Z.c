/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C013E1D0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014AC8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013DEC4 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C001DA78 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002CB94 (--1SURFREF@@QEAA@XZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C002E2E0 (INC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C002FC10 (HmgShareLock.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C00AEB4C (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     vEnableSynchronize @ 0x1C00B4078 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x1C00B582C (bSpEnableSprites.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  HSURF v4; // rax
  __int64 (__fastcall *v7)(_QWORD); // rax
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebp
  _BYTE v11[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v12; // [rsp+50h] [rbp-18h]

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2552LL) )
    return 1LL;
  if ( a2
    || (v7 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2712)) != 0LL && (v4 = (HSURF)v7(*(_QWORD *)(v2 + 1800))) != 0LL )
  {
    SURFREF::SURFREF((SURFREF *)v11, v4);
    if ( v12 )
    {
      v12[28] |= 0x80000000;
      if ( (*(_DWORD *)(v2 + 40) & 0x8000) == 0 )
        INC_SHARE_REF_CNT(v12);
      *(_QWORD *)(*(_QWORD *)this + 2552LL) = v12;
      if ( !v12[24] )
        v12[24] = *(_DWORD *)(*(_QWORD *)this + 2108LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2552LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1808LL);
      v8 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 1824LL) & 0x8000000) != 0 )
      {
        v12[28] |= 0x80000u;
        v8 = *(_QWORD *)this;
      }
      HmgShareLock(**(_QWORD **)(v8 + 1808), 8);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
      {
        v9 = qword_1C0255730 ? qword_1C0255730() : -1073741637;
        if ( v9 >= 0 && qword_1C0255738 )
          qword_1C0255738(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      }
      PDEVOBJ::vFilterDriverHooks(this);
      v10 = (unsigned int)bSpEnableSprites();
      vEnableSynchronize();
      if ( *(_QWORD *)(*(_QWORD *)this + 1776LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1776LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2552LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2552LL) != 0LL),
          4LL);
      v3 = v10;
    }
    SURFREF::~SURFREF((SURFREF *)v11);
  }
  return v3;
}
