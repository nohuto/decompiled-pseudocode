/*
 * XREFs of ??$MakeAndInitialize@VCpuManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCpuManager@@@Z @ 0x1400139B8
 * Callers:
 *     ?InitializeCpuManager@@YAJXZ @ 0x140013BCC (-InitializeCpuManager@@YAJXZ.c)
 * Callees:
 *     ??0CpuManager@@QEAA@XZ @ 0x14001387C (--0CpuManager@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x14001AE04 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D6DC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CpuManager,CpuManager,>(CpuManager **a1)
{
  unsigned int v2; // edi
  CpuManager *v3; // rax
  CpuManager *v4; // rbx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  _OWORD v15[10]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-18h]
  CpuManager *v17; // [rsp+E0h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (CpuManager *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v3 )
  {
    v17 = CpuManager::CpuManager(v3);
    v4 = v17;
    *((_DWORD *)v17 + 68) = 0;
    memset_0(v15, 0, 0xA8uLL);
    v5 = v15[1];
    *(_OWORD *)((char *)v4 + 280) = v15[0];
    v6 = v15[2];
    *(_OWORD *)((char *)v4 + 296) = v5;
    v7 = v15[3];
    *(_OWORD *)((char *)v4 + 312) = v6;
    v8 = v15[4];
    *(_OWORD *)((char *)v4 + 328) = v7;
    v9 = v15[5];
    *(_OWORD *)((char *)v4 + 344) = v8;
    v10 = v15[6];
    *(_OWORD *)((char *)v4 + 360) = v9;
    v11 = v15[8];
    *(_OWORD *)((char *)v4 + 376) = v10;
    *(_OWORD *)((char *)v4 + 392) = v15[7];
    v12 = v15[9];
    v13 = v16;
    *(_OWORD *)((char *)v4 + 408) = v11;
    *(_OWORD *)((char *)v4 + 424) = v12;
    *((_QWORD *)v4 + 55) = v13;
    *((_OWORD *)v4 + 28) = 0LL;
    (*(void (__fastcall **)(CpuManager *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
