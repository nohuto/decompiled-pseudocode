/*
 * XREFs of _CmGetDeviceMappedProperty @ 0x1407857F0
 * Callers:
 *     _PnpDispatchDevice @ 0x1407855F0 (_PnpDispatchDevice.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DA4DC (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140785B98 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14078600C (_CmGetDeviceMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetDeviceMappedProperty(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        _DWORD *a9,
        int a10)
{
  int v11; // ebx
  unsigned int v12; // edx
  DEVPROPKEY **v13; // rax
  DEVPROPKEY *v14; // r8
  int v15; // edi
  __int64 v16; // rsi
  __int64 v17; // rbp
  DEVPROPKEY **v18; // rcx
  unsigned int v19; // edx
  DEVPROPKEY *v20; // r8
  DEVPROPKEY **i; // rcx
  DEVPROPKEY *v22; // rdx
  __int64 result; // rax
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // r10

  if ( (_WORD)a10 )
    return 3221225485LL;
  v11 = 0;
  *a9 = 0;
  if ( a4 )
    return 3221225494LL;
  v12 = 0;
  v13 = &CmDeviceRegPropMap;
  while ( 1 )
  {
    v14 = *v13;
    if ( *(_DWORD *)(a5 + 16) == (*v13)->pid )
    {
      v25 = *(_QWORD *)a5 - *(_QWORD *)&v14->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v14->fmtid.Data1 )
        v25 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v14->fmtid.Data4;
      if ( !v25 )
        break;
    }
    ++v12;
    v13 += 3;
    if ( v12 >= 0x21 )
    {
      v15 = a8;
      v16 = a7;
      v17 = a6;
      goto LABEL_7;
    }
  }
  v15 = a8;
  v16 = a7;
  v17 = a6;
  result = CmGetDeviceMappedPropertyFromRegProp(a1, a2, (_DWORD)a3, a5, a6, a7, a8, (__int64)a9, a10);
  if ( (_DWORD)result != -1073741802 )
    return result;
LABEL_7:
  v18 = &off_140A38610;
  v19 = 0;
  while ( 1 )
  {
    v20 = *v18;
    if ( *(_DWORD *)(a5 + 16) == (*v18)->pid )
    {
      v26 = *(_QWORD *)a5 - *(_QWORD *)&v20->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v20->fmtid.Data1 )
        v26 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v20->fmtid.Data4;
      if ( !v26 )
        break;
    }
    ++v19;
    v18 += 4;
    if ( v19 >= 2 )
      goto LABEL_10;
  }
  result = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(a1, a2, a3, a5, v17, v16, v15, a9);
  if ( (_DWORD)result != -1073741802 )
    return result;
LABEL_10:
  for ( i = &off_140A3A8C0; ; i += 2 )
  {
    v22 = *i;
    if ( *(_DWORD *)(a5 + 16) == (*i)->pid )
    {
      v24 = *(_QWORD *)a5 - *(_QWORD *)&v22->fmtid.Data1;
      if ( *(_QWORD *)a5 == *(_QWORD *)&v22->fmtid.Data1 )
        v24 = *(_QWORD *)(a5 + 8) - *(_QWORD *)v22->fmtid.Data4;
      if ( !v24 )
        break;
    }
    if ( (unsigned int)++v11 >= 0x1C )
      return 3221225494LL;
  }
  return CmGetDeviceMappedPropertyFromComposite(a1, a2, a3, a5, v17, v16, v15, a9, a10);
}
