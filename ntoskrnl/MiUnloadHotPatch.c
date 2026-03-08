/*
 * XREFs of MiUnloadHotPatch @ 0x140A392C0
 * Callers:
 *     NtManageHotPatch @ 0x140784740 (NtManageHotPatch.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     VslRevertHotPatch @ 0x14054A16C (VslRevertHotPatch.c)
 *     MmAcquireLoadLock @ 0x1407D2360 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x1407D2400 (MmReleaseLoadLock.c)
 *     MiApplyHotPatchToDriver @ 0x140A321B0 (MiApplyHotPatchToDriver.c)
 *     MiCompareHotPatchNodes @ 0x140A33944 (MiCompareHotPatchNodes.c)
 *     MiDeleteHotPatchRecord @ 0x140A33BA4 (MiDeleteHotPatchRecord.c)
 *     MiHotPatchAllProcesses @ 0x140A34748 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchOperationStatus @ 0x140A36298 (MiLogHotPatchOperationStatus.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiUnloadHotPatch(unsigned int a1, unsigned int a2)
{
  unsigned __int64 *v4; // r14
  struct _KTHREAD *Lock; // r12
  int v6; // edi
  unsigned __int64 *v7; // rbx
  int v8; // eax
  signed int v9; // r15d
  int v10; // eax
  _DWORD v12[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = 0LL;
  Lock = MmAcquireLoadLock();
  v6 = 0;
  MiDeleteHotPatchRecord((unsigned __int64 *)&xmmword_140C694B0, 0, a1, a2);
  if ( (MiFlags & 0x4000) != 0 )
  {
    v7 = (unsigned __int64 *)qword_140C694C0;
    v12[6] = a1;
    v12[7] = a2;
    while ( v7 )
    {
      v8 = MiCompareHotPatchNodes((__int64)v12, (__int64)v7);
      if ( v8 >= 0 )
      {
        if ( v8 <= 0 )
          break;
        v7 = (unsigned __int64 *)v7[1];
      }
      else
      {
        v7 = (unsigned __int64 *)*v7;
      }
    }
    if ( v7 )
    {
      v9 = VslRevertHotPatch(0LL, a1, a2);
      MiLogHotPatchOperationStatus(a1, a2, 0LL, v9, 2);
      if ( v9 < 0 )
      {
        v6 = v9;
      }
      else
      {
        RtlAvlRemoveNode((unsigned __int64 *)&qword_140C694C0, v7);
        v4 = v7;
      }
    }
    v10 = MiApplyHotPatchToDriver(a1, a2, 0LL, 0LL);
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741515 && v6 >= 0 )
      v6 = v10;
  }
  MmReleaseLoadLock((__int64)Lock);
  MiHotPatchAllProcesses(a1, a2);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v6;
}
