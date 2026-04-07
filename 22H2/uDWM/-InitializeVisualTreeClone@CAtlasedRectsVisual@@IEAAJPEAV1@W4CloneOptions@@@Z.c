/*
 * XREFs of ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180022C90
 * Callers:
 *     ?CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x180027460 (-CloneVisualTree@CAtlasedRectsVisual@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z @ 0x180006A38 (-SetMarginClip@CAtlasedImage@@QEAAXPEAUtagRECT@@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180013360 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x18001FFF8 (-InitializeVisualTreeClone@CVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x180023F1C (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024700 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z @ 0x18003F1C4 (-SetClipMargins@CAtlasedRectsVisual@@QEAAJPEBU_MARGINS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::InitializeVisualTreeClone(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  CBaseObject *v6; // rbx
  int v7; // eax
  int v8; // r14d
  const struct _MARGINS *v9; // rdx
  __int64 v10; // r12
  __int64 v11; // r14
  CAtlasedImage *v12; // rax
  CAtlasedImage *v13; // rax
  CAtlasedImage *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v23; // rcx
  const RECT *v24; // rsi
  __int64 v25; // rcx
  int v26; // eax
  int v27; // esi
  __int64 v28; // rax
  CBaseObject *v29; // rcx
  volatile signed __int32 *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rbp
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r9
  CAtlasedImage **v39; // rdx
  CAtlasedImage **v40; // r8
  unsigned __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  CAtlasedImage **v45; // [rsp+30h] [rbp-48h] BYREF
  CAtlasedImage *v46; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  CAtlasedImage *v49; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v6 = 0LL;
  v7 = CVisual::InitializeVisualTreeClone(a1, (__int64 *)a2, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v42 = (unsigned int)v7;
    v43 = 277LL;
    goto LABEL_63;
  }
  v9 = *(const struct _MARGINS **)(a1 + 272);
  if ( v9 )
    CAtlasedRectsVisual::SetClipMargins((CAtlasedRectsVisual *)a2, v9);
  v10 = 0LL;
  if ( !*(_DWORD *)(a1 + 264) )
    return 0LL;
  while ( 1 )
  {
    v11 = 8 * v10;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 208LL))(
            a1,
            *(_QWORD *)(8 * v10 + *(_QWORD *)(a1 + 240)),
            v3) )
      goto LABEL_42;
    v12 = (CAtlasedImage *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                             WPF::g_pProcessHeap,
                             128LL);
    if ( !v12 )
      break;
    v13 = CAtlasedImage::CAtlasedImage(v12);
    v14 = v13;
    if ( !v13 )
      break;
    v6 = v13;
    v49 = v13;
    v15 = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 240));
    if ( *(_DWORD *)(v15 + 16) != *((_DWORD *)v13 + 4) || *(_DWORD *)(v15 + 20) != *((_DWORD *)v13 + 5) )
    {
      v16 = *(_QWORD *)(v15 + 16);
      *((_DWORD *)v14 + 24) |= 1u;
      v17 = *((_QWORD *)v14 + 10);
      *((_QWORD *)v14 + 2) = v16;
      if ( v17 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, 0x2000LL);
    }
    v18 = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 240));
    if ( *((_DWORD *)v14 + 6) != *(_DWORD *)(v18 + 24) || *((_DWORD *)v14 + 7) != *(_DWORD *)(v18 + 28) )
    {
      v19 = *(_QWORD *)(v18 + 24);
      *((_DWORD *)v14 + 24) |= 1u;
      v20 = *((_QWORD *)v14 + 10);
      *((_QWORD *)v14 + 3) = v19;
      if ( v20 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 24LL))(v20, 0x2000LL);
    }
    v21 = *(_QWORD *)(v11 + *(_QWORD *)(a1 + 240));
    if ( *((_DWORD *)v14 + 8) != *(_DWORD *)(v21 + 32)
      || *((_DWORD *)v14 + 9) != *(_DWORD *)(v21 + 36)
      || *((_DWORD *)v14 + 10) != *(_DWORD *)(v21 + 40)
      || *((_DWORD *)v14 + 11) != *(_DWORD *)(v21 + 44) )
    {
      v22 = *(_OWORD *)(v21 + 32);
      *((_DWORD *)v14 + 24) |= 1u;
      v23 = *((_QWORD *)v14 + 10);
      *((_OWORD *)v14 + 2) = v22;
      if ( v23 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 24LL))(v23, 4096LL);
    }
    v24 = *(const RECT **)(v11 + *(_QWORD *)(a1 + 240));
    if ( !EqualRect((const RECT *)v14 + 3, v24 + 3) )
    {
      *((RECT *)v14 + 3) = v24[3];
      CAtlasedImage::SetDirtyFlags(v14, 1, 0x2000u);
    }
    v25 = *(_QWORD *)(a1 + 240);
    v26 = *(_DWORD *)(*(_QWORD *)(v25 + 8 * v10) + 64LL);
    if ( *((_DWORD *)v14 + 16) != v26 )
    {
      *((_DWORD *)v14 + 16) = v26;
      CAtlasedImage::SetDirtyFlags(v14, 1, 0x2000u);
      v25 = *(_QWORD *)(a1 + 240);
    }
    v27 = *(_DWORD *)(*(_QWORD *)(v11 + v25) + 68LL);
    if ( v27 != *((_DWORD *)v14 + 17) )
    {
      CAtlasedImage::SetDirtyFlags(v14, 2, 0x2000u);
      *((_DWORD *)v14 + 17) = v27;
      v25 = *(_QWORD *)(a1 + 240);
    }
    v28 = *(_QWORD *)(v11 + v25);
    v29 = (CBaseObject *)*((_QWORD *)v14 + 9);
    v30 = *(volatile signed __int32 **)(v28 + 72);
    if ( v29 != (CBaseObject *)v30 )
    {
      if ( v29 )
        CBaseObject::Release(v29);
      *((_QWORD *)v14 + 9) = v30;
      if ( v30 )
      {
        _InterlockedIncrement(v30 + 2);
        v6 = v49;
      }
      *((_DWORD *)v14 + 24) |= 1u;
      v31 = *((_QWORD *)v14 + 10);
      if ( v31 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 24LL))(v31, 0x2000LL);
    }
    v32 = *(_QWORD *)(a1 + 240);
    v33 = *(_QWORD *)(v32 + 8 * v10);
    if ( *(_BYTE *)(v33 + 116) )
    {
      CAtlasedImage::SetMarginClip(v14, (struct tagRECT *)(v33 + 100));
      v32 = *(_QWORD *)(a1 + 240);
    }
    v34 = *(_QWORD *)(v11 + v32);
    v46 = v14;
    *((_DWORD *)v14 + 30) = *(_DWORD *)(v34 + 120);
    v35 = *(unsigned int *)(a2 + 264);
    v45 = &v46;
    v36 = DynArrayImpl<0>::Grow((int)a2 + 240, 8, 1, 0, (__int64)&v45);
    v8 = v36;
    if ( v36 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v36, 0x1CDu);
    }
    else
    {
      v37 = *(unsigned int *)(a2 + 264);
      v38 = *(_QWORD *)(a2 + 240);
      *(_DWORD *)(a2 + 264) = v37 + 1;
      if ( (unsigned int)v37 > (unsigned int)v35 )
      {
        v44 = v38 + 8 * v37;
        do
        {
          v37 = (unsigned int)(v37 - 1);
          v44 -= 8LL;
          *(_QWORD *)(v44 + 8) = *(_QWORD *)(v38 + 8 * v37);
        }
        while ( (unsigned int)v37 > (unsigned int)v35 );
      }
      v39 = v45;
      v40 = (CAtlasedImage **)(v38 + 8 * v35);
      if ( v45 >= v40 && (unsigned __int64)v45 < v38 + 8 * ((unsigned __int64)*(unsigned int *)(a2 + 264) - 1) )
        v39 = ++v45;
      *v40 = *v39;
    }
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x4Du);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v46 + 2);
      *((_QWORD *)v46 + 10) = a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 24LL))(a2, 0x2000LL);
      v6 = v49;
    }
    if ( v8 < 0 )
    {
      v43 = 308LL;
      goto LABEL_62;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(CAtlasedImage *, __int64))v14)(v14, 1LL);
    v3 = a3;
LABEL_42:
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 264) )
      return 0LL;
  }
  v8 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xA3u);
  v6 = 0LL;
  v43 = 291LL;
LABEL_62:
  v42 = (unsigned int)v8;
LABEL_63:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v43,
    (__int64)"clientcore\\windows\\dwm\\udwm\\atlasedrectsvisual.cpp",
    (const char *)v42);
  if ( v6 )
    CBaseObject::Release(v6);
  return (unsigned int)v8;
}
