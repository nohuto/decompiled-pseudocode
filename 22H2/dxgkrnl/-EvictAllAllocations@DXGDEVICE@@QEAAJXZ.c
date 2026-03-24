/*
 * XREFs of ?EvictAllAllocations@DXGDEVICE@@QEAAJXZ @ 0x1C0255788
 * Callers:
 *     ?DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z @ 0x1C02673C4 (-DxgEscapeEvictWorker@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::EvictAllAllocations(DXGDEVICE *this, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 i; // rbx
  __int64 v7; // rdx
  _QWORD v9[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v10[32]; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v11[8]; // [rsp+60h] [rbp-B8h] BYREF
  _BYTE v12[64]; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v13[88]; // [rsp+A8h] [rbp-70h] BYREF

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  if ( *(int *)(v2[2] + 2596LL) >= 2000 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 8551LL;
    WdLogEvent5_WdAssertion(v4);
    v2 = (_QWORD *)*((_QWORD *)this + 2);
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9, this);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v11, (__int64)this, 2, v5, 0);
  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v11, 0LL) >= 0 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v10,
      *((struct _KTHREAD ***)this + 5));
    for ( i = *((_QWORD *)this + 6); i; i = *(_QWORD *)(i + 64) )
    {
      v7 = *(_QWORD *)(i + 24);
      if ( v7 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(v2[80] + 8LL) + 728LL))(
          v2[81],
          v7,
          0LL,
          0LL);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
  }
  else
  {
    LODWORD(i) = -1073741130;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v13);
  COREACCESS::~COREACCESS((COREACCESS *)v12);
  if ( v9[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v9);
  return (unsigned int)i;
}
