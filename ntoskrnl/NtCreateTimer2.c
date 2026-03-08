/*
 * XREFs of NtCreateTimer2 @ 0x14068A750
 * Callers:
 *     NtCreateIRTimer @ 0x14079C640 (NtCreateIRTimer.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x140203D38 (ExpExTimerAttributesAreValid.c)
 *     KeInitializeTimer2 @ 0x140203D80 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14036D61C (KeInitializeIRTimer.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ExpCheckIRTimerAccess @ 0x1407F8E70 (ExpCheckIRTimerAccess.c)
 */

__int64 __fastcall NtCreateTimer2(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int *v9; // r10
  char PreviousMode; // si
  int inserted; // ecx
  _QWORD *v12; // rbx
  __int64 result; // rax
  unsigned int v14; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF

  v16 = 0LL;
  Object = 0LL;
  if ( !ExpExTimerAttributesAreValid(a4) )
    return 3221225714LL;
  if ( v8 )
    return 3221225713LL;
  if ( v9 && (a4 & 2) == 0 )
    return 3221225712LL;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v6 = 0x7FFFFFFF0000LL;
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
    if ( v9 )
    {
      if ( (unsigned __int64)v9 < 0x7FFFFFFF0000LL )
        v6 = (__int64)v9;
      v14 = *(_DWORD *)v6;
    }
  }
  else if ( v9 )
  {
    v14 = *v9;
  }
  if ( (a4 & 2) == 0 || (LOBYTE(v6) = PreviousMode, result = ExpCheckIRTimerAccess(v14, v6), (int)result >= 0) )
  {
    LOBYTE(v8) = PreviousMode;
    LOBYTE(v7) = PreviousMode;
    inserted = ObCreateObjectEx(v7, (_DWORD)ExpIRTimerObjectType, 0, v8);
    if ( inserted >= 0 )
    {
      v12 = Object;
      if ( (a4 & 2) != 0 )
        KeInitializeIRTimer((unsigned __int64)Object, 0LL, 0LL, (unsigned __int8 *)&v14, a4);
      else
        KeInitializeTimer2((__int64)Object, 0LL, 0LL, a4);
      v12[17] = 0LL;
      *((_DWORD *)v12 + 40) = a4;
      inserted = ObInsertObjectEx(v12, 0LL, 0, 0LL, (__int64)&v16);
      v14 = inserted;
      if ( inserted >= 0 )
        *a1 = v16;
    }
    return (unsigned int)inserted;
  }
  return result;
}
