/*
 * XREFs of NtUserGetPointerProprietaryId @ 0x1C0170CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z @ 0x1C01F9528 (-GetPointerProprietaryId@CTouchProcessor@@QEAA_NIPEAU_GUID@@@Z.c)
 */

__int64 __fastcall NtUserGetPointerProprietaryId(__int64 a1, struct _GUID *a2, __int64 a3, __int64 a4)
{
  struct _GUID *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  bool PointerProprietaryId; // al
  int v8; // ebx
  struct _GUID v10; // [rsp+38h] [rbp-20h] BYREF

  v4 = a2;
  v5 = a1;
  v10 = 0LL;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  PointerProprietaryId = CTouchProcessor::GetPointerProprietaryId(*(CTouchProcessor **)(v6 + 3424), v5, &v10);
  v8 = 0;
  if ( PointerProprietaryId )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (struct _GUID *)MmUserProbeAddress;
    *v4 = v10;
    return 1;
  }
  else
  {
    UserSetLastError(232);
  }
  return v8;
}
