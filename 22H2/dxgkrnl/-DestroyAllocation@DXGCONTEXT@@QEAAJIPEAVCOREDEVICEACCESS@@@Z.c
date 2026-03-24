/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C028037C
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C02805F0 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00033B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126818 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C022A124 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, __int64 a2, struct COREDEVICEACCESS *a3, __int64 a4)
{
  unsigned int v5; // ebp
  struct _KTHREAD **Current; // rax
  struct _KTHREAD **v8; // rsi
  __int64 v9; // rax
  struct _KTHREAD *v10; // r8
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v16; // rcx
  DXGDEVICE *v17; // r10
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2, (__int64)a3, a4);
  v8 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 200LL) == 4 )
    return 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, Current);
  v9 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v9 < *((_DWORD *)v8 + 64) )
  {
    v10 = v8[30];
    v11 = *((_DWORD *)v10 + 4 * v9 + 2);
    if ( ((v5 >> 25) & 0x60) == (*((_BYTE *)v10 + 16 * v9 + 8) & 0x60) && (v11 & 0x2000) == 0 && (v11 & 0x1F) != 0 )
    {
      v12 = v11 & 0x1F;
      if ( (_BYTE)v12 == 5 )
      {
        v14 = *((_QWORD *)v10 + 2 * (unsigned int)v9);
        if ( v14 )
          *((_DWORD *)v10 + 4 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + 2) |= 0x2000u;
        goto LABEL_9;
      }
      v13 = WdLogNewEntry5_WdError(0x2000LL, v12);
      *(_QWORD *)(v13 + 24) = 316LL;
      WdLogEvent5_WdError(v13);
    }
  }
  v14 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( !v14 )
    return 3221225485LL;
  v16 = *(unsigned int *)(*((_QWORD *)this + 2) + 576LL);
  v17 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (_DWORD)v16 == 4 )
    DxgkDestroyClientAllocation(v16, v17, 0LL, 0LL, *(struct DXGALLOCATION ***)(v14 + 40));
  else
    DXGDEVICE::DestroyAllocationInternal(
      v17,
      0,
      0LL,
      *(struct DXGRESOURCE **)(v14 + 40),
      a3,
      DXGDEVICE::DestroyFlagsDefault);
  return 0LL;
}
