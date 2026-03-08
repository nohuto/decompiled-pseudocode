/*
 * XREFs of ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C00A7F58
 * Callers:
 *     VidMmCreateDevice @ 0x1C0011AA0 (VidMmCreateDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00A91E4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C00C2214 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00017E8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001938 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001998 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_DEVICE::VIDMM_DEVICE(VIDMM_DEVICE *this, struct VIDMM_GLOBAL *a2, struct DXGDEVICE *a3)
{
  char *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  VIDMM_DEVICE *result; // rax
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  *((_BYTE *)this + 58) &= 0xF0u;
  *((_DWORD *)this + 15) &= 0xFFFFFFF8;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_WORD *)this + 28) = 1;
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 926);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 1754);
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 1;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 23) = (char *)this + 176;
  *((_QWORD *)this + 22) = (char *)this + 176;
  *((_QWORD *)this + 14) = (char *)this + 104;
  *((_QWORD *)this + 13) = (char *)this + 104;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *(_OWORD *)((char *)this + 264) = 0LL;
  *(_OWORD *)((char *)this + 280) = 0LL;
  *((_DWORD *)this + 74) = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)a2 + 5564, 0);
  DXGPUSHLOCK::AcquireExclusive(v10);
  v5 = (char *)a2 + 44608;
  v11 = 2;
  v6 = (_QWORD *)((char *)this + 208);
  v7 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v6 = v7;
  *((_QWORD *)this + 27) = v5;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)v5 = v6;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  result = this;
  *((_QWORD *)this + 38) = 0LL;
  return result;
}
