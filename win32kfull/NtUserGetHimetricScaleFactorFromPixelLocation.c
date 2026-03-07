__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  unsigned int v9; // esi
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _BYTE v15[4]; // [rsp+20h] [rbp-98h] BYREF
  int v16; // [rsp+24h] [rbp-94h] BYREF
  unsigned int v17[6]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-78h] BYREF
  __m128i v19; // [rsp+58h] [rbp-60h] BYREF
  __int128 v20; // [rsp+68h] [rbp-50h] BYREF
  __m128i v21; // [rsp+78h] [rbp-40h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v15);
  v20 = 0LL;
  v18[0] = 0LL;
  if ( !a1 || !a3 || !a4 )
    goto LABEL_18;
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, v18, 0LL) || *(_DWORD *)(v18[0] + 24LL) != 7 )
  {
    if ( (unsigned int)GetPointerDeviceRects(a1, 0LL, &v20) )
    {
      v8 = 1;
      v9 = 1;
      v17[0] = 1;
      v10 = 1;
      v16 = 1;
      if ( *(_DWORD *)*gpDispInfo > 1u )
      {
        v21 = *GetScreenRect(&v19);
        v11 = v20 - v21.m128i_i64[0];
        if ( (_QWORD)v20 == v21.m128i_i64[0] )
          v11 = *((_QWORD *)&v20 + 1) - v21.m128i_i64[1];
        if ( !v11 )
        {
          v12 = MonitorFromPoint(a2, 2u, 0);
          GetHimetricScaleForMonitor(v12, &v16, v17);
          v10 = v16;
          v9 = v17[0];
        }
      }
      goto LABEL_13;
    }
LABEL_18:
    v8 = 0;
    UserSetLastError(87);
    goto LABEL_19;
  }
  v8 = 1;
  v9 = 1;
  v17[0] = 1;
  v10 = 1;
  v16 = 1;
LABEL_13:
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v10;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_DWORD *)MmUserProbeAddress;
  *a4 = v9;
  v17[4] = 1;
LABEL_19:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v15);
  UserSessionSwitchLeaveCrit(v13);
  return v8;
}
