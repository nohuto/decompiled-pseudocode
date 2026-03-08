/*
 * XREFs of NtUserGetInputLocaleInfo @ 0x1C0085CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     HKLtoPKLq @ 0x1C0085E24 (HKLtoPKLq.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C0085E78 (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall NtUserGetInputLocaleInfo(__int64 a1, _OWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // r8
  _DWORD *v11; // rax
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD v17[4]; // [rsp+50h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  v8 = PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v5, v4, v6, v7);
  v9 = 0;
  if ( a1 )
    v10 = HKLtoPKLq(v8, a1);
  else
    v10 = *(_QWORD *)(v8 + 440);
  if ( v10 )
  {
    v11 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    if ( *v11 == 64 )
    {
      LODWORD(v17[0]) = 64;
      *((_QWORD *)&v17[0] + 1) = *(_QWORD *)(v10 + 40);
      LODWORD(v17[1]) = *(_DWORD *)(v10 + 112);
      DWORD1(v17[1]) = *(unsigned __int16 *)(v10 + 72);
      *((_QWORD *)&v17[1] + 1) = *(_QWORD *)(v10 + 64);
      RtlStringCchCopyNW((unsigned __int16 *)&v17[2], 0x10uLL, (const unsigned __int16 *)(v10 + 124), 0x10uLL);
      DWORD1(v17[0]) = 0;
      v13 = MmUserProbeAddress;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_OWORD *)MmUserProbeAddress;
      *a2 = v17[0];
      a2[1] = v17[1];
      a2[2] = v17[2];
      a2[3] = v17[3];
      v9 = 1;
    }
    else
    {
      UserSetLastError(87);
    }
  }
  else
  {
    UserSetLastError(6);
  }
  UserSessionSwitchLeaveCrit(v13, v12, v14, v15);
  return v9;
}
