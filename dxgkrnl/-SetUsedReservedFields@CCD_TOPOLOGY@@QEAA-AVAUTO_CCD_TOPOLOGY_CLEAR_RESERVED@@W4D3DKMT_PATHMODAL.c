/*
 * XREFs of ?SetUsedReservedFields@CCD_TOPOLOGY@@QEAA?AVAUTO_CCD_TOPOLOGY_CLEAR_RESERVED@@W4D3DKMT_PATHMODALITY_RESERVED_FIELD@@@Z @ 0x1C01BD33C
 * Callers:
 *     ?CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z @ 0x1C01BD298 (-CollectActivePaths@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJ_N@Z.c)
 *     ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DBC1C (-RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C03B7ED0 (-CollectPathsFromLegacyVidPn@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@QEAAJPEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CCD_TOPOLOGY::SetUsedReservedFields(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // r10
  unsigned int i; // r11d
  _QWORD *result; // rax
  __int64 v7; // rax
  __int64 v8; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  for ( i = 0; i < *(unsigned __int16 *)(v3 + 20); v3 = *(_QWORD *)(a1 + 64) )
  {
    v7 = i++;
    v8 = 296 * v7;
    *(_OWORD *)(v8 + v3 + 312) = 0LL;
    *(_OWORD *)(v8 + v3 + 328) = 0LL;
    *(_QWORD *)(v8 + v3 + 344) = 0LL;
    *(_DWORD *)(*(_QWORD *)(a1 + 64) + v8 + 312) = a3;
  }
  *(_DWORD *)(a1 + 88) = a3;
  result = a2;
  *a2 = a1;
  return result;
}
