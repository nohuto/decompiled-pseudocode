/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18001AA70
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001A700 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z @ 0x180023F70 (--$CreateProxy@VCAtlasedRectsMeshProxy@@@CCompositor@@IEAAJPEAPEAVCAtlasedRectsMeshProxy@@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180024700 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18003A2F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x180080624 (--1AtlasedRects@@QEAA@XZ.c)
 */

__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // edi
  int v3; // eax
  bool v4; // zf
  char *v5; // rax
  __int64 v6; // r8
  int v8; // eax
  int v9; // eax
  __int128 v10; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+50h] [rbp-19h]
  unsigned int v12; // [rsp+58h] [rbp-11h]
  void *v13[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  __int128 v16; // [rsp+80h] [rbp+17h] BYREF
  __int64 v17; // [rsp+90h] [rbp+27h]
  int v18; // [rsp+98h] [rbp+2Fh]
  char *v19; // [rsp+A0h] [rbp+37h]
  int v20; // [rsp+D0h] [rbp+67h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v8 = CCompositor::CreateProxy<CAtlasedRectsMeshProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           (char *)this + 88);
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x392u);
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x182u);
    return (unsigned int)v2;
  }
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL)
                                                                           + 16LL)
                                                             + 816LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 16LL),
             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 24LL),
             *((unsigned int *)this + 17));
      v2 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1A8u);
        return (unsigned int)v2;
      }
    }
    goto LABEL_17;
  }
  v4 = *((_BYTE *)this + 116) == 0;
  v5 = (char *)this + 100;
  v20 = 0;
  if ( v4 )
    v5 = 0LL;
  v10 = 0LL;
  v19 = v5;
  v11 = 0LL;
  *(_OWORD *)v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v12 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v10, 16LL);
  v15 = 0;
  DynArrayImpl<0>::ShrinkToSize(v13, 16LL);
  v18 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v16, 4LL);
  (*(void (__fastcall **)(CAtlasedImage *, int *))(*(_QWORD *)this + 32LL))(this, &v20);
  v2 = DynArrayImpl<0>::Grow((unsigned int)&v10, 16, v20, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x190u);
LABEL_27:
    AtlasedRects::~AtlasedRects((AtlasedRects *)&v10);
    return (unsigned int)v2;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)v13, 16, v20, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x191u);
    goto LABEL_27;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)&v16, 4, v20, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x192u);
    goto LABEL_27;
  }
  v2 = (*(__int64 (__fastcall **)(CAtlasedImage *, __int128 *))(*(_QWORD *)this + 16LL))(this, &v10);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x195u);
    goto LABEL_27;
  }
  LOBYTE(v6) = (unsigned int)(*((_DWORD *)this + 30) - 18) > 3;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, void *, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 16LL)
                                                                                          + 920LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 16LL) + 24LL),
         v6,
         v12,
         v10,
         v13[0],
         v16);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x1A4u);
    goto LABEL_27;
  }
  if ( (_QWORD)v16 != *((_QWORD *)&v16 + 1) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)&v16 = 0LL;
  }
  if ( v13[0] != v13[1] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v13[0] = 0LL;
  }
  if ( (_QWORD)v10 != *((_QWORD *)&v10 + 1) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
LABEL_17:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
