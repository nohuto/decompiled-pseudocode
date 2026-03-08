/*
 * XREFs of ?EnableIoMmuIsolation@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00E1D24
 * Callers:
 *     ?VidMmEnableIoMmuIsolation@@YAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C002CB20 (-VidMmEnableIoMmuIsolation@@YAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C0001754 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0011B70 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x1C0017980 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0087B88 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C0087E80 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?EvictAllTemporaryAllocationsInList@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00E28E0 (-EvictAllTemporaryAllocationsInList@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MapToIommu@VIDMM_SEGMENT@@QEAAJXZ @ 0x1C00FDE0C (-MapToIommu@VIDMM_SEGMENT@@QEAAJXZ.c)
 */

int __fastcall VIDMM_GLOBAL::EnableIoMmuIsolation(VIDMM_GLOBAL *this)
{
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rbx
  __int64 **i; // rsi
  struct _MDL *v7; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v9; // eax
  __int64 **j; // rsi
  struct _MDL *v11; // rbx
  unsigned __int64 v12; // rax
  int v13; // eax
  _BYTE v14[16]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v15[24]; // [rsp+30h] [rbp-68h] BYREF

  if ( (*((_BYTE *)this + 40936) & 8) != 0 )
    return 0;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this + 8LL) )
  {
    v3 = 0LL;
    if ( !*((_DWORD *)this + 926) )
    {
LABEL_7:
      VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, 0xFFFFFFFF);
      VIDMM_GLOBAL::EvictAllTemporaryAllocationsInList(this, (struct _LIST_ENTRY *)((char *)this + 3768));
      VIDMM_GLOBAL::EvictAllTemporaryAllocationsInList(this, (struct _LIST_ENTRY *)((char *)this + 3784));
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
        (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v14,
        (VIDMM_GLOBAL *)((char *)this + 3832));
      for ( i = (__int64 **)*((_QWORD *)this + 475); i != (__int64 **)((char *)this + 3800); i = (__int64 **)*i )
      {
        v7 = (struct _MDL *)i[5];
        LogicalAddress = SysMmGetLogicalAddress(i[6]);
        v9 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), LogicalAddress, v7, 0);
        v5 = v9;
        if ( v9 < 0 )
        {
LABEL_17:
          WdLogSingleEntry1(3LL, v5);
          DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v14);
          return v5;
        }
      }
      for ( j = (__int64 **)*((_QWORD *)this + 477); j != (__int64 **)((char *)this + 3816); j = (__int64 **)*j )
      {
        v11 = (struct _MDL *)j[8];
        v12 = SysMmGetLogicalAddress(j[9]);
        v13 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*((_QWORD *)this + 3) + 224LL), v12, v11, 0);
        v5 = v13;
        if ( v13 < 0 )
          goto LABEL_17;
      }
      *((_BYTE *)this + 40181) = 1;
      DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v14);
      *((_BYTE *)this + 40179) = 1;
      return 0;
    }
    while ( 1 )
    {
      v4 = VIDMM_SEGMENT::MapToIommu(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * v3));
      LODWORD(v5) = v4;
      if ( v4 < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)this + 926) )
        goto LABEL_7;
    }
    WdLogSingleEntry1(3LL, v4);
    return v5;
  }
  else
  {
    memset(&v15[1], 0, 0x54uLL);
    v15[0] = 130;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v15, 1);
  }
}
