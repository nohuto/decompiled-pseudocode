/*
 * XREFs of _anonymous_namespace_::UpdateKeyState @ 0x1C0092E50
 * Callers:
 *     UpdateKeyStateForMessage @ 0x1C0092D70 (UpdateKeyStateForMessage.c)
 * Callees:
 *     _anonymous_namespace_::ApplyKeyStateToQueue @ 0x1C0092EE8 (_anonymous_namespace_--ApplyKeyStateToQueue.c)
 */

unsigned __int64 __fastcall anonymous_namespace_::UpdateKeyState(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // bl
  char v5; // bp
  unsigned __int64 result; // rax
  unsigned __int8 v8; // r14

  v4 = a2;
  v5 = a3;
  if ( (unsigned __int8)(a2 - 16) > 2u
    || (v8 = (a4 - 96 + 2 * (a2 - 16)) ^ 1, ((void (*)(void))anonymous_namespace_::ApplyKeyStateToQueue)(), v5)
    || (result = (unsigned __int64)v8 >> 2, ((unsigned __int8)(1 << (2 * (v8 & 3))) & *(_BYTE *)(result + a1 + 228)) == 0) )
  {
    LOBYTE(a3) = v5;
    LOBYTE(a2) = v4;
    return anonymous_namespace_::ApplyKeyStateToQueue(a1, a2, a3);
  }
  return result;
}
