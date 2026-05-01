/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_cc0b3fba328f8aac054ce118344567ee___ @ 0x18033C104
 * Callers:
 *     ?ViewDestroyed@ViewWrapperBase@@UEAAXXZ @ 0x180342700 (-ViewDestroyed@ViewWrapperBase@@UEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005CD40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc0b3fba328f8aac054ce118344567ee_____lambda_cc0b3fba328f8aac054ce118344567ee___ @ 0x18033BBD0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cc0b3fba328f8.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::QueueTask__lambda_cc0b3fba328f8aac054ce118344567ee___(
        __int64 a1,
        _QWORD *a2)
{
  __int64 *v2; // rax
  volatile int *v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // edi
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cc0b3fba328f8aac054ce118344567ee_____lambda_cc0b3fba328f8aac054ce118344567ee___(
         &v9,
         a2);
  v4 = *v2;
  *v2 = 0LL;
  v5 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v5,
      v3);
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = SHTaskPoolQueueTask(3LL, 0LL, CurrentThreadId, 0LL, v4, 0LL);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
