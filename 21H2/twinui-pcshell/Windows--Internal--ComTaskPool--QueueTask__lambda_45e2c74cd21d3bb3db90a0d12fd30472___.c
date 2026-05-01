/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_45e2c74cd21d3bb3db90a0d12fd30472___ @ 0x1801322A8
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___ @ 0x180132A98 (_anonymous_namespace_--RunSynchronousInSTA__lambda_d2b9f9141b354d7aab2c271df0a099ad___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_45e2c74cd21d3bb3db90a0d12fd30472___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rdi
  _OWORD *v8; // rbx
  unsigned int v9; // ebx

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v7 = v8;
    v8[1] = *(_OWORD *)a4;
    v8[2] = *(_OWORD *)(a4 + 16);
    *((_QWORD *)v8 + 6) = *(_QWORD *)(a4 + 32);
    *(_QWORD *)v8 = off_180508730;
  }
  v9 = SHTaskPoolQueueTask(1LL, 32LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
