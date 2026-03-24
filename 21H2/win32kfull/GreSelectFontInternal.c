/*
 * XREFs of GreSelectFontInternal @ 0x1C016D258
 * Callers:
 *     NtGdiSelectFont @ 0x1C0045F00 (NtGdiSelectFont.c)
 *     GreSelectFont @ 0x1C0045F20 (GreSelectFont.c)
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008EFE0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?CleanupRoutine@?$HmgShareLockResult@VLFONT@@@@QEAAXXZ @ 0x1C016D20C (-CleanupRoutine@-$HmgShareLockResult@VLFONT@@@@QEAAXXZ.c)
 */

__int64 __fastcall GreSelectFontInternal(HDC a1, __int64 a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rcx
  struct LFONT *v9; // rcx
  struct LFONT *v11; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v12[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[7]; // [rsp+48h] [rbp-38h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v7 = v13[0];
  if ( v13[0] )
  {
    if ( !a3 )
    {
      if ( (*(_DWORD *)(HmgPentryFromPobj(v13[0]) + 8) & 0xFFFFFFFE) == 0 )
        goto LABEL_13;
      v7 = v13[0];
    }
    v8 = *(__int64 **)(v7 + 152);
    if ( v8 )
      v5 = *v8;
    if ( a2 != v5 )
    {
      LOBYTE(v6) = 10;
      v11 = (struct LFONT *)HmgShareLockCheck(a2, v6);
      memset(v12, 0, sizeof(v12));
      PushThreadGuardedObject(
        v12,
        &v11,
        UnexpectedThreadTerminationHandler<HmgShareLockResult<LFONT>>::OnUnexpectedThreadTerminationStatic);
      if ( !v11 || (*(_BYTE *)(HmgPentryFromPobj(v11) + 15) & 2) != 0 )
      {
        v5 = 0LL;
      }
      else
      {
        DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(*(struct LFONT **)(v13[0] + 152LL));
        v9 = v11;
        v11 = 0LL;
        *(_QWORD *)(v13[0] + 152LL) = v9;
        *(_QWORD *)(*(_QWORD *)(v13[0] + 976LL) + 296LL) = a2;
        *(_QWORD *)(v13[0] + 1752LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 152LL) |= 0x10u;
        *(_DWORD *)(*(_QWORD *)(v13[0] + 976LL) + 152LL) &= ~0x20u;
      }
      HmgShareLockResult<LFONT>::CleanupRoutine(&v11);
      PopThreadGuardedObject(v12);
    }
  }
LABEL_13:
  DCOBJ::~DCOBJ((DCOBJ *)v13);
  return v5;
}
