/*
 * XREFs of ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180012F80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z @ 0x180013220 (-DoCanvasLayout@CVisual@@SA_NAEBUtagSIZE@@AEBU_MARGINS@@0PEAUtagPOINT@@PEAU2@@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x180013BA0 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x18003D40C (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CButton::UpdateLayout(CButton *this)
{
  int v2; // edi
  const struct tagSIZE *v3; // rcx
  int v4; // eax
  char v5; // bp
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v11; // rcx
  struct tagPOINT v12; // [rsp+50h] [rbp+8h] BYREF
  tagSIZE v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v3 = (const struct tagSIZE *)*((_QWORD *)this + 3);
  if ( v3
    && CVisual::DoCanvasLayout(
         v3 + 15,
         (const struct _MARGINS *)this + 8,
         (const struct tagSIZE *)this + 15,
         &v12,
         &v13) )
  {
    v4 = (*(__int64 (__fastcall **)(CButton *, tagSIZE *))(*(_QWORD *)this + 96LL))(this, &v13);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x116u);
      goto LABEL_10;
    }
    if ( v12.x != *((_DWORD *)this + 28) || v12.y != *((_DWORD *)this + 29) )
    {
      *((struct tagPOINT *)this + 14) = v12;
      (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)this + 24LL))(this, 8LL);
    }
  }
  v5 = 0;
  LODWORD(v6) = -1;
  while ( 1 )
  {
    if ( v5 )
    {
      v6 = (unsigned int)(v6 + 1);
    }
    else
    {
      v5 = 1;
      v6 = 0LL;
    }
    if ( (unsigned int)v6 >= *((_DWORD *)this + 18) )
      break;
    v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v6);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, 2LL);
  }
LABEL_10:
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x88u);
  else
    (*(void (__fastcall **)(CButton *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0xBFu);
  }
  else
  {
    v7 = *((_QWORD *)this + 36);
    if ( *(_DWORD *)(v7 + 24) != *((_DWORD *)this + 30) || *(_DWORD *)(v7 + 28) != *((_DWORD *)this + 31) )
    {
      *(_QWORD *)(v7 + 24) = *((_QWORD *)this + 15);
      CAtlasedImage::SetDirtyFlags((CAtlasedImage *)v7, 1u, 0x2000u);
      v7 = *((_QWORD *)this + 36);
    }
    if ( *(CButton **)(v7 + 80) == this )
    {
      v12 = 0LL;
      CAtlasedImage::SetOffset((CAtlasedImage *)v7, &v12);
    }
    else if ( *((_DWORD *)this + 28) != *(_DWORD *)(v7 + 16) || *((_DWORD *)this + 29) != *(_DWORD *)(v7 + 20) )
    {
      v8 = *((_QWORD *)this + 14);
      *(_DWORD *)(v7 + 96) |= 1u;
      *(_QWORD *)(v7 + 16) = v8;
      v9 = *(_QWORD *)(v7 + 80);
      if ( v9 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 0x2000LL);
    }
  }
  return (unsigned int)v2;
}
