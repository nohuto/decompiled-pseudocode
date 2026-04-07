/*
 * XREFs of ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x1800B7424
 * Callers:
 *     ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x1800B77D8 (-_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800262C4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x18002C690 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_AddWindow(
        CDesktopThumbnailBase *this,
        struct CTopLevelWindow *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  CBaseObject *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // edx
  int v12; // eax
  __int128 v13; // [rsp+30h] [rbp-18h] BYREF
  CBaseObject *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = 0LL;
  v6 = CTopLevelWindow::CloneVisualTreeForLivePreview(a2, 0, a3, a4, &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x70u);
    v8 = v14;
    goto LABEL_8;
  }
  v8 = v14;
  v9 = *((unsigned int *)this + 66);
  *((_QWORD *)&v13 + 1) = v14;
  *(_QWORD *)&v13 = a2;
  v10 = v9 + 1;
  if ( (int)v9 + 1 < (unsigned int)v9 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_8;
  }
  if ( v10 <= *((_DWORD *)this + 65) )
  {
    *(_OWORD *)(*((_QWORD *)this + 30) + 16 * v9) = v13;
    *((_DWORD *)this + 66) = v10;
LABEL_7:
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
    v8 = v14;
    VisualCollection::InsertRelative((CDesktopThumbnailBase *)((char *)this + 32), v14, 0LL, 0, 1);
    goto LABEL_8;
  }
  v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 240, 0x10u, 1, &v13);
  if ( v12 >= 0 )
    goto LABEL_7;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u);
LABEL_8:
  if ( v8 )
    CBaseObject::Release(v8);
  return v7;
}
