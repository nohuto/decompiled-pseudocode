/*
 * XREFs of ?EvictAllResources@DXGPROCESS@@QEAAJPEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C033FB88
 * Callers:
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030B250 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00071C4 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGPROCESS::EvictAllResources(DXGPROCESS *this, struct _D3DKMT_EVICTION_CRITERIA *a2)
{
  char *v3; // r14
  _QWORD *v5; // rsi
  struct DXGDEVICE *Current; // rax
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // r9
  __int64 i; // rbx
  __int64 v11; // rdx
  __int64 j; // rdi
  __int64 k; // rbx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  _QWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v20[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v22[88]; // [rsp+B8h] [rbp-48h] BYREF

  v3 = (char *)this + 216;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v5 = (_QWORD *)*((_QWORD *)this + 40);
  v18[0] = (char *)this + 320;
  while ( 1 )
  {
    v18[1] = v5;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v18);
    v7 = (__int64)Current;
    if ( !Current )
    {
      v15 = 0;
      goto LABEL_24;
    }
    v8 = *((_QWORD *)Current + 2);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17, Current);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, v7, 2, v9, 0);
    if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20, 0LL) < 0 )
      break;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v19, this);
    for ( i = *(_QWORD *)(v7 + 48); i; i = *(_QWORD *)(i + 64) )
    {
      v11 = *(_QWORD *)(i + 24);
      if ( v11 )
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, struct _D3DKMT_EVICTION_CRITERIA *))(*(_QWORD *)(*(_QWORD *)(v8 + 760) + 8LL)
                                                                                            + 720LL))(
          *(_QWORD *)(v8 + 768),
          v11,
          0LL,
          a2);
    }
    for ( j = *(_QWORD *)(v7 + 56); j; j = *(_QWORD *)(j + 40) )
    {
      for ( k = *(_QWORD *)(j + 24); k; k = *(_QWORD *)(k + 64) )
      {
        v14 = *(_QWORD *)(k + 24);
        if ( v14 )
          (*(void (__fastcall **)(_QWORD, __int64, _QWORD, struct _D3DKMT_EVICTION_CRITERIA *))(*(_QWORD *)(*(_QWORD *)(v8 + 760) + 8LL)
                                                                                              + 720LL))(
            *(_QWORD *)(v8 + 768),
            v14,
            0LL,
            a2);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    COREACCESS::~COREACCESS((COREACCESS *)v22);
    COREACCESS::~COREACCESS((COREACCESS *)v21);
    if ( v17[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
    v5 = (_QWORD *)*v5;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v22);
  COREACCESS::~COREACCESS((COREACCESS *)v21);
  if ( v17[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v17);
  v15 = -1073741130;
LABEL_24:
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v15;
}
