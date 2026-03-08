/*
 * XREFs of DrvDbGetDeviceIdMappedProperty @ 0x140865414
 * Callers:
 *     DrvDbDispatchDeviceId @ 0x140864D40 (DrvDbDispatchDeviceId.c)
 * Callees:
 *     wcschr @ 0x1403D5D90 (wcschr.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     DrvDbOpenObjectRegKey @ 0x140865658 (DrvDbOpenObjectRegKey.c)
 *     DrvDbGetRegValueMappedProperty @ 0x140865F5C (DrvDbGetRegValueMappedProperty.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140866238 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x140A695E4 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x140A69CD8 (DrvDbOpenDeviceIdRegKey.c)
 */

__int64 __fastcall DrvDbGetDeviceIdMappedProperty(
        __int64 a1,
        __int64 a2,
        HANDLE a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        unsigned int a7,
        _DWORD *a8)
{
  __int64 v10; // r15
  int v11; // r11d
  __int64 v12; // rax
  __int64 v13; // rax
  char v14; // di
  wchar_t *v15; // rax
  wchar_t *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // r15
  int v19; // eax
  int v20; // ecx
  int RegValueMappedProperty; // ebx
  char v22; // al
  int v24; // ecx
  int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // rax
  int ObjectDatabaseNodeName; // eax
  __int64 v29; // rax
  HANDLE v30; // rdx
  int v31; // eax
  unsigned int v32; // edx
  __int64 **i; // r8
  __int64 *v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 **v37; // rdi
  int v38; // [rsp+50h] [rbp-10h] BYREF
  int v39; // [rsp+54h] [rbp-Ch]
  HANDLE Handle; // [rsp+58h] [rbp-8h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+40h]
  char v42; // [rsp+B8h] [rbp+58h]

  v41 = a1;
  Handle = 0LL;
  v10 = a1;
  v38 = 0;
  *a5 = 0;
  *a8 = 0;
  v11 = *(_DWORD *)(a4 + 16);
  v39 = 0;
  v42 = 0;
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      LODWORD(a1) = 1956831636;
      v12 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
      if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
        v12 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
      if ( !v12 )
      {
        v13 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfMatches;
        if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfMatches )
          v13 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
        v14 = 1;
        if ( !v13 )
          goto LABEL_9;
        goto LABEL_47;
      }
    }
LABEL_63:
    v32 = 0;
    for ( i = &off_14000B278; ; i += 5 )
    {
      v34 = *i;
      if ( *((_DWORD *)*i + 4) == v11 )
      {
        v35 = *v34 - *(_QWORD *)a4;
        if ( *v34 == *(_QWORD *)a4 )
          v35 = v34[1] - *(_QWORD *)(a4 + 8);
        if ( !v35 )
          break;
      }
      if ( ++v32 )
        return (unsigned int)-1073741802;
    }
    v36 = 5LL * v32;
    v37 = &(&off_14000B278)[5 * v32];
    if ( v37 )
    {
      if ( !a3 )
      {
        RegValueMappedProperty = DrvDbOpenDeviceIdRegKey(v10, a2, 1, 0, (__int64)&Handle, 0LL);
        if ( RegValueMappedProperty < 0 )
          goto LABEL_22;
        a3 = Handle;
      }
      RegValueMappedProperty = DrvDbGetRegValueMappedProperty(v36, a3, v37, a5, a6, a7, a8);
      goto LABEL_22;
    }
    return (unsigned int)-1073741802;
  }
  v27 = *(_QWORD *)a4 - DEVPKEY_NODE;
  if ( *(_QWORD *)a4 == DEVPKEY_NODE )
    v27 = *(_QWORD *)(a4 + 8) + 0x5008C7D4C8250077LL;
  if ( !v27 )
  {
    *a5 = 18;
    ObjectDatabaseNodeName = DrvDbGetObjectDatabaseNodeName(a1, 5LL, a2, a6, a7 >> 1, a8);
    RegValueMappedProperty = ObjectDatabaseNodeName;
    if ( (int)(ObjectDatabaseNodeName + 0x80000000) < 0 || ObjectDatabaseNodeName == -1073741789 )
      *a8 *= 2;
    goto LABEL_22;
  }
  v29 = *(_QWORD *)a4 - DEVPKEY_DeviceId_DriverInfNames;
  if ( *(_QWORD *)a4 == DEVPKEY_DeviceId_DriverInfNames )
    v29 = *(_QWORD *)(a4 + 8) + 0x4524B8338B5D1E6CLL;
  if ( v29 )
    goto LABEL_63;
LABEL_47:
  v14 = 0;
LABEL_9:
  if ( (*(_WORD *)a2 != 64
     || (v15 = wcschr((const wchar_t *)(a2 + 2), 0x3Au)) == 0LL
     || (v16 = v15 + 1) == 0LL
     || v16 == (wchar_t *)a2)
    && !*(_QWORD *)(v10 + 48) )
  {
    v17 = (_QWORD *)(v10 + 16);
    v18 = *(_QWORD **)(v10 + 16);
    if ( v18 == v17 )
    {
LABEL_21:
      RegValueMappedProperty = -1073741772;
      goto LABEL_22;
    }
    while ( 1 )
    {
      v19 = DrvDbOpenObjectRegKey(v41, (_DWORD)v18, 5, a2, 1, 0, (__int64)&Handle, 0LL, 0LL);
      RegValueMappedProperty = v19;
      if ( v19 >= 0 )
      {
        v42 = 1;
        RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(
                                   v20,
                                   (_DWORD)Handle,
                                   (int)a6 + v39,
                                   (a7 - v39) >> 1,
                                   (__int64)&v38,
                                   v14);
        ZwClose(Handle);
        Handle = 0LL;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_26;
        if ( RegValueMappedProperty != -1073741275 )
        {
          if ( RegValueMappedProperty != -1073741789 )
          {
            v22 = 1;
            goto LABEL_52;
          }
LABEL_26:
          v24 = 2 * v38 - 2;
          if ( (unsigned int)(2 * v38) <= 2 )
            v24 = 2 * v38;
          if ( a6 )
          {
            v25 = v39;
            if ( v24 + v39 < a7 )
              v25 = v24 + v39;
            v39 = v25;
          }
          *a8 += v24;
          goto LABEL_18;
        }
      }
      else if ( v19 != -1073741772 )
      {
        v22 = v42;
        goto LABEL_52;
      }
      RegValueMappedProperty = 0;
LABEL_18:
      v18 = (_QWORD *)*v18;
      if ( v18 == (_QWORD *)(v41 + 16) )
      {
        v22 = v42;
        if ( RegValueMappedProperty >= 0 )
          goto LABEL_20;
LABEL_52:
        if ( RegValueMappedProperty != -1073741789 )
          goto LABEL_22;
LABEL_20:
        if ( !v22 )
          goto LABEL_21;
        if ( *a8 )
        {
          *a5 = 8210;
          v26 = *a8 + 2;
          *a8 = v26;
          if ( a6 && v26 <= a7 )
            *(_WORD *)(a6 + 2 * ((unsigned __int64)v26 >> 1) - 2) = 0;
          else
            RegValueMappedProperty = -1073741789;
        }
        else
        {
          RegValueMappedProperty = -1073741275;
        }
        goto LABEL_22;
      }
    }
  }
  v30 = 0LL;
  if ( a3 != (HANDLE)-1LL )
    v30 = a3;
  if ( !v30 )
  {
    RegValueMappedProperty = DrvDbOpenDeviceIdRegKey(v10, a2, 1, 0, (__int64)&Handle, 0LL);
    if ( RegValueMappedProperty < 0 )
      goto LABEL_22;
    LODWORD(v30) = (_DWORD)Handle;
  }
  RegValueMappedProperty = DrvDbGetDeviceIdDriverInfMatches(a1, (_DWORD)v30, a6, a7 >> 1, (__int64)&v38, v14);
  if ( (int)(RegValueMappedProperty + 0x80000000) < 0 || RegValueMappedProperty == -1073741789 )
  {
    v31 = 2 * v38;
    *a5 = 8210;
    *a8 = v31;
  }
LABEL_22:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)RegValueMappedProperty;
}
