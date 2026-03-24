/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18009C4A8
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18009C96C (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180094C0C (--3@YAXPEAX@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x180098E60 (--$AppendRects@UtagRECT@@@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18009BC18 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x180178A24 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned int v2; // esi
  bool v3; // zf
  unsigned int v6; // r8d
  __int64 v7; // rdx
  signed __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  void *lpMem; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v13[18]; // [rsp+38h] [rbp-60h] BYREF

  v2 = 0;
  v3 = *(_DWORD *)a2 == 1;
  lpMem = v13;
  if ( v3 )
    v6 = *((_DWORD *)a2 + 14);
  else
    v6 = *((_DWORD *)a2 + 10);
  v13[0] = 0;
  v7 = 60LL;
  if ( *(_DWORD *)a2 != 1 )
    v7 = 44LL;
  CRegion::AppendRects<tagRECT>((const struct FastRegion::Internal::CRgnData **)&lpMem, (__int64)a2 + v7, v6);
  CGdiSpriteBitmap::AddDirtyRegion(this, (const struct FastRegion::Internal::CRgnData **)&lpMem, 1);
  if ( *(_DWORD *)a2 == 3 )
  {
    v9 = *((_QWORD *)a2 + 4);
    if ( v9 >= 0 )
    {
      if ( v9 )
      {
        v10 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
                (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 12) + 96LL),
                v9);
        v2 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x28Au, 0LL);
      }
    }
    else
    {
      *((_QWORD *)this + 17) = *((_QWORD *)this + 10);
      *((_BYTE *)this + 126) = 1;
      *((_QWORD *)this + 18) = *((_QWORD *)a2 + 4);
    }
  }
  if ( v13 != lpMem )
    operator delete(lpMem);
  return v2;
}
