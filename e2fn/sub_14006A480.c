__int64 __fastcall sub_14006A480(__int64 a1)
{
  __int64 *v1; // rdi
  _QWORD *Pool2; // rax
  __int64 *v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx

  v1 = 0LL;
  if ( (HIDWORD(DeviceObject->Timer) & 8) != 0 && BYTE1(DeviceObject->Timer) >= 8u )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(64LL, 40LL, 1970304114LL);
    if ( Pool2 )
    {
      v4 = sub_14005B310(Pool2, (__int64)L"os_resources::SystemPower::GetPowerAction", a1 - 352);
      if ( v4 )
        v1 = v4;
    }
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(qword_1400DF678 + 3104))(qword_1400DF6A8, *(_QWORD *)(a1 + 280));
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( !v6 )
    {
LABEL_13:
      v11 = 5;
      goto LABEL_19;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( !v10 )
          {
            v11 = 4;
            goto LABEL_19;
          }
          if ( v10 != 1 )
            goto LABEL_13;
        }
        v11 = 3;
      }
      else
      {
        v11 = 2;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
LABEL_19:
  if ( v1 )
  {
    sub_14005B5AC(v1);
    ExFreePool(v1);
  }
  return v11;
}
