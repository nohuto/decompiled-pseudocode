/*
 * XREFs of ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800432A8
 * Callers:
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043128 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x1800474F0 (-CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z @ 0x180047650 (-InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180097B60 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z @ 0x1800BB6FC (-RemoveUdwmDCompVisualFromUdwmTree@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18003DD8C (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CGlobalLightSet::ValidateUdwmDCompVisual(CGlobalLightSet *this, struct UdwmDcompVisual *a2)
{
  char v2; // di
  char v3; // al
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  HIDWORD(v6) = HIDWORD(this);
  v2 = 0;
  v3 = 0;
  LODWORD(v6) = 0;
  if ( *((_QWORD *)a2 + 2) && *((_QWORD *)a2 + 6) )
  {
    v4 = *((_QWORD *)a2 + 3);
    v6 = v4;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v3 = 1;
    if ( v4 )
      v2 = 1;
  }
  if ( (v3 & 1) != 0 )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return v2;
}
