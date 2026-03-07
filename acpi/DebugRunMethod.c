__int64 __fastcall DebugRunMethod(__int64 a1, char *a2)
{
  unsigned int v2; // edi
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 ObjectPath; // rax
  void *v12; // rdx
  void *v13; // rbx
  unsigned __int64 v15[5]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = a1;
  v2 = 0;
  if ( fRunningMethod )
  {
    v4 = 235;
LABEL_26:
    PrintDebugMessage(v4, 0, 0, 0, 0LL);
    goto LABEL_27;
  }
  if ( a2 )
  {
    if ( dword_1C006E518 == -1 )
    {
      v15[0] = 0LL;
      v16 = 0LL;
      v2 = DebugExpr(a2, v15, &v16);
      if ( !v2 )
      {
        if ( !v16 )
        {
          PrintDebugMessage(232, 0, 0, 0, 0LL);
LABEL_27:
          v2 = -4;
          goto LABEL_28;
        }
        qword_1C00709D8 = GetBaseObject(v16);
        DereferenceObjectEx(v5, v5);
        dword_1C006E518 = 0;
        return v2;
      }
    }
    else
    {
      if ( dword_1C006E518 >= 7 )
      {
        PrintDebugMessage(236, 0, 0, 0, 0LL);
      }
      else
      {
        v6 = 5LL * dword_1C006E518;
        *(_OWORD *)((char *)&unk_1C00708C0 + 8 * v6) = 0LL;
        *(_OWORD *)((char *)&unk_1C00708C0 + 8 * v6 + 16) = 0LL;
        *((_QWORD *)&unk_1C00708C0 + v6 + 4) = 0LL;
        if ( (unsigned __int8)IsNumber(a2, 0LL) )
        {
          v7 = 5LL * dword_1C006E518;
          *((_QWORD *)&unk_1C00708C0 + v7 + 2) = strtoui64_0(a2, 0LL, 16);
          ++dword_1C006E518;
          *((_WORD *)&unk_1C00708C0 + 4 * v7 + 1) = 1;
          return v2;
        }
        PrintDebugMessage(218, (_DWORD)a2, 0, 0, 0LL);
      }
      v2 = -2;
    }
LABEL_28:
    dword_1C006E518 = -1;
    return v2;
  }
  if ( dword_1C006E518 < 0 )
  {
    v4 = 226;
    goto LABEL_26;
  }
  qword_1C0070450 = 0LL;
  fRunningMethod = 1;
  xmmword_1C0070430 = 0LL;
  xmmword_1C0070440 = 0LL;
  v8 = AsyncEvalObject(
         qword_1C00709D8,
         (unsigned int)&xmmword_1C0070430,
         dword_1C006E518,
         (unsigned int)&unk_1C00708C0,
         (__int64)RunMethodCallBack,
         0LL,
         1);
  v9 = v8;
  if ( v8 == 32772 )
  {
    ObjectPath = GetObjectPath(qword_1C00709D8);
    v12 = &unk_1C00622D0;
    v13 = (void *)ObjectPath;
    if ( ObjectPath )
      v12 = (void *)ObjectPath;
    ConPrintf("\n%s returned PENDING\n", v12);
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
  else
  {
    RunMethodCallBack(qword_1C00709D8 + 120, v8, &xmmword_1C0070430, 0LL);
    if ( v9 )
      v2 = -4;
  }
  DereferenceObjectEx(qword_1C00709D8, v10);
  qword_1C00709D8 = 0LL;
  dword_1C006E518 = -1;
  if ( v2 )
    goto LABEL_28;
  return v2;
}
