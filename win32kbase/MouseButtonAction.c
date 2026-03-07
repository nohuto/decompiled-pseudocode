__int64 __fastcall MouseButtonAction(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 result; // rax

  v4 = a2;
  v5 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( result )
    return CMouseProcessor::AccessibilityMouseButtonAction(result, v5, v4);
  return result;
}
