/*
 * XREFs of ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C021DB20
 * Callers:
 *     MSGSQMRemoveProcess @ 0x1C01160E0 (MSGSQMRemoveProcess.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C021DEB0 (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall MsgSQMCleanupMsgCache(struct tagPROCESSINFO *a1)
{
  _QWORD *v1; // rcx

  v1 = (_QWORD *)*((_QWORD *)a1 + 108);
  if ( v1 && (_QWORD *)v1[6] == v1 + 6 && (_QWORD *)v1[8] == v1 + 8 )
    Win32FreePool(v1);
}
