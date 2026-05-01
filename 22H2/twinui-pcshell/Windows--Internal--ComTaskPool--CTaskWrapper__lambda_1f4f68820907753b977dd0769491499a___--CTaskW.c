/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a_____lambda_1f4f68820907753b977dd0769491499a___ @ 0x1802F3FAC
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1f4f68820907753b977dd0769491499a___ @ 0x1802F48D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_1f4f68820907753b977dd0769491499a___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a___::CTaskWrapper__lambda_1f4f68820907753b977dd0769491499a_____lambda_1f4f68820907753b977dd0769491499a___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 24);
  *(_BYTE *)(a1 + 56) = *(_BYTE *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = v6;
  *(_QWORD *)a1 = off_18051EEC8;
  return a1;
}
