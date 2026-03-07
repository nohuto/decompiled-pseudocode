__int64 __fastcall bDeleteColorSpace(struct HOBJ__ *a1, int a2)
{
  unsigned int v4; // ebx
  void *v5; // rax

  v4 = 0;
  if ( a1 == *(struct HOBJ__ **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 2400LL) )
  {
    if ( (unsigned int)Feature_1626422585__private_IsEnabledDeviceUsage() )
    {
      LOBYTE(v4) = a2 != 1;
      return v4;
    }
    return 1;
  }
  if ( (unsigned int)Feature_1626422585__private_IsEnabledDeviceUsage() && a2 )
  {
    if ( a2 != 1 )
    {
LABEL_11:
      EngSetLastError(0x57u);
      return v4;
    }
    v5 = (void *)HmgRemoveObjectImpl(a1, 0, 1, 2, 9, 0LL);
  }
  else
  {
    v5 = (void *)HmgRemoveObject((__int64)a1, 0, 0, 1, 9, 0LL);
  }
  if ( !v5 )
    goto LABEL_11;
  FreeObject(v5, 9u);
  return 1;
}
