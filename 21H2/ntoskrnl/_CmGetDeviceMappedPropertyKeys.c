/*
 * XREFs of _CmGetDeviceMappedPropertyKeys @ 0x14072DE7C
 * Callers:
 *     _PnpDispatchDevice @ 0x140631220 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x14072CF38 (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406315BC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140633C08 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x140752FE0 (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
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
  __int64 *v7; // r14
  __int64 result; // rax
  unsigned int v10; // ebp
  __int64 v11; // rdi
  char v12; // si
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebp
  DEVPROPKEY **v19; // r14
  DEVPROPKEY *v20; // rdi
  char v21; // si
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edx
  int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // ebp
  __int64 *v28; // rsi
  __int64 v29; // r14
  char v30; // di
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // edx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // [rsp+50h] [rbp-48h] BYREF
  int v37[17]; // [rsp+54h] [rbp-44h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+8h]
  const wchar_t *v39; // [rsp+A8h] [rbp+10h]
  __int64 v40; // [rsp+B0h] [rbp+18h]

  v40 = a3;
  v39 = (const wchar_t *)a2;
  v38 = a1;
  v7 = (__int64 *)&CmDeviceRegPropMap;
  result = 0LL;
  v37[0] = 0;
  *a7 = 0;
  v10 = 0;
  v36 = 0;
  while ( 1 )
  {
    v11 = *v7;
    v12 = 0;
    if ( !*v7 )
      goto LABEL_11;
    if ( a4 )
      goto LABEL_63;
    result = CmGetDeviceMappedPropertyFromRegProp(a1, a2, a3, v11, v37, 0LL, 0, (unsigned int *)&v36, 0);
    if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
    {
      v12 = 1;
    }
    else if ( (_DWORD)result == -1073741632 )
    {
LABEL_41:
      *a7 = 0;
      return result;
    }
    result = 0LL;
    if ( v12 )
    {
LABEL_63:
      if ( a5 )
      {
        v13 = *a7;
        if ( (unsigned int)v13 < a6 )
        {
          v14 = 5 * v13;
          *(_OWORD *)(a5 + 4 * v14) = *(_OWORD *)v11;
          *(_DWORD *)(a5 + 4 * v14 + 16) = *(_DWORD *)(v11 + 16);
        }
      }
      v15 = *a7;
      v16 = -1;
      v17 = *a7 + 1;
      if ( v17 >= *a7 )
        v16 = *a7 + 1;
      *a7 = v16;
      result = v17 < v15 ? 0xC0000095 : 0;
      if ( v17 < v15 )
        break;
    }
    a1 = v38;
    a2 = (__int64)v39;
LABEL_11:
    ++v10;
    v7 += 3;
    if ( v10 >= 0x21 )
      goto LABEL_13;
    a3 = v40;
  }
  *a7 = 0;
LABEL_13:
  if ( (int)result >= 0 )
  {
    v18 = 0;
    v19 = &off_140983FA0;
    while ( 1 )
    {
      v20 = *v19;
      v21 = 0;
      if ( *v19 )
      {
        if ( a4 )
          goto LABEL_64;
        result = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(v38, v39, v40, v20, v37, 0LL, 0, &v36);
        if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
        {
          v21 = 1;
        }
        else if ( (_DWORD)result == -1073741632 )
        {
          goto LABEL_41;
        }
        result = 0LL;
        if ( v21 )
        {
LABEL_64:
          if ( a5 )
          {
            v22 = *a7;
            if ( (unsigned int)v22 < a6 )
            {
              v23 = 5 * v22;
              *(_GUID *)(a5 + 4 * v23) = v20->fmtid;
              *(_DWORD *)(a5 + 4 * v23 + 16) = v20->pid;
            }
          }
          v24 = *a7;
          v25 = -1;
          v26 = *a7 + 1;
          if ( v26 >= *a7 )
            v25 = *a7 + 1;
          *a7 = v25;
          result = v26 < v24 ? 0xC0000095 : 0;
          if ( v26 < v24 )
            break;
        }
      }
      ++v18;
      v19 += 4;
      if ( v18 >= 2 )
        goto LABEL_24;
    }
    *a7 = 0;
LABEL_24:
    if ( (int)result >= 0 )
    {
      v27 = 0;
      v28 = (__int64 *)&off_140985F90;
      while ( 1 )
      {
        v29 = *v28;
        v30 = 0;
        if ( a4 )
          goto LABEL_65;
        result = CmGetDeviceMappedPropertyFromComposite(v38, v39, v40, v29, v37, 0LL, 0, &v36, 0);
        if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
        {
          v30 = 1;
        }
        else if ( (_DWORD)result == -1073741632 )
        {
          goto LABEL_41;
        }
        result = 0LL;
        if ( v30 )
        {
LABEL_65:
          if ( a5 )
          {
            v31 = *a7;
            if ( (unsigned int)v31 < a6 )
            {
              v32 = 5 * v31;
              *(_OWORD *)(a5 + 4 * v32) = *(_OWORD *)v29;
              *(_DWORD *)(a5 + 4 * v32 + 16) = *(_DWORD *)(v29 + 16);
            }
          }
          v33 = *a7;
          v34 = -1;
          v35 = *a7 + 1;
          if ( v35 >= *a7 )
            v34 = *a7 + 1;
          *a7 = v34;
          result = v35 < v33 ? 0xC0000095 : 0;
          if ( v35 < v33 )
            break;
        }
        ++v27;
        v28 += 2;
        if ( v27 >= 0x1B )
          goto LABEL_34;
      }
      *a7 = 0;
LABEL_34:
      if ( (int)result >= 0 )
        return a6 < *a7 ? 0xC0000023 : 0;
    }
  }
  return result;
}
