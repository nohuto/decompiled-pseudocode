/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___ @ 0x180272BB0
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180272FD0 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180272F74 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___(__int64 a1, __int64 a2)
{
  int i; // ebx
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v5; // r10
  _BYTE *v6; // r9
  __int64 v7; // r11
  int v8; // r8d
  __int64 result; // rax

  for ( i = 0; i < 3; ++i )
  {
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)i,
                                   a2,
                                   **(unsigned int **)(a2 + 16),
                                   *(_QWORD *)(a2 + 8));
    LOBYTE(v6) = *v6;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, int))(v5 + 200))(
               v7 + 64,
               TemporaryConfigurationAxis,
               0LL,
               v6,
               v8);
  }
  return result;
}
