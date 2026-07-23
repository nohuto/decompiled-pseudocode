/*
 * XREFs of SeSetAuditParameter @ 0x14022C360
 * Callers:
 *     CmpReportAuditVirtualizationEvent @ 0x140871EF8 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeSetAuditParameter(
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        SE_ADT_PARAMETER_TYPE Type,
        ULONG Index,
        PVOID Data)
{
  NTSTATUS v4; // r11d
  int v5; // r10d
  __int64 v6; // rax
  char *v7; // rcx
  int v9; // eax

  v4 = 0;
  v5 = 0;
  if ( !AuditParameters )
    return -1073741811;
  switch ( Type )
  {
    case SeAdtParmTypeNone:
    case SeAdtParmTypeNoLogonId:
      v7 = (char *)AuditParameters + 32 * Index;
      *((_DWORD *)v7 + 7) = 0;
      goto LABEL_5;
    case SeAdtParmTypeString:
    case SeAdtParmTypeFileSpec:
    case SeAdtParmTypeMultiSzString:
      v5 = *(unsigned __int16 *)Data + 16;
      goto LABEL_9;
    case SeAdtParmTypeUlong:
    case SeAdtParmTypeHexUlong:
    case SeAdtParmTypeMessage:
    case SeAdtParmTypeUlongNoConv:
      v6 = *(unsigned int *)Data;
      v5 = 4;
      goto LABEL_4;
    case SeAdtParmTypeSid:
      v9 = *((unsigned __int8 *)Data + 1);
      goto LABEL_19;
    case SeAdtParmTypeLogonId:
    case SeAdtParmTypeTime:
    case SeAdtParmTypeLuid:
    case SeAdtParmTypeHexInt64:
    case SeAdtParmTypeDuration:
    case SeAdtParmTypeDateTime:
    case SeAdtParmTypeLogonIdNoSid:
    case SeAdtParmTypeLogonIdEx:
      v6 = *(_QWORD *)Data;
      v5 = 8;
LABEL_4:
      v7 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v7 + 4) = v6;
      goto LABEL_5;
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
        {
          v9 = 3 * *(_DWORD *)Data;
LABEL_19:
          v5 = 4 * v9 + 8;
        }
        else
        {
          v5 = 8;
        }
      }
      goto LABEL_9;
    case SeAdtParmTypePtr:
      v5 = 8;
      v7 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v7 + 4) = Data;
      goto LABEL_5;
    case SeAdtParmTypeGuid:
      v5 = 16;
      goto LABEL_9;
    case SeAdtParmTypeSockAddr:
    case SeAdtParmTypeSockAddrNoPort:
      if ( *(_WORD *)Data == 23 )
      {
        v5 = 28;
      }
      else
      {
        v5 = 16;
        if ( *(_WORD *)Data == 33 )
          v5 = 14;
      }
LABEL_9:
      v7 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v7 + 6) = Data;
LABEL_5:
      *((_DWORD *)v7 + 6) = Type;
      *((_DWORD *)v7 + 7) = v5;
      break;
    default:
      v4 = -1073741811;
      break;
  }
  return v4;
}
