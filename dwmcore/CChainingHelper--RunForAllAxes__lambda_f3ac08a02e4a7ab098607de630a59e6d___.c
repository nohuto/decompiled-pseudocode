/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___ @ 0x180272C20
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180272FD0 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180272F74 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___(__int64 a1, __int64 *a2)
{
  int v2; // edi
  __int64 v4; // rsi
  __int64 v5; // r9
  __int64 v6; // rbx
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v8; // r11
  __int64 result; // rax

  v2 = 0;
  v4 = 0LL;
  do
  {
    v5 = *a2;
    v6 = *(_QWORD *)(*a2 + 40);
    LOBYTE(v5) = (*(_BYTE *)(v4 + *a2) & 4) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)v2,
                                   a2,
                                   *(unsigned int *)(v4 + *a2 + 8),
                                   v5);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v8 + 200))(v6 + 64, TemporaryConfigurationAxis, 1LL);
    ++v2;
    v4 += 12LL;
  }
  while ( v2 < 3 );
  return result;
}
