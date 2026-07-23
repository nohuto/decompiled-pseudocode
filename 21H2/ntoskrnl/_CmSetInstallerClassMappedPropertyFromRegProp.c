/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegProp @ 0x14097BE58
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x1407312BC (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _CmSetInstallerClassRegProp @ 0x140975ACC (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        int a7)
{
  int v7; // ebp
  DEVPROPKEY **v8; // rbx
  int *v9; // r10
  unsigned int v13; // esi
  int v14; // edi
  DEVPROPKEY *v15; // r9
  DEVPROPKEY **v16; // r11
  __int64 v17; // rcx
  int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // eax
  int v23; // [rsp+40h] [rbp-38h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = &CmClassRegPropMap;
  v9 = 0LL;
  v23 = 0;
  v13 = 0;
  v14 = 1;
  do
  {
    v15 = *v8;
    v16 = v8;
    if ( v7 == (*v8)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    ++v13;
    v8 += 3;
    v16 = 0LL;
  }
  while ( v13 < 9 );
  if ( !v16 )
    return 3221226032LL;
  v19 = *((_DWORD *)v16 + 2);
  v20 = *((_DWORD *)v16 + 3);
  if ( a5 != v19 )
  {
    if ( a5 == 25 )
    {
      if ( v19 != 18 )
        return 3221225485LL;
    }
    else if ( a5 >= 2 )
    {
      return 3221225485LL;
    }
  }
  v21 = *((_DWORD *)v16 + 4);
  if ( v20 == 25 )
    return 3221225659LL;
  if ( v20 != 27 )
    return CmSetInstallerClassRegProp(a1, a2, a3, v20, v21, (__int64)a6, a7 & (unsigned int)-(a6 != 0LL));
  if ( a6 )
  {
    if ( !a7 )
      return 3221225485LL;
    if ( *a6 != 0xFF )
    {
      if ( *a6 )
        return 3221225485LL;
      v14 = 0;
    }
    v23 = v14;
    v9 = &v23;
    v22 = 4;
  }
  else
  {
    v22 = 0;
  }
  return CmSetInstallerClassRegProp(a1, a2, a3, 0x1Bu, v21, (__int64)v9, v22);
}
