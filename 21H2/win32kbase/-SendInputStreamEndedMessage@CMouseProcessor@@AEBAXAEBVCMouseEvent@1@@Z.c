/*
 * XREFs of ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1C003B668
 * Callers:
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C00387C4 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C003B6C4 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 */

void __fastcall CMouseProcessor::SendInputStreamEndedMessage(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  int v2; // eax
  __int64 v3; // rax
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v8 = 0;
  if ( *((_DWORD *)a2 + 4) == 3 )
    v2 = *((_DWORD *)this + 859);
  else
    v2 = *((_DWORD *)this + 858);
  v6 = 0;
  v7 = v2;
  v3 = *((_QWORD *)a2 + 1);
  v5 = 4;
  InputExtensibilityCallout::CoreMsgSendMessage(*(_QWORD *)(v3 + 8), 20LL, &v4);
}
