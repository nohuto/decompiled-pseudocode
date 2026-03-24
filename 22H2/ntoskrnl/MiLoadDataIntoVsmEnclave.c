/*
 * XREFs of MiLoadDataIntoVsmEnclave @ 0x1408D3214
 * Callers:
 *     NtLoadEnclaveData @ 0x1408D44A0 (NtLoadEnclaveData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1402096D0 (MmProbeAndLockPages.c)
 *     MiCommitExistingVad @ 0x140218D50 (MiCommitExistingVad.c)
 *     MiMakeProtectionMask @ 0x14021A9E0 (MiMakeProtectionMask.c)
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     MmSizeOfMdl @ 0x1402EB830 (MmSizeOfMdl.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     MiCountCommittedPages @ 0x1405498E8 (MiCountCommittedPages.c)
 *     PsLoadVsmEnclaveData @ 0x140584A7C (PsLoadVsmEnclaveData.c)
 *     MiDecommitRegion @ 0x14063BD10 (MiDecommitRegion.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiLoadDataIntoVsmEnclave(
        __int64 a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        KPROCESSOR_MODE a4,
        __int64 a5,
        int a6,
        int *a7,
        unsigned __int64 Base,
        __int64 a9,
        int a10,
        _QWORD *a11)
{
  __int64 v12; // rsi
  __int64 result; // rax
  unsigned int v14; // eax
  unsigned int ProtectionMask; // eax
  __int64 v16; // r9
  int VsmEnclaveData; // edi
  SIZE_T v18; // rax
  _WORD *Pool; // rax
  _DWORD *v20; // r9
  int *v21; // r14
  __int16 v23; // [rsp+54h] [rbp-C4h] BYREF
  int v24; // [rsp+58h] [rbp-C0h] BYREF
  int *v25; // [rsp+60h] [rbp-B8h]
  _QWORD *v26; // [rsp+68h] [rbp-B0h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-A8h]
  _WORD *v28; // [rsp+78h] [rbp-A0h]
  ULONG_PTR v29; // [rsp+80h] [rbp-98h]
  __int64 v30; // [rsp+88h] [rbp-90h]
  int *v31; // [rsp+90h] [rbp-88h]
  __int64 v32; // [rsp+98h] [rbp-80h]
  _BYTE v33[48]; // [rsp+A0h] [rbp-78h] BYREF

  BugCheckParameter1 = a2;
  v29 = a3;
  v30 = a5;
  v25 = a7;
  v31 = a7;
  v26 = a11;
  v23 = 0;
  v24 = 0;
  memset(v33, 0, sizeof(v33));
  v12 = 0LL;
  *a11 = 0LL;
  if ( a9 != 4096 )
    return 3221225714LL;
  if ( a6 != 4 )
    return 3221225476LL;
  v14 = *a7;
  if ( !*a7 )
    return 3221225485LL;
  if ( v14 > 2 )
  {
    if ( v14 == 3 )
      goto LABEL_10;
    if ( v14 != 4 )
    {
      if ( v14 == 5 )
      {
LABEL_10:
        if ( Base )
          return 3221225713LL;
        goto LABEL_14;
      }
      return 3221225485LL;
    }
  }
  if ( !Base )
    return 3221225477LL;
LABEL_14:
  ProtectionMask = MiMakeProtectionMask(a10 & 0x5FFFFFFF);
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0
    && ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 0x100) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    return 3221227012LL;
  }
  v32 = a5 + 4095;
  if ( MiCountCommittedPages(a5, a5 + 4095, a3, (_DWORD *)(v16 + 1664)) )
    return 3221225505LL;
  result = MiCommitExistingVad(a3, a5, 4096LL, a10, 0, 0LL, 0, 0LL, &v24, &v23);
  VsmEnclaveData = result;
  if ( (int)result >= 0 )
  {
    if ( Base )
    {
      v18 = MmSizeOfMdl((PVOID)Base, 0x1000uLL);
      Pool = MiAllocatePool(64, v18, 0x6C646D4Du);
      v12 = (__int64)Pool;
      v28 = Pool;
      if ( !Pool )
      {
        VsmEnclaveData = -1073741670;
        goto LABEL_36;
      }
      *(_QWORD *)Pool = 0LL;
      Pool[4] = 8 * (((unsigned __int16)((Base & 0xFFF) + 0x1FFF) >> 12) + 6);
      Pool[5] = 0;
      *((_QWORD *)Pool + 4) = Base & 0xFFFFFFFFFFFFF000uLL;
      *((_DWORD *)Pool + 11) = Base & 0xFFF;
      *((_DWORD *)Pool + 10) = 4096;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v33, v20);
      if ( a4 == 1 && (Base + 4096 > 0x7FFFFFFF0000LL || Base + 4096 < Base) )
        MEMORY[0x7FFFFFFF0000] = 0;
      MmProbeAndLockPages((PMDL)v12, a4, IoReadAccess);
      v21 = v25;
      KiUnstackDetachProcess((__int64)v33, 0);
      if ( VsmEnclaveData < 0 )
        goto LABEL_36;
    }
    else
    {
      v21 = v25;
    }
    VsmEnclaveData = PsLoadVsmEnclaveData(*(_QWORD *)(a3 + 72), a5, *v21, a10, v12);
    if ( VsmEnclaveData >= 0 )
    {
      *v26 = 4096LL;
LABEL_37:
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
          MmUnlockPages((PMDL)v12);
        ExFreePoolWithTag((PVOID)v12, 0);
      }
      return (unsigned int)VsmEnclaveData;
    }
LABEL_36:
    MiDecommitRegion(a3, a5, a5 + 4095);
    goto LABEL_37;
  }
  return result;
}
