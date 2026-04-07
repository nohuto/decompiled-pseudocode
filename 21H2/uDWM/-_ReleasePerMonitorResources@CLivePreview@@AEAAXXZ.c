/*
 * XREFs of ?_ReleasePerMonitorResources@CLivePreview@@AEAAXXZ @ 0x180083AA0
 * Callers:
 *     ??1CLivePreview@@MEAA@XZ @ 0x18008169C (--1CLivePreview@@MEAA@XZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180081D40 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017C34 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CLivePreview::_ReleasePerMonitorResources(CLivePreview *this)
{
  unsigned int i; // esi
  __int64 v3; // rdi
  __int64 v4; // rax
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx

  for ( i = 0; i < *((_DWORD *)this + 98); ++i )
  {
    v3 = 136LL * i;
    v4 = *((_QWORD *)this + 46);
    v5 = *(CBaseObject **)(v3 + v4 + 16);
    if ( v5 )
    {
      CBaseObject::Release(v5);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 16) = 0LL;
      v4 = *((_QWORD *)this + 46);
    }
    v6 = *(CBaseObject **)(v3 + v4 + 24);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 24) = 0LL;
      v4 = *((_QWORD *)this + 46);
    }
    v7 = *(CBaseObject **)(v3 + v4 + 32);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 32) = 0LL;
      v4 = *((_QWORD *)this + 46);
    }
    v8 = *(CBaseObject **)(v3 + v4 + 56);
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 56) = 0LL;
      v4 = *((_QWORD *)this + 46);
    }
    v9 = *(CBaseObject **)(v3 + v4 + 64);
    if ( v9 )
    {
      CBaseObject::Release(v9);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 64) = 0LL;
      v4 = *((_QWORD *)this + 46);
    }
    v10 = *(CBaseObject **)(v3 + v4 + 72);
    if ( v10 )
    {
      CBaseObject::Release(v10);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 72) = 0LL;
      v4 = *((_QWORD *)this + 46);
    }
    v11 = *(CBaseObject **)(v3 + v4 + 104);
    if ( v11 )
    {
      CBaseObject::Release(v11);
      *(_QWORD *)(v3 + *((_QWORD *)this + 46) + 104) = 0LL;
    }
  }
  *((_DWORD *)this + 98) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 368, 0x88u);
}
