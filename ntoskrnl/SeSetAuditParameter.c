NTSTATUS __stdcall SeSetAuditParameter(
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        SE_ADT_PARAMETER_TYPE Type,
        ULONG Index,
        PVOID Data)
{
  NTSTATUS v4; // r11d
  int v5; // r10d
  char *v6; // rax
  NTSTATUS result; // eax
  char *v8; // rax
  int v9; // r10d
  char *v10; // rax
  int v11; // r10d
  char *v12; // rax

  v4 = 0;
  v5 = 0;
  if ( !AuditParameters )
    return -1073741811;
  switch ( Type )
  {
    case SeAdtParmTypeHexInt64:
LABEL_7:
      v8 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v8 + 4) = *(_QWORD *)Data;
LABEL_8:
      v5 = 8;
LABEL_9:
      *((_DWORD *)v8 + 6) = Type;
      *((_DWORD *)v8 + 7) = v5;
      return v4;
    case SeAdtParmTypeString:
LABEL_11:
      v9 = *(unsigned __int16 *)Data + 16;
      v10 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v10 + 6) = Data;
      *((_DWORD *)v10 + 6) = Type;
      *((_DWORD *)v10 + 7) = v9;
      return 0;
    case SeAdtParmTypeMessage:
    case SeAdtParmTypeUlongNoConv:
LABEL_5:
      v6 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v6 + 4) = *(unsigned int *)Data;
      *((_DWORD *)v6 + 6) = Type;
      *((_DWORD *)v6 + 7) = 4;
      return 0;
    default:
      switch ( Type )
      {
        case SeAdtParmTypeNone:
        case SeAdtParmTypeNoLogonId:
          v8 = (char *)AuditParameters + 32 * Index;
          *((_DWORD *)v8 + 7) = 0;
          goto LABEL_9;
        case SeAdtParmTypeFileSpec:
        case SeAdtParmTypeMultiSzString:
          goto LABEL_11;
        case SeAdtParmTypeUlong:
        case SeAdtParmTypeHexUlong:
          goto LABEL_5;
        case SeAdtParmTypeSid:
          v5 = 4 * *((unsigned __int8 *)Data + 1) + 8;
          v8 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v8 + 6) = Data;
          goto LABEL_9;
        case SeAdtParmTypeLogonId:
        case SeAdtParmTypeTime:
        case SeAdtParmTypeLuid:
        case SeAdtParmTypeDuration:
        case SeAdtParmTypeDateTime:
        case SeAdtParmTypeLogonIdNoSid:
        case SeAdtParmTypeLogonIdEx:
          goto LABEL_7;
        case SeAdtParmTypeAccessMask:
        case SeAdtParmTypeObjectTypes:
        case SeAdtParmTypeStringList:
        case SeAdtParmTypeSidList:
        case SeAdtParmTypeUserAccountControl:
        case SeAdtParmTypeNoUac:
          return -1073741822;
        case SeAdtParmTypePrivs:
          if ( Data )
          {
            if ( *(_DWORD *)Data )
              v5 = 12 * *(_DWORD *)Data + 8;
            else
              v5 = 8;
          }
          v8 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v8 + 6) = Data;
          goto LABEL_9;
        case SeAdtParmTypePtr:
          v8 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v8 + 4) = Data;
          goto LABEL_8;
        case SeAdtParmTypeGuid:
          v5 = 16;
          v8 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v8 + 6) = Data;
          goto LABEL_9;
        case SeAdtParmTypeSockAddr:
        case SeAdtParmTypeSockAddrNoPort:
          if ( *(_WORD *)Data == 23 )
          {
            v11 = 28;
          }
          else
          {
            v11 = 16;
            if ( *(_WORD *)Data == 33 )
              v11 = 14;
          }
          v12 = (char *)AuditParameters + 32 * Index;
          *((_QWORD *)v12 + 6) = Data;
          *((_DWORD *)v12 + 6) = Type;
          *((_DWORD *)v12 + 7) = v11;
          result = 0;
          break;
        default:
          return -1073741811;
      }
      break;
  }
  return result;
}
