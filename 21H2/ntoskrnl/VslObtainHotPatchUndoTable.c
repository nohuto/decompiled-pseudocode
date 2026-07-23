/*
 * XREFs of VslObtainHotPatchUndoTable @ 0x140890138
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C8F14 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408CE800 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MmSizeOfMdl @ 0x140219160 (MmSizeOfMdl.c)
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     VslpUnlockPagesForTransfer @ 0x1403941C4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x140394218 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslObtainHotPatchUndoTable(PVOID Base, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  ULONG v6; // r15d
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v8; // rbx
  int v10; // edi
  __int64 *v11[10]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-A8h] BYREF

  v3 = a3;
  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  v6 = MmSizeOfMdl(Base, (unsigned int)v3);
  PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x54736D56u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag->Next = 0LL;
  PoolWithTag->Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + v3 + 4095) >> 12) + 6);
  PoolWithTag->MdlFlags = 0;
  PoolWithTag->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTag->ByteOffset = a2 & 0xFFF;
  PoolWithTag->ByteCount = v3;
  MmProbeAndLockPages(PoolWithTag, 0, IoWriteAccess);
  v10 = VslpLockPagesForTransfer((__int64)v11, v8, v6, 1, 0);
  if ( v10 >= 0 )
  {
    v12[1] = Base;
    v12[2] = v11[0];
    v12[3] = v11[7];
    v10 = VslpEnterIumSecureMode(2u, 69, 0, (__int64)v12);
    VslpUnlockPagesForTransfer(v11);
  }
  if ( (v8->MdlFlags & 2) != 0 )
    MmUnlockPages(v8);
  ExFreePoolWithTag(v8, 0);
  return (unsigned int)v10;
}
