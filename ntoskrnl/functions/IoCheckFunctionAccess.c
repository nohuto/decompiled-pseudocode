NTSTATUS __stdcall IoCheckFunctionAccess(
        ACCESS_MASK GrantedAccess,
        UCHAR MajorFunction,
        UCHAR MinorFunction,
        ULONG IoControlCode,
        PVOID Arg1,
        PVOID Arg2)
{
  NTSTATUS v6; // r8d
  char v7; // r10
  int v8; // r8d
  char v10; // r10
  bool v11; // cf
  int v12; // edx
  int v13; // r10d
  int v14; // r9d
  int v15; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v15 = 0;
  if ( MajorFunction > 0xAu )
  {
    if ( MajorFunction == 11 )
    {
      if ( (~GrantedAccess & IopSetFsOperationAccess[*(int *)Arg2]) != 0 )
        return -1073741790;
      return v6;
    }
    if ( MajorFunction != 12 )
    {
      switch ( MajorFunction )
      {
        case 0xDu:
        case 0xEu:
        case 0xFu:
          v14 = (unsigned __int16)IoControlCode >> 14;
          if ( v14 && (v14 & GrantedAccess) == 0 )
            return -1073741790;
          return v6;
        case 0x11u:
          v7 = GrantedAccess & 3;
          goto LABEL_8;
        case 0x14u:
          SeQuerySecurityAccessMask(*(_DWORD *)Arg1, &v15);
          break;
        case 0x15u:
          SeSetSecurityAccessMask(*(_DWORD *)Arg1, &v15);
          break;
        default:
          return -1073741808;
      }
      v11 = (v15 & ~v13) != 0;
      goto LABEL_20;
    }
LABEL_18:
    v10 = (GrantedAccess & 1) == 0;
LABEL_19:
    v11 = v10 != 0;
LABEL_20:
    v8 = -v11;
    return v8 & 0xC0000022;
  }
  switch ( MajorFunction )
  {
    case 0xAu:
      v11 = (~GrantedAccess & IopQueryFsOperationAccess[*(int *)Arg2]) != 0;
      goto LABEL_20;
    case 0u:
    case 2u:
      return v6;
    case 3u:
      goto LABEL_18;
    case 4u:
      v7 = GrantedAccess & 6;
LABEL_8:
      v8 = -(v7 == 0);
      return v8 & 0xC0000022;
  }
  if ( MajorFunction != 5 )
  {
    switch ( MajorFunction )
    {
      case 6u:
        v12 = IopSetOperationAccess[*(int *)Arg1];
        goto LABEL_23;
      case 7u:
        v10 = ~(_BYTE)GrantedAccess & 8;
        goto LABEL_19;
      case 8u:
        v10 = ~(_BYTE)GrantedAccess & 0x10;
        goto LABEL_19;
      case 9u:
        v10 = ~(_BYTE)GrantedAccess & 2;
        goto LABEL_19;
    }
    return -1073741808;
  }
  v12 = IopQueryOperationAccess[*(int *)Arg1];
LABEL_23:
  if ( v12 && (~GrantedAccess & v12) != 0 )
    return -1073741790;
  return v6;
}
