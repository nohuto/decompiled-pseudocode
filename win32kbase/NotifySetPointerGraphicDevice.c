__int64 __fastcall NotifySetPointerGraphicDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 result; // rax

  v4 = a1;
  result = anonymous_namespace_::GetMouseProcessor(a1, a2, a3, a4);
  if ( result )
    return CMouseProcessor::NotifySetPointerGraphicDevice(result, v4);
  return result;
}
