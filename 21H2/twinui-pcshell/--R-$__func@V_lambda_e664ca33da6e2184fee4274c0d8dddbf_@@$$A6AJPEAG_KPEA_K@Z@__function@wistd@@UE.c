/*
 * XREFs of ??R?$__func@V_lambda_e664ca33da6e2184fee4274c0d8dddbf_@@$$A6AJPEAG_KPEA_K@Z@__function@wistd@@UEAAJ$$QEAPEAG$$QEA_K$$QEAPEA_K@Z @ 0x180160000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801B1218 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_e664ca33da6e2184fee4274c0d8dddbf_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::operator()(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned __int64 **a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int PersistedRegistryLocationW; // eax
  unsigned int v6; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a4;
  PersistedRegistryLocationW = GetPersistedRegistryLocationW(
                                 **(_QWORD **)(a1 + 8),
                                 **(_QWORD **)(a1 + 16),
                                 *a2,
                                 2 * (unsigned int)*a3);
  v6 = 0;
  if ( !PersistedRegistryLocationW || PersistedRegistryLocationW == 234 )
    *v4 = (unsigned __int64)v9 >> 1;
  else
    return (unsigned int)wil::details::in1diag3::Return_Win32(
                           retaddr,
                           (void *)0x12,
                           (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\StateSepUtil.h",
                           (const char *)PersistedRegistryLocationW,
                           (unsigned int)&v9);
  return v6;
}
