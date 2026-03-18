/*
 * XREFs of ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x1C016CF38
 * Callers:
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x1C016CCBC (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1C03BB214 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z @ 0x1C016D03C (-FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C017CDCC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::LogFunctionalizePacket(CCD_TOPOLOGY *this, int a2)
{
  unsigned int v4; // esi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v5; // rax
  unsigned int v6; // edi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v7; // rbx
  unsigned int CurrentProcessSessionId; // eax

  v4 = (*(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) << 6) + 56;
  v5 = (struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *)operator new[](v4, 0x63644356u, 256LL);
  v6 = 0;
  v7 = v5;
  if ( v5 )
  {
    CCD_TOPOLOGY::FillFunctionalizePacket(this, v5, v4);
    *((_DWORD *)v7 + 13) = a2;
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
    DxgkWriteDiagEntry(v7, CurrentProcessSessionId);
    operator delete(v7);
  }
  else
  {
    WdLogSingleEntry1(6LL, *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL));
    return (unsigned int)-1073741801;
  }
  return v6;
}
