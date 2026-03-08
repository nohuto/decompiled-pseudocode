/*
 * XREFs of ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C03640C0
 * Callers:
 *     ?DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C033EE00 (-DestroyProcessCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C036415C (-NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::NotifyDxgProcessDestroyed(struct DXGADAPTER *const *this, struct DXGPROCESS *a2)
{
  DXGVIRTUALGPUMANAGER *v4; // rcx
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  if ( (*((_DWORD *)a2 + 106) & 0x40) != 0 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v5, this[2], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v5, 0LL) >= 0 )
    {
      v4 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 234);
      if ( v4 )
        DXGVIRTUALGPUMANAGER::NotifyVmmsProcessDestroyed(v4, a2);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v5);
  }
}
