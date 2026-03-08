/*
 * XREFs of VfTargetEtwRegister @ 0x140AC8648
 * Callers:
 *     VerifierEtwRegister @ 0x140AE0FC0 (VerifierEtwRegister.c)
 *     VerifierEtwRegisterClassicProvider @ 0x140AE1000 (VerifierEtwRegisterClassicProvider.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VfTargetEtwRegister(__int64 a1, unsigned __int64 a2)
{
  int v4; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  if ( !VfSafeMode )
  {
    v4 = 0;
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 0x20uLL, 0x54456656u);
    VfAvlInitializeLockContext((__int64)&v10, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v10, a2, 1LL);
    if ( v6 )
    {
      v7 = v6[7];
      if ( v7 )
      {
        if ( Pool2 )
        {
          v8 = v7 + 16;
          Pool2[2] = a1;
          Pool2[3] = a2;
          v9 = *(_QWORD **)(v8 + 8);
          if ( *v9 != v8 )
            __fastfail(3u);
          *Pool2 = v8;
          v4 = 1;
          Pool2[1] = v9;
          *v9 = Pool2;
          *(_QWORD *)(v8 + 8) = Pool2;
        }
        else
        {
          *(_DWORD *)(v7 + 32) |= 1u;
        }
      }
    }
    VfAvlCleanupLockContext((__int64)&v10);
    if ( !v4 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x54456656u);
    }
  }
}
