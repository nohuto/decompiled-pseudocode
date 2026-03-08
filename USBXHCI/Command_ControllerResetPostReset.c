/*
 * XREFs of Command_ControllerResetPostReset @ 0x1C002F8B4
 * Callers:
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 * Callees:
 *     DynamicLock_Acquire @ 0x1C000A918 (DynamicLock_Acquire.c)
 *     DynamicLock_Release @ 0x1C000A958 (DynamicLock_Release.c)
 *     Command_Initialize @ 0x1C001438C (Command_Initialize.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0030E00 (WPP_RECORDER_SF_qL.c)
 *     Etw_CommandCompleteError @ 0x1C004A868 (Etw_CommandCompleteError.c)
 */

char __fastcall Command_ControllerResetPostReset(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ****v3; // rcx
  __int64 ***v4; // rax
  __int64 **v5; // rdx
  _QWORD *v6; // rdx
  __int64 ****v7; // rcx
  __int64 ***v8; // rax
  __int64 **v9; // rdx
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  int v12; // edx
  int v13; // r8d
  int v14; // r9d
  __int64 *v15; // rbx
  __int64 *v16; // rax
  __int64 **v17; // rcx
  __int64 *v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v20; // [rsp+48h] [rbp-8h]

  v2 = *(_QWORD *)(a1 + 112);
  v20 = &v19;
  v19 = (__int64 *)&v19;
  DynamicLock_Acquire(v2);
  v3 = (__int64 ****)(a1 + 80);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 ***)v3 )
      break;
    if ( v4[1] != (__int64 **)v3
      || (v5 = *v4, (*v4)[1] != (__int64 *)v4)
      || (*v3 = (__int64 ***)v5, v5[1] = (__int64 *)v3, v6 = v20, *v20 != (__int64 *)&v19) )
    {
LABEL_20:
      __fastfail(3u);
    }
    v4[1] = v20;
    *v4 = &v19;
    *v6 = v4;
    v20 = (__int64 **)v4;
  }
  v7 = (__int64 ****)(a1 + 96);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 ***)v7 )
      break;
    if ( v8[1] != (__int64 **)v7 )
      goto LABEL_20;
    v9 = *v8;
    if ( (*v8)[1] != (__int64 *)v8 )
      goto LABEL_20;
    *v7 = (__int64 ***)v9;
    v9[1] = (__int64 *)v7;
    v10 = v20;
    if ( *v20 != (__int64 *)&v19 )
      goto LABEL_20;
    v8[1] = v20;
    *v8 = &v19;
    *v10 = v8;
    v20 = (__int64 **)v8;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 24),
    0LL);
  v11 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 36) = 4;
  DynamicLock_Release(v11);
  while ( 1 )
  {
    v15 = v19;
    if ( v19 == (__int64 *)&v19 )
      return Command_Initialize(a1, v12, v13, v14);
    if ( (__int64 **)v19[1] != &v19 )
      goto LABEL_20;
    v16 = (__int64 *)*v19;
    if ( *(__int64 **)(*v19 + 8) != v19 )
      goto LABEL_20;
    v17 = &v19;
    v19 = (__int64 *)*v19;
    v16[1] = (__int64)&v19;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_qL(
        *(_QWORD *)(a1 + 16),
        v12,
        7,
        59,
        (__int64)&WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids,
        (char)v15,
        (unsigned __int8)HIBYTE(*((_WORD *)v15 + 18)) >> 2);
    }
    Etw_CommandCompleteError(v17, a1, v15, 3LL);
    ((void (__fastcall *)(__int64 *, __int64))v15[5])(v15, 3LL);
  }
}
