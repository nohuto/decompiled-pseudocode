__int64 __fastcall zzzMNFadeSelection(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  _DWORD *v7; // r9
  HDC v8; // rsi
  __int64 DCEx; // rbx
  _QWORD v11[2]; // [rsp+60h] [rbp-38h] BYREF
  struct tagRECT v12; // [rsp+70h] [rbp-28h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v11, 0LL);
  if ( gbDisableAlpha
    || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000400) != 0x80000400
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 1
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 4
    || CInputGlobals::WasLastInputJournalling(gpInputGlobals) )
  {
    goto LABEL_12;
  }
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    v4 = **(_QWORD **)a1;
  v5 = MNGetPopupFromMenu(v4, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v11, v5);
  if ( !*(_QWORD *)v11[0]
    || (v6 = *(_QWORD *)(*(_QWORD *)v11[0] + 16LL)) == 0
    || (v7 = *(_DWORD **)a2,
        v12.left = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 104LL) + *(_DWORD *)(*(_QWORD *)a2 + 64LL),
        v12.top = v7[17] + *(_DWORD *)(*(_QWORD *)(v6 + 40) + 108LL),
        v12.right = v12.left + v7[18],
        v12.bottom = v12.top + v7[19],
        (v8 = CreateFadeInternal(
                0LL,
                &v12,
                0x15Eu,
                (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) & 0xF) == 0 ? 0x100 : 0,
                *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL))) == 0LL) )
  {
LABEL_12:
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11);
    return 0LL;
  }
  else
  {
    DCEx = _GetDCEx(v6, 0LL, 1073807360LL);
    NtGdiBitBltInternal(
      v8,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)a2 + 72LL),
      *(_DWORD *)(*(_QWORD *)a2 + 76LL),
      DCEx,
      *(_DWORD *)(*(_QWORD *)a2 + 64LL),
      *(_DWORD *)(*(_QWORD *)a2 + 68LL),
      13369376,
      0,
      0);
    _ReleaseDC(DCEx);
    zzzShowFade();
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v11);
    return 1LL;
  }
}
