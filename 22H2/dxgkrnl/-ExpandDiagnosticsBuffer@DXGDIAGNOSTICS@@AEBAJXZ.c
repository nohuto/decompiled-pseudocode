/*
 * XREFs of ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x1C0045B24
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BC08 (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(DXGDIAGNOSTICS *this)
{
  unsigned int v1; // eax
  __int64 result; // rax
  POOL_TYPE v4; // r8d
  unsigned int v5; // esi
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  void *v16; // rcx

  v1 = *((_DWORD *)this + 5);
  if ( v1 == 1 )
    return 128LL;
  v4 = *((_DWORD *)this + 11);
  v5 = 2 * *((_DWORD *)this + 4);
  *((_DWORD *)this + 5) = v1 >> 1;
  v6 = (char *)operator new[](v5, 0x4B677844u, v4);
  v11 = v6;
  if ( v6 )
  {
    memmove(
      &v6[*((unsigned int *)this + 8)],
      (const void *)(*((unsigned int *)this + 8) + *((_QWORD *)this + 6)),
      (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 8)));
    v13 = *((_DWORD *)this + 9);
    if ( v13 < *((_DWORD *)this + 8) )
    {
      memmove(&v11[*((unsigned int *)this + 4)], *((const void **)this + 6), v13);
      *((_DWORD *)this + 9) += *((_DWORD *)this + 4);
    }
    v14 = *((_QWORD *)this + 1);
    if ( v14 )
    {
      v15 = *((_QWORD *)this + 6);
      if ( v14 < v15 + (unsigned __int64)*((unsigned int *)this + 8) )
        *((_QWORD *)this + 1) = &v11[v14 + *((unsigned int *)this + 4) - v15];
      else
        *((_QWORD *)this + 1) = &v11[v14 - v15];
    }
    v16 = (void *)*((_QWORD *)this + 6);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    *((_QWORD *)this + 6) = v11;
    result = 0LL;
    *((_DWORD *)this + 4) = v5;
  }
  else
  {
    v12 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = v5;
    WdLogEvent5_WdLowResource(v12);
    return 3221225626LL;
  }
  return result;
}
