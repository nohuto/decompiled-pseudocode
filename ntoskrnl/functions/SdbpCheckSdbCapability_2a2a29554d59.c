__int64 __fastcall SdbpCheckSdbCapability(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int FirstTag; // eax
  __int64 v11; // r8
  __int64 StringTagPtr; // rax
  __int64 result; // rax
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v14 = 0;
  v9 = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag, v11);
    if ( StringTagPtr )
    {
      SdbpIsSdbCapabilityPresent(&v14, a2, StringTagPtr);
      v9 = v14;
      v8 = 1;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
  }
  result = v8;
  *a1 = v9;
  return result;
}
