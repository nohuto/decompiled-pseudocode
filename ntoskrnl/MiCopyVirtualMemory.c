/*
 * XREFs of MiCopyVirtualMemory @ 0x1407C5950
 * Callers:
 *     NtQueryInformationThread @ 0x1406A7BF0 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x1407215F0 (NtQueryInformationProcess.c)
 *     MiReadWriteVirtualMemory @ 0x14075AD90 (MiReadWriteVirtualMemory.c)
 *     MmCopyVirtualMemory @ 0x1407C5910 (MmCopyVirtualMemory.c)
 *     LpcpCopyRequestData @ 0x14097523C (LpcpCopyRequestData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiGetExceptionInfo @ 0x140624468 (MiGetExceptionInfo.c)
 *     MiVadRangeIsIoSpace @ 0x14062F2D4 (MiVadRangeIsIoSpace.c)
 *     VslDebugReadWriteSecureProcess @ 0x14093EF40 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x140A3AF6C (MiDbgReadWriteEnclave.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCopyVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        char *a2,
        ULONG_PTR a3,
        void *a4,
        size_t a5,
        KPROCESSOR_MODE a6,
        size_t *a7,
        char a8)
{
  unsigned __int64 v10; // rsi
  ULONG_PTR v11; // r13
  size_t v12; // r14
  int v13; // ebx
  size_t v14; // rax
  unsigned __int64 v15; // r12
  int v16; // edi
  _DWORD *v17; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  ULONG_PTR v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // r14d
  SIZE_T v23; // rdi
  $B2204E9EE8E7DD8EE814BFFAF87CA578 *v24; // rdi
  unsigned __int8 v25; // si
  int v26; // r14d
  int v27; // eax
  PVOID v28; // r14
  unsigned __int64 v29; // rcx
  _DWORD *v30; // rdi
  _BYTE *v31; // r13
  __int64 v32; // rax
  char *v33; // rax
  unsigned __int64 v34; // rax
  int v35; // esi
  int v36; // esi
  size_t v37; // r15
  int v38; // eax
  unsigned __int64 v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  __int64 IsIoSpace; // rax
  int v44; // eax
  int v45; // [rsp+30h] [rbp-3F8h] BYREF
  unsigned __int8 v46; // [rsp+34h] [rbp-3F4h]
  size_t v47; // [rsp+38h] [rbp-3F0h]
  int v48; // [rsp+40h] [rbp-3E8h]
  int v49; // [rsp+44h] [rbp-3E4h]
  ULONG_PTR v50; // [rsp+48h] [rbp-3E0h]
  size_t Size; // [rsp+50h] [rbp-3D8h]
  PVOID P; // [rsp+58h] [rbp-3D0h]
  void *Src; // [rsp+60h] [rbp-3C8h]
  unsigned __int64 v54; // [rsp+68h] [rbp-3C0h] BYREF
  int v55; // [rsp+70h] [rbp-3B8h]
  __int64 v56; // [rsp+78h] [rbp-3B0h]
  PVOID v57; // [rsp+80h] [rbp-3A8h]
  PMDL p_MemoryDescriptorList; // [rsp+88h] [rbp-3A0h]
  SIZE_T v59; // [rsp+90h] [rbp-398h]
  char *v60; // [rsp+98h] [rbp-390h]
  ULONG_PTR BugCheckParameter1a; // [rsp+A0h] [rbp-388h]
  size_t v62; // [rsp+A8h] [rbp-380h]
  void *v63; // [rsp+B0h] [rbp-378h]
  size_t *v64; // [rsp+B8h] [rbp-370h]
  unsigned __int64 v65; // [rsp+C0h] [rbp-368h]
  __int64 v66; // [rsp+C8h] [rbp-360h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-358h]
  char *v68; // [rsp+D8h] [rbp-350h]
  ULONG_PTR v69; // [rsp+E0h] [rbp-348h]
  void *v70; // [rsp+E8h] [rbp-340h]
  ULONG_PTR v71; // [rsp+F0h] [rbp-338h]
  $B2204E9EE8E7DD8EE814BFFAF87CA578 *v72; // [rsp+F8h] [rbp-330h]
  $115DCDF994C6370D29323EAB0E0C9502 v73; // [rsp+100h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+130h] [rbp-2F8h] BYREF
  _BYTE v75[512]; // [rsp+1E0h] [rbp-248h] BYREF

  v65 = (unsigned __int64)a4;
  BugCheckParameter1a = a3;
  v10 = (unsigned __int64)a2;
  v60 = a2;
  v11 = BugCheckParameter1;
  v50 = BugCheckParameter1;
  v71 = BugCheckParameter1;
  v68 = a2;
  v69 = a3;
  v70 = a4;
  v64 = a7;
  memset(&v73, 0, sizeof(v73));
  memset(&MemoryDescriptorList, 0, 0xA8uLL);
  v54 = 0LL;
  v12 = a5;
  if ( a5 )
  {
    *v64 = 0LL;
    v13 = 16 * (a8 & 1) + 1;
    if ( (*(_BYTE *)(v11 + 992) & 1) != 0 )
      v13 |= 4u;
    if ( (*(_BYTE *)(a3 + 992) & 1) != 0 )
      v13 |= 8u;
    v59 = 0LL;
    v63 = a4;
    v62 = a5;
    Size = a5;
    p_MemoryDescriptorList = &MemoryDescriptorList;
    CurrentThread = KeGetCurrentThread();
    P = 0LL;
    v66 = 0LL;
    v55 = 0;
    v14 = a5;
LABEL_7:
    v47 = v14;
    Src = (void *)v10;
    while ( 1 )
    {
      if ( !v14 )
      {
        if ( v59 )
          ExFreePoolWithTag(P, 0);
        *v64 = v12;
        return 0LL;
      }
      v15 = v14;
      v56 = v14;
      v16 = 0;
      v49 = 0;
      v45 = 0;
      KiStackAttachProcess((_KPROCESS *)v11, 0, (__int64)&v73);
      if ( a6 && (char *)v10 == v60 && ((unsigned __int64)&v60[v12] > 0x7FFFFFFF0000LL || &v60[v12] < v60) )
        MEMORY[0x7FFFFFFF0000] = 0;
      v17 = 0LL;
      v57 = 0LL;
      if ( v10 >= 0xFFFF800000000000uLL )
        break;
      v40 = v10 & 0xFFFFFFFFFFFFF000uLL;
      if ( (v10 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 && (v40 != qword_140C656B8 || !qword_140C656B8)
        || (v20 = v50, (*(_DWORD *)(v50 + 2172) & 1) != 0) )
      {
        v41 = MiObtainReferencedVadEx(v10, 2, &v45);
        v17 = (_DWORD *)v41;
        v57 = (PVOID)v41;
        if ( !v41 )
        {
          v36 = -2147483635;
          goto LABEL_115;
        }
        v19 = (((*(unsigned int *)(v41 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v41 + 33) << 32)) << 12) | 0xFFF)
            + 1;
        v16 = v45;
        v49 = v45;
        v18 = v47;
        goto LABEL_12;
      }
      v13 |= 0x20u;
      v19 = v40 + 4096;
      v18 = v47;
LABEL_13:
      v21 = v19 - v10;
      if ( v18 > v21 )
      {
        v15 = v21;
        v56 = v21;
      }
      v22 = 0;
      if ( v17 && (v17[12] & 0x6200000) == 0x4200000 )
      {
        v42 = v17[16];
        if ( (v42 & 4) != 0 )
          v22 = 2 - ((v42 & 1) != 0);
      }
      else if ( (v13 & 0x10) != 0 && v17 && (v17[12] & 0x70) == 0x10 )
      {
        IsIoSpace = MiVadRangeIsIoSpace(v21, v10, v15);
        v15 = IsIoSpace;
        if ( !IsIoSpace )
          v16 = -1073741819;
        v49 = v16;
        v45 = v16;
        v56 = IsIoSpace;
        v20 = v50;
      }
      v13 &= ~2u;
      v48 = v13;
      if ( !v15 )
      {
        v26 = v49;
        goto LABEL_40;
      }
      if ( (v13 & 4) == 0 && !v22 && !*(_QWORD *)(v20 + 1264) && (v13 & 1) != 0 )
      {
        v13 |= 2u;
        v48 = v13;
      }
      if ( v15 >= 0x200 && (v13 & 2) != 0 )
      {
        if ( v15 > 0xE000 )
        {
          v15 = 57344LL;
          v56 = 57344LL;
        }
        MemoryDescriptorList.Next = 0LL;
        MemoryDescriptorList.Size = 8 * (((v15 + (v10 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList.MdlFlags = 0;
        MemoryDescriptorList.StartVa = (PVOID)(v10 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList.ByteOffset = v10 & 0xFFF;
        MemoryDescriptorList.ByteCount = v15;
      }
      else
      {
        v13 &= ~2u;
        v48 = v13;
        if ( v59 )
        {
          v23 = v59;
        }
        else if ( v15 > 0x200 )
        {
          v23 = v62;
          if ( v62 > 0x10000 )
            v23 = 0x10000LL;
          do
          {
            P = MiAllocatePool(256, v23, 0x77526D4Du);
            if ( P )
            {
              v59 = v23;
              goto LABEL_27;
            }
            v23 >>= 1;
          }
          while ( v23 > 0x200 );
          P = v75;
          v23 = 512LL;
        }
        else
        {
          P = v75;
          v23 = v15;
        }
LABEL_27:
        if ( v15 > v23 )
        {
          v15 = v23;
          v56 = v23;
        }
      }
      v24 = &CurrentThread->116;
      v72 = &CurrentThread->116;
      v25 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
      v46 = v25;
      if ( (v13 & 2) != 0 )
      {
        MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
        v26 = v49;
      }
      else
      {
        if ( (v13 & 4) != 0 || v22 == 2 )
        {
          v27 = VslDebugReadWriteSecureProcess(v50, (_DWORD)Src, (_DWORD)P, v15, 1, (__int64)&v54);
        }
        else
        {
          if ( v22 != 1 )
          {
            memmove(P, Src, v15);
            v26 = v49;
            goto LABEL_38;
          }
          v27 = MiDbgReadWriteEnclave((_DWORD)Src, (_DWORD)P, v15, 1, (__int64)&v54);
        }
        v45 = v27;
        v26 = v27;
      }
LABEL_38:
      if ( !v25 )
        v24->MiscFlags &= ~0x20u;
LABEL_40:
      if ( v17 )
        MiUnlockAndDereferenceVadShared(v17);
      if ( v26 < 0 )
      {
        if ( (v13 & 2) == 0 )
          goto LABEL_123;
        v13 &= ~1u;
        KiUnstackDetachProcess(&v73);
      }
      else
      {
        KiUnstackDetachProcess(&v73);
        if ( (v13 & 2) == 0 )
        {
          v28 = P;
LABEL_45:
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v73);
          if ( a6 )
          {
            if ( Src == v60 )
            {
              v29 = v65;
              if ( v65 + a5 > 0x7FFFFFFF0000LL || v65 + a5 < v65 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
          }
          v30 = 0LL;
          v57 = 0LL;
          v31 = v63;
          if ( (unsigned __int64)v63 >= 0xFFFF800000000000uLL )
          {
            v33 = (char *)v63 + v15;
            goto LABEL_51;
          }
          v29 = (unsigned __int64)v63 & 0xFFFFFFFFFFFFF000uLL;
          if ( ((unsigned __int64)v63 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000
            && (v29 != qword_140C656B8 || !qword_140C656B8)
            || (*(_DWORD *)(v50 + 2172) & 1) != 0 )
          {
            v32 = MiObtainReferencedVadEx((unsigned __int64)v63, 2, &v45);
            v30 = (_DWORD *)v32;
            v57 = (PVOID)v32;
            if ( v32 )
            {
              v29 = *(unsigned int *)(v32 + 28);
              v33 = (char *)((((v29 | ((unsigned __int64)*(unsigned __int8 *)(v32 + 33) << 32)) << 12) | 0xFFF) + 1);
              goto LABEL_51;
            }
            if ( (v13 & 2) != 0 )
              MmUnlockPages(p_MemoryDescriptorList);
LABEL_123:
            v36 = -2147483635;
            v12 = a5;
LABEL_115:
            v37 = v47;
            goto LABEL_116;
          }
          v13 |= 0x20u;
          v48 = v13;
          v33 = (char *)(v29 + 4096);
LABEL_51:
          v34 = v33 - v31;
          if ( v15 > v34 )
            v15 = v34;
          v35 = 0;
          if ( v30 && (v30[12] & 0x6200000) == 0x4200000 )
          {
            v44 = v30[16];
            if ( (v44 & 4) != 0 )
              v35 = 2 - ((v44 & 1) != 0);
          }
          else if ( (v13 & 0x10) != 0 && v30 && (v30[12] & 0x70) == 0x10 )
          {
            v15 = MiVadRangeIsIoSpace(v29, (unsigned __int64)v31, v15);
          }
          if ( !v15 )
          {
            v54 = 0LL;
            v36 = -2147483635;
            v45 = -2147483635;
            goto LABEL_68;
          }
          if ( (v13 & 8) != 0 || v35 == 2 )
          {
            v38 = VslDebugReadWriteSecureProcess(BugCheckParameter1a, (_DWORD)v31, (_DWORD)v28, v15, 0, (__int64)&v54);
          }
          else
          {
            if ( v35 != 1 )
            {
              memmove(v31, v28, v15);
              v36 = 0;
              v45 = 0;
              v54 = v15;
              goto LABEL_61;
            }
            v38 = MiDbgReadWriteEnclave((_DWORD)v31, (_DWORD)v28, v15, 0, (__int64)&v54);
          }
          v45 = v38;
          v36 = v38;
LABEL_61:
          if ( v36 < 0 )
          {
            if ( v36 == -1073741819 )
            {
              v37 = v47 - v54;
              Size = v47 - v54;
              v36 = -2147483635;
              v45 = -2147483635;
              goto LABEL_69;
            }
LABEL_68:
            v37 = v47;
LABEL_69:
            if ( (v13 & 2) != 0 )
              MmUnlockPages(p_MemoryDescriptorList);
            if ( v30 )
              MiUnlockAndDereferenceVadShared(v30);
            v12 = a5;
LABEL_116:
            KiUnstackDetachProcess(&v73);
            if ( v59 )
              ExFreePoolWithTag(P, 0);
            *v64 = v12 - v37;
            return (unsigned int)v36;
          }
          if ( (v13 & 2) != 0 )
            MmUnlockPages(&MemoryDescriptorList);
          if ( v30 )
            MiUnlockAndDereferenceVadShared(v30);
          KiUnstackDetachProcess(&v73);
          v14 = v47 - v15;
          Size = v47 - v15;
          v62 -= v15;
          v10 = (unsigned __int64)Src + v15;
          v63 = &v31[v15];
          v12 = a5;
          v11 = v50;
          goto LABEL_7;
        }
        v28 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
        if ( v28 )
          goto LABEL_45;
        MmUnlockPages(&MemoryDescriptorList);
        v13 &= ~1u;
      }
      v10 = (unsigned __int64)Src;
      v12 = a5;
      v11 = v50;
      v14 = v47;
    }
    v18 = v47;
    v19 = v47 + v10;
LABEL_12:
    v20 = v50;
    goto LABEL_13;
  }
  return 0LL;
}
