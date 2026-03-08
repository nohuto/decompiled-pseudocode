/*
 * XREFs of ?AcquireCachedModeInfoFromTargetMode@DMMVIDPNTARGETMODESET@@QEAAJPEBVDMMVIDPNTARGETMODE@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C03B5B24
 * Callers:
 *     ?FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@EEEPEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C03B0840 (-FindClosestTargetMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEBU_D3DKMT_DISPLAYMODE@@.c)
 * Callees:
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0002908 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@?$Set@VDMMVIDPNPRESENTPATH@@@@@Z @ 0x1C0069DCC (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDPN_PRESENT_PATH@@@-$Set@VDMMVIDPNPRESENTPATH@@@@.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AcquireCachedModeInfoFromTargetMode(
        DMMVIDPNTARGETMODESET *this,
        const struct DMMVIDPNTARGETMODE *a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  unsigned int v3; // ebx
  void *Instance; // rax
  char *v9; // rcx
  __int128 v10; // xmm0
  _DWORD *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a3 )
    WdLogSingleEntry0(1LL);
  *a3 = 0LL;
  if ( *((_BYTE *)this + 136) )
  {
    if ( a2 )
    {
      v11 = 0LL;
      Instance = (void *)Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance((__int64)a2);
      auto_ptr<Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>>::reset((void **)&v11, Instance);
      if ( v11 )
      {
        v9 = (char *)(v11 + 4);
        v11[4] = *((_DWORD *)a2 + 6);
        v10 = *(_OWORD *)((char *)a2 + 72);
        *a3 = (const struct _D3DKMDT_VIDPN_TARGET_MODE *)v9;
        *(_OWORD *)(v9 + 8) = v10;
        *(_OWORD *)(v9 + 24) = *(_OWORD *)((char *)a2 + 88);
        *(_OWORD *)(v9 + 40) = *(_OWORD *)((char *)a2 + 104);
        *((_QWORD *)v9 + 7) = *((_QWORD *)a2 + 15);
      }
      else
      {
        WdLogSingleEntry1(6LL, this);
        v3 = -1073741801;
      }
      operator delete(0LL);
      return v3;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      return 3223192337LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192352LL;
  }
}
