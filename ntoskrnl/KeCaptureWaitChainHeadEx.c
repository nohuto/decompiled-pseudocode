/*
 * XREFs of KeCaptureWaitChainHeadEx @ 0x1402D3E54
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     ExpPrepareToWakeResourceShared @ 0x14033A9D0 (ExpPrepareToWakeResourceShared.c)
 *     ExpReleaseResourceForThreadLite @ 0x14033ABF0 (ExpReleaseResourceForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x1403C611C (ExpPrepareToWakeResourceExclusive.c)
 *     ExpPrepareToWakeFastResourceExclusive @ 0x140410920 (ExpPrepareToWakeFastResourceExclusive.c)
 *     ExpPrepareToWakeFastResourceShared @ 0x1404109F0 (ExpPrepareToWakeFastResourceShared.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall KeCaptureWaitChainHeadEx(_QWORD **a1, __int64 *a2, _QWORD *a3)
{
  _QWORD *result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  _QWORD *v10; // r8

  *a2 = 0LL;
  result = *a1;
  if ( *a1 )
  {
    if ( (_QWORD *)*result == result )
    {
      *a1 = 0LL;
    }
    else
    {
      *a1 = (_QWORD *)*result;
      v8 = (_QWORD *)*result;
      if ( *(_QWORD **)(*result + 8LL) != result )
        goto LABEL_13;
      v9 = (_QWORD *)result[1];
      if ( (_QWORD *)*v9 != result )
        goto LABEL_13;
      *v9 = v8;
      v8[1] = v9;
    }
    v6 = *a2;
    v7 = result[2];
    if ( !*a2 )
    {
      result[1] = result;
      *result = result;
LABEL_6:
      *a2 = (__int64)result;
      goto LABEL_7;
    }
    v10 = *(_QWORD **)(v6 + 8);
    if ( *v10 == v6 )
    {
      *result = v6;
      result[1] = v10;
      *v10 = result;
      *(_QWORD *)(v6 + 8) = result;
      goto LABEL_6;
    }
LABEL_13:
    __fastfail(3u);
  }
  v7 = 0LL;
LABEL_7:
  if ( a3 )
    *a3 = v7;
  return result;
}
