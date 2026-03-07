__int64 __fastcall ProcessorGetDeviceIdtAssignment(PVOID a1, int a2, int a3, _OWORD *a4)
{
  __int64 v4; // rbx
  struct _RTL_RANGE_LIST *v9; // rcx
  _OWORD *UserData; // rax
  __int64 result; // rax
  __int128 v12; // xmm1
  PRTL_RANGE Range; // [rsp+20h] [rbp-38h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+28h] [rbp-30h] BYREF

  Range = 0LL;
  v4 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( ProcessorInstanceCount )
  {
    do
    {
      v9 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v4);
      if ( v9 )
      {
        if ( a3 )
          ++v9;
        RtlGetFirstRange(v9, &Iterator, &Range);
        while ( Range )
        {
          UserData = Range->UserData;
          if ( UserData && *((_DWORD *)UserData + 4) == a2 && (!a1 || Range->Owner == a1) )
          {
            *a4 = *UserData;
            v12 = UserData[1];
            result = 0LL;
            a4[1] = v12;
            return result;
          }
          RtlGetNextRange(&Iterator, &Range, 1u);
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < ProcessorInstanceCount );
  }
  return 3221226021LL;
}
