__int64 __fastcall XmGetImmediateSourceValue(__int64 a1, int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 120);
  if ( !v2 )
    return (unsigned __int8)XmGetCodeByte(a1);
  if ( v2 == 1 )
  {
    if ( a2 )
      return (unsigned __int16)XmGetCodeByte(a1);
    else
      return (unsigned __int16)XmGetWordImmediate(a1);
  }
  else if ( a2 )
  {
    return (unsigned int)XmGetCodeByte(a1);
  }
  else
  {
    return XmGetLongImmediate(a1);
  }
}
