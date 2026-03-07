__int64 __fastcall EtwpUnregisterPartitionPages(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r15
  void *v4; // rdi
  unsigned __int64 v6; // rbp
  unsigned int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // r9
  unsigned int v10; // r11d
  _QWORD **v11; // rdx
  _QWORD *v12; // r8
  _QWORD *i; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v16; // eax
  _DWORD *SchedulerAssist; // r8
  bool v18; // zf
  __int64 v20; // [rsp+30h] [rbp-38h]
  __int64 v21; // [rsp+78h] [rbp+10h]

  v3 = 0LL;
  v4 = 0LL;
  v6 = ExAcquireSpinLockExclusive(&dword_140C317F0);
  v7 = (unsigned int)dword_140C317E4 >> 5;
  v8 = -1LL << (dword_140C317E4 & 0x1F);
  v9 = a2 & v8;
  if ( (unsigned int)dword_140C317E4 >> 5 )
  {
    v10 = v7 - 1;
    v21 = a2 & v8;
    v11 = (_QWORD **)(qword_140C317E8
                    + 8LL
                    * ((v7 - 1) & (HIBYTE(v21)
                                 + 37
                                 * (BYTE6(v21)
                                  + 37
                                  * (BYTE5(v21)
                                   + 37
                                   * (BYTE4(v21)
                                    + 37
                                    * (BYTE3(v21)
                                     + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v9 + 11623883))))))))));
    while ( 1 )
    {
      v12 = *v11;
      v11 = (_QWORD **)v12;
      if ( ((unsigned __int8)v12 & 1) != 0 )
        break;
      if ( v9 == (v8 & v12[1]) )
      {
        if ( v12 )
        {
          v3 = v12[2];
          v4 = v12;
          if ( a1 )
            *a1 = v12[3];
          v20 = v8 & v12[1];
          for ( i = (_QWORD *)(qword_140C317E8
                             + 8LL
                             * (v10 & (HIBYTE(v20)
                                     + 37
                                     * (BYTE6(v20)
                                      + 37
                                      * (BYTE5(v20)
                                       + 37
                                       * (BYTE4(v20)
                                        + 37
                                        * (BYTE3(v20)
                                         + 37
                                         * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883))))))))));
                (*i & 1) == 0;
                i = (_QWORD *)*i )
          {
            if ( (_QWORD *)*i == v12 )
            {
              *i = *v12;
              --EtwpMdlTable;
              *v12 |= 0x8000000000000002uLL;
              goto LABEL_13;
            }
          }
        }
        break;
      }
    }
  }
LABEL_13:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C317F0);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = (v16 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v16;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4F777445u);
  return v3;
}
