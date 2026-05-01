/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_73ef71535b890153fa9387f7d486ec46___ @ 0x18048BFC8
 * Callers:
 *     ?HideDropFeedback@JointResize@@AEAAJ_N@Z @ 0x18048CE5C (-HideDropFeedback@JointResize@@AEAAJ_N@Z.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_73ef71535b890153fa9387f7d486ec46___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ebx

  v6 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v6);
    v8[2] = 0LL;
    if ( v8 + 2 != a4 )
    {
      v8[2] = *a4;
      *a4 = 0LL;
    }
    v7 = v8;
    *v8 = off_18053B340;
  }
  CurrentThreadId = GetCurrentThreadId();
  v10 = SHTaskPoolQueueTask(2LL, 0LL, CurrentThreadId, 166LL, v7, a3);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return v10;
}
