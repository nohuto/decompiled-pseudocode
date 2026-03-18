/*
 * XREFs of ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02EDBA0
 * Callers:
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02EDA48 (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1C0003E88 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0004690 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046C0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C02ECB20 (-RemoveDirectFlipAllocationFromList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocationSynchronous(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        struct COREDEVICEACCESS *a4)
{
  unsigned int v8; // ebp
  struct DXGALLOCATION *v9; // r9
  char v10; // r15
  int v11; // eax
  char *v12; // rdx
  unsigned int v14[10]; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0;
  if ( DXGDEVICE::RemoveDirectFlipAllocationFromList((struct _KTHREAD **)this, a2, a3) )
  {
    v14[0] = 0;
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 760LL)
                                                                                + 8LL)
                                                                    + 688LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
            *((_QWORD *)a3 + 3),
            v14);
    if ( a4 )
      COREDEVICEACCESS::Release(a4);
    if ( v10 )
    {
      if ( v14[0] <= 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                            + 8LL)
                                                                + 696LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
                *((_QWORD *)a3 + 3),
                a2);
        v8 = v11;
        if ( v11 < 0 )
          WdLogSingleEntry3(3LL, a3, *((_QWORD *)a3 + 3), v11);
      }
    }
    DXGDEVICE::TestAndSetDisplayedPrimary(this, a2, a3, v9);
    if ( a4 )
      COREDEVICEACCESS::AcquireSharedUncheck(a4, v12);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 224LL))(
      *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
      *((_QWORD *)a3 + 3));
  }
  return v8;
}
