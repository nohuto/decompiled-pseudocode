/*
 * XREFs of NtUserCallMsgFilter @ 0x1C0161A30
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C005B860 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserCallMsgFilter(_OWORD *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _OWORD *v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  unsigned int v9; // eax
  __int64 v11[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v12; // [rsp+48h] [rbp-40h]
  __int128 v13; // [rsp+58h] [rbp-30h]

  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = (_OWORD *)MmUserProbeAddress;
  *v6 = *v6;
  v6[1] = v6[1];
  v6[2] = v6[2];
  *(_OWORD *)v11 = *a1;
  v12 = a1[1];
  v13 = a1[2];
  v7 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(_mm_loadu_si128((const __m128i *)v11), 8));
  v8 = 0;
  if ( (v7 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87LL, v4, v5);
  }
  else
  {
    if ( (_DWORD)v7 != 576 && (((_DWORD)v7 - 281) & 0xFFFFFFFD) != 0 )
    {
      if ( ((*(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL) | *(_BYTE *)(gptiCurrent + 680LL)) & 0x80u) != 0
        && (unsigned int)xxxCallHook(a2, 0LL, (__int64)v11, 6) )
      {
        v8 = 1;
      }
      else
      {
        v9 = *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL);
        v7 = v9 | *(_DWORD *)(gptiCurrent + 680LL);
        if ( (((unsigned __int8)v9 | *(_BYTE *)(gptiCurrent + 680LL)) & 1) != 0 )
          v8 = xxxCallHook(a2, 0LL, (__int64)v11, -1);
      }
    }
    *a1 = *(_OWORD *)v11;
    a1[1] = v12;
    a1[2] = v13;
  }
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
