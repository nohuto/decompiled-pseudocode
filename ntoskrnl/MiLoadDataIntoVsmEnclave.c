/*
 * XREFs of MiLoadDataIntoVsmEnclave @ 0x140A3B45C
 * Callers:
 *     NtLoadEnclaveData @ 0x140A3C600 (NtLoadEnclaveData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MmSizeOfMdl @ 0x1402CFFB0 (MmSizeOfMdl.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiMakeProtectionMask @ 0x140320CC0 (MiMakeProtectionMask.c)
 *     MiCommitExistingVad @ 0x140320D70 (MiCommitExistingVad.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PsLoadVsmEnclaveData @ 0x1405A4630 (PsLoadVsmEnclaveData.c)
 *     MiCountCommittedPages @ 0x140644EA8 (MiCountCommittedPages.c)
 *     MiDecommitRegion @ 0x1406EBCC0 (MiDecommitRegion.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
        SIZE_T a9,
        int a10,
        _QWORD *a11)
{
  __int64 v12; // rdi
  __int64 result; // rax
  unsigned int ProtectionMask; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int VsmEnclaveData; // esi
  SIZE_T v18; // rax
  _WORD *Pool; // rax
  int v20; // ecx
  int *v21; // r14
  __int16 v23; // [rsp+64h] [rbp-C4h] BYREF
  int v24; // [rsp+68h] [rbp-C0h] BYREF
  SIZE_T Length; // [rsp+70h] [rbp-B8h]
  int *v26; // [rsp+78h] [rbp-B0h]
  _QWORD *v27; // [rsp+80h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+88h] [rbp-A0h]
  _WORD *v29; // [rsp+90h] [rbp-98h]
  ULONG_PTR v30; // [rsp+98h] [rbp-90h]
  __int64 v31; // [rsp+A0h] [rbp-88h]
  int *v32; // [rsp+A8h] [rbp-80h]
  __int64 v33; // [rsp+B0h] [rbp-78h]
  $115DCDF994C6370D29323EAB0E0C9502 v34; // [rsp+B8h] [rbp-70h] BYREF

  BugCheckParameter1 = a2;
  v30 = a3;
  v31 = a5;
  v26 = a7;
  v32 = a7;
  Length = a9;
  v27 = a11;
  v23 = 0;
  v24 = 0;
  memset(&v34, 0, sizeof(v34));
  v12 = 0LL;
  *a11 = 0LL;
  if ( a9 != 4096 )
    return 3221225714LL;
  if ( a6 != 4 )
    return 3221225476LL;
  if ( *a7 != 1 && *a7 != 2 )
  {
    if ( *a7 == 3 )
      goto LABEL_11;
    if ( *a7 != 4 )
    {
      if ( *a7 != 5 )
        return 3221225485LL;
LABEL_11:
      if ( Base )
        return 3221225713LL;
      goto LABEL_15;
    }
  }
  if ( !Base )
    return 3221225477LL;
LABEL_15:
  ProtectionMask = MiMakeProtectionMask(a10 & 0x5FFFFFFF);
  if ( (ProtectionMask & 7) == 0 || ProtectionMask > 7 || (ProtectionMask & 5) == 5 )
    return 3221225541LL;
  if ( (ProtectionMask & 2) != 0
    && ((__int64)KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink & 0x100) != 0
    && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x40000) == 0 )
  {
    return 3221227012LL;
  }
  v33 = a5 + 4095;
  if ( MiCountCommittedPages(a5, a5 + 4095, v15, v16 + 1664) )
    return 3221225505LL;
  result = MiCommitExistingVad(a3, a5, 4096LL, a10, 0, 0LL, 0, 0, 0LL, &v24, &v23);
  VsmEnclaveData = result;
  if ( (int)result >= 0 )
  {
    if ( Base )
    {
      v18 = MmSizeOfMdl((PVOID)Base, Length);
      Pool = MiAllocatePool(64, v18, 0x6C646D4Du);
      v12 = (__int64)Pool;
      v29 = Pool;
      if ( !Pool )
      {
        VsmEnclaveData = -1073741670;
        goto LABEL_37;
      }
      *(_QWORD *)Pool = 0LL;
      v20 = Length;
      Pool[4] = 8 * ((((Base & 0xFFF) + Length + 4095) >> 12) + 6);
      Pool[5] = 0;
      *((_QWORD *)Pool + 4) = Base & 0xFFFFFFFFFFFFF000uLL;
      *((_DWORD *)Pool + 11) = Base & 0xFFF;
      *((_DWORD *)Pool + 10) = v20;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v34);
      if ( a4 == 1 && (Base + Length > 0x7FFFFFFF0000LL || Base + Length < Base) )
        MEMORY[0x7FFFFFFF0000] = 0;
      MmProbeAndLockPages((PMDL)v12, a4, IoReadAccess);
      v21 = v26;
      KiUnstackDetachProcess(&v34);
      if ( VsmEnclaveData < 0 )
        goto LABEL_37;
    }
    else
    {
      v21 = v26;
    }
    VsmEnclaveData = PsLoadVsmEnclaveData(*(_QWORD *)(a3 + 72), a5, *v21, a10, v12);
    if ( VsmEnclaveData >= 0 )
    {
      *v27 = 4096LL;
LABEL_38:
      if ( v12 )
      {
        if ( (*(_BYTE *)(v12 + 10) & 2) != 0 )
          MmUnlockPages((PMDL)v12);
        ExFreePoolWithTag((PVOID)v12, 0);
      }
      return (unsigned int)VsmEnclaveData;
    }
LABEL_37:
    MiDecommitRegion(a3, a5, a5 + 4095);
    goto LABEL_38;
  }
  return result;
}
