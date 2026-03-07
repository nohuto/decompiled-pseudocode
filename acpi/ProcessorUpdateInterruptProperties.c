__int64 __fastcall ProcessorUpdateInterruptProperties(int a1, int a2)
{
  char v2; // bl
  __int64 v3; // rdi
  struct _RTL_RANGE_LIST *v6; // rcx
  _DWORD *UserData; // rax
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+60h] [rbp+18h] BYREF

  Range = 0LL;
  v2 = 0;
  v3 = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( ProcessorInstanceCount )
  {
    do
    {
      v6 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + v3);
      if ( v6 )
      {
        RtlGetFirstRange(v6, &Iterator, &Range);
        while ( Range )
        {
          UserData = Range->UserData;
          if ( UserData && UserData[4] == a1 )
          {
            v2 = 1;
            Range->Attributes = (a2 == 1) + 1;
          }
          RtlGetNextRange(&Iterator, &Range, 1u);
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < ProcessorInstanceCount );
  }
  return v2 == 0 ? 0xC0000225 : 0;
}
