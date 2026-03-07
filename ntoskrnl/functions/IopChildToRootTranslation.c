__int64 __fastcall IopChildToRootTranslation(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebp
  bool v10; // r14
  _DWORD *Pool2; // rdi
  _DWORD *v12; // rsi
  __int64 v13; // r13
  __int64 *v14; // rax
  unsigned int v16; // r11d
  _QWORD *v17; // r9
  __int64 v18; // rcx
  int v19; // eax
  _DWORD *v20; // rcx
  __int64 LegacyBusDeviceNode; // rax
  bool v23; // [rsp+98h] [rbp+20h]

  v6 = 0;
  v10 = 0;
  v23 = a4 == 1;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  v12 = (_DWORD *)ExAllocatePool2(256LL, 20LL, 538996816LL);
  if ( !v12 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225626LL;
  }
  *(_OWORD *)Pool2 = *(_OWORD *)a5;
  Pool2[4] = *(_DWORD *)(a5 + 16);
  if ( a1 )
  {
    v13 = a1[4];
    goto LABEL_5;
  }
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(a2, a3);
  v13 = 0LL;
  a1 = (_QWORD *)LegacyBusDeviceNode;
  if ( LegacyBusDeviceNode )
  {
LABEL_5:
    while ( !v10 )
    {
      if ( a1 != IopRootDeviceNode || v23 )
      {
        v14 = (__int64 *)a1[63];
        if ( v14 != a1 + 63 )
        {
          while ( *((_BYTE *)v14 + 16) != *(_BYTE *)a5 )
          {
            v14 = (__int64 *)*v14;
            if ( v14 == a1 + 63 )
              goto LABEL_8;
          }
          v18 = v14[3];
          if ( v18 )
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD *))(v18 + 32))(
                    *(_QWORD *)(v18 + 8),
                    Pool2,
                    0LL,
                    0LL,
                    0LL,
                    v13,
                    v12);
            v6 = v19;
            v20 = Pool2;
            if ( v19 < 0 )
            {
              ExFreePoolWithTag(Pool2, 0);
              goto LABEL_11;
            }
            Pool2 = v12;
            v10 = v19 == 288;
            v12 = v20;
          }
        }
LABEL_8:
        a1 = (_QWORD *)a1[2];
      }
      else
      {
        v23 = 1;
        a1 = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
        if ( a1 == v17 && !a2 )
          a1 = (_QWORD *)IopFindLegacyBusDeviceNode(v16, 0LL);
      }
      if ( !a1 )
        break;
    }
  }
  *a6 = Pool2;
LABEL_11:
  ExFreePoolWithTag(v12, 0);
  return v6;
}
