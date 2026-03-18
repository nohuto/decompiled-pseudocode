/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C016AE70
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     INC_SHARE_REF_CNT @ 0x1C0020410 (INC_SHARE_REF_CNT.c)
 *     HmgShareLock @ 0x1C0021AA0 (HmgShareLock.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C00BFFBC (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     vEnableSynchronize @ 0x1C00C3134 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x1C00C4470 (bSpEnableSprites.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  HSURF v4; // rax
  __int64 (__fastcall *v7)(_QWORD); // rax
  __int64 v8; // rcx
  unsigned int v9; // ebp
  _BYTE v10[32]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int *v11; // [rsp+50h] [rbp-18h]

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2528LL) )
    return 1LL;
  if ( a2
    || (v7 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2688)) != 0LL && (v4 = (HSURF)v7(*(_QWORD *)(v2 + 1768))) != 0LL )
  {
    SURFREF::SURFREF((SURFREF *)v10, v4);
    if ( v11 )
    {
      v11[28] |= 0x80000000;
      if ( (*(_DWORD *)(v2 + 40) & 0x8000) == 0 )
        INC_SHARE_REF_CNT(v11);
      *(_QWORD *)(*(_QWORD *)this + 2528LL) = v11;
      if ( !v11[24] )
        v11[24] = *(_DWORD *)(*(_QWORD *)this + 2076LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2528LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1776LL);
      v8 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 1792LL) & 0x8000000) != 0 )
      {
        v11[28] |= 0x80000u;
        v8 = *(_QWORD *)this;
      }
      HmgShareLock(**(_QWORD **)(v8 + 1776), 8);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0
        && qword_1C029B4A0
        && (int)qword_1C029B4A0() >= 0
        && qword_1C029B4A8 )
      {
        qword_1C029B4A8(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      }
      PDEVOBJ::vFilterDriverHooks(this);
      v9 = (unsigned int)bSpEnableSprites();
      vEnableSynchronize();
      if ( *(_QWORD *)(*(_QWORD *)this + 1744LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1744LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2528LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2528LL) != 0LL),
          4LL);
      v3 = v9;
    }
    SURFREF::~SURFREF((SURFREF *)v10);
  }
  return v3;
}
