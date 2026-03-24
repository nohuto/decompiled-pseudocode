/*
 * XREFs of ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C014B8D0
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C014AC60 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C014ADAC (-bSetup@XCLIPOBJ@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::bRecordRun(XCLIPOBJ *this, int *a2)
{
  __int64 v2; // r8
  int v3; // r9d
  int v4; // eax

  v2 = *((_QWORD *)this + 18);
  v3 = *a2;
  v4 = *(_DWORD *)(v2 + 28);
  if ( *a2 <= v4 )
    return 1LL;
  if ( v4 == *(_DWORD *)(v2 + 56) )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 48) - 4LL) = v3;
    goto LABEL_5;
  }
  if ( **(_DWORD **)(v2 + 40) != *(_DWORD *)(v2 + 36) )
  {
    *(_DWORD *)(*(_QWORD *)(v2 + 48) + 4LL) = v3;
    **(_DWORD **)(*((_QWORD *)this + 18) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 28LL) + 1;
    ++**(_DWORD **)(*((_QWORD *)this + 18) + 40LL);
    *(_QWORD *)(*((_QWORD *)this + 18) + 48LL) += 8LL;
LABEL_5:
    *(_DWORD *)(*((_QWORD *)this + 18) + 56LL) = *a2;
    return 1LL;
  }
  *(_DWORD *)(v2 + 32) = v3;
  return 0LL;
}
