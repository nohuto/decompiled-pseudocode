/*
 * XREFs of ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18003DDB4
 * Callers:
 *     ?UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001F390 (-UpdateMarginsDependentOnStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18001F780 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18002527C (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x18003DF0C (-SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z.c)
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 *     floorf_0 @ 0x180058156 (floorf_0.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateClientAreaMaximizedClip(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  float v4; // xmm7_4
  float v5; // xmm6_4
  int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  if ( *((_QWORD *)this + 60) )
  {
    v3 = *((_QWORD *)this + 91);
    v4 = *(float *)(v3 + 172);
    v5 = *(float *)(v3 + 176);
    v8 = *(_OWORD *)((char *)this + 644);
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v4 - 1.0) & _xmm) >= 0.0000011920929
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) >= 0.0000011920929 )
    {
      LODWORD(v8) = (int)floorf_0((float)(int)v8 / v4);
      DWORD1(v8) = (int)floorf_0((float)SDWORD1(v8) / v4);
      DWORD2(v8) = (int)floorf_0((float)SDWORD2(v8) / v5);
      HIDWORD(v8) = (int)floorf_0((float)SHIDWORD(v8) / v5);
    }
    v6 = CClientArea::SetMaximizedClipMargins(
           *((CClientArea **)this + 60),
           (const struct _MARGINS *)((unsigned __int64)&v8 & -(__int64)((*((_BYTE *)this + 240) & 4) != 0)));
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x134Bu);
  }
  return v1;
}
