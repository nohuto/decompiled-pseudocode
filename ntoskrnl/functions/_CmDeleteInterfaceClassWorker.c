__int64 __fastcall CmDeleteInterfaceClassWorker(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // edi
  unsigned int MatchingFilteredDeviceInterfaceList; // eax
  int v7; // r9d
  int *v8; // rbx
  unsigned int v9; // ebp
  int v10; // r8d
  int v11; // eax
  void *Pool2; // rbx
  unsigned int v13; // ebp
  int InterfaceClassMappedPropertyKeys; // eax
  unsigned __int64 v15; // r14
  unsigned int v16; // r14d
  int v17; // ebp
  int v18; // eax
  unsigned int v20; // [rsp+50h] [rbp-48h] BYREF
  int v21; // [rsp+54h] [rbp-44h] BYREF
  _DWORD v22[4]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  v21 = 0;
  if ( a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            a1,
                                            a2,
                                            0LL,
                                            0,
                                            0LL,
                                            0LL,
                                            0LL,
                                            0,
                                            (__int64)&v21,
                                            0);
    if ( MatchingFilteredDeviceInterfaceList == -1073741789 )
    {
      return (unsigned int)-1073741535;
    }
    else if ( MatchingFilteredDeviceInterfaceList )
    {
      return MatchingFilteredDeviceInterfaceList;
    }
    else
    {
      v22[0] = 832;
      v8 = v22;
      v22[1] = 576;
      v9 = 0;
      v22[2] = 320;
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 )
        {
          if ( (v10 & 0xFFFFFCBF) == 0 )
          {
            v11 = CmDeleteCommonClassRegKey(a1, a2, v10, 0, 1);
            if ( v11 )
            {
              if ( v11 != -1073741772 && v11 != -1073741811 && v11 != -1073741637 )
                break;
            }
          }
        }
        ++v9;
        ++v8;
        if ( v9 >= 3 )
          goto LABEL_17;
      }
      v3 = v11;
      if ( v11 < 0 )
        return (unsigned int)v3;
LABEL_17:
      Pool2 = 0LL;
      v13 = 0;
      v20 = 0;
      while ( 1 )
      {
        LOBYTE(v7) = 1;
        InterfaceClassMappedPropertyKeys = CmGetInterfaceClassMappedPropertyKeys(
                                             a1,
                                             a2,
                                             0,
                                             v7,
                                             (__int64)Pool2,
                                             v13,
                                             (__int64)&v20);
        if ( InterfaceClassMappedPropertyKeys != -1073741789 )
          break;
        v13 = v20;
        v15 = 20LL * v20;
        if ( v15 > 0xFFFFFFFF )
        {
          InterfaceClassMappedPropertyKeys = -1073741811;
          goto LABEL_27;
        }
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)v15, 1380994640LL);
        if ( !Pool2 )
        {
          InterfaceClassMappedPropertyKeys = -1073741801;
LABEL_27:
          v3 = InterfaceClassMappedPropertyKeys;
          goto LABEL_42;
        }
      }
      if ( InterfaceClassMappedPropertyKeys && InterfaceClassMappedPropertyKeys != -1073741275 )
        goto LABEL_27;
      v16 = v20;
      v17 = 0;
      if ( v20 )
      {
        while ( 1 )
        {
          v18 = CmSetInterfaceClassMappedProperty(a1, a2, (int)Pool2 + 20 * v17, 0, 0LL, 0);
          if ( v18 )
          {
            if ( v18 != -1073741275 && v18 != -1073741790 && v18 != -1073741802 && v18 != -1073741637 )
              break;
          }
          if ( ++v17 >= v16 )
            goto LABEL_37;
        }
        v3 = v18;
      }
LABEL_37:
      if ( v3 >= 0 )
      {
        InterfaceClassMappedPropertyKeys = CmDeleteCommonClassRegKey(a1, a2, 64, 0, 1);
        if ( InterfaceClassMappedPropertyKeys
          && InterfaceClassMappedPropertyKeys != -1073741772
          && InterfaceClassMappedPropertyKeys != -1073741811 )
        {
          goto LABEL_27;
        }
        CmRaiseDeleteEvent(a1, a2, 4LL);
      }
LABEL_42:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
    }
  }
  return (unsigned int)v3;
}
