/*
 * XREFs of EditionHandleHungWindow @ 0x1C012C720
 * Callers:
 *     <none>
 * Callees:
 *     ProcessHungWindow @ 0x1C00037AC (ProcessHungWindow.c)
 *     IsHungWindow @ 0x1C00418B0 (IsHungWindow.c)
 */

__int64 __fastcall EditionHandleHungWindow(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 24LL);
  if ( *(_QWORD *)(result + 40) )
  {
    result = IsHungWindow(*(_QWORD *)(a1 + 80));
    if ( (_DWORD)result )
      return ProcessHungWindow();
  }
  return result;
}
