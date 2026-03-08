/*
 * XREFs of CmFcpInitializeChangeSubscription @ 0x140818A88
 * Callers:
 *     CmFcManagerRegisterFeatureConfigurationChangeNotification @ 0x140818CE8 (CmFcManagerRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140239ED0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall CmFcpInitializeChangeSubscription(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  v3 = a1 + 16;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 80) = 0LL;
  memset((void *)(a1 + 16), 0, 0x40uLL);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 16) = CmpWorkItemWrapper;
  *(_QWORD *)(v3 + 24) = v3;
  *(_DWORD *)(v3 + 40) = 0;
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 48) = CmFcpChangeSubscriptionWrapper;
  *(_DWORD *)(v3 + 44) = 4;
  *(_QWORD *)(v3 + 56) = a3;
  result = MmIsSessionAddress(a2);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a1 + 88) |= 1u;
    result = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    *(_DWORD *)(a1 + 92) = result;
  }
  *(_QWORD *)(a1 + 80) = a2;
  return result;
}
