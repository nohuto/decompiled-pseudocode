/*
 * XREFs of LockChildPages @ 0x1C03910F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 LockChildPages(__int64 a1, char a2, _DWORD *a3, int a4, ...)
{
  int v4; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdi
  int v12; // eax
  _BYTE v14[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v15; // [rsp+58h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-28h]
  _DWORD *v17; // [rsp+90h] [rbp+8h] BYREF
  va_list va; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = *(_DWORD *)(a1 + 424);
  if ( (v4 & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 608LL);
LABEL_3:
    v9 = v8 + 160;
    goto LABEL_7;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 608);
    goto LABEL_3;
  }
  v9 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)(v9 + 16), 0);
  DXGPUSHLOCK::AcquireShared(v15);
  v16 = 1;
  LODWORD(v11) = -1073741823;
  if ( *(_BYTE *)(v9 + 68) )
  {
    v17 = a3;
    LOBYTE(v10) = a2;
    *a3 = a4;
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64, int, _DWORD **, char *))qword_1C013D0C0)(
            *(_QWORD *)v9,
            0LL,
            0LL,
            v10,
            1,
            &v17,
            va);
    v11 = v12;
    if ( v12 >= 0 )
    {
      _InterlockedIncrement(&g_VgpuNumLockedChildRanges);
    }
    else
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmbChannelLockChildPages failed: 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  return (unsigned int)v11;
}
