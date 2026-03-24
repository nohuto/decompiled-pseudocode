/*
 * XREFs of _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DA08
 * Callers:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0034370 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0039AC8 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0037F54 (IAMThreadAccessGranted.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C003AEEC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C003C690 (_anonymous_namespace_--CheckImmersiveForegroundAccess.c)
 *     IsForegroundLocked @ 0x1C003D1C4 (IsForegroundLocked.c)
 *     WPP_RECORDER_SF_ @ 0x1C004D9D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F2B4 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F390 (WPP_RECORDER_SF_q.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C012C568 (IsImmersiveBandOrShellManaged.c)
 */

char __fastcall anonymous_namespace_::FAllowForegroundActivate(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // r9d
  char v16; // [rsp+28h] [rbp-20h]

  v5 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( !anonymous_namespace_::RemoveForegroundActivate(a1, a2, a3, a4) )
    return 0;
  v8 = grpdeskRitInput;
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
    || (v6 = *(_QWORD *)(gptiCurrent + 432LL), gpqForeground == v6)
    || (unsigned int)IsForegroundLocked() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_(v6, v8, 2, 17, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
    }
    return 0;
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v9 + 27) & 8) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v15 = 18;
LABEL_27:
    v16 = a1;
LABEL_33:
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(v9, v8, 2, v15, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids, v16);
    return 0;
  }
  if ( *(_DWORD *)(v9 + 236) == 15 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v15 = 19;
    goto LABEL_27;
  }
  if ( IAMThreadAccessGranted(gptiCurrent) || *(int *)(v5 + 12) < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v11, v10, 2, 20, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids);
    }
  }
  else
  {
    if ( (unsigned int)IsImmersiveBroker(v5)
      && (unsigned int)IsImmersiveBandOrShellManaged(a1)
      && (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 0x10) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v15 = 21;
LABEL_32:
        v16 = v5;
        goto LABEL_33;
      }
      return 0;
    }
    if ( (unsigned int)IsImmersiveBroker(v5) )
    {
      if ( gpqForeground )
      {
        v14 = *(_QWORD *)(gpqForeground + 120LL);
        if ( v14 )
        {
          if ( (unsigned int)IsImmersiveBandOrShellManaged(v14) )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v15 = 22;
              goto LABEL_32;
            }
            return 0;
          }
        }
      }
    }
    if ( !anonymous_namespace_::CheckImmersiveForegroundAccess(a1, 2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = 4;
        WPP_RECORDER_SF_qq(v13, v12, 2, 23, (__int64)&WPP_c5f688376d5d38c4c83ed2e0b189f019_Traceguids, v5, a1);
      }
      return 0;
    }
  }
  return 1;
}
