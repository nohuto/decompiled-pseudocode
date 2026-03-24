/*
 * XREFs of MiDeleteFinalPageTables @ 0x1402EA0BC
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1406601A4 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MiDeleteVirtualAddresses @ 0x14027EC00 (MiDeleteVirtualAddresses.c)
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140294EE0 (UNLOCK_ADDRESS_SPACE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     MiDeleteTopLevelPage @ 0x1402EA238 (MiDeleteTopLevelPage.c)
 *     KeFlushProcessTb @ 0x1402EA3D4 (KeFlushProcessTb.c)
 *     MiUnlinkProcessFromSession @ 0x1402EA3F4 (MiUnlinkProcessFromSession.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiDeleteVadBitmap @ 0x140660300 (MiDeleteVadBitmap.c)
 */

__int64 __fastcall MiDeleteFinalPageTables(_KPROCESS *BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // r14
  int i; // esi
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  __int64 result; // rax
  _OWORD v14[3]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v15[3]; // [rsp+60h] [rbp-58h] BYREF

  v4 = BugCheckParameter2->DirectoryTableBase >> 12;
  memset(v15, 0, sizeof(v15));
  v6 = 48 * v4;
  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess(BugCheckParameter2, 0LL, (__int64)v15, a4);
  for ( i = 0; i < 2; ++i )
  {
    if ( i )
    {
      v9 = qword_140C4DE48;
      if ( !qword_140C4DE48 )
        continue;
    }
    else
    {
      v9 = 2147352576LL;
    }
    if ( MI_READ_PTE_LOCK_FREE(8 * ((v9 >> 39) & 0x1FF) - 0x90482413000LL) )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&BugCheckParameter2[1].Affinity.Bitmap[7], 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 1u;
      MiDeleteVirtualAddresses(v9, v9, 0, (__int64)v14);
      UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)BugCheckParameter2);
    }
  }
  MiDeleteVadBitmap((ULONG_PTR)BugCheckParameter2);
  if ( (*(_QWORD *)(v6 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL) != 2 )
    KeBugCheckEx(
      0x1Au,
      0x3453uLL,
      (ULONG_PTR)BugCheckParameter2,
      v6 / 48,
      *(_QWORD *)(v6 - 0x58000000000LL + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiDeleteProcessShadow((__int64)BugCheckParameter2, 1, v10);
  KiUnstackDetachProcess((__int64)v15, 0);
  _interlockedbittestandset((volatile signed __int32 *)&BugCheckParameter2->632, 0xAu);
  MiUnlinkProcessFromSession(BugCheckParameter2);
  KeFlushProcessTb(BugCheckParameter2->DirectoryTableBase);
  v12 = (unsigned int)MiDeleteTopLevelPage(v11, BugCheckParameter2->DirectoryTableBase >> 12) == 3;
  result = *((_QWORD *)&v14[0] + 1);
  if ( v12 )
    return *((_QWORD *)&v14[0] + 1) + 1LL;
  return result;
}
