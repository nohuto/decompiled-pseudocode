/*
 * XREFs of ??1CContainerVectorShape@@MEAA@XZ @ 0x1800B8624
 * Callers:
 *     ??_ECShapeTree@@UEAAPEAXI@Z @ 0x1800B7C60 (--_ECShapeTree@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180023404 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CContainerVectorShape::~CContainerVectorShape(CContainerVectorShape *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CContainerVectorShape::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CContainerVectorShape::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CContainerVectorShape::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 72;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL) - 88;
  CResource::UnRegisterNNotifiersInternal(
    this,
    *((struct CResource ***)this + 13),
    (unsigned int)((__int64)(*((_QWORD *)this + 14) - *((_QWORD *)this + 13)) >> 3));
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 15) - v3) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  CResource::~CResource(this);
}
