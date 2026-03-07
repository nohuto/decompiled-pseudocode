__int64 __fastcall UsbhGetControllerName(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v4; // rsi
  _DWORD *Pool2; // rdi
  int v7; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_QWORD, __int64, _DWORD *, unsigned int *, _DWORD *); // rax
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(_QWORD, __int64, _DWORD *, unsigned int *, _DWORD *); // rax
  unsigned __int64 v12; // rdx
  _DWORD v14[10]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+20h] BYREF

  v14[0] = 0;
  v4 = a3;
  v15 = 16;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 16LL, 1112885333LL);
  v7 = -1073741670;
  if ( Pool2 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v9 = *(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, unsigned int *, _DWORD *))(v8 + 4608);
    if ( !v9 )
    {
LABEL_3:
      v7 = -1073741822;
LABEL_14:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v7;
    }
    v7 = v9(*(_QWORD *)(v8 + 4560), 1LL, Pool2, &v15, v14);
    if ( v7 != -1073741789 )
    {
LABEL_8:
      if ( v7 >= 0 )
      {
        if ( (unsigned int)v4 < 4 )
        {
          v7 = -1073741789;
        }
        else
        {
          *a2 = Pool2[2];
          v12 = (unsigned int)Pool2[2];
          if ( v4 - 4 < v12 )
            LODWORD(v12) = v4 - 4;
          memmove(a2 + 1, Pool2 + 3, (unsigned int)v12);
        }
      }
      goto LABEL_14;
    }
    v15 = v14[0];
    ExFreePoolWithTag(Pool2, 0);
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, v15, 1112885333LL);
    if ( Pool2 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      v11 = *(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *, unsigned int *, _DWORD *))(v10 + 4608);
      if ( !v11 )
        goto LABEL_3;
      v7 = v11(*(_QWORD *)(v10 + 4560), 1LL, Pool2, &v15, v14);
      goto LABEL_8;
    }
  }
  return (unsigned int)v7;
}
