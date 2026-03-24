/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01F9CA0
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x1C0042100 (_MonitorFromPoint.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     _GetPointerDeviceRects @ 0x1C0122BAC (_GetPointerDeviceRects.c)
 *     GetScreenRect @ 0x1C0122CA4 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01E5724 (GetHimetricScaleForMonitor.c)
 */

__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned int v11; // esi
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-98h] BYREF
  unsigned int v18[5]; // [rsp+24h] [rbp-94h] BYREF
  __int64 v19; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-70h] BYREF
  __m128i v21; // [rsp+58h] [rbp-60h] BYREF
  __int128 v22; // [rsp+68h] [rbp-50h] BYREF
  __m128i v23; // [rsp+78h] [rbp-40h]

  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v22 = 0LL;
  v19 = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_18;
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v19, 0LL) || *(_DWORD *)(v19 + 24) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &v22) )
    {
      v11 = 1;
      v18[0] = 1;
      v12 = 1;
      v17 = 1;
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v23 = *GetScreenRect(&v21);
        v13 = v22 - v23.m128i_i64[0];
        if ( (_QWORD)v22 == v23.m128i_i64[0] )
          v13 = *((_QWORD *)&v22 + 1) - v23.m128i_i64[1];
        if ( !v13 )
        {
          v14 = MonitorFromPoint(a2, 2u, 0);
          GetHimetricScaleForMonitor(v14, &v17, v18);
          v12 = v17;
          v11 = v18[0];
        }
      }
      goto LABEL_13;
    }
LABEL_18:
    v8 = 0;
    UserSetLastError(87LL, v9, v10);
    goto LABEL_19;
  }
  v11 = 1;
  v18[0] = 1;
  v12 = 1;
  v17 = 1;
LABEL_13:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v12;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_DWORD *)MmUserProbeAddress;
  *a4 = v11;
  v18[3] = 1;
LABEL_19:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v15);
  return v8;
}
