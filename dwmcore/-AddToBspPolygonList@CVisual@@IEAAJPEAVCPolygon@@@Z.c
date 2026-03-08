/*
 * XREFs of ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x18020D2C0
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x1802561B4 (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18009A22C (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetBspPolygonList@CVisual@@QEAAXPEAV?$DynArray@PEAVCPolygon@@$0A@@@@Z @ 0x18020E728 (-SetBspPolygonList@CVisual@@QEAAXPEAV-$DynArray@PEAVCPolygon@@$0A@@@@Z.c)
 */

__int64 __fastcall CVisual::AddToBspPolygonList(CVisual *this, struct CPolygon *a2)
{
  __int64 v3; // rcx
  __int64 BspPolygonList; // rbx
  struct CPolygon *v5; // r10
  _QWORD *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ebx
  int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct CPolygon *v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = a2;
  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  if ( !BspPolygonList )
  {
    v6 = DefaultHeap::Alloc(0x20uLL);
    BspPolygonList = (__int64)v6;
    if ( !v6 )
    {
      v10 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x175Fu, 0LL);
      return v10;
    }
    *v6 = 0LL;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 4) = 0;
    *((_DWORD *)v6 + 5) = 0;
    *((_DWORD *)v6 + 6) = 0;
    CVisual::SetBspPolygonList(this, v6);
    v5 = v16;
  }
  v8 = *(_DWORD *)(BspPolygonList + 24);
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    v10 = -2147024362;
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1763u, 0LL);
    return v10;
  }
  v11 = 0;
  if ( v9 > *(_DWORD *)(BspPolygonList + 20) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet(BspPolygonList, 8, 1, &v16);
    v11 = v13;
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xC0u, 0LL);
      goto LABEL_12;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)BspPolygonList + 8LL * *(unsigned int *)(BspPolygonList + 24)) = v5;
    *(_DWORD *)(BspPolygonList + 24) = v9;
  }
  v10 = v11;
  (**(void (__fastcall ***)(struct CPolygon *))v16)(v16);
  return v10;
}
