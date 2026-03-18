/*
 * XREFs of NtUserInvalidateRect @ 0x1C0049F60
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserInvalidateRect(__int64 a1, __int128 *a2, int a3)
{
  __int64 v5; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  char v9; // r14
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int128 *v13; // rdx
  __int64 v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rbx
  __int64 *v22; // rax
  __int128 *v23; // rdx
  __int64 v24; // r9
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  char v30; // [rsp+20h] [rbp-88h]
  unsigned int v31; // [rsp+30h] [rbp-78h]
  __int128 v33; // [rsp+50h] [rbp-58h] BYREF
  __int64 v34; // [rsp+60h] [rbp-48h]
  __int128 v35; // [rsp+70h] [rbp-38h] BYREF

  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v5 = *ThreadWin32Thread;
  v9 = 0;
  v30 = 0;
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v31 = *(_DWORD *)(v5 + 1508);
    *(_DWORD *)(v5 + 1508) = 0;
    v9 = 1;
    v30 = 1;
  }
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
      v25 = 0;
      goto LABEL_24;
    }
  }
  else
  {
    v12 = 0LL;
  }
  v13 = a2;
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v13 = (__int128 *)MmUserProbeAddress;
    v35 = *v13;
    a2 = &v35;
    if ( v12 )
    {
      v14 = 0LL;
      v15 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v15 )
        v14 = *v15;
      if ( (*(_BYTE *)(*(_QWORD *)(v14 + 480) + 224LL) & 1) == 0 )
      {
        v16 = 0LL;
        v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v17 )
          v16 = *v17;
        if ( (*(_BYTE *)(*(_QWORD *)(v16 + 480) + 224LL) & 0x20) == 0 )
        {
          v20 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL);
          if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v19,
                                                                                   v18) >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v35, &v35, 0LL, v12, v30);
        }
      }
    }
  }
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  *(_QWORD *)&v33 = *(_QWORD *)(v21 + 416);
  *(_QWORD *)(v21 + 416) = &v33;
  *((_QWORD *)&v33 + 1) = v12;
  if ( v12 )
  {
    HMLockObject(v12);
    v23 = a2;
    v24 = a3 != 0 ? 5 : 1;
  }
  else
  {
    v23 = 0LL;
    v24 = 66181LL;
  }
  v25 = xxxRedrawWindow(v12, v23, 0LL, v24);
  ThreadUnlock1(v27, v26, v28);
LABEL_24:
  if ( v9 )
  {
    v11 = v31;
    *(_DWORD *)(v5 + 1508) = v31;
  }
  UserSessionSwitchLeaveCrit(v11);
  return v25;
}
