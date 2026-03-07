NTSTATUS __fastcall IcCopyInputStateToDeviceState(__int64 a1, int a2)
{
  struct _RTL_RANGE_LIST *v2; // rcx
  NTSTATUS result; // eax
  PRTL_RANGE i; // rcx
  _DWORD *UserData; // r8
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 j; // rdx
  unsigned int v9; // ecx
  __int64 v10; // rcx
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+68h] [rbp+20h] BYREF

  Range = 0LL;
  memset(&Iterator, 0, sizeof(Iterator));
  if ( a2 == 1 )
    v2 = *(struct _RTL_RANGE_LIST **)(a1 + 48);
  else
    v2 = *(struct _RTL_RANGE_LIST **)(a1 + 40);
  result = RtlGetFirstRange(v2, &Iterator, &Range);
  for ( i = Range; Range; i = Range )
  {
    if ( i->Owner )
    {
      if ( (i->Attributes & 1) == 0 )
      {
        UserData = i->UserData;
        if ( UserData )
        {
          if ( (unsigned int)(UserData[2] - 1) <= 1 )
          {
            v6 = IrqArbGsivFromIrq(i->Start);
            for ( j = IcListHead; &IcListHead != (__int64 *)j; j = *(_QWORD *)j )
            {
              if ( *(int *)(j + 28) >= 0 )
              {
                v9 = *(_DWORD *)(j + 16);
                if ( v9 <= v6 && *(_DWORD *)(j + 20) >= v6 )
                {
                  v10 = 200LL * (v6 - v9);
                  *(_OWORD *)(v7 + 32) = *(_OWORD *)(v10 + j + 136);
                  *(_OWORD *)(v7 + 48) = *(_OWORD *)(v10 + j + 152);
                  *(_OWORD *)(v7 + 64) = *(_OWORD *)(v10 + j + 168);
                  *(_OWORD *)(v7 + 80) = *(_OWORD *)(v10 + j + 184);
                  *(_OWORD *)(v7 + 96) = *(_OWORD *)(v10 + j + 200);
                  *(_QWORD *)(v7 + 112) = *(_QWORD *)(v10 + j + 216);
                }
              }
            }
          }
        }
      }
    }
    result = RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return result;
}
