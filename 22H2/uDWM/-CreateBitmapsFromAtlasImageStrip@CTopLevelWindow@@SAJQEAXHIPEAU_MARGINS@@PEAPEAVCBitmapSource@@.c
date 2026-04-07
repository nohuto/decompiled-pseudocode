/*
 * XREFs of ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180049BE0
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x180048948 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180048BAC (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180049E8C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ @ 0x18009C448 (-EnsureAnimationObjects@CWindowArrangementTransition@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180049E44 (-GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z.c)
 *     __security_check_cookie @ 0x180053970 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180053C0C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180053C7C (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
        void *const a1,
        int iPartId,
        unsigned int a3,
        struct _MARGINS *a4,
        struct CBitmapSource **a5)
{
  HRESULT ThemeRect; // eax
  unsigned int v11; // ebx
  unsigned int v12; // eax
  LONG top; // r8d
  unsigned int v14; // esi
  int v15; // edx
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rbx
  CBaseObject *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v24; // r9d
  unsigned int pRect; // [rsp+20h] [rbp-51h]
  int v26; // [rsp+40h] [rbp-31h]
  struct CBitmapSource *AtlasImageFromTheme; // [rsp+48h] [rbp-29h]
  struct tagRECT rc; // [rsp+50h] [rbp-21h] BYREF
  struct tagRECT v29; // [rsp+60h] [rbp-11h] BYREF

  if ( dword_1800E6DB0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1800E6DB0);
    if ( dword_1800E6DB0 == -1 )
    {
      dword_1800E3FFC = -2147023728;
      Init_thread_footer(&dword_1800E6DB0);
    }
  }
  ThemeRect = GetThemeRect(a1, iPartId, 0, 8002, &v29);
  v11 = ThemeRect;
  if ( ThemeRect < 0 )
  {
    pRect = 825;
    goto LABEL_28;
  }
  if ( a4 )
  {
    ThemeRect = GetThemeMargins(a1, 0LL, iPartId, 0, 3601, 0LL, a4);
    v11 = ThemeRect;
    if ( ThemeRect < 0 )
    {
      pRect = 829;
LABEL_28:
      v24 = ThemeRect;
      goto LABEL_31;
    }
  }
  v12 = 0;
  top = v29.top;
  if ( v29.bottom - v29.top >= 0 )
    v12 = v29.bottom - v29.top;
  v14 = 0;
  v26 = v12 / a3;
  v15 = v12 / a3;
  v16 = 0;
  while ( 1 )
  {
    rc.right = v29.right;
    rc.top = v16 + top;
    rc.bottom = v15 + v16 + top;
    rc.left = v29.left;
    InflateRect(&rc, -1, -1);
    AtlasImageFromTheme = CTopLevelWindow::GetAtlasImageFromTheme(a1);
    v17 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            104LL);
    v18 = v17;
    if ( v17 )
    {
      *(_QWORD *)(v17 + 16) = 0LL;
      *(_QWORD *)(v17 + 96) = 0LL;
      *(_DWORD *)(v17 + 8) = 1;
      *(_QWORD *)v17 = &CBitmapSource::`vftable';
      *(_DWORD *)(v17 + 80) = 0x80000000;
      *(_DWORD *)(v17 + 88) = 0x80000000;
      *(_DWORD *)(v17 + 84) = 0x80000000;
      *(_DWORD *)(v17 + 92) = 0x80000000;
    }
    else
    {
      v18 = 0LL;
    }
    if ( !v18 )
      break;
    v19 = *(CBaseObject **)(v18 + 16);
    v20 = *((_QWORD *)AtlasImageFromTheme + 2);
    *(_QWORD *)(v18 + 16) = v20;
    if ( v20 )
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    if ( v19 )
      CBaseObject::Release(v19);
    v21 = 0;
    *(struct tagRECT *)(v18 + 80) = rc;
    if ( *(_DWORD *)(v18 + 88) - *(_DWORD *)(v18 + 80) >= 0 )
      v21 = *(_DWORD *)(v18 + 88) - *(_DWORD *)(v18 + 80);
    *(_DWORD *)(v18 + 24) = v21;
    v22 = 0;
    if ( *(_DWORD *)(v18 + 92) - *(_DWORD *)(v18 + 84) >= 0 )
      v22 = *(_DWORD *)(v18 + 92) - *(_DWORD *)(v18 + 84);
    *(_DWORD *)(v18 + 28) = v22;
    if ( a4 )
      *(struct _MARGINS *)(v18 + 32) = *a4;
    *a5 = (struct CBitmapSource *)v18;
    v15 = v26;
    v11 = 0;
    v16 += v26;
    ++v14;
    ++a5;
    if ( v14 >= a3 )
      return v11;
    top = v29.top;
  }
  v11 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xABu);
  v24 = -2147024882;
  pRect = 852;
LABEL_31:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800E3FFC, 1LL, v24, pRect);
  return v11;
}
