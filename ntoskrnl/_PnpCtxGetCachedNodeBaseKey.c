__int64 __fastcall PnpCtxGetCachedNodeBaseKey(__int64 a1, __int64 *a2, int a3, __int64 *a4)
{
  int CachedContextBaseKey; // esi
  void *EnumSecurityDescriptor; // r12
  __int64 v9; // r10
  unsigned int v10; // r14d
  int v11; // r11d
  __int64 v12; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  const wchar_t *v28; // r15
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ebx
  int v35; // ebx
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebx
  __int64 v40; // rax
  int v41; // ebx
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  __int64 v47; // [rsp+20h] [rbp-40h]
  __int64 v48; // [rsp+30h] [rbp-30h]
  __int64 v49; // [rsp+50h] [rbp-10h] BYREF
  void *v50; // [rsp+58h] [rbp-8h] BYREF

  CachedContextBaseKey = 0;
  EnumSecurityDescriptor = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v9 = a1;
  v10 = 4;
  v11 = 1;
  if ( a3 > 8 )
  {
    switch ( a3 )
    {
      case 9:
        v12 = a2[12];
        break;
      case 10:
        v12 = a2[13];
        break;
      case 11:
        v12 = a2[14];
        break;
      case 12:
        v12 = a2[15];
        break;
      case 13:
        v12 = a2[16];
        break;
      case 14:
        v12 = a2[17];
        break;
      case 15:
        v12 = a2[18];
        break;
      default:
        return (unsigned int)-1073741811;
    }
    goto LABEL_9;
  }
  switch ( a3 )
  {
    case 8:
      v12 = a2[11];
LABEL_9:
      v49 = v12;
      goto LABEL_10;
    case 1:
      v14 = a2[7];
      v15 = 1LL;
      break;
    case 2:
      v14 = a2[7];
      v15 = 2LL;
      break;
    case 3:
      v14 = a2[7];
      v15 = 3LL;
      break;
    case 4:
      v14 = a2[7];
      v15 = 4LL;
      break;
    default:
      switch ( a3 )
      {
        case 5:
          v12 = a2[8];
          break;
        case 6:
          v12 = a2[9];
          break;
        case 7:
          v12 = a2[10];
          break;
        default:
          return (unsigned int)-1073741811;
      }
      goto LABEL_9;
  }
  CachedContextBaseKey = SysCtxGetCachedContextBaseKey(v14, v15, &v49);
  if ( CachedContextBaseKey < 0 )
    return (unsigned int)CachedContextBaseKey;
  v12 = v49;
LABEL_10:
  if ( v12 )
  {
    *a4 = v12;
    return (unsigned int)CachedContextBaseKey;
  }
  if ( a3 <= 8 )
  {
    if ( a3 == 8 )
      goto LABEL_46;
    if ( a3 == v11 )
      return (unsigned int)-1073741811;
    v19 = a3 - v11 - v11;
    if ( !v19 )
      return (unsigned int)-1073741811;
    v20 = v19 - v11;
    if ( !v20 )
      return (unsigned int)-1073741811;
    v18 = v20 - v11;
    if ( !v18 )
      return (unsigned int)-1073741811;
  }
  else
  {
    if ( a3 == 9 )
      goto LABEL_46;
    v16 = a3 - 9 - v11;
    if ( !v16 )
      goto LABEL_46;
    v17 = v16 - v11;
    if ( !v17 )
      goto LABEL_46;
    v18 = v17 - v11;
    if ( !v18 )
      goto LABEL_46;
  }
  v21 = v18 - v11;
  if ( v21 )
  {
    v22 = v21 - v11;
    if ( v22 )
    {
      if ( v22 != v11 )
        return (unsigned int)-1073741811;
    }
  }
LABEL_46:
  if ( a3 > 8 )
  {
    if ( a3 != 9 )
    {
      v23 = a3 - 9 - v11;
      if ( !v23 )
      {
        v28 = L"Control\\DeviceContainers";
        goto LABEL_64;
      }
      v24 = v23 - v11;
      if ( !v24 )
      {
        v28 = L"Control\\DevicePanels";
        goto LABEL_64;
      }
      v25 = v24 - v11;
      if ( !v25 )
      {
        v28 = L"Control\\CriticalDeviceDatabase";
        goto LABEL_64;
      }
      v26 = v25 - v11;
      if ( !v26 )
      {
        v28 = L"Control\\CoDeviceInstallers";
        goto LABEL_64;
      }
      v27 = v26 - v11;
      if ( !v27 )
      {
        v28 = L"Hardware Profiles";
        goto LABEL_64;
      }
      if ( v27 == v11 )
      {
        v10 = v11;
        v28 = L"HardwareConfig";
        goto LABEL_64;
      }
      return (unsigned int)-1073741811;
    }
    v28 = L"Control\\DeviceInterfaces";
    if ( *(_BYTE *)(v9 + 4) )
      goto LABEL_64;
LABEL_63:
    v28 = L"Control\\DeviceClasses";
    goto LABEL_64;
  }
  if ( a3 == 8 )
    goto LABEL_63;
  if ( a3 == v11 )
    return (unsigned int)-1073741811;
  v29 = a3 - v11 - v11;
  if ( !v29 )
    return (unsigned int)-1073741811;
  v30 = v29 - v11;
  if ( !v30 )
    return (unsigned int)-1073741811;
  v31 = v30 - v11;
  if ( !v31 )
    return (unsigned int)-1073741811;
  v32 = v31 - v11;
  if ( v32 )
  {
    v33 = v32 - v11;
    if ( !v33 )
    {
      v28 = L"Services";
      goto LABEL_64;
    }
    if ( v33 == v11 )
    {
      v28 = L"Control\\Class";
      goto LABEL_64;
    }
    return (unsigned int)-1073741811;
  }
  v28 = L"Enum";
  EnumSecurityDescriptor = (void *)PnpGetEnumSecurityDescriptor();
  if ( !EnumSecurityDescriptor )
    return (unsigned int)-1073741595;
LABEL_64:
  CachedContextBaseKey = SysCtxGetCachedContextBaseKey(a2[7], v10, &v50);
  if ( CachedContextBaseKey >= 0 )
  {
    LODWORD(v47) = 0x2000000;
    CachedContextBaseKey = SysCtxRegCreateTree(a2[7], v50, v28, 0LL, v47, 0LL, v48, (__int64)&v49, 0LL);
    if ( CachedContextBaseKey >= 0 )
    {
      if ( a3 <= 8 )
      {
        if ( a3 == 8 )
        {
          v40 = v49;
          a2[11] = v49;
          goto LABEL_85;
        }
        v41 = a3 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( v43 )
            {
              v44 = v43 - 1;
              if ( v44 )
              {
                v45 = v44 - 1;
                if ( !v45 )
                {
                  v40 = v49;
                  a2[8] = v49;
                  goto LABEL_85;
                }
                v46 = v45 - 1;
                if ( !v46 )
                {
                  v40 = v49;
                  a2[9] = v49;
                  goto LABEL_85;
                }
                if ( v46 == 1 )
                {
                  v40 = v49;
                  a2[10] = v49;
                  goto LABEL_85;
                }
              }
            }
          }
        }
      }
      else
      {
        v34 = a3 - 9;
        if ( !v34 )
        {
          v40 = v49;
          a2[12] = v49;
          goto LABEL_85;
        }
        v35 = v34 - 1;
        if ( !v35 )
        {
          v40 = v49;
          a2[13] = v49;
          goto LABEL_85;
        }
        v36 = v35 - 1;
        if ( !v36 )
        {
          v40 = v49;
          a2[14] = v49;
          goto LABEL_85;
        }
        v37 = v36 - 1;
        if ( !v37 )
        {
          v40 = v49;
          a2[15] = v49;
          goto LABEL_85;
        }
        v38 = v37 - 1;
        if ( !v38 )
        {
          v40 = v49;
          a2[16] = v49;
          goto LABEL_85;
        }
        v39 = v38 - 1;
        if ( !v39 )
        {
          v40 = v49;
          a2[17] = v49;
LABEL_85:
          *a4 = v40;
          goto LABEL_86;
        }
        if ( v39 == 1 )
        {
          v40 = v49;
          a2[18] = v49;
          goto LABEL_85;
        }
      }
      CachedContextBaseKey = -1073741811;
    }
  }
LABEL_86:
  if ( EnumSecurityDescriptor )
    ExFreePoolWithTag(EnumSecurityDescriptor, 0);
  return (unsigned int)CachedContextBaseKey;
}
