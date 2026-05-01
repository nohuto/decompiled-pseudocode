/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49_____lambda_2ae32e13828e5ee4f6a411d44b960e49___ @ 0x18009CCE4
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2ae32e13828e5ee4f6a411d44b960e49___ @ 0x18009D940 (Windows--Internal--ComTaskPool--QueueTask__lambda_2ae32e13828e5ee4f6a411d44b960e49___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49___::CTaskWrapper__lambda_2ae32e13828e5ee4f6a411d44b960e49_____lambda_2ae32e13828e5ee4f6a411d44b960e49___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 56) = 7LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_WORD *)(a2 + 32) = 0;
  v4 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = v4;
  *(_QWORD *)a1 = off_1805019A8;
  return a1;
}
