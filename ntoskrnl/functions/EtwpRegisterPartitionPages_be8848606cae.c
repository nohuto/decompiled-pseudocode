char __fastcall EtwpRegisterPartitionPages(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // bp
  _QWORD *Pool2; // rax
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r15
  __int64 v10; // rbx
  char *v11; // r8
  char v12; // cl
  unsigned __int64 v13; // rcx
  char v14; // dl
  unsigned int v15; // edi
  __int64 v16; // r9
  __int64 v17; // r12
  _QWORD *v18; // r10
  __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v25; // eax
  _DWORD *SchedulerAssist; // r8
  bool v27; // zf
  __int64 v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  v6 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1333228613LL);
  v8 = Pool2;
  if ( !Pool2 )
    return (char)Pool2;
  Pool2[1] = a3;
  Pool2[2] = a2;
  Pool2[3] = a1;
  v9 = ExAcquireSpinLockExclusive(&dword_140C317F0);
  if ( EtwpMdlTable >= 2 * ((unsigned int)dword_140C317E4 >> 5) )
  {
    v10 = 2 * ((unsigned int)dword_140C317E4 >> 5);
    if ( (unsigned int)v10 < 4 )
      v10 = 4LL;
    v11 = (char *)EtwpMdlHashTableAllocator(8LL * (unsigned int)v10);
    if ( v11 )
    {
      if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
      {
        v12 = -1;
        do
        {
          ++v12;
          LODWORD(v10) = (unsigned int)v10 >> 1;
        }
        while ( (_DWORD)v10 );
        v10 = (unsigned int)(1 << v12);
      }
      if ( (unsigned int)v10 > 0x4000000 )
        v10 = 0x4000000LL;
      v13 = (unsigned int)v10;
      if ( v11 > &v11[8 * v10] )
        v13 = 0LL;
      if ( v13 )
        memset64(v11, (unsigned __int64)&EtwpMdlTable + 1, v13);
      v14 = dword_140C317E4;
      v15 = 0;
      v16 = -1LL << (dword_140C317E4 & 0x1F);
      if ( (dword_140C317E4 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v17 = qword_140C317E8;
          while ( 1 )
          {
            v18 = *(_QWORD **)(v17 + 8LL * v15);
            if ( ((unsigned __int8)v18 & 1) != 0 )
              break;
            *(_QWORD *)(v17 + 8LL * v15) = *v18;
            v30 = v16 & v18[1];
            v19 = (37
                 * (BYTE6(v30)
                  + 37
                  * (BYTE5(v30)
                   + 37
                   * (BYTE4(v30)
                    + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
                 + HIBYTE(v30)) & (unsigned int)(v10 - 1);
            *v18 = *(_QWORD *)&v11[8 * v19];
            *(_QWORD *)&v11[8 * v19] = v18;
          }
          v14 = dword_140C317E4;
          ++v15;
        }
        while ( v15 < (unsigned int)dword_140C317E4 >> 5 );
      }
      v20 = (void *)qword_140C317E8;
      qword_140C317E8 = (__int64)v11;
      dword_140C317E4 = (32 * v10) | v14 & 0x1F;
      if ( v20 )
        EtwpMdlHashTableDeallocator(v20);
    }
    else if ( (dword_140C317E4 & 0xFFFFFFE0) == 0 )
    {
      goto LABEL_25;
    }
  }
  v6 = 1;
  v29 = v8[1] & (-1LL << (dword_140C317E4 & 0x1F));
  v21 = qword_140C317E8;
  v22 = (37
       * (BYTE6(v29)
        + 37
        * (BYTE5(v29)
         + 37
         * (BYTE4(v29)
          + 37 * (BYTE3(v29) + 37 * (BYTE2(v29) + 37 * (BYTE1(v29) + 37 * ((unsigned __int8)v29 + 11623883)))))))
       + HIBYTE(v29)) & (((unsigned int)dword_140C317E4 >> 5) - 1);
  *v8 = *(_QWORD *)(qword_140C317E8 + 8 * v22);
  *(_QWORD *)(v21 + 8 * v22) = v8;
  ++EtwpMdlTable;
LABEL_25:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C317F0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v27 = (v25 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v25;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  if ( !v6 )
    ExFreePoolWithTag(v8, 0x4F777445u);
  LOBYTE(Pool2) = v6;
  return (char)Pool2;
}
