/*
 * XREFs of MiDeleteSessionPdes @ 0x140200F38
 * Callers:
 *     MiUnloadSystemImage @ 0x1407F627C (MiUnloadSystemImage.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x1402D8C88 (MiReturnSystemCharges.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiGetSessionVm @ 0x14036C17C (MiGetSessionVm.c)
 */

__int64 MiDeleteSessionPdes()
{
  __int64 SessionVm; // rax
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // r10
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-68h]
  _OWORD v8[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  SessionVm = MiGetSessionVm();
  v1 = *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v4 = v2 << 25 >> 16 << 25 >> 16;
  v7 = v4;
  LOBYTE(v4) = 17;
  MiDeletePagablePteRange(SessionVm, v4, 0, v3 << 25 >> 16 << 25 >> 16, v7, 1, 0, (__int64)v8);
  v5 = *(_QWORD *)&v8[0];
  MiReturnCommit(v1, *(_QWORD *)&v8[0]);
  return MiReturnSystemCharges(v1, v5, 1LL);
}
