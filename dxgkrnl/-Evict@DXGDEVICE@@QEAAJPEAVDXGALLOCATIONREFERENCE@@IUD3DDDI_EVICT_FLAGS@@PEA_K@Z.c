/*
 * XREFs of ?Evict@DXGDEVICE@@QEAAJPEAVDXGALLOCATIONREFERENCE@@IUD3DDDI_EVICT_FLAGS@@PEA_K@Z @ 0x1C0183CDC
 * Callers:
 *     ?DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z @ 0x1C0183FDC (-DxgkEvictInternal@@YAJPEAU_D3DKMT_EVICT@@HPEAD@Z.c)
 * Callees:
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0006768 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::Evict(
        DXGDEVICE *this,
        struct DXGALLOCATIONREFERENCE *a2,
        __int64 a3,
        struct D3DDDI_EVICT_FLAGS a4,
        unsigned __int64 *a5)
{
  unsigned int v7; // r8d
  char v8; // r9
  int v9; // esi
  struct DXGALLOCATIONREFERENCE *i; // rbp
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF

  if ( DXGDEVICE::UmdManagesResidency(this) )
  {
    v9 = v8 & 1 | 2;
    if ( (v8 & 2) != 0 )
      v9 = v8 & 1;
    for ( i = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8 * v7);
          a2 != i;
          a2 = (struct DXGALLOCATIONREFERENCE *)((char *)a2 + 8) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
      if ( v12 )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64, int, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                                                            + 776LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
          *((_QWORD *)this + 99),
          &v12,
          1LL,
          v9,
          a5);
    }
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Calling Evict on a device that was not created with the UMD residency flag. Device=0x%p",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
