RGNMEMOBJ *__fastcall RGNMEMOBJTMPIFNEEDED::RGNMEMOBJTMPIFNEEDED(
        RGNMEMOBJ *a1,
        struct EPATHOBJ *a2,
        int a3,
        unsigned int a4,
        struct _RECTL *a5)
{
  __int64 v7; // rax
  struct _RECTL *v8; // r9
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)a1 = 0LL;
  *((_DWORD *)a1 + 2) = 0;
  if ( a3 )
  {
    if ( a3 != 1 )
    {
LABEL_10:
      v8 = a5;
      *((_DWORD *)a1 + 2) = 1;
      RGNMEMOBJ::vCreate((RGNMEMOBJ *)&v10, a2, a4, v8);
      *(_QWORD *)a1 = v10;
      RGNMEMOBJ::vPushThreadGuardedObject(a1);
      return a1;
    }
    if ( (*(_DWORD *)a2 & 0x10) != 0 )
    {
      if ( a4 == 2 )
        v7 = *((_QWORD *)a2 + 4);
      else
        v7 = *((_QWORD *)a2 + 3);
    }
    else
    {
      v7 = *((_QWORD *)a2 + 2);
    }
  }
  else
  {
    v7 = *((_QWORD *)a2 + 5);
  }
  *(_QWORD *)a1 = v7;
  if ( !v7 )
    goto LABEL_10;
  return a1;
}
