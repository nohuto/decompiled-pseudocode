/*
 * XREFs of ??1CFormatConverter@@MEAA@XZ @ 0x1802B81F8
 * Callers:
 *     ??_GCFormatConverter@@MEAAPEAXI@Z @ 0x1802B8320 (--_GCFormatConverter@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1CScanPipeline@@UEAA@XZ @ 0x1802B8298 (--1CScanPipeline@@UEAA@XZ.c)
 */

void __fastcall CFormatConverter::~CFormatConverter(CFormatConverter *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx

  *(_QWORD *)this = &CFormatConverter::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CFormatConverter::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 792;
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = v3 + 8 + *(int *)(*(_QWORD *)(v3 + 8) + 4LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  operator delete(*((void **)this + 97));
  CScanPipeline::~CScanPipeline((CFormatConverter *)((char *)this + 112));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
}
