/*
 * XREFs of _CmGetDeviceMappedPropertyKeys @ 0x1407FCE14
 * Callers:
 *     _PnpDispatchDevice @ 0x1406C8E70 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x140A5F74C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1406C9418 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406CA2A4 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1407FD090 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // rsi
  unsigned int v11; // ebp
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  DEVPROPKEY **v18; // rsi
  DEVPROPKEY *v19; // rdi
  unsigned int v20; // esi
  __int64 *v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // ecx
  unsigned int v29[18]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+8h]
  const wchar_t *v31; // [rsp+A8h] [rbp+10h]

  v31 = (const wchar_t *)a2;
  v30 = a1;
  v7 = a7;
  v8 = (__int64 *)&CmDeviceRegPropMap;
  v29[0] = 0;
  *a7 = 0;
  LODWORD(a7) = 0;
  v11 = 0;
  while ( 1 )
  {
    v12 = *v8;
    if ( *v8 )
    {
      if ( a4
        || (result = CmGetDeviceMappedPropertyFromRegProp(a1, a2, a3, v12, v29, 0LL, 0, (unsigned int *)&a7, 0),
            (_DWORD)result == -1073741789)
        || !(_DWORD)result )
      {
        if ( a5 )
        {
          v14 = *v7;
          if ( (unsigned int)v14 < a6 )
          {
            v15 = 5 * v14;
            *(_OWORD *)(a5 + 4 * v15) = *(_OWORD *)v12;
            *(_DWORD *)(a5 + 4 * v15 + 16) = *(_DWORD *)(v12 + 16);
          }
        }
        v16 = *v7 + 1;
        if ( v16 < *v7 )
        {
LABEL_41:
          result = 3221225621LL;
LABEL_35:
          *v7 = 0;
          return result;
        }
        *v7 = v16;
      }
      else if ( (_DWORD)result == -1073741632 )
      {
        goto LABEL_35;
      }
      a1 = v30;
    }
    ++v11;
    v8 += 3;
    if ( v11 >= 0x21 )
      break;
    a2 = (__int64)v31;
  }
  v17 = 0;
  v18 = &off_140A756D0;
  while ( 1 )
  {
    v19 = *v18;
    if ( *v18 )
    {
      if ( a4
        || (result = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(a1, v31, a3, v19, v29, 0LL, 0, &a7),
            (_DWORD)result == -1073741789)
        || !(_DWORD)result )
      {
        if ( a5 )
        {
          v26 = *v7;
          if ( (unsigned int)v26 < a6 )
          {
            v27 = 5 * v26;
            *(_GUID *)(a5 + 4 * v27) = v19->fmtid;
            *(_DWORD *)(a5 + 4 * v27 + 16) = v19->pid;
          }
        }
        v28 = *v7 + 1;
        if ( v28 < *v7 )
          goto LABEL_41;
        *v7 = v28;
      }
      else if ( (_DWORD)result == -1073741632 )
      {
        goto LABEL_35;
      }
    }
    ++v17;
    v18 += 4;
    if ( v17 >= 2 )
      break;
    a1 = v30;
  }
  v20 = 0;
  v21 = (__int64 *)&off_140A77A80;
  do
  {
    v22 = *v21;
    if ( a4
      || (result = CmGetDeviceMappedPropertyFromComposite(v30, v31, a3, *v21, v29, 0LL, 0, (int *)&a7, 0),
          (_DWORD)result == -1073741789)
      || !(_DWORD)result )
    {
      if ( a5 )
      {
        v23 = *v7;
        if ( (unsigned int)v23 < a6 )
        {
          v24 = 5 * v23;
          *(_OWORD *)(a5 + 4 * v24) = *(_OWORD *)v22;
          *(_DWORD *)(a5 + 4 * v24 + 16) = *(_DWORD *)(v22 + 16);
        }
      }
      v25 = *v7 + 1;
      if ( v25 < *v7 )
        goto LABEL_41;
      *v7 = v25;
    }
    else if ( (_DWORD)result == -1073741632 )
    {
      goto LABEL_35;
    }
    ++v20;
    v21 += 2;
  }
  while ( v20 < 0x1C );
  return a6 < *v7 ? 0xC0000023 : 0;
}
