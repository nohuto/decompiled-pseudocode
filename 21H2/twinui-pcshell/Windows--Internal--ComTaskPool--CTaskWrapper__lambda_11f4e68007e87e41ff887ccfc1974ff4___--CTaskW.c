/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4_____lambda_11f4e68007e87e41ff887ccfc1974ff4___ @ 0x1802FC284
 * Callers:
 *     ?OnTabTransferStarting@TabTransferManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1802FED20 (-OnTabTransferStarting@TabTransferManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShe.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18003F470 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4___::CTaskWrapper__lambda_11f4e68007e87e41ff887ccfc1974ff4_____lambda_11f4e68007e87e41ff887ccfc1974ff4___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = v4;
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = v5;
  v6 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = v6;
  v7 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = v7;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a2 + 40);
  v8 = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = v8;
  v9 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 64) = 0LL;
  *(_QWORD *)(a1 + 80) = v9;
  *(_QWORD *)a1 = off_18051F918;
  return a1;
}
