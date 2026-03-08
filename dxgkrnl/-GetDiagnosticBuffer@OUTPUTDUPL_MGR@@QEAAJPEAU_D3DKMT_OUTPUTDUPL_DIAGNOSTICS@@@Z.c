/*
 * XREFs of ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C03276B0
 * Callers:
 *     OutputDuplGetDiagnosticBuffer @ 0x1C032C050 (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C004FF30 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C0327E34 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDiagnosticBuffer(
        DXGDIAGNOSTICS **this,
        struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  unsigned int *v5; // r8
  unsigned int v6; // ecx

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  if ( *(_DWORD *)a2 || !this[10] )
  {
    *((_DWORD *)a2 + 1) = 0;
  }
  else
  {
    v5 = (unsigned int *)((char *)a2 + 4);
    v6 = g_IsInternalReleaseOrDbg != 0 ? 0x80000 : 0;
    if ( *((_DWORD *)a2 + 1) < v6 )
    {
      *v5 = v6;
      return 1075707914LL;
    }
    DXGDIAGNOSTICS::ReadDiagnostics(this[10], (unsigned __int8 *)a2 + 8, v5, 0xFFFFFFFF);
  }
  return 0LL;
}
