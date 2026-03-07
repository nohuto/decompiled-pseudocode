void __fastcall KiInitializeMTRR(char a1)
{
  char v1; // r12
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r15
  unsigned int v4; // ebp
  __int64 v5; // rsi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int64 v10; // rbx
  __int64 v11; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v13; // rax

  v1 = 1;
  if ( !KeGetPcr()->Prcb.Number )
  {
    qword_140C41588 = __readmsr(0xFEu);
    KiMtrrInfo = __readmsr(0x2FFu);
    CurrentPrcb = KeGetCurrentPrcb();
    byte_140C41591 = 0;
    if ( CurrentPrcb->CpuVendor == 1 )
    {
      v13 = __readmsr(0xC0010010);
      byte_140C41591 = (v13 & 0x1040000) == 0x40000;
    }
    if ( (((_BYTE)qword_140C41588 != 0) & _bittest64(&KiMtrrInfo, 0xBu)) != 0 )
    {
      if ( (KeFeatureBits & 0x40) == 0 && (qword_140C41588 & 0x400) != 0 )
        qword_140C41588 &= ~0x400uLL;
      if ( !qword_140C41598 )
        qword_140C41598 = (PVOID)ExAllocatePool2(64LL, 16 * (unsigned int)(unsigned __int8)qword_140C41588, 0x2020654Bu);
      if ( !qword_140C415A0 && _bittest64(&qword_140C41588, 8u) )
        qword_140C415A0 = (PVOID)ExAllocatePool2(64LL, 0x58uLL, 0x2020654Bu);
    }
    else
    {
      if ( (KeFeatureBits & 0x40) != 0
        && (qword_140C41588 & 0x1FF) != 0
        && (KiMtrrInfo & 0x800) == 0
        && (CurrentPrcb->CpuVendor != 1 || (_BYTE)KiMtrrInfo != 6)
        && (_BYTE)KdDebuggerEnabled )
      {
        DbgPrintEx(0x65u, 0, "Caching is disabled by incorrect MTRR settings.\n");
        __debugbreak();
      }
      v1 = 0;
    }
  }
  if ( !qword_140C41598 || !qword_140C415A0 && _bittest64(&qword_140C41588, 8u) )
    goto LABEL_44;
  v2 = __readmsr(0xFEu);
  if ( (KeFeatureBits & 0x40) == 0 && (v2 & 0x400) != 0 )
    v2 &= ~0x400uLL;
  if ( v2 != qword_140C41588 )
    KeBugCheckEx(0x3Eu, 0x40uLL, 0LL, 0LL, 0LL);
  if ( __readmsr(0x2FFu) != KiMtrrInfo )
    DbgPrintEx(0x65u, 0, "KiInitializeMTRR: MTRR_MSR_DEFAULT is not consistent between processors.\n");
  if ( !v1 )
    goto LABEL_44;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_18;
  if ( qword_140C415A0 )
    KiReadFixedMtrr(qword_140C415A0);
  v3 = (unsigned __int8)v2;
  v4 = 0;
  if ( !(_BYTE)v2 )
    goto LABEL_18;
  v5 = 0LL;
  v6 = 513;
  do
  {
    v7 = __readmsr(v6 - 1);
    v8 = __readmsr(v6);
    v10 = v8;
    if ( (v8 & 0x800) != 0 )
    {
      v9 = v8 & KiMtrrMaskMask;
      if ( ((KiMaskToLength(v8 & KiMtrrMaskMask) + v9) & ~(1LL << KiMtrrMaxRangeShift)) != 0 )
      {
        DbgPrintEx(0x65u, 0, "KiInitializeMTRR: Found non-contiguous MTRR mask!\n");
        v1 = 0;
      }
      v11 = 2 * v5;
      *((_QWORD *)qword_140C41598 + v11) = v7;
      *((_QWORD *)qword_140C41598 + v11 + 1) = v10;
    }
    ++v4;
    v6 += 2;
    v5 = v4;
  }
  while ( v4 < v3 );
  if ( v1 )
  {
LABEL_18:
    if ( a1 )
    {
      byte_140C41590 = 1;
      if ( KeGetCurrentIrql() < 2u )
      {
        MmLockPagableSectionByHandle(ExPageLockHandle);
        KeRestoreMtrrBroadcast();
        MiLockPagableImageSection((ULONG_PTR)ExPageLockHandle, 0LL);
      }
    }
  }
  else
  {
LABEL_44:
    if ( qword_140C41598 )
    {
      ExFreePoolWithTag(qword_140C41598, 0);
      qword_140C41598 = 0LL;
    }
    if ( qword_140C415A0 )
    {
      ExFreePoolWithTag(qword_140C415A0, 0);
      qword_140C415A0 = 0LL;
    }
  }
}
