/*
 * XREFs of BmlPinPathContentScaling @ 0x1C016DEBC
 * Callers:
 *     BmlPinNextBestTargetMode @ 0x1C016DC64 (BmlPinNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C03B9BCC (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C00087FC (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     BmlInternalTryPinningScaling @ 0x1C016DF60 (BmlInternalTryPinningScaling.c)
 *     ?GetAdapterDefaultScaling@VIDPN_MGR@@QEBA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ @ 0x1C01DD5A0 (-GetAdapterDefaultScaling@VIDPN_MGR@@QEBA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@XZ.c)
 */

__int64 __fastcall BmlPinPathContentScaling(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // r13
  int *v5; // rsi
  __int64 v6; // r15
  struct DMMVIDPNPRESENTPATH *Path; // rax
  unsigned int v8; // ebx
  int v9; // ebx
  __int64 result; // rax
  int v11; // edi
  VIDPN_MGR *v12; // rcx
  __int64 v13; // r12
  __int64 v14; // r8
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = a1;
  v3 = a3;
  v5 = (int *)(120LL * a3 + a1 + 16);
  v6 = v5[2];
  Path = DMMVIDPNTOPOLOGY::FindPath(
           (DMMVIDPNTOPOLOGY *)(a2 + 96),
           *(_DWORD *)(*(_QWORD *)v5 + 24LL),
           *(_DWORD *)(*(_QWORD *)v5 + 28LL));
  v8 = *((_DWORD *)Path + 30);
  if ( DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(Path) )
  {
    if ( (_DWORD)v6 == 5 )
    {
      result = BmlInternalTryPinningScaling(v5, a2, 5LL, v8);
      if ( (int)result >= 0 )
        return result;
      WdLogSingleEntry3(3LL, v15, a2, v3);
    }
    v9 = BmlInternalTryPinningScaling(v5, a2, 1LL, v8);
    if ( v9 < 0 )
    {
      WdLogSingleEntry4(3LL, v5[2], v15, a2, v3);
      return (unsigned int)v9;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v11 = -1071774970;
    if ( (unsigned int)(v6 - 2) > 3 && (_DWORD)v6 != 255
      || (v11 = BmlInternalTryPinningScaling(v5, a2, (unsigned int)v6, v8), v11 == -1071774970) )
    {
      if ( (dword_1C013D468 & 1) == 0 )
      {
        v12 = *(VIDPN_MGR **)(a2 + 48);
        dword_1C013D468 |= 1u;
        dword_1C013D410[0] = VIDPN_MGR::GetAdapterDefaultScaling(v12);
        dword_1C013D414 = 3;
        dword_1C013D418 = 4;
        dword_1C013D41C = 2;
      }
      v13 = 0LL;
      do
      {
        if ( (unsigned int)v13 >= 4 )
          break;
        v14 = (unsigned int)dword_1C013D410[v13];
        if ( (_DWORD)v14 != (_DWORD)v6 )
          v11 = BmlInternalTryPinningScaling(v5, a2, v14, v8);
        v13 = (unsigned int)(v13 + 1);
      }
      while ( v11 == -1071774970 );
    }
    if ( v11 < 0 )
    {
      ++v5[16];
      v5[18] = v11;
      if ( v11 != -1071774970 )
        WdLogSingleEntry4(3LL, v6, &v15, a2, v3);
    }
    return (unsigned int)v11;
  }
}
