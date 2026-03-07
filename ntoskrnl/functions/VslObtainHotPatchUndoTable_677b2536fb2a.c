__int64 __fastcall VslObtainHotPatchUndoTable(PVOID Base, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  unsigned int v6; // r15d
  struct _MDL *Pool2; // rax
  struct _MDL *v8; // rbx
  CSHORT *p_MdlFlags; // rsi
  int v11; // edi
  __int64 *v12[10]; // [rsp+40h] [rbp-F8h] BYREF
  _QWORD v13[14]; // [rsp+90h] [rbp-A8h] BYREF

  v3 = a3;
  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  v6 = MmSizeOfMdl(Base, (unsigned int)v3);
  Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v6, 1416850774LL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->Next = 0LL;
  Pool2->Size = 8 * ((((unsigned __int64)(a2 & 0xFFF) + v3 + 4095) >> 12) + 6);
  p_MdlFlags = &Pool2->MdlFlags;
  Pool2->MdlFlags = 0;
  Pool2->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  Pool2->ByteOffset = a2 & 0xFFF;
  Pool2->ByteCount = v3;
  MmProbeAndLockPages(Pool2, 0, IoWriteAccess);
  v11 = VslpLockPagesForTransfer((__int64)v12, v8, v6, 1, 0);
  if ( v11 >= 0 )
  {
    v13[1] = Base;
    v13[2] = v12[0];
    v13[3] = v12[7];
    v11 = VslpEnterIumSecureMode(2u, 71, 0, (__int64)v13);
    VslpUnlockPagesForTransfer(v12);
  }
  if ( (*(_BYTE *)p_MdlFlags & 2) != 0 )
    MmUnlockPages(v8);
  ExFreePoolWithTag(v8, 0);
  return (unsigned int)v11;
}
