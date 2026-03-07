__int64 __fastcall CmGetInterfaceClassMappedProperty(
        __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        int a8,
        _DWORD *a9)
{
  unsigned int InterfaceClassMappedPropertyFromRegValue; // r10d
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  __int64 v15; // rcx
  DEVPROPKEY **v17; // r8
  int v18; // r9d
  DEVPROPKEY *v19; // rdx
  __int64 v20; // rcx

  InterfaceClassMappedPropertyFromRegValue = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v13 = &off_140A74E28;
    while ( 1 )
    {
      v14 = *v13;
      if ( *v13 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v15 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v15 )
          break;
      }
      LODWORD(a4) = a4 + 1;
      v13 += 2;
      if ( (_DWORD)a4 )
        goto LABEL_11;
    }
    InterfaceClassMappedPropertyFromRegValue = CmGetInterfaceClassMappedPropertyFromRegValue(
                                                 a1,
                                                 a2,
                                                 a3,
                                                 a5,
                                                 a6,
                                                 a7,
                                                 a8,
                                                 a9);
    if ( InterfaceClassMappedPropertyFromRegValue != -1073741802 )
      return InterfaceClassMappedPropertyFromRegValue;
LABEL_11:
    v17 = &off_140A74ED8;
    v18 = 0;
    while ( 1 )
    {
      v19 = *v17;
      if ( *(_DWORD *)(a5 + 16) == (*v17)->pid )
      {
        v20 = *(_QWORD *)a5 - *(_QWORD *)&v19->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v19->fmtid.Data1 )
          v20 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v19->fmtid.Data4;
        if ( !v20 )
          break;
      }
      ++v18;
      v17 += 2;
      if ( v18 )
        return InterfaceClassMappedPropertyFromRegValue;
    }
    return (unsigned int)CmGetInterfaceClassMappedPropertyFromComposite(
                           a1,
                           a2,
                           (_DWORD)a3,
                           a5,
                           (__int64)a6,
                           a7,
                           a8,
                           (__int64)a9);
  }
  return InterfaceClassMappedPropertyFromRegValue;
}
