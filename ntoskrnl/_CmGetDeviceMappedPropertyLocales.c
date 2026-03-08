/*
 * XREFs of _CmGetDeviceMappedPropertyLocales @ 0x140839270
 * Callers:
 *     _PnpDispatchDevice @ 0x1406C8E70 (_PnpDispatchDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  DEVPROPKEY **v7; // r8
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  DEVPROPKEY *v10; // rdx
  unsigned int v11; // r10d
  DEVPROPKEY **v12; // r8
  DEVPROPKEY *v13; // rdx
  DEVPROPKEY **v14; // rdx
  unsigned int v15; // r8d
  DEVPROPKEY *v16; // r10
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx

  v7 = &CmDeviceRegPropMap;
  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 && *(_DWORD *)(a4 + 16) == v10->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v10->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v10->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v10->fmtid.Data4;
      if ( !v19 )
        break;
    }
    ++v9;
    v7 += 3;
    if ( v9 >= 0x21 )
    {
      v11 = 0;
      v12 = &off_140A756D0;
      while ( 1 )
      {
        v13 = *v12;
        if ( *v12 && *(_DWORD *)(a4 + 16) == v13->pid )
        {
          v20 = *(_QWORD *)a4 - *(_QWORD *)&v13->fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&v13->fmtid.Data1 )
            v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v13->fmtid.Data4;
          if ( !v20 )
            goto LABEL_20;
        }
        ++v11;
        v12 += 4;
        if ( v11 >= 2 )
        {
          v14 = &off_140A77A80;
          v15 = 0;
          while ( 1 )
          {
            v16 = *v14;
            if ( *(_DWORD *)(a4 + 16) == (*v14)->pid )
            {
              v18 = *(_QWORD *)a4 - *(_QWORD *)&v16->fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&v16->fmtid.Data1 )
                v18 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v16->fmtid.Data4;
              if ( !v18 )
                break;
            }
            ++v15;
            v14 += 2;
            if ( v15 >= 0x1C )
              return v8;
          }
          goto LABEL_20;
        }
      }
    }
  }
LABEL_20:
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
