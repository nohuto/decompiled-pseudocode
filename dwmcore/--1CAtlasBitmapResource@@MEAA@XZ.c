/*
 * XREFs of ??1CAtlasBitmapResource@@MEAA@XZ @ 0x1800B608C
 * Callers:
 *     ??_GCAtlasBitmapResource@@MEAAPEAXI@Z @ 0x1800B6050 (--_GCAtlasBitmapResource@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasBitmapResource::~CAtlasBitmapResource(CAtlasBitmapResource *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CAtlasBitmapResource::`vftable'{for `IPixelFormat's `CMILCOMBaseT<IBitmapResource>'};
  *((_QWORD *)this + 3) = &CAtlasBitmapResource::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CAtlasBitmapResource::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 8LL) + 8) = &CAtlasBitmapResource::`vftable'{for `IPixelFormat's `IBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 72;
  v3 = *(int *)(*((_QWORD *)this + 1) + 8LL);
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 88;
  *((_QWORD *)this + 6) = 0LL;
  CAtlasEntry::~CAtlasEntry((CAtlasBitmapResource *)((char *)this + 40));
}
