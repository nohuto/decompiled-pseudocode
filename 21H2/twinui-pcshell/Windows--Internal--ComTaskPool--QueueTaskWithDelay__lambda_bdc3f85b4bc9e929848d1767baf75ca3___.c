/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___ @ 0x180305388
 * Callers:
 *     ?ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z @ 0x1803062A0 (-ApplyTemplateToAllViews@ViewGroup@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bdc3f85b4bc9e929848d1767baf75ca3_____lambda_bdc3f85b4bc9e929848d1767baf75ca3___ @ 0x18030512C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bdc3f85b4bc9e.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_bdc3f85b4bc9e929848d1767baf75ca3___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 *v5; // rax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // edi
  __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bdc3f85b4bc9e929848d1767baf75ca3_____lambda_bdc3f85b4bc9e929848d1767baf75ca3___(
         v12,
         a4);
  v7 = *v5;
  *v5 = 0LL;
  v8 = v12[0];
  if ( v12[0] )
  {
    v12[0] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v8,
      v6);
  }
  CurrentThreadId = GetCurrentThreadId();
  v10 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 1000LL, v7, a3);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v10;
}
