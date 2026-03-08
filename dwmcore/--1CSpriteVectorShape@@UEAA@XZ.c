/*
 * XREFs of ??1CSpriteVectorShape@@UEAA@XZ @ 0x1800B8484
 * Callers:
 *     ??_GCSpriteVectorShape@@UEAAPEAXI@Z @ 0x1800B8440 (--_GCSpriteVectorShape@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x1800F9B40 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSpriteVectorShape::~CSpriteVectorShape(CSpriteVectorShape *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CSpriteVectorShape::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CSpriteVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CSpriteVectorShape::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 160;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL)
                                                                         - 176;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 14));
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 15));
  std::vector<float>::_Tidy((char *)this + 160);
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    *((_QWORD *)this + 17) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  CResource::~CResource(this);
}
