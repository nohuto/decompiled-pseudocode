/*
 * XREFs of ??1COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@XZ @ 0x1C0020B80
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C020EC30 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020F03C (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::COUNT_TICKS_IN_SCOPE::~COUNT_TICKS_IN_SCOPE(DXGGLOBAL::COUNT_TICKS_IN_SCOPE *this)
{
  ULONG v2; // eax
  ULONG v3; // edx
  ULONG v4; // r8d
  ULONG UserTime; // [rsp+30h] [rbp+8h] BYREF

  UserTime = 0;
  v2 = KeQueryRuntimeThread(KeGetCurrentThread(), &UserTime);
  v3 = *((_DWORD *)this + 2);
  v4 = v2 - v3;
  if ( v3 > v2 )
    --v4;
  _InterlockedExchangeAdd64(*(volatile signed __int64 **)this, v4);
}
