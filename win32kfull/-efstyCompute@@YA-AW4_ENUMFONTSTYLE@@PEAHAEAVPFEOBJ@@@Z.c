/*
 * XREFs of ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C0004A68
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0003EB0 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C014CE5C (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?efstyCompute@PFEOBJ@@QEAA?AW4_ENUMFONTSTYLE@@XZ @ 0x1C0117CEC (-efstyCompute@PFEOBJ@@QEAA-AW4_ENUMFONTSTYLE@@XZ.c)
 */

__int64 __fastcall efstyCompute(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  result = PFEOBJ::efstyCompute(a2, a2, a1, a2);
  if ( *(_DWORD *)(v3 + 4LL * (int)result) )
    return (unsigned int)(_wcsicmp(
                            (const wchar_t *)(*(_QWORD *)(*(_QWORD *)v4 + 32LL)
                                            + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 32LL) + 8LL)),
                            (const wchar_t *)(*(_QWORD *)(*(_QWORD *)v4 + 32LL)
                                            + *(int *)(*(_QWORD *)(*(_QWORD *)v4 + 32LL) + 16LL))) != 0)
         + 4;
  *(_DWORD *)(v3 + 4LL * (int)result) = 1;
  return result;
}
