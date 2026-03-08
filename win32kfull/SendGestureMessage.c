/*
 * XREFs of SendGestureMessage @ 0x1C020742C
 * Callers:
 *     NtUserfnGESTURE @ 0x1C01E1740 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     AllocGestureInfo @ 0x1C0207064 (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x1C0207728 (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0207760 (_FreeGestureInfo.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        int a6,
        _QWORD *a7)
{
  const void *v9; // rbx
  int v10; // r8d
  volatile void *v11; // rdi
  SIZE_T v12; // xmm0_8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rdi
  __int128 v16; // [rsp+48h] [rbp-80h] BYREF
  __int128 v17; // [rsp+58h] [rbp-70h]
  __int128 v18; // [rsp+68h] [rbp-60h]
  SIZE_T v19; // [rsp+78h] [rbp-50h]
  __int128 v20; // [rsp+88h] [rbp-40h]
  __int128 v21; // [rsp+98h] [rbp-30h]
  __int128 v22; // [rsp+A8h] [rbp-20h]
  SIZE_T Length; // [rsp+B8h] [rbp-10h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v9 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || !a4
    || (unsigned __int64)(a3 - 1) > 0xFFFFFFFE
    || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  v10 = a3 - 56;
  v11 = (volatile void *)(a4 + 56);
  if ( a4 + 56 < a4 || (unsigned __int64)v11 > MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v20 = *(_OWORD *)a4;
  v21 = *(_OWORD *)(a4 + 16);
  v22 = *(_OWORD *)(a4 + 32);
  v12 = *(_QWORD *)(a4 + 48);
  Length = v12;
  v16 = v20;
  v17 = v21;
  v18 = v22;
  v19 = v12;
  if ( (_DWORD)v12 != v10 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  if ( (_DWORD)v12 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(4294967294LL);
    ProbeForRead(v11, (unsigned int)v12, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (const void *)v11;
  }
  if ( !(unsigned int)ValidateGestureInfo(&v16) )
    return 0LL;
  v15 = AllocGestureInfo(a1, 0, (__int64)&v16, v9);
  if ( !v15 )
    return 0LL;
  *a7 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
         + (((_BYTE)a6 + 6) & 0x1F)))(
          a1,
          a2,
          DWORD2(v16),
          v15,
          a5);
  if ( a6 == 683 || a6 == 684 || a6 == 692 )
    FreeGestureInfo(v15, 1LL);
  return 1LL;
}
