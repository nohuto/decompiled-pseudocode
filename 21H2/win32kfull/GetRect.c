/*
 * XREFs of GetRect @ 0x1C00688B4
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C004DF70 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     UT_GetParentDCClipBox @ 0x1C005F9E0 (UT_GetParentDCClipBox.c)
 *     xxxDrawWindowFrame @ 0x1C00638D4 (xxxDrawWindowFrame.c)
 *     xxxGetScrollBarInfo @ 0x1C0064F60 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C0065248 (CalcSBStuff.c)
 *     ?xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z @ 0x1C0078980 (-xxxSendDpiChangedMsgs@@YA_NPEAUtagWND@@PEAUtagRECT@@PEAUtagBWL@@G@Z.c)
 *     _GetWindowPlacement @ 0x1C007C658 (_GetWindowPlacement.c)
 *     UpdateCheckpoint @ 0x1C007C924 (UpdateCheckpoint.c)
 *     InternalGetRealClientRect @ 0x1C00B0758 (InternalGetRealClientRect.c)
 *     xxxDrawCaptionBar @ 0x1C00BAE5C (xxxDrawCaptionBar.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00CA7B4 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ParkIcon @ 0x1C00CBAB0 (ParkIcon.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z @ 0x1C016D756 (-GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z.c)
 *     SBCtlSetup @ 0x1C024155C (SBCtlSetup.c)
 *     ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C024AC80 (-MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00FD674 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00FD738 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetRect(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v6; // esi
  __int128 v7; // xmm0
  __int64 v8; // r9
  __int64 result; // rax
  int v10; // r8d
  __int64 v11; // rbp
  __int64 v12; // r8
  unsigned int *v13; // rdx
  unsigned int v14; // ecx
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v6 = a3 & 2;
  if ( (a3 & 2) != 0 )
    v7 = *(_OWORD *)(v3 + 88);
  else
    v7 = *(_OWORD *)(v3 + 104);
  v18 = v7;
  *(_OWORD *)a2 = v7;
  v8 = *(_QWORD *)(a1 + 40);
  result = *(_WORD *)(v8 + 42) & 0x2FFF;
  if ( (_DWORD)result == 669 )
    return result;
  v10 = a3 & 0x70;
  switch ( v10 )
  {
    case 32:
      v13 = (unsigned int *)(v8 + 88);
LABEL_11:
      v14 = v13[1];
      result = *v13;
      *(_DWORD *)a2 -= result;
      *(_DWORD *)(a2 + 8) -= result;
      *(_DWORD *)(a2 + 12) -= v14;
      *(_DWORD *)(a2 + 4) -= v14;
      return result;
    case 16:
      v13 = (unsigned int *)(v8 + 104);
      goto LABEL_11;
    case 64:
      v11 = *(_QWORD *)(a1 + 104);
      v12 = *(_QWORD *)(v11 + 40);
      result = *(_WORD *)(v12 + 42) & 0x2FFF;
      if ( (_DWORD)result != 669 )
      {
        v13 = (unsigned int *)(v12 + 104);
        if ( (((unsigned __int16)(*(_DWORD *)(v8 + 288) >> 8) ^ (unsigned __int16)(*(_DWORD *)(v12 + 288) >> 8)) & 0x1FF) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 104);
          v18 = *(_OWORD *)v13;
          LogicalToPhysicalInPlaceRectWithSubpixel(v15, &v18, 0LL);
          PhysicalToLogicalInPlaceRectWithSubpixel(a1, &v18, 0LL);
          v12 = *(_QWORD *)(v11 + 40);
          v13 = (unsigned int *)&v18;
        }
        if ( (*(_BYTE *)(v12 + 26) & 0x40) != 0 && v6 && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x40) != 0 )
        {
          v16 = v13[1];
          v17 = v13[2];
          *(_DWORD *)(a2 + 12) -= v16;
          *(_DWORD *)(a2 + 4) -= v16;
          result = v17 - *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 8) = v17 - *(_DWORD *)a2;
          *(_DWORD *)a2 = result;
          return result;
        }
        goto LABEL_11;
      }
      break;
  }
  return result;
}
