__int64 __fastcall CmGetDeviceMappedProperty(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  unsigned int v11; // r11d
  int v12; // ebx
  unsigned int v13; // edx
  DEVPROPKEY **v14; // rax
  DEVPROPKEY *v15; // r8
  int v16; // edi
  __int64 v17; // rsi
  __int64 v18; // rbp
  DEVPROPKEY **v19; // rcx
  unsigned int v20; // edx
  DEVPROPKEY *v21; // r8
  DEVPROPKEY **i; // rcx
  DEVPROPKEY *v23; // rdx
  __int64 result; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // r10

  v11 = -1073741802;
  if ( (_WORD)a10 )
    return 3221225485LL;
  v12 = 0;
  *a9 = 0;
  if ( a4 )
    return 3221225494LL;
  v13 = 0;
  v14 = &CmDeviceRegPropMap;
  while ( 1 )
  {
    v15 = *v14;
    if ( *(_DWORD *)(a5 + 16) == (*v14)->pid )
    {
      v26 = *(_QWORD *)a5 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v15->fmtid.Data1 )
        v26 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v26 )
        break;
    }
    ++v13;
    v14 += 3;
    if ( v13 >= 0x21 )
    {
      v16 = a8;
      v17 = a7;
      v18 = a6;
      goto LABEL_7;
    }
  }
  v16 = a8;
  v17 = a7;
  v18 = a6;
  result = CmGetDeviceMappedPropertyFromRegProp(a1, a2, a3, a5, a6, a7, a8, (__int64)a9, a10);
  v11 = result;
  if ( (_DWORD)result != -1073741802 )
    return result;
LABEL_7:
  v19 = &off_140A756D0;
  v20 = 0;
  while ( 1 )
  {
    v21 = *v19;
    if ( *(_DWORD *)(a5 + 16) == (*v19)->pid )
    {
      v27 = *(_QWORD *)a5 - *(_QWORD *)&v21->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v21->fmtid.Data1 )
        v27 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v21->fmtid.Data4;
      if ( !v27 )
        break;
    }
    ++v20;
    v19 += 4;
    if ( v20 >= 2 )
      goto LABEL_10;
  }
  result = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(a1, a2, a3, a5, v18, v17, v16, a9);
  v11 = result;
  if ( (_DWORD)result != -1073741802 )
    return result;
LABEL_10:
  for ( i = &off_140A77A80; ; i += 2 )
  {
    v23 = *i;
    if ( *(_DWORD *)(a5 + 16) == (*i)->pid )
    {
      v25 = *(_QWORD *)a5 - *(_QWORD *)&v23->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v23->fmtid.Data1 )
        v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v23->fmtid.Data4;
      if ( !v25 )
        break;
    }
    if ( (unsigned int)++v12 >= 0x1C )
      return v11;
  }
  return CmGetDeviceMappedPropertyFromComposite(a1, a2, a3, a5, v18, v17, v16, a9, a10);
}
