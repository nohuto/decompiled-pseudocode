__int64 __fastcall pppUserModeCallback(__int64 a1, void *a2, __int64 a3, void *a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  volatile void *Address; // [rsp+30h] [rbp-18h] BYREF
  SIZE_T Length; // [rsp+50h] [rbp+8h] BYREF

  Address = 0LL;
  LODWORD(Length) = 0;
  result = KeUserModeCallback(103LL, a2, a3, &Address, &Length);
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)Length == a5 )
    {
      if ( a5 )
      {
        if ( (_DWORD)Length )
          ProbeForRead(Address, (unsigned int)Length, 4u);
        else
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a4, (const void *)Address, (unsigned int)Length);
      }
      return v7;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
