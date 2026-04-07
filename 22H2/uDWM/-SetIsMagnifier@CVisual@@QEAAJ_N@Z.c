/*
 * XREFs of ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800959FC
 * Callers:
 *     ?EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180027F14 (-EnsureTopLevelWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x18008C9AC (-OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetIsMagnifier(CVisual *this, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  LOBYTE(a3) = 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 16LL)
                                                          + 256LL))(
         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
         *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
         a3);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x1D4u);
  return v4;
}
