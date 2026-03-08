/*
 * XREFs of EtwpFileProvTrace @ 0x14045F22C
 * Callers:
 *     EtwpTraceFileIo @ 0x140316AB0 (EtwpTraceFileIo.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 */

char __fastcall EtwpFileProvTrace(PEVENT_DATA_DESCRIPTOR UserData, ULONG UserDataCount, __int16 a3, const GUID *a4)
{
  ULONG v4; // edi
  char result; // al
  __int64 *v9; // rbx
  REGHANDLE v10; // rsi

  v4 = 0;
  result = a3 - 64;
  switch ( a3 )
  {
    case 1088:
      v9 = KFileEvt_Create;
      goto LABEL_25;
    case 1089:
      v9 = KFileEvt_Cleanup;
      goto LABEL_25;
    case 1090:
      v9 = KFileEvt_Close;
      goto LABEL_25;
    case 1091:
      v4 = 1;
      v9 = KFileEvt_Read;
      goto LABEL_25;
    case 1092:
      v4 = 1;
      v9 = KFileEvt_Write;
      goto LABEL_25;
    case 1093:
      v9 = KFileEvt_SetInformation;
      goto LABEL_25;
    case 1094:
      v9 = KFileEvt_Delete;
      goto LABEL_25;
    case 1095:
      v9 = KFileEvt_Rename;
      goto LABEL_25;
    case 1096:
      v9 = KFileEvt_DirEnum;
      goto LABEL_25;
    case 1097:
      v9 = KFileEvt_Flush;
      goto LABEL_25;
    case 1098:
      v9 = KFileEvt_QueryInformation;
      goto LABEL_25;
    case 1099:
      v9 = KFileEvt_FSCTL;
      goto LABEL_25;
    case 1100:
      v4 = 1;
      v9 = (__int64 *)&KFileEvt_OperationEnd;
      goto LABEL_25;
    case 1101:
      v9 = KFileEvt_DirNotify;
      goto LABEL_25;
    case 1102:
      v9 = KFileEvt_CreateNewFile;
      goto LABEL_25;
    case 1103:
      v9 = KFileEvt_DeletePath;
      goto LABEL_25;
    case 1104:
      v9 = KFileEvt_RenamePath;
      goto LABEL_25;
    case 1105:
      v9 = KFileEvt_SetLinkPath;
      goto LABEL_25;
    case 1106:
      v9 = KFileEvt_SetLink;
      goto LABEL_25;
    case 1107:
      v9 = KFileEvt_SetSecurity;
      goto LABEL_25;
    case 1108:
      v9 = KFileEvt_QuerySecurity;
      goto LABEL_25;
    case 1109:
      v9 = KFileEvt_SetEA;
      goto LABEL_25;
    case 1110:
      v9 = KFileEvt_QueryEA;
LABEL_25:
      v10 = EtwpFileProvRegHandle;
      result = EtwEventEnabled(EtwpFileProvRegHandle, (PCEVENT_DESCRIPTOR)v9);
      if ( result )
        result = EtwWriteEx(v10, (PCEVENT_DESCRIPTOR)v9, 0LL, v4, a4, 0LL, UserDataCount, UserData);
      break;
    default:
      return result;
  }
  return result;
}
