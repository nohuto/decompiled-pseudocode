/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F4690
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _MonitorFromPoint @ 0x1C007B350 (_MonitorFromPoint.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _GetPointerDeviceRects @ 0x1C0110B24 (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C0110C1C (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01DF8D4 (GetHimetricScaleForMonitor.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(
        __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // edi
  unsigned int v11; // esi
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _BYTE v17[4]; // [rsp+20h] [rbp-98h] BYREF
  int v18; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v19[6]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v20[3]; // [rsp+40h] [rbp-78h] BYREF
  __m128i v21; // [rsp+58h] [rbp-60h] BYREF
  __int128 v22; // [rsp+68h] [rbp-50h] BYREF
  __m128i v23; // [rsp+78h] [rbp-40h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v17);
  v22 = 0LL;
  v20[0] = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_18;
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v20, 0LL) || *(_DWORD *)(v20[0] + 24LL) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &v22) )
    {
      v10 = 1;
      v11 = 1;
      v19[0] = 1;
      v12 = 1;
      v18 = 1;
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v23 = *GetScreenRect(&v21, v8);
        v13 = v22 - v23.m128i_i64[0];
        if ( (_QWORD)v22 == v23.m128i_i64[0] )
          v13 = *((_QWORD *)&v22 + 1) - v23.m128i_i64[1];
        if ( !v13 )
        {
          v14 = MonitorFromPoint(a2, 2u, 0);
          GetHimetricScaleForMonitor(v14, &v18, v19);
          v12 = v18;
          v11 = v19[0];
        }
      }
      goto LABEL_13;
    }
LABEL_18:
    v10 = 0;
    UserSetLastError(87LL, v8);
    goto LABEL_19;
  }
  v10 = 1;
  v11 = 1;
  v19[0] = 1;
  v12 = 1;
  v18 = 1;
LABEL_13:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v12;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_DWORD *)MmUserProbeAddress;
  *a4 = v11;
  v19[4] = 1;
LABEL_19:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v17, v8, v9);
  UserSessionSwitchLeaveCrit(v15);
  return v10;
}
