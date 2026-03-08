/*
 * XREFs of ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@@Z @ 0x180262038
 * Callers:
 *     ?CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180263350 (-CalculateInContactValueWorker@CInteractionTrackerPositionAnimation@@MEAAJPEAVCExpressionValueSt.c)
 *     ?CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack@@_KMPEAM@Z @ 0x180263A80 (-CalculateInContactValueWorker@CInteractionTrackerScaleAnimation@@MEAAJPEAVCExpressionValueStack.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x180130A3E (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18022E784 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18023207C (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18023213C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@55555555555@Z @ 0x180261074 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U3@U3@U3.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180261C10 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ?UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z @ 0x180261F74 (-UpdateChainingDirection@CScrollAnimation@@AEAAXM@Z.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x180271E58 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z @ 0x180272E4C (-ChainToParent@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180272F98 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall CScrollAnimation::UpdateValueWithChaining(__int64 a1, double a2, float a3, unsigned int a4)
{
  __m128 v5; // xmm7
  struct CInteractionTracker *InteractionTracker; // rsi
  CScrollAnimation *v8; // rcx
  struct CInteractionTracker *v9; // rax
  bool v10; // bl
  struct CChainingHelper *ActiveChainingHelper; // r14
  InteractionSourceManager *v12; // rsi
  unsigned int v13; // r13d
  InteractionSourceManager *v14; // rcx
  unsigned __int8 ShouldChainForAxis; // r12
  InteractionSourceManager *v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // ecx
  char v19; // al
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // cl
  __int64 v26; // r9
  InteractionSourceManager *v27; // rcx
  struct CManipulation *ActiveManipulation; // rax
  __int64 v29; // rcx
  bool ShouldChainAllForAxis; // al
  __int64 v31; // rcx
  int v32; // edx
  int v33; // edx
  __int64 v34; // r9
  InteractionSourceManager *v35; // rcx
  struct CManipulation *v36; // rax
  __int64 v37; // rcx
  bool v38; // al
  int v39; // ecx
  __int64 v40; // r9
  InteractionSourceManager *v41; // rcx
  struct CManipulation *v42; // rax
  __int64 v43; // rcx
  bool v44; // al
  int v45; // ecx
  __int64 v46; // r9
  InteractionSourceManager *v47; // rcx
  struct CManipulation *v48; // rax
  __int64 v49; // rcx
  bool v50; // al
  __int64 v51; // r9
  InteractionSourceManager *v52; // rcx
  struct CManipulation *v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r9
  InteractionSourceManager *v56; // rcx
  struct CManipulation *v57; // rax
  __int64 v58; // rcx
  float v59; // xmm0_4
  float v60; // xmm3_4
  __int64 v61; // rcx
  int v63; // [rsp+28h] [rbp-B9h]
  int v64; // [rsp+9Ch] [rbp-45h] BYREF
  int v65; // [rsp+A0h] [rbp-41h] BYREF
  int v66; // [rsp+A4h] [rbp-3Dh] BYREF
  int v67; // [rsp+A8h] [rbp-39h] BYREF
  int v68; // [rsp+ACh] [rbp-35h] BYREF
  int v69; // [rsp+B0h] [rbp-31h] BYREF
  int v70; // [rsp+B4h] [rbp-2Dh] BYREF
  float v71; // [rsp+B8h] [rbp-29h] BYREF
  unsigned int v72; // [rsp+BCh] [rbp-25h] BYREF
  int v73; // [rsp+C0h] [rbp-21h] BYREF
  _BYTE v74[12]; // [rsp+C4h] [rbp-1Dh] BYREF
  wchar_t *v75; // [rsp+D0h] [rbp-11h] BYREF
  __int64 v76; // [rsp+D8h] [rbp-9h] BYREF
  struct CInteractionTracker *v77; // [rsp+E0h] [rbp-1h]

  v5 = *(__m128 *)&a2;
  InteractionTracker = CScrollAnimation::GetInteractionTracker((CScrollAnimation *)a1);
  v77 = InteractionTracker;
  v9 = CScrollAnimation::GetInteractionTracker(v8);
  v10 = 0;
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((struct CInteractionTracker *)((char *)v9 + 200));
  if ( ActiveChainingHelper )
  {
    v12 = (struct CInteractionTracker *)((char *)InteractionTracker + 200);
    v13 = 0;
    if ( InteractionSourceManager::HasActiveManipulation(v12) )
      v13 = *((_DWORD *)InteractionSourceManager::TryGetActiveManipulation(v14) + 105);
    ShouldChainForAxis = 0;
    *(_QWORD *)&v74[4] = InteractionSourceManager::TryGetActiveManipulation(v12);
    if ( InteractionSourceManager::TryGetActiveChainingHelper(v16) && *(_QWORD *)&v74[4] )
      ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v17, *(_DWORD *)(a1 + 340), *(__int64 *)&v74[4], 0);
    if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v18 = *(unsigned __int8 *)(a1 + 452);
      v19 = *(_BYTE *)(a1 + 452);
      v72 = a4;
      v64 = v19 & 1;
      v66 = ShouldChainForAxis;
      v67 = LODWORD(a2);
      v68 = *(_DWORD *)(a1 + 448);
      v69 = *(_DWORD *)(a1 + 440);
      v70 = *(_DWORD *)(a1 + 444);
      v71 = a3;
      v73 = *(_DWORD *)(a1 + 436);
      v20 = *(_DWORD *)(a1 + 432);
      v65 = (v18 >> 1) & 1;
      v21 = *(_DWORD *)(a1 + 340);
      *(_QWORD *)v74 = __PAIR64__(v20, v13);
      v75 = (wchar_t *)ScrollAxisToString(v21);
      v76 = a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v22,
        byte_18037E98C,
        v23,
        v24,
        (__int64)&v76,
        &v75,
        (__int64)&v74[4],
        (__int64)v74,
        (__int64)&v73,
        (__int64)&v72,
        (__int64)&v71,
        (__int64)&v70,
        (__int64)&v69,
        (__int64)&v68,
        (__int64)&v67,
        (__int64)&v66,
        (__int64)&v65,
        (__int64)&v64);
    }
    v25 = *(_BYTE *)(a1 + 452);
    if ( (v25 & 2) == 0 && v13 == 2 )
    {
      if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
        && InteractionSourceManager::HasActiveManipulation(v12) )
      {
        ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v27);
        ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(
                                  v29,
                                  *(_DWORD *)(a1 + 340),
                                  (__int64)ActiveManipulation);
      }
      else
      {
        ShouldChainAllForAxis = 0;
      }
      LOBYTE(v26) = ShouldChainForAxis;
      LOBYTE(v63) = ShouldChainAllForAxis;
      CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
        ActiveChainingHelper,
        *(unsigned int *)(a1 + 340),
        a4,
        v26,
        v63);
      v31 = 3LL * *(int *)(a1 + 340);
      *((_BYTE *)ActiveChainingHelper + 4 * v31) &= 0xFAu;
      *((_DWORD *)ActiveChainingHelper + v31 + 2) = 0;
      *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
      *(_BYTE *)(a1 + 452) |= 2u;
      v25 = *(_BYTE *)(a1 + 452);
    }
    v32 = *(_DWORD *)(a1 + 432);
    if ( v32 )
    {
      v33 = v32 - 2;
      if ( !v33 )
      {
        CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, a3);
        v39 = *(_DWORD *)(a1 + 436);
        if ( v39 && ShouldChainForAxis )
        {
          if ( ((v39 - 1) & 0xFFFFFFFD) == 0 && a4 == v39 && (float)((float)(a3 - *(float *)(a1 + 440)) > 0.0) < 0.0 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
              && InteractionSourceManager::HasActiveManipulation(v12) )
            {
              v42 = InteractionSourceManager::TryGetActiveManipulation(v41);
              v44 = CInteractionTracker::ShouldChainAllForAxis(v43, *(_DWORD *)(a1 + 340), (__int64)v42);
            }
            else
            {
              v44 = 0;
            }
            LOBYTE(v40) = v44;
            CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 340), a4, v40);
          }
          v45 = *(_DWORD *)(a1 + 436);
          if ( (unsigned int)(v45 - 2) <= 1 && a4 == v45 && (float)((float)(a3 - *(float *)(a1 + 440)) > 0.0) > 0.0 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
              && InteractionSourceManager::HasActiveManipulation(v12) )
            {
              v48 = InteractionSourceManager::TryGetActiveManipulation(v47);
              v50 = CInteractionTracker::ShouldChainAllForAxis(v49, *(_DWORD *)(a1 + 340), (__int64)v48);
            }
            else
            {
              v50 = 0;
            }
            LOBYTE(v46) = v50;
            CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 340), a4, v46);
          }
          if ( !a4 )
          {
            if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
              && InteractionSourceManager::HasActiveManipulation(v12) )
            {
              v53 = InteractionSourceManager::TryGetActiveManipulation(v52);
              v10 = CInteractionTracker::ShouldChainAllForAxis(v54, *(_DWORD *)(a1 + 340), (__int64)v53);
            }
            LOBYTE(v51) = ShouldChainForAxis;
            LOBYTE(v63) = v10;
            CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
              ActiveChainingHelper,
              *(unsigned int *)(a1 + 340),
              0LL,
              v51,
              v63);
            goto LABEL_70;
          }
        }
        else
        {
          if ( !a4 || !ShouldChainForAxis )
          {
            if ( (*(_BYTE *)(a1 + 452) & 1) == 0 )
            {
              v59 = *(float *)(a1 + 448);
              if ( v59 != 0.0 )
              {
                v60 = a3 - *(float *)(a1 + 440);
                if ( (float)(v60 > 0.0) != (float)(v59 > 0.0) && v60 != 0.0 )
                {
                  v61 = 3LL * *(int *)(a1 + 340);
                  *((_BYTE *)ActiveChainingHelper + 4 * v61) &= 0xFAu;
                  *((_DWORD *)ActiveChainingHelper + v61 + 2) = 0;
                  *((_BYTE *)ActiveChainingHelper + 36) |= 2u;
                  *(_DWORD *)(a1 + 448) = 0;
                }
              }
            }
            goto LABEL_67;
          }
          if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
            && InteractionSourceManager::HasActiveManipulation(v12) )
          {
            v57 = InteractionSourceManager::TryGetActiveManipulation(v56);
            v10 = CInteractionTracker::ShouldChainAllForAxis(v58, *(_DWORD *)(a1 + 340), (__int64)v57);
          }
          LOBYTE(v55) = v10;
          CChainingHelper::ChainToParent(ActiveChainingHelper, *(unsigned int *)(a1 + 340), a4, v55);
        }
LABEL_69:
        v5 = CInteractionTracker::ClampValueToBoundary((__int64)v77, *(unsigned int *)(a1 + 340), a2);
LABEL_70:
        *(float *)(a1 + 444) = a3;
        *(_DWORD *)(a1 + 436) = a4;
        *(_DWORD *)(a1 + 432) = v13;
        return v5;
      }
      if ( v33 != 1 )
        goto LABEL_67;
      if ( *(_DWORD *)(a1 + 436) && ShouldChainForAxis )
      {
        if ( v13 == 2 )
        {
          if ( InteractionSourceManager::TryGetActiveChainingHelper(v12)
            && InteractionSourceManager::HasActiveManipulation(v12) )
          {
            v36 = InteractionSourceManager::TryGetActiveManipulation(v35);
            v38 = CInteractionTracker::ShouldChainAllForAxis(v37, *(_DWORD *)(a1 + 340), (__int64)v36);
          }
          else
          {
            v38 = 0;
          }
          LOBYTE(v34) = ShouldChainForAxis;
          LOBYTE(v63) = v38;
          CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
            ActiveChainingHelper,
            *(unsigned int *)(a1 + 340),
            a4,
            v34,
            v63);
          goto LABEL_66;
        }
LABEL_67:
        if ( !a4 || !ShouldChainForAxis )
          goto LABEL_70;
        goto LABEL_69;
      }
      if ( v13 != 2 )
        goto LABEL_67;
      *(_BYTE *)(a1 + 452) = v25 | 1;
    }
    else
    {
      *(_BYTE *)(a1 + 452) = v25 | 1;
      if ( v13 != 2 )
        goto LABEL_67;
    }
    *(_DWORD *)(a1 + 440) = *(_DWORD *)(a1 + 444);
LABEL_66:
    CScrollAnimation::UpdateChainingDirection((CScrollAnimation *)a1, a3);
    goto LABEL_67;
  }
  return v5;
}
