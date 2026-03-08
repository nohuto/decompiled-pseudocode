/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00274B0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0024834 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C01828EC (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C0027B84 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00483B0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgShareLockEx @ 0x1C0048840 (HmgShareLockEx.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  HSURF v4; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned int v10; // ebp

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2528LL) )
    return 1LL;
  if ( a2
    || (v6 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2688)) != 0LL && (v4 = (HSURF)v6(*(_QWORD *)(v2 + 1768))) != 0LL )
  {
    LOBYTE(a2) = 5;
    v7 = HmgShareLockCheck(v4, a2);
    v9 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 112) |= 0x80000000;
      if ( (*(_DWORD *)(v2 + 40) & 0x8000) == 0 )
        HmgIncrementShareReferenceCount(v7);
      *(_QWORD *)(*(_QWORD *)this + 2528LL) = v9;
      if ( !*(_DWORD *)(v9 + 96) )
        *(_DWORD *)(v9 + 96) = *(_DWORD *)(*(_QWORD *)this + 2076LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2528LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1776LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 1792LL) & 0x8000000) != 0 )
        *(_DWORD *)(v9 + 112) |= 0x80000u;
      LOBYTE(v8) = 8;
      HmgShareLockEx(**(_QWORD **)(*(_QWORD *)this + 1776LL), v8, 0LL);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0
        && qword_1C02D5CA8
        && (int)qword_1C02D5CA8() >= 0
        && qword_1C02D5CB0 )
      {
        qword_1C02D5CB0(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      }
      PDEVOBJ::vFilterDriverHooks(this);
      if ( qword_1C02D5938 )
        v10 = qword_1C02D5938(v2);
      else
        v10 = 0;
      if ( qword_1C02D5948 )
        qword_1C02D5948(v2);
      if ( *(_QWORD *)(*(_QWORD *)this + 1744LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1744LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2528LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2528LL) != 0LL),
          4LL);
      v3 = v10;
      HmgDecrementShareReferenceCountEx(v9, 0LL);
    }
  }
  return v3;
}
