/*
 * XREFs of NtUserGetControlColor @ 0x1C01F8D70
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetControlColor @ 0x1C0150B8C (xxxGetControlColor.c)
 */

__int64 __fastcall NtUserGetControlColor(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 ControlColor; // rbx
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  struct _LARGE_STRING **v13; // rsi
  __int64 v14; // rcx
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  __int128 v18; // [rsp+38h] [rbp-30h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h]

  v18 = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  ControlColor = 0LL;
  v11 = v8;
  if ( v8 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v8;
    HMLockObject(v8);
    v13 = (struct _LARGE_STRING **)ValidateHwnd(a2);
    if ( v13 && a3 && a4 - 306 <= 6 )
    {
      *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v18;
      *((_QWORD *)&v18 + 1) = v13;
      HMLockObject(v13);
      ControlColor = xxxGetControlColor(v11, v13, a3, a4);
      ThreadUnlock1(v14);
    }
    ThreadUnlock1(v12);
  }
  UserSessionSwitchLeaveCrit(v9);
  return ControlColor;
}
