__int64 __fastcall CmGetDeviceInterfaceMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  unsigned int v8; // edx
  unsigned int v9; // r11d
  DEVPROPKEY **v10; // r9
  DEVPROPKEY *v11; // r8
  __int64 v12; // rcx
  DEVPROPKEY **v13; // r8
  unsigned int v14; // r9d
  DEVPROPKEY *v15; // r11
  __int64 v16; // rcx

  v8 = -1073741802;
  v9 = 0;
  v10 = &off_140A75178;
  *a7 = 0;
  while ( 1 )
  {
    v11 = *v10;
    if ( *v10 && *(_DWORD *)(a4 + 16) == v11->pid )
    {
      v12 = *(_QWORD *)a4 - *(_QWORD *)&v11->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v11->fmtid.Data1 )
        v12 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v11->fmtid.Data4;
      if ( !v12 )
        break;
    }
    ++v9;
    v10 += 2;
    if ( v9 >= 3 )
    {
      v13 = &off_140A758D0;
      v14 = 0;
      while ( 1 )
      {
        v15 = *v13;
        if ( *(_DWORD *)(a4 + 16) == (*v13)->pid )
        {
          v16 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
            v16 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
          if ( !v16 )
            break;
        }
        ++v14;
        v13 += 2;
        if ( v14 >= 4 )
          return v8;
      }
      break;
    }
  }
  *a7 = 1;
  if ( a6 )
  {
    v8 = 0;
    *a5 = 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v8;
}
