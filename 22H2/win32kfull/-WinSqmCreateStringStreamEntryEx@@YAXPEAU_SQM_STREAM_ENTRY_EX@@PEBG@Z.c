/*
 * XREFs of ?WinSqmCreateStringStreamEntryEx@@YAXPEAU_SQM_STREAM_ENTRY_EX@@PEBG@Z @ 0x1C021DC8C
 * Callers:
 *     ?MsgSQMWriteOutMsgRecord@@YAXPEBUtagMSGSQM_PROCESSSQMINFO@@0PEAUtagMSGSQM_BASERECORD@@KK_KPEBG@Z @ 0x1C021DAEC (-MsgSQMWriteOutMsgRecord@@YAXPEBUtagMSGSQM_PROCESSSQMINFO@@0PEAUtagMSGSQM_BASERECORD@@KK_KPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WinSqmCreateStringStreamEntryEx(struct _SQM_STREAM_ENTRY_EX *a1, const unsigned __int16 *a2)
{
  *(_DWORD *)a1 = 16;
  if ( !a2 || !*a2 )
    a2 = L"(null)";
  *((_QWORD *)a1 + 1) = a2;
  *((_DWORD *)a1 + 1) = 2;
}
