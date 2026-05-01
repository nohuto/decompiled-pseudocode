/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_f1acb3e88a7ee276e5be409f1eb050f8___ @ 0x180132364
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b___ @ 0x1801326C0 (_anonymous_namespace_--RunSynchronousInSTA__lambda_5284c52766b4bd9adb216c46a73dea2b___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_f1acb3e88a7ee276e5be409f1eb050f8___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rdi
  _OWORD *v8; // rbx
  unsigned int v9; // ebx

  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v7 = v8;
    v8[1] = *(_OWORD *)a4;
    *((_QWORD *)v8 + 4) = *(_QWORD *)(a4 + 16);
    *(_QWORD *)v8 = off_1805086C8;
  }
  v9 = SHTaskPoolQueueTask(1LL, 32LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
