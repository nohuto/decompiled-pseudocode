/*
 * XREFs of SendGestureMessage @ 0x1C02213C4
 * Callers:
 *     NtUserfnGESTURE @ 0x1C0200E70 (NtUserfnGESTURE.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     AllocGestureInfo @ 0x1C0221000 (AllocGestureInfo.c)
 *     ValidateGestureInfo @ 0x1C02216CC (ValidateGestureInfo.c)
 *     _FreeGestureInfo @ 0x1C0221710 (_FreeGestureInfo.c)
 */

__int64 __fastcall SendGestureMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  unsigned int v7; // r15d
  const void *v9; // rdi
  int v10; // r8d
  volatile void *v11; // rbx
  __int64 CurrentProcessWow64Process; // rax
  __int64 v14; // rdi
  __int128 v15; // [rsp+48h] [rbp-80h] BYREF
  __int128 v16; // [rsp+58h] [rbp-70h]
  __int128 v17; // [rsp+68h] [rbp-60h]
  SIZE_T v18; // [rsp+78h] [rbp-50h]
  __int128 v19; // [rsp+88h] [rbp-40h]
  __int128 v20; // [rsp+98h] [rbp-30h]
  __int128 v21; // [rsp+A8h] [rbp-20h]
  SIZE_T Length; // [rsp+B8h] [rbp-10h]

  v7 = a2;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v9 = 0LL;
  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || !a4
    || (unsigned __int64)(a3 - 1) > 0xFFFFFFFE
    || (unsigned int)a3 < 0x38 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  v10 = a3 - 56;
  v11 = (volatile void *)(a4 + 56);
  if ( a4 + 56 < a4 || (unsigned __int64)v11 > MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v19 = *(_OWORD *)a4;
  v20 = *(_OWORD *)(a4 + 16);
  v21 = *(_OWORD *)(a4 + 32);
  Length = *(_QWORD *)(a4 + 48);
  v15 = v19;
  v16 = v20;
  v17 = v21;
  v18 = Length;
  if ( (_DWORD)Length != v10 )
  {
    UserSetLastError(87LL, a2);
    return 0LL;
  }
  if ( (_DWORD)Length )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(4294967294LL);
    ProbeForRead(v11, (unsigned int)Length, CurrentProcessWow64Process != 0 ? 1 : 4);
    v9 = (const void *)v11;
  }
  if ( !(unsigned int)ValidateGestureInfo(&v15) )
    return 0LL;
  v14 = AllocGestureInfo(a1, 0LL, (__int64)&v15, v9);
  if ( !v14 )
    return 0LL;
  *a7 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64))mpFnidPfn[((_BYTE)a6 + 6) & 0x1F])(
          a1,
          v7,
          DWORD2(v15),
          v14,
          a5);
  if ( a6 >= 0x2AB && (a6 <= 0x2AC || a6 == 692) )
    FreeGestureInfo(v14, 1LL);
  return 1LL;
}
