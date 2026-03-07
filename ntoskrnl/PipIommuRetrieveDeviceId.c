__int64 __fastcall PipIommuRetrieveDeviceId(__int64 a1, _QWORD *a2)
{
  void *Pool2; // rdi
  unsigned int (__fastcall *v3)(_QWORD, _QWORD, _QWORD, __int64 *); // rax
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  Pool2 = 0LL;
  v3 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *))(a1 + 64);
  if ( v3 )
  {
    if ( v3(*(_QWORD *)(a1 + 8), 0LL, 0LL, &v8) == -1073741789 && v8 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, v8, 1685089872LL);
      if ( Pool2 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, _QWORD))(a1 + 64))(*(_QWORD *)(a1 + 8), v8, Pool2, 0LL);
        if ( v6 < 0 )
        {
          ExFreePoolWithTag(Pool2, 0x64706E50u);
          Pool2 = 0LL;
        }
        else
        {
          PipIommuValidateDeviceId(a1, Pool2, v8);
        }
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741637;
  }
  result = (unsigned int)v6;
  *a2 = Pool2;
  return result;
}
