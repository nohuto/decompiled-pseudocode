/*
 * XREFs of ?Initialize@VIDMM_PARTITION@@QEAAJXZ @ 0x1C0019854
 * Callers:
 *     ?VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z @ 0x1C0001BA4 (-VidMmiOpenCurrentPartition@@YAJPEAVVIDMM_PROCESS@@PEAPEAUVIDMM_PARTITION@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C00124D8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDMM_PARTITION::Initialize(VIDMM_PARTITION *this)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  bool v5; // cf
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx

  v2 = ((__int64 (*)(void))DxgCoreInterface[3])();
  v3 = ((unsigned int (__fastcall *)(__int64))DxgCoreInterface[5])(v2);
  v4 = 384 * v3;
  if ( !is_mul_ok(v3, 0x180uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = operator new[](v6, 0x63356956u, 256LL);
  if ( v7 )
  {
    v8 = v7 + 8;
    *(_QWORD *)v7 = v3;
    `vector constructor iterator'(
      (char *)(v7 + 8),
      384LL,
      (unsigned int)v3,
      (void (__fastcall *)(char *))VIDMM_PARTITION_ADAPTER_INFO::VIDMM_PARTITION_ADAPTER_INFO);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 5) = v8;
  if ( v8 )
    return 0LL;
  _InterlockedIncrement(&dword_1C00768D4);
  WdLogSingleEntry1(6LL, 430LL);
  ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
    0LL,
    262145LL,
    0xFFFFFFFFLL,
    L"Couldn't allocate memory for partition adapter info array.",
    430LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
