__int64 __fastcall CmSetInterfaceClassMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        ULONG a8)
{
  unsigned int v11; // ebx
  DEVPROPKEY **v12; // r9
  int v13; // r10d
  DEVPROPKEY *v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  DEVPROPKEY **v17; // rdx
  int v18; // r8d
  DEVPROPKEY *v19; // r9
  __int64 v20; // rcx

  v11 = -1073741802;
  if ( !a4 )
  {
    v12 = &off_140A74E28;
    v13 = 0;
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 && *(_DWORD *)(a5 + 16) == v14->pid )
      {
        v15 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
        if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
          v15 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
        if ( !v15 )
          break;
      }
      ++v13;
      v12 += 2;
      if ( v13 )
        goto LABEL_16;
    }
    if ( a6 < 2 )
      v16 = CmDeleteInterfaceClassMappedPropertyFromRegValue(a1, a2, a3, a5);
    else
      v16 = CmSetInterfaceClassMappedPropertyFromRegValue(a1, a2, (int)a3, a5, a6, a7, a8);
    v11 = v16;
    if ( v16 >= 0 )
    {
      PnpObjectRaisePropertyChangeEvent(a1, a2, 4LL, (__int64)a3, 0LL, a5);
      return v11;
    }
    if ( v16 == -1073741802 )
    {
LABEL_16:
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
          return v11;
      }
      return (unsigned int)-1073741790;
    }
  }
  return v11;
}
