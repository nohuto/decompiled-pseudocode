__int64 __fastcall HalpAcpiPmRegisterWriteRegister(_QWORD *a1, int a2, _QWORD *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 2;
      if ( v5 )
      {
        if ( v5 != 4 )
          return 3221225473LL;
        *a1 = *a3;
      }
      else
      {
        *(_DWORD *)a1 = *(_DWORD *)a3;
      }
    }
    else
    {
      *(_WORD *)a1 = *(_WORD *)a3;
    }
  }
  else
  {
    *(_BYTE *)a1 = *(_BYTE *)a3;
  }
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return 0LL;
}
