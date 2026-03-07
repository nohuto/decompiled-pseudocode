bool __fastcall CmpDoesBufferRequireCapturing(int a1, unsigned __int64 a2)
{
  if ( a1 )
    return 1;
  if ( *((_QWORD *)&CmpRegistryProcess + 1) )
    return !CmpIsBufferGloballyVisible(a2);
  return 0;
}
