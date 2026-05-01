/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_6e497bc91bd1b514200f3fa30e5ef36f___ @ 0x180132420
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___ @ 0x1801326F8 (_anonymous_namespace_--RunSynchronousInSTA__lambda_1852a6ec92915f877811d72e8734d237___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_6e497bc91bd1b514200f3fa30e5ef36f___(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _OWORD *a4)
{
  _OWORD *v6; // rax
  _OWORD *v7; // rdi
  _OWORD *v8; // rbx
  __int128 v9; // xmm1
  unsigned int v10; // ebx

  v6 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v7 = v8;
    v8[1] = *a4;
    v9 = a4[1];
    *(_QWORD *)v8 = off_1805087C0;
    v8[2] = v9;
  }
  v10 = SHTaskPoolQueueTask(1LL, 32LL, a3, 0LL, v7, 0LL);
  if ( v7 )
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v7 + 16LL))(v7);
  return v10;
}
