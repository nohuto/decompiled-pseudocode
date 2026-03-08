/*
 * XREFs of EditionGetLogicalPointForMouseCaptureButtonEvent @ 0x1C01AD300
 * Callers:
 *     <none>
 * Callees:
 *     TransformVectorWithInputTargetPrecedence @ 0x1C01442D8 (TransformVectorWithInputTargetPrecedence.c)
 */

__int64 __fastcall EditionGetLogicalPointForMouseCaptureButtonEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v5; // rdi
  const struct tagWND *v8; // rsi
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v5 = a5;
  *a5 = a3;
  v8 = *(const struct tagWND **)(a1 + 80);
  result = IsWindowDesktopComposed(v8);
  if ( (_DWORD)result )
  {
    result = TransformVectorWithInputTargetPrecedence(v8, (int)v5, 0);
    if ( !(_DWORD)result )
    {
      if ( *(const struct tagWND **)(a2 + 80) == v8 )
        *v5 = a4;
      else
        return PhysicalToLogicalDPIPoint(v5, &v10, *(unsigned int *)(*((_QWORD *)v8 + 5) + 288LL), 0LL);
    }
  }
  return result;
}
