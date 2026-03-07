__int64 __fastcall IopIoRingGetBuffer(
        __int64 a1,
        char *a2,
        char a3,
        unsigned int a4,
        char a5,
        char a6,
        char **a7,
        _QWORD *a8)
{
  ULONG_PTR v10; // rcx

  *a7 = 0LL;
  *a8 = 0LL;
  if ( a3 )
  {
    if ( (unsigned int)a2 < *(_DWORD *)(a1 + 176) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8LL * (unsigned int)a2);
      if ( v10 )
        return IopMcGetBuffer(v10, (__int64)a8);
      else
        return 3221225704LL;
    }
    else
    {
      return 3221226705LL;
    }
  }
  else
  {
    if ( a5 )
    {
      if ( a6 )
      {
        ProbeForWrite(a2, a4, 1u);
      }
      else if ( a4 && ((unsigned __int64)&a2[a4] > 0x7FFFFFFF0000LL || &a2[a4] < a2) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    *a7 = a2;
    return 0LL;
  }
}
