/*
 * XREFs of ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0223880
 * Callers:
 *     ?ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C0223A10 (-ProcessPointerPositionChange@OUTPUTDUPL_MGR@@QEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C03298A0 (-ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C01D24DC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0328448 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 */

void __fastcall OUTPUTDUPL_MGR::LogPointerPositionChangeParams(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2)
{
  OUTPUTDUPL_MGR *v4; // rcx
  UINT v5; // eax
  _DWORD v6[20]; // [rsp+20h] [rbp-68h] BYREF

  memset(v6, 0, 0x48uLL);
  OUTPUTDUPL_MGR::InitializePacketHeader(v4, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v6);
  v6[13] = a2->VidPnSourceId;
  v6[14] = a2->X;
  v6[15] = a2->Y;
  v5 = a2->Flags.Value & 1;
  v6[1] = 72;
  v6[16] = v5;
  v6[12] = 4;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v6, 1);
}
