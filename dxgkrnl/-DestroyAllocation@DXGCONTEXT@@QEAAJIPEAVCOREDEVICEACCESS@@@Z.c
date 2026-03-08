/*
 * XREFs of ?DestroyAllocation@DXGCONTEXT@@QEAAJIPEAVCOREDEVICEACCESS@@@Z @ 0x1C0339740
 * Callers:
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C0339ADC (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009B78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     DxgkDestroyClientAllocation @ 0x1C02D4BF0 (DxgkDestroyClientAllocation.c)
 */

__int64 __fastcall DXGCONTEXT::DestroyAllocation(DXGCONTEXT *this, unsigned int a2, struct COREDEVICEACCESS *a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rdi
  unsigned int v8; // edx
  unsigned int v9; // r9d
  __int64 v10; // r8
  unsigned int v11; // ecx
  int v12; // ecx
  __int64 v13; // rbx
  unsigned int v15; // ecx
  __int64 v16; // rcx
  DXGDEVICE *v17; // r10
  _BYTE v18[32]; // [rsp+50h] [rbp-28h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)this);
  v7 = Current;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 200LL) == 4 )
    return 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v18, Current);
  v8 = (a2 >> 6) & 0xFFFFFF;
  v9 = a2 >> 30;
  if ( v8 < *((_DWORD *)v7 + 74) )
  {
    v10 = *((_QWORD *)v7 + 35);
    v11 = *(_DWORD *)(v10 + 16LL * v8 + 8);
    if ( v9 == ((v11 >> 5) & 3) && (v11 & 0x2000) == 0 )
    {
      v12 = v11 & 0x1F;
      if ( v12 )
      {
        if ( v12 == 5 )
        {
          v13 = *(_QWORD *)(v10 + 16LL * v8);
          if ( v13 )
          {
            if ( v8 < *((_DWORD *)v7 + 74) )
            {
              v15 = *(_DWORD *)(v10 + 16LL * v8 + 8);
              if ( v9 == ((v15 >> 5) & 3) && (v15 & 0x2000) == 0 && (v15 & 0x1F) != 0 )
                *(_DWORD *)(v10 + 16 * (((unsigned __int64)a2 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
          }
          goto LABEL_9;
        }
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v13 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  if ( !v13 )
    return 3221225485LL;
  v16 = *(unsigned int *)(*((_QWORD *)this + 2) + 608LL);
  v17 = (DXGDEVICE *)*((_QWORD *)this + 2);
  if ( (_DWORD)v16 == 4 )
    DxgkDestroyClientAllocation(v16, v17, 0, 0LL, *(struct DXGALLOCATION ***)(v13 + 40));
  else
    DXGDEVICE::DestroyAllocationInternal(
      v17,
      0,
      0LL,
      *(struct DXGRESOURCE **)(v13 + 40),
      a3,
      (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)DXGDEVICE::DestroyFlagsDefault.0);
  return 0LL;
}
