__int64 __fastcall SdbpFindFirstIndexedWildCardTag(
        union _RTL_RUN_ONCE *Parameter,
        __int16 a2,
        __int16 a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int Index; // eax
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned int v12; // r14d
  __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // rcx
  unsigned int v17; // esi
  unsigned int FirstTag; // eax
  __int16 *StringTagPtr; // rax
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C0h]
  _BYTE v24[272]; // [rsp+50h] [rbp-B0h] BYREF

  v21 = 0;
  v20 = 0;
  if ( (((a3 & 0xF000) - 24576) & 0xDFFF) != 0 )
    goto LABEL_16;
  Index = SdbGetIndex(Parameter, a2, a3, &v20);
  *a5 = Index;
  if ( !Index )
    goto LABEL_16;
  v9 = v20;
  a5[5] = v20;
  *((_WORD *)a5 + 6) = a3;
  *((_QWORD *)a5 + 4) = a4;
  memset(v24, 0, 0x104uLL);
  v22 = 0LL;
  v23 = 0;
  if ( (int)AslStringUpcaseToMultiByteN(v24, v10, a4) < 0 || (v11 = SdbpGetIndex(Parameter, *a5, &v21)) == 0 )
  {
LABEL_16:
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  v12 = v21;
  v13 = 0LL;
  if ( !v21 )
    return 0LL;
  v14 = v9 & 2;
  while ( 1 )
  {
    v15 = *(_QWORD *)(v11 + 12 * v13);
    if ( v14 )
    {
      SdbpKeyToAnsiString(v15, (char *)&v22 + 1);
      LOBYTE(v22) = 42;
    }
    else
    {
      SdbpKeyToAnsiString(v15, &v22);
      LOBYTE(v23) = 42;
    }
    if ( (unsigned int)AslStringPatternMatchExA((char *)&v22, v24) )
    {
      v17 = *(_DWORD *)(v11 + 12 * v13 + 8);
      FirstTag = SdbFindFirstTag(Parameter, v17, *((unsigned __int16 *)a5 + 6));
      if ( FirstTag )
      {
        StringTagPtr = (__int16 *)SdbGetStringTagPtr(Parameter, FirstTag);
        if ( StringTagPtr )
        {
          if ( (unsigned int)AslStringPatternMatchExW(StringTagPtr, *((_WORD **)a5 + 4)) )
            break;
        }
      }
    }
    v13 = (unsigned int)(v13 + 1);
    if ( (unsigned int)v13 >= v12 )
      return 0LL;
  }
  a5[4] = v13;
  return v17;
}
