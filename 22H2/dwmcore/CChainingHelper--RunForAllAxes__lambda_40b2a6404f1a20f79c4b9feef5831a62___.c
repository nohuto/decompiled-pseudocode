/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___ @ 0x180214D4C
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180215130 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x1802150D4 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_40b2a6404f1a20f79c4b9feef5831a62___(__int64 a1, __int64 a2)
{
  int i; // ebx
  unsigned int TemporaryConfigurationAxis; // eax
  _BYTE *v5; // r9
  __int64 v6; // r10
  int v7; // r8d
  __int64 v8; // r11
  __int64 result; // rax

  for ( i = 0; i < 3; ++i )
  {
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)i,
                                   a2,
                                   **(unsigned int **)(a2 + 16),
                                   *(_QWORD *)(a2 + 8));
    LOBYTE(v5) = *v5;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _BYTE *, int))(v6 + 200))(
               v8,
               TemporaryConfigurationAxis,
               0LL,
               v5,
               v7);
  }
  return result;
}
