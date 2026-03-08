/*
 * XREFs of DpiValidateSpbResource @ 0x1C03A3748
 * Callers:
 *     DpCloseSpbResource @ 0x1C03A2DB0 (DpCloseSpbResource.c)
 *     DpReadSpbResource @ 0x1C03A3130 (DpReadSpbResource.c)
 *     DpSpbResourceIoControl @ 0x1C03A32A0 (DpSpbResourceIoControl.c)
 *     DpWriteSpbResource @ 0x1C03A3440 (DpWriteSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiValidateSpbResource(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 *a5)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct _EX_RUNDOWN_REF *v12; // rcx

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry4(0LL, 275LL, 21LL, a3, -1073741811LL);
    return 3221225485LL;
  }
  if ( a1
    && (v10 = *(_QWORD *)(a1 + 64)) != 0
    && *(_DWORD *)(v10 + 16) == 1953656900
    && (unsigned int)(*(_DWORD *)(v10 + 20) - 2) <= 1 )
  {
    v11 = a2 & -(__int64)(a2 != 0);
    if ( v11
      && *(_DWORD *)((a2 & -(__int64)(a2 != 0)) + 0x10) == 1953656900
      && *(_DWORD *)((a2 & -(__int64)(a2 != 0)) + 0x14) == 12
      && *(_QWORD *)((a2 & -(__int64)(a2 != 0)) + 0x20) == v10
      && *(_DWORD *)((a2 & -(__int64)(a2 != 0)) + 0x30) )
    {
      v12 = (struct _EX_RUNDOWN_REF *)(v11 + 24);
      if ( a4 )
      {
        ExWaitForRundownProtectionRelease(v12);
LABEL_14:
        *a5 = v11;
        return 0LL;
      }
      if ( ExAcquireRundownProtection(v12) )
        goto LABEL_14;
    }
    WdLogSingleEntry2(3LL, a3, a2);
    return 3221225712LL;
  }
  else
  {
    WdLogSingleEntry2(3LL, a3, a1);
    return 3221225711LL;
  }
}
