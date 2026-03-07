__int64 __fastcall KiOpComputeLinearAddress(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 v3; // rdi
  __int64 v5; // rsi
  char v6; // bl
  KPCR *Pcr; // rdx
  __int16 v8; // r10
  struct _KTHREAD *v10; // rdx
  struct _KTHREAD *v11; // rdx

  CurrentThread = KeGetCurrentThread();
  v3 = a1;
  v5 = *a2;
  v6 = *(_BYTE *)(a1 + 81);
  _BitScanForward((unsigned int *)&a1, *(_DWORD *)(a1 + 48));
  Pcr = 0LL;
  v8 = *(_WORD *)(*(unsigned int *)&KiOpSegmentOffsetTable[4 * a1] + *(_QWORD *)(v3 + 24));
  if ( 1 << a1 == 32 )
  {
    if ( !v6 )
    {
      Pcr = KeGetPcr();
LABEL_4:
      *a2 = (__int64)Pcr + v5;
      return 0LL;
    }
    Pcr = (KPCR *)CurrentThread[1].WaitBlock[2].Object;
    if ( Pcr )
      goto LABEL_4;
    v10 = KeGetCurrentThread();
    if ( (v10->MiscFlags & 0x400) == 0 && v10->ApcStateIndex != 1 )
    {
      Pcr = (KPCR *)v10->Teb;
      goto LABEL_4;
    }
LABEL_9:
    Pcr = 0LL;
    goto LABEL_4;
  }
  if ( 1 << a1 == 16 )
  {
    Pcr = (KPCR *)CurrentThread[1].WaitBlock[2].Thread;
    if ( Pcr )
      goto LABEL_4;
    v11 = KeGetCurrentThread();
    if ( (v11->MiscFlags & 0x400) == 0 && v11->ApcStateIndex != 1 )
    {
      Pcr = (KPCR *)v11->Teb;
      if ( Pcr )
        Pcr = (KPCR *)((char *)Pcr + 0x2000);
      goto LABEL_4;
    }
    goto LABEL_9;
  }
  if ( v6 != 1 || !*(_BYTE *)(v3 + 58) || ((v8 - 35) & 0xFFE7) == 0 && v8 != 59 )
    goto LABEL_4;
  *a2 = 0x7FFFFFFF0000LL;
  return 3221225477LL;
}
