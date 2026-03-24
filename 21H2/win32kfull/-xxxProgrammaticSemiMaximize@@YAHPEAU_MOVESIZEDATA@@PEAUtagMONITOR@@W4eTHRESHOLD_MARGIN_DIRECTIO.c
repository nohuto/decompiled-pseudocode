/*
 * XREFs of ?xxxProgrammaticSemiMaximize@@YAHPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020F97C
 * Callers:
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C020CEC0 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C002B73C (xxxMinMaximizeEx.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z @ 0x1C020D830 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAU_MOVESIZEDATA@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020E930 (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 */

__int64 __fastcall xxxProgrammaticSemiMaximize(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  struct tagWND **v5; // rdi
  struct tagWND *v6; // r9
  __int64 v7; // rcx
  int v8; // r8d
  unsigned int v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 Prop; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11[2]; // [rsp+40h] [rbp-20h] BYREF

  v9 = 0;
  Prop = 0LL;
  *(_OWORD *)v11 = 0LL;
  result = xxxForceSizeRecToDockTarget(a1, a3, a2, &v9, (struct tagRECT *)v11, (struct tagCHECKPOINT **)&Prop);
  if ( (_DWORD)result )
  {
    v5 = (struct tagWND **)(a1 + 16);
    if ( (v9 & 1) == 0 )
    {
      v6 = *v5;
      if ( (*(_BYTE *)(*((_QWORD *)*v5 + 5) + 31LL) & 0x20) == 0 )
      {
LABEL_8:
        *(_OWORD *)(a1 + 24) = *(_OWORD *)(a1 + 40);
        xxxCommitMoveSize(v6, (struct _MOVESIZEDATA *)a1);
        return 1LL;
      }
      v7 = (__int64)*v5;
      *(_OWORD *)v11 = *(_OWORD *)(a1 + 40);
      Prop = GetProp(v7, (unsigned __int16)WPP_MAIN_CB.DeviceQueue.Type, 1LL);
      *(_DWORD *)(Prop + 48) &= ~2u;
    }
    *(_DWORD *)(Prop + 48) = *(_DWORD *)(Prop + 48) & 0xFFFFFFF7 | (8 * (*(_BYTE *)(*((_QWORD *)*v5 + 5) + 233LL) & 1));
    *(_DWORD *)(Prop + 48) = *(_DWORD *)(Prop + 48) & 0xFFFFFFEF | (8 * (*(_BYTE *)(*((_QWORD *)*v5 + 5) + 233LL) & 2));
    v8 = (32 * (*(_DWORD *)(a1 + 340) & 4)) | 0x64;
    if ( (*(_DWORD *)(a1 + 340) & 0x20) == 0 )
      v8 = (32 * (*(_DWORD *)(a1 + 340) & 4)) | 0x24;
    xxxMinMaximizeEx(*v5, 9u, v8, 0LL, v11, 0LL);
    v6 = *v5;
    goto LABEL_8;
  }
  return result;
}
