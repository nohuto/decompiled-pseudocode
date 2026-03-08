/*
 * XREFs of NtUserTransformRect @ 0x1C00C72D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserTransformRect(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  unsigned int v8; // ecx
  __int64 v9; // r9
  int v10; // ebx
  BOOL v11; // eax
  unsigned int v12; // ecx
  BOOL v13; // eax
  _BYTE *v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[3]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int128 v19; // [rsp+58h] [rbp-50h] BYREF

  v5 = a3;
  v6 = a2;
  EnterSharedCrit(a1, a2, a3);
  v19 = 0LL;
  v17[0] = 0LL;
  v8 = v6 & 0x7FFFFFFF;
  v9 = 24592LL;
  if ( (v6 & 0x7FFFFFFF) == 0x22 || v8 == 24592 || v8 == 1073766416 || v8 == 18 )
  {
    v10 = 1;
    v11 = 1;
  }
  else
  {
    v10 = 1;
    v11 = (((v6 & 0x7FFE00FF) - 17) & 0xFFFFFFFD) == 0 && ((v8 >> 8) & 0x1FF) != 0;
  }
  if ( v11
    && ((v12 = v5 & 0x7FFFFFFF, (v5 & 0x7FFFFFFF) == 0x6010) || v12 == 18 || v12 == 34 || v12 == 1073766416
      ? (v13 = 1)
      : (((v5 & 0x7FFE00FF) - 17) & 0xFFFFFFFD) != 0
      ? (v13 = 0)
      : (v13 = ((v12 >> 8) & 0x1FF) != 0),
        v13) )
  {
    v14 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v14 = (_BYTE *)MmUserProbeAddress;
    *v14 = *v14;
    v14[15] = v14[15];
    v19 = *a1;
    if ( a4 && (v6 & 0xF) == 2 )
      v17[0] = ValidateHmonitor(a4, v14, 0x7FFFFFFFLL, 24592LL);
    if ( !v17[0] )
    {
      LODWORD(v18) = (DWORD2(v19) + (int)v19) / 2;
      HIDWORD(v18) = (HIDWORD(v19) + DWORD1(v19)) / 2;
      v17[0] = GuessMonitorOverrideForCoordinateConversions(v18, v5, 0LL, v9);
    }
    LogicalToPhysicalDPIRect(&v19, &v19, v5, v17);
    PhysicalToLogicalDPIRect(&v19, &v19, v6, v17);
    *a1 = v19;
  }
  else
  {
    v10 = 0;
    UserSetLastError(87);
  }
  UserSessionSwitchLeaveCrit(v15);
  return v10;
}
