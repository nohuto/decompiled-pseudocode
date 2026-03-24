/*
 * XREFs of ??0COUNT_TICKS_IN_SCOPE@DXGGLOBAL@@QEAA@PEAT_LARGE_INTEGER@@@Z @ 0x1C0001A24
 * Callers:
 *     ?GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C00E1214 (-GetUniqueModes@MODE_UNION_LIST@@QEAAJ_KPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00E12BC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     <none>
 */

DXGGLOBAL::COUNT_TICKS_IN_SCOPE *__fastcall DXGGLOBAL::COUNT_TICKS_IN_SCOPE::COUNT_TICKS_IN_SCOPE(
        DXGGLOBAL::COUNT_TICKS_IN_SCOPE *this,
        union _LARGE_INTEGER *a2)
{
  ULONG UserTime; // [rsp+30h] [rbp+8h] BYREF

  UserTime = 0;
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = KeQueryRuntimeThread(KeGetCurrentThread(), &UserTime);
  return this;
}
