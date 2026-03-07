__int64 __fastcall Simulator_NotifyNamespaceCollision(__int64 a1, __int64 a2)
{
  void *ObjectPath; // rsi
  _DWORD *inited; // rbx
  unsigned int v6; // edi
  char v8; // [rsp+40h] [rbp+18h] BYREF

  ObjectPath = 0LL;
  inited = Simulator_AllocAndInitTestData();
  if ( inited )
  {
    if ( a2 )
      ObjectPath = (void *)GetObjectPath(a2);
    v8 = 0;
    *inited = 1;
    inited[2] = 1;
    inited[1] = 17;
    *((_QWORD *)inited + 2) = a1;
    *((_QWORD *)inited + 3) = ObjectPath;
    *((_QWORD *)inited + 4) = gpnsNameSpaceRoot;
    *((_QWORD *)inited + 5) = &v8;
    if ( (int)Simulator_TestNotify(inited) >= 0 && v8 )
      v6 = 0;
    else
      v6 = -1073741823;
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
    ExFreePoolWithTag(inited, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
