__int64 __fastcall DebugNotify(__int64 a1, char *a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int v6; // r8d
  __int64 v7; // rdx
  __int64 ObjectPath; // rax
  void *v9; // rdx
  void *v10; // rdi

  v4 = 0;
  if ( a2 )
  {
    v6 = a3 - 1;
    if ( v6 )
    {
      if ( v6 == 1 )
      {
        if ( (unsigned __int8)IsNumber(a2, 16LL) )
          goto LABEL_17;
        PrintDebugMessage(221, (_DWORD)a2, 0, 0, 0LL);
        goto LABEL_11;
      }
      goto LABEL_10;
    }
    if ( !(unsigned __int8)IsNumber(a2, 16LL) )
    {
      strupr_0(a2);
      if ( (unsigned int)GetNameSpaceObject(a2) )
      {
        PrintDebugMessage(231, (_DWORD)a2, 0, 0, 0LL);
LABEL_11:
        v4 = -2;
      }
    }
  }
  else
  {
    if ( a4 != 2 )
    {
LABEL_10:
      PrintDebugMessage(222, 0, 0, 0, 0LL);
      goto LABEL_11;
    }
    ObjectPath = GetObjectPath(qword_1C00709F0);
    v9 = &unk_1C00622D0;
    v10 = (void *)ObjectPath;
    if ( ObjectPath )
      v9 = (void *)ObjectPath;
    ConPrintf("Queuing: Notify(%s, %x) ...\n", v9, qword_1C00709E8);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    ghNotify(2LL, (unsigned int)qword_1C00709E8, qword_1C00709F0 + 120, qword_1C00702B0, PciConfigPinToLine, 0LL);
  }
LABEL_17:
  if ( qword_1C00709F0 )
    DereferenceObjectEx(qword_1C00709F0, v7);
  return v4;
}
