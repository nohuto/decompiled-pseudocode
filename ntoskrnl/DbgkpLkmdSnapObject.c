/*
 * XREFs of DbgkpLkmdSnapObject @ 0x140539AE0
 * Callers:
 *     DbgkpLkmdSnapPendingIrps @ 0x140938048 (DbgkpLkmdSnapPendingIrps.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DbgkpLkmdSnapObject(__int64 a1, _WORD *a2, int a3)
{
  _WORD *v3; // rdi
  _WORD *v5; // rsi
  __int64 v7; // r8
  __int64 result; // rax
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // rdx

  v3 = 0LL;
  v5 = 0LL;
  if ( a3 == 3 )
  {
    if ( *a2 != 3 )
      return 3221225477LL;
    v7 = (unsigned __int16)a2[1];
  }
  else
  {
    if ( a3 != 4 )
    {
      if ( a3 == 5 )
      {
        v3 = a2;
        if ( *a2 == 5 )
        {
          v7 = 216LL;
          goto LABEL_11;
        }
      }
      return 3221225477LL;
    }
    v5 = a2;
    if ( *a2 != 4 )
      return 3221225477LL;
    v7 = 336LL;
  }
LABEL_11:
  result = (*(__int64 (__fastcall **)(__int64, _WORD *, __int64, _QWORD, _QWORD, _QWORD))(a1 + 16448))(
             a1 + 0x4000,
             a2,
             v7,
             0LL,
             0LL,
             0LL);
  if ( (int)result < 0 )
    return result;
  v9 = a3 - 4;
  if ( v9 )
  {
    if ( v9 != 1 )
      return result;
    v10 = (unsigned __int16)v3[45];
    v11 = *((_QWORD *)v3 + 12);
  }
  else
  {
    v10 = (unsigned __int16)v5[29];
    v11 = *((_QWORD *)v5 + 8);
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(a1 + 16448))(
           a1 + 0x4000,
           v11,
           v10,
           0LL,
           0LL,
           0LL);
}
