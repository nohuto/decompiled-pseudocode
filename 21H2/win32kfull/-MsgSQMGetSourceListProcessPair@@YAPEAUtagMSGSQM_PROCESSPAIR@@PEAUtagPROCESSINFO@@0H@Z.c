/*
 * XREFs of ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C0218EEC
 * Callers:
 *     MSGSQMAddMessage @ 0x1C00A770C (MSGSQMAddMessage.c)
 * Callees:
 *     ?MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C0218AF8 (-MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0218B5C (-MsgSQMCleanupMsgCache@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C0218DB0 (-MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z.c)
 */

struct tagMSGSQM_PROCESSPAIR *__fastcall MsgSQMGetSourceListProcessPair(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2)
{
  struct tagMSGSQM_PROCESSPAIR *result; // rax
  struct tagMSGSQM_PROCESSPAIR *v5; // rax
  struct tagMSGSQM_PROCESSPAIR *v6; // rdi
  struct tagMSGSQM_PROCESSPAIR *v7; // rbx
  bool v8; // zf
  struct tagMSGSQM_PROCESSPAIR *v9; // rax
  struct tagMSGSQM_PROCESSPAIR **v10; // rax

  result = MsgSQMGetMsgCache(a1, 1);
  if ( result )
  {
    v5 = (struct tagMSGSQM_PROCESSPAIR *)((char *)result + 48);
    v6 = v5;
    if ( *(struct tagMSGSQM_PROCESSPAIR **)v5 == v5 )
      goto LABEL_10;
    v7 = (struct tagMSGSQM_PROCESSPAIR *)*((_QWORD *)v5 + 1);
    v8 = *((_QWORD *)v7 + 5) == (_QWORD)a2;
    if ( *((_QWORD *)v7 + 5) > (unsigned __int64)a2 )
    {
      v6 = *(struct tagMSGSQM_PROCESSPAIR **)v5;
      do
      {
        v7 = v6;
        if ( *((_QWORD *)v6 + 5) >= (unsigned __int64)a2 )
          break;
        v6 = *(struct tagMSGSQM_PROCESSPAIR **)v6;
      }
      while ( v6 != v5 );
      v8 = *((_QWORD *)v7 + 5) == (_QWORD)a2;
    }
    if ( !v8 || !v7 )
    {
LABEL_10:
      v9 = (struct tagMSGSQM_PROCESSPAIR *)Win32AllocPoolZInit(56LL, 1937077077LL);
      v7 = v9;
      if ( v9 )
      {
        if ( (unsigned int)MsgSQMAddTargetNode(a2, v9) )
        {
          *((_QWORD *)v7 + 4) = a1;
          v10 = (struct tagMSGSQM_PROCESSPAIR **)*((_QWORD *)v6 + 1);
          if ( *v10 != v6 )
            __fastfail(3u);
          *(_QWORD *)v7 = v6;
          *((_QWORD *)v7 + 1) = v10;
          *v10 = v7;
          *((_QWORD *)v6 + 1) = v7;
        }
        else
        {
          Win32FreePool(v7);
          v7 = 0LL;
        }
      }
    }
    MsgSQMCleanupMsgCache(a1);
    return v7;
  }
  return result;
}
