__int64 __fastcall ParseAndGetNameSpaceObject(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int NameSpaceObject; // ebx
  _BYTE Src[256]; // [rsp+30h] [rbp-138h] BYREF

  NameSpaceObject = ParseName(a1, a2, Src);
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(Src, a3, (__int64)a4, 0);
    if ( NameSpaceObject == -1073741772 )
    {
      if ( a5 )
      {
        NameSpaceObject = 0;
        *a4 = 0LL;
      }
      else
      {
        LogError(-1073741772);
        AcpiDiagTraceAmlError(a1, -1073741772);
        PrintDebugMessage(120, Src, 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
