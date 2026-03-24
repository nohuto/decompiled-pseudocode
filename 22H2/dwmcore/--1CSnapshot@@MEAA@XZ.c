/*
 * XREFs of ??1CSnapshot@@MEAA@XZ @ 0x18016B960
 * Callers:
 *     ??_ECSnapshot@@MEAAPEAXI@Z @ 0x18016DB90 (--_ECSnapshot@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 */

void __fastcall CSnapshot::~CSnapshot(CSnapshot *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned int v7; // edx
  __int64 v8; // r9
  CRenderTargetBitmap *v9; // rcx

  *(_QWORD *)this = &CSnapshot::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CD2DPrimitiveProperties::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CSnapshot::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v2 + 52) = v2 - 40;
  v3 = *(int *)(*((_QWORD *)this + 7) + 8LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 56;
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    v5 = *((_QWORD *)this + 2);
    v6 = 0LL;
    v7 = *(_DWORD *)(v5 + 592);
    v8 = *(_QWORD *)(v5 + 568);
    if ( v7 )
    {
      do
      {
        if ( v4 == *(_QWORD *)(v8 + 8 * v6) )
          break;
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < v7 );
    }
    if ( (unsigned int)v6 < v7 )
    {
      while ( (unsigned int)v6 < v7 - 1 )
      {
        *(_QWORD *)(v8 + 8 * v6) = *(_QWORD *)(v8 + 8LL * (unsigned int)(v6 + 1));
        v6 = (unsigned int)(v6 + 1);
        v7 = *(_DWORD *)(v5 + 592);
      }
      *(_DWORD *)(v5 + 592) = v7 - 1;
    }
  }
  v9 = (CRenderTargetBitmap *)*((_QWORD *)this + 8);
  if ( v9 )
    CRenderTargetBitmap::Release(v9);
  CResource::~CResource(this);
}
