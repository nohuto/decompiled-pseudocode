/*
 * XREFs of MmCopyMemory @ 0x14030C030
 * Callers:
 *     <none>
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x140239160 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x140245170 (MiReleasePtes.c)
 *     MiUnlockSystemVa @ 0x14029277C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14029281C (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     MiCopySinglePage @ 0x14030C314 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x14030C534 (MiTranslatePageForCopy.c)
 *     MiGetEffectivePagePriorityThread @ 0x140339E94 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x14033DEB0 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1403FA200 (ZwReadVirtualMemory.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiCheckPhysicalAddressRange @ 0x14054551C (MiCheckPhysicalAddressRange.c)
 */

NTSTATUS __fastcall MmCopyMemory(
        char *Buffer,
        unsigned __int64 BaseAddress,
        SIZE_T BufferSize,
        int a4,
        PSIZE_T NumberOfBytesRead)
{
  PSIZE_T v5; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  SIZE_T v13; // r15
  int v14; // edi
  SIZE_T v15; // r12
  _QWORD *v16; // rdx
  int v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r13
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rsi
  char EffectivePagePriorityThread; // al
  unsigned int v26; // edi
  __int64 v27; // rax
  unsigned __int64 SessionVm; // r13
  SIZE_T v29; // rdx
  char *v30; // rcx
  int v31; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  char *v33; // [rsp+48h] [rbp-B8h]
  _QWORD *v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  _QWORD *v41; // [rsp+88h] [rbp-78h]
  __int128 v42; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v43[16]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = NumberOfBytesRead;
  v33 = Buffer;
  v35 = a4;
  memset(v43, 0, sizeof(v43));
  v36 = 0LL;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v31 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)MiCheckPhysicalAddressRange(BaseAddress, BufferSize) )
      goto LABEL_9;
    return -1073741800;
  }
  if ( BaseAddress + BufferSize <= BaseAddress )
    return -1073741800;
  if ( BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    if ( BaseAddress + BufferSize <= 0x7FFFFFFEFFFFLL )
      return ZwReadVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID)BaseAddress,
               Buffer,
               BufferSize,
               NumberOfBytesRead);
    return -1073741800;
  }
  if ( BaseAddress < 0xFFFF800000000000uLL )
    return -1073741800;
LABEL_9:
  v12 = BaseAddress & 0xFFF;
  v13 = (v12 + BufferSize + 4095) >> 12;
  if ( v13 >= 0x100000000LL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v14 = 0;
  v41 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF40, v13, v10, v11);
  v34 = v41;
  v15 = BufferSize;
  v16 = v41;
  if ( 4096 - v12 <= BufferSize )
    v15 = 4096 - v12;
  v17 = v31;
  if ( v31 )
    v18 = BaseAddress >> 12;
  else
    v18 = -1LL;
  v32 = v18;
  if ( !BufferSize )
    goto LABEL_30;
  while ( 1 )
  {
    v38 = 0LL;
    v37 = 0LL;
    if ( v17 )
    {
      v21 = 0LL;
      goto LABEL_19;
    }
    v19 = MiTranslatePageForCopy(BaseAddress, v43, &v32, &v38, &v37);
    v14 = v19;
    if ( v19 >= 0 )
    {
      v21 = v43[3];
      if ( v19 == 273 )
      {
        MiUnlockSystemVa((__int64)v43);
        v14 = 0;
        v29 = v15;
        if ( v15 )
        {
          v30 = &v33[-v12];
          do
          {
            v30[v12] = *((_BYTE *)&v37 + (v12 & 7));
            ++v12;
            --v29;
          }
          while ( v29 );
        }
LABEL_24:
        v36 += v15;
        BufferSize -= v15;
        v33 += v15;
        BaseAddress += v15;
        ++v32;
        v16 = v34;
        v15 = BufferSize;
        if ( BufferSize > 0x1000 )
          v15 = 4096LL;
        v12 = 0LL;
        if ( v34 )
          v16 = ++v34;
        goto LABEL_28;
      }
      v16 = v34;
LABEL_19:
      v22 = v12;
      v23 = v32;
      v14 = MiCopySinglePage(v33, v32, v22, v15, v16, v35);
      if ( v21 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v23 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v38 )
          MiUnlockProtoPoolPage(v38, 2u);
        MiUnlockSystemVa((__int64)v43);
      }
      if ( v14 < 0 )
        goto LABEL_29;
      goto LABEL_24;
    }
    if ( v19 != -1073741608 )
      goto LABEL_29;
    v42 = 0LL;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread, v20);
    *(_QWORD *)&v42 = BaseAddress;
    v26 = EffectivePagePriorityThread & 7 | 0x80B8;
    v27 = BufferSize;
    SessionVm = 1LL;
    if ( BufferSize > 0x200000 - (BaseAddress & 0x1FFFFF) )
      v27 = 0x200000 - (BaseAddress & 0x1FFFFF);
    *((_QWORD *)&v42 + 1) = v27;
    if ( (unsigned int)MiGetSystemRegionType(BaseAddress) == 1 )
      break;
LABEL_49:
    if ( BaseAddress >= qword_140C4FB38 && BaseAddress <= qword_140C4E368 )
    {
      v14 = -1073741585;
      goto LABEL_29;
    }
    v14 = MiPrefetchVirtualMemory(1LL, &v42, SessionVm, v26);
    if ( v14 < 0 )
      goto LABEL_29;
    v16 = v34;
LABEL_28:
    if ( !BufferSize )
      goto LABEL_29;
    v17 = v31;
  }
  if ( Process[1].AffinityPadding[5] && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    SessionVm = MiGetSessionVm();
    goto LABEL_49;
  }
  v14 = -1073741819;
LABEL_29:
  v5 = NumberOfBytesRead;
LABEL_30:
  if ( v41 )
    MiReleasePtes((__int64)&qword_140C4EF40, v41, v13);
  *v5 += v36;
  return v14;
}
