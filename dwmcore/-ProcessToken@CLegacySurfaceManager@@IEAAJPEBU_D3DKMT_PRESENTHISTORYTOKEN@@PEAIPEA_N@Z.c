/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18004523C
 * Callers:
 *     ?ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ @ 0x180044F90 (-ProcessLegacyTokens@CGlobalSurfaceManager@@AEAAJXZ.c)
 *     ?ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z @ 0x1800450F8 (-ProcessUnclaimedTokens@CLegacySurfaceManager@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x180045398 (-FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18004591C (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180046020 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z @ 0x18010DB8C (-NotifyDirty@CGdiSpriteBitmap@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18012C054 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     McTemplateU0xxqNR2_EventWriteTransfer @ 0x1801DC9B8 (McTemplateU0xxqNR2_EventWriteTransfer.c)
 *     McTemplateU0xxq_EventWriteTransfer @ 0x1801DCA60 (McTemplateU0xxq_EventWriteTransfer.c)
 *     McTemplateU0xxxqNR3_EventWriteTransfer @ 0x1801DCAE8 (McTemplateU0xxxqNR3_EventWriteTransfer.c)
 *     ?AddDxBltRects@CGdiSpriteBitmap@@AEAAXPEBUtagRECT@@I@Z @ 0x18021A2F0 (-AddDxBltRects@CGdiSpriteBitmap@@AEAAXPEBUtagRECT@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        unsigned int *a3,
        bool *a4)
{
  bool v4; // di
  unsigned int v8; // r13d
  const struct tagRECT *v9; // r12
  unsigned int v10; // r8d
  int v11; // eax
  _QWORD *v13; // rcx
  const struct tagRECT *v14; // r9
  unsigned __int64 *v15; // r15
  _QWORD *v16; // rax
  int v17; // eax
  unsigned int v18; // ecx
  CGdiSpriteBitmap *v19; // rcx
  struct CGdiSpriteBitmap *v20[2]; // [rsp+40h] [rbp-A8h] BYREF
  int *v21; // [rsp+50h] [rbp-98h] BYREF
  int v22; // [rsp+58h] [rbp-90h] BYREF
  void *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = 0;
  *a4 = 0;
  v8 = 0;
  switch ( *(_DWORD *)a2 )
  {
    case 1:
      v9 = (const struct tagRECT *)((char *)a2 + 60);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxqNR2_EventWriteTransfer(
          *(_DWORD *)a2 - 1,
          (_DWORD)a2,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 3),
          *((_DWORD *)a2 + 14));
      CLogicalSurfaceHandleMap::FindBitmapNoRef(this, *((void **)a2 + 2), v20);
      if ( v20[0] )
      {
        v10 = *((_DWORD *)a2 + 14);
        v21 = &v22;
        v22 = 0;
        v11 = CRegion::TryAddRectangles((CRegion *)&v21, v9, v10);
        if ( v11 < 0 )
          ModuleFailFastForHRESULT((unsigned int)v11, retaddr);
        CGdiSpriteBitmap::AddDirtyRegion(v20[0], (struct CRegion *)&v21, 1);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v21);
      }
LABEL_7:
      *a4 = 1;
      return v8;
    case 2:
LABEL_19:
      *a4 = 1;
      return v8;
    case 3:
      v14 = (const struct tagRECT *)((char *)a2 + 44);
      v20[0] = (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 44);
      v15 = (unsigned __int64 *)((char *)a2 + 32);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0xxxqNR3_EventWriteTransfer(
          0,
          (_DWORD)a2,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 3),
          *v15,
          *((_DWORD *)a2 + 10));
        v14 = (const struct tagRECT *)v20[0];
      }
      v16 = (_QWORD *)*((_QWORD *)this + 11);
      while ( v16 != (_QWORD *)((char *)this + 80) )
      {
        v19 = (CGdiSpriteBitmap *)(v16 - 19);
        v16 = (_QWORD *)v16[1];
        if ( *((_QWORD *)v19 + 51) == *((_QWORD *)a2 + 3) )
        {
          CGdiSpriteBitmap::AddDxBltRects(v19, v14, *((_DWORD *)a2 + 10));
          break;
        }
      }
      if ( *v15 )
      {
        v17 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, *v15);
        v8 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xB2u, 0LL);
          return v8;
        }
      }
      goto LABEL_7;
  }
  if ( *(_DWORD *)a2 != 5 )
  {
    if ( *(_DWORD *)a2 == 6 )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xxq_EventWriteTransfer(
          1,
          (unsigned int)&EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDISYSMEM,
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 4),
          *((_DWORD *)a2 + 6));
      CLogicalSurfaceHandleMap::FindBitmapNoRef(this, *((void **)a2 + 2), v20);
      if ( v20[0] )
        CGdiSpriteBitmap::NotifyDirty(v20[0], *((_QWORD *)a2 + 4));
      goto LABEL_7;
    }
    goto LABEL_19;
  }
  v13 = (_QWORD *)*((_QWORD *)this + 26);
  if ( v13 && v13[7] == *((_QWORD *)a2 + 2) && *((_BYTE *)this + 220) )
  {
    (*(void (__fastcall **)(_QWORD *, const struct _D3DKMT_PRESENTHISTORYTOKEN *, unsigned int *))(*v13 + 40LL))(
      v13,
      a2,
      a3);
    *((_BYTE *)this + 220) = 0;
    v4 = 1;
  }
  *a4 = v4;
  return v8;
}
