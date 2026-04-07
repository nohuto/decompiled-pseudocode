/*
 * XREFs of ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800A0F28
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E71C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009FFE8 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180049B68 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x18009CD88 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJ_KPEAPEAVCPenBarrelKeyVisual@@@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800A5BF0 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800A5C90 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactManager::StartPenBarrelVisual(CContactManager *this, struct CPenContact *a2, __int64 a3)
{
  char *v3; // rsi
  unsigned int v4; // ebx
  CPenBarrelKeyVisual *v5; // rcx
  int Touch; // eax
  CContactManager *v9; // rcx
  struct CVisual *v10; // r8
  char v11; // al
  CPenBarrelKeyVisual *v12; // rcx

  v3 = (char *)a2 + 8;
  v4 = 0;
  v5 = (CPenBarrelKeyVisual *)*((_QWORD *)a2 + 1);
  if ( v5 )
  {
LABEL_7:
    CPenBarrelKeyVisual::Start(v5, (const struct tagPOINT *)((char *)a2 + 28), *((_DWORD *)a2 + 1), *(_DWORD *)a2);
    return v4;
  }
  Touch = CreateTouchVisual<CPenBarrelKeyVisual>(a3, (CTouchVisual **)a2 + 1);
  v4 = Touch;
  if ( Touch >= 0 )
  {
    v10 = *(struct CVisual **)v3;
    v11 = (*((_DWORD *)a2 + 6) & 0x10) != 0;
    if ( *(_BYTE *)(*(_QWORD *)v3 + 340LL) != v11 )
    {
      v12 = *(CPenBarrelKeyVisual **)v3;
      *((_BYTE *)v10 + 340) = v11;
      CPenBarrelKeyVisual::UpdateBarrelAlpha(v12);
      v10 = *(struct CVisual **)v3;
    }
    CContactManager::AddToTouchNode(v9, a3, v10);
    v5 = *(CPenBarrelKeyVisual **)v3;
    goto LABEL_7;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Touch, 0x84Bu);
  return v4;
}
