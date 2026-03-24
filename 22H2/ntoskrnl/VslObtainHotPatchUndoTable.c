/*
 * XREFs of VslObtainHotPatchUndoTable @ 0x140890028
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408C8E04 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x1408CE6F0 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x1402096D0 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     MmSizeOfMdl @ 0x1402EB830 (MmSizeOfMdl.c)
 *     VslpUnlockPagesForTransfer @ 0x140393974 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x1403939C8 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
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
