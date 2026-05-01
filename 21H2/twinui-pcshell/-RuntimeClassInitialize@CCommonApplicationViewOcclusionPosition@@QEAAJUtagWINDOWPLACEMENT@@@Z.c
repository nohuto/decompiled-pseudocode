/*
 * XREFs of ?RuntimeClassInitialize@CCommonApplicationViewOcclusionPosition@@QEAAJUtagWINDOWPLACEMENT@@@Z @ 0x1802E6B30
 * Callers:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1802D3FAC (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUta.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1804587AC (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 * Callees:
 *     ?s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA?AW4ARRANGEMENT_BASED_VIEW_STATE@@I@Z @ 0x1802F14A4 (-s_GetStateFromShowCommand@CCommonApplicationViewOcclusionPositionImpl@@KA-AW4ARRANGEMENT_BASED_.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CCommonApplicationViewOcclusionPosition::RuntimeClassInitialize(
        CCommonApplicationViewOcclusionPosition *this,
        struct tagWINDOWPLACEMENT *a2)
{
  __int128 v2; // xmm0
  int StateFromShowCommand; // eax
  _DWORD *v4; // r8
  __int128 v6; // [rsp+20h] [rbp-60h]
  __int128 v7; // [rsp+30h] [rbp-50h]
  struct tagWINDOWPLACEMENT v8; // [rsp+50h] [rbp-30h]

  v8 = *a2;
  LODWORD(v6) = HIDWORD(*(_QWORD *)&a2->length);
  DWORD1(v6) = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&a2->length, 8));
  *((_QWORD *)&v6 + 1) = a2->ptMinPosition;
  *(_QWORD *)&v7 = *(_OWORD *)&a2->ptMinPosition.y >> 32;
  *(_OWORD *)((char *)this + 60) = v6;
  *((_QWORD *)&v7 + 1) = *(_QWORD *)&v8.rcNormalPosition.left;
  *(_OWORD *)((char *)this + 76) = v7;
  *(_QWORD *)((char *)this + 92) = *(_OWORD *)&_mm_unpackhi_pd(
                                                 (__m128d)v8.rcNormalPosition,
                                                 (__m128d)v8.rcNormalPosition);
  v2 = *(_OWORD *)((char *)this + 84);
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = v2;
  StateFromShowCommand = CCommonApplicationViewOcclusionPositionImpl::s_GetStateFromShowCommand(
                           *((unsigned int *)this + 16),
                           a2,
                           this);
  v4[12] = StateFromShowCommand;
  v4[14] = (v4[15] >> 1) & 1;
  return 0LL;
}
