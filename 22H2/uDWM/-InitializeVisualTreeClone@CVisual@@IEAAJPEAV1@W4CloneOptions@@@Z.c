/*
 * XREFs of ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001FFF8
 * Callers:
 *     ?InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001373C (-InitializeVisualTreeClone@CRenderDataVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180022C90 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z @ 0x180028440 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@W4CloneOptions@@@Z.c)
 *     ?CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180029820 (-CloneVisualTree@CClientArea@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180029BEC (-InitializeVisualTreeClone@CTopLevelWindow@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180024380 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::InitializeVisualTreeClone(__int64 a1, __int64 *a2, unsigned int a3)
{
  unsigned int v3; // r14d
  __int64 v4; // rbp
  char v5; // r15
  double v9; // xmm5_8
  double v10; // xmm2_8
  char v11; // r8
  _BYTE *v13; // rcx
  int inserted; // eax
  CBaseObject *v15; // rcx
  __int64 v16; // rax
  void (__fastcall *v17)(__int64 *, __int64); // rax
  __int64 v18; // rax
  __int64 v19; // rax
  CBaseObject *v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  LODWORD(v4) = -1;
  v20 = 0LL;
  v5 = 0;
  while ( 1 )
  {
    if ( v5 )
    {
      v4 = (unsigned int)(v4 + 1);
    }
    else
    {
      v5 = 1;
      v4 = 0LL;
    }
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 72) )
      break;
    v13 = *(_BYTE **)(*(_QWORD *)(a1 + 48) + 8 * v4);
    if ( (v13[84] & 8) == 0 )
    {
      (*(void (__fastcall **)(_BYTE *, CBaseObject **, _QWORD))(*(_QWORD *)v13 + 152LL))(v13, &v20, a3);
      if ( v20 )
      {
        inserted = VisualCollection::InsertRelative((VisualCollection *)(a2 + 4), v20, 0LL, 0, 1);
        v3 = inserted;
        if ( inserted < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, inserted, 0x474u);
          goto LABEL_14;
        }
        v15 = v20;
        if ( v20 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v20 + 2, 0xFFFFFFFF) == 1 && v15 )
            (**(void (__fastcall ***)(CBaseObject *, __int64))v15)(v15, 1LL);
          v20 = 0LL;
        }
      }
    }
  }
  if ( *(_DWORD *)(a1 + 112) != *((_DWORD *)a2 + 28) || *(_DWORD *)(a1 + 116) != *((_DWORD *)a2 + 29) )
  {
    a2[14] = *(_QWORD *)(a1 + 112);
    (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 24))(a2, 8LL);
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 96))(a2, a1 + 120);
  v9 = *(double *)(a1 + 168);
  v10 = *(double *)(a1 + 176);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a2 + 21) - (float)v9) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)a2 + 22) - (float)v10) & _xmm) > 0.0000011920929 )
  {
    v18 = *a2;
    *((double *)a2 + 21) = v9;
    *((double *)a2 + 22) = v10;
    (*(void (__fastcall **)(__int64 *, __int64))(v18 + 24))(a2, 16LL);
  }
  v11 = *(_BYTE *)(a1 + 84) & 1;
  if ( v11 != (*((_BYTE *)a2 + 84) & 1) )
  {
    v19 = *a2;
    *((_BYTE *)a2 + 84) = v11 | *((_BYTE *)a2 + 84) & 0xFE;
    (*(void (__fastcall **)(__int64 *, __int64))(v19 + 24))(a2, 16LL);
  }
  if ( *(_DWORD *)(a1 + 196) )
  {
    v16 = *a2;
    *(_OWORD *)((char *)a2 + 196) = *(_OWORD *)(a1 + 196);
    v17 = *(void (__fastcall **)(__int64 *, __int64))(v16 + 24);
    *(_OWORD *)((char *)a2 + 212) = *(_OWORD *)(a1 + 212);
    *(__int64 *)((char *)a2 + 228) = *(_QWORD *)(a1 + 228);
    v17(a2, 64LL);
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 104))(a2);
LABEL_14:
  if ( v20 )
    CBaseObject::Release(v20);
  return v3;
}
