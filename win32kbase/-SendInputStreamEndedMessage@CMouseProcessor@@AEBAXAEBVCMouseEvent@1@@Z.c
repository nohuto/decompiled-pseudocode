/*
 * XREFs of ?SendInputStreamEndedMessage@CMouseProcessor@@AEBAXAEBVCMouseEvent@1@@Z @ 0x1C023101C
 * Callers:
 *     ??1EndStreamToken@CMouseProcessor@@QEAA@XZ @ 0x1C007D028 (--1EndStreamToken@CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     SendMessageTo @ 0x1C0081230 (SendMessageTo.c)
 */

void __fastcall CMouseProcessor::SendInputStreamEndedMessage(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]
  int v9; // [rsp+30h] [rbp-18h]
  int v10; // [rsp+34h] [rbp-14h]

  v10 = 0;
  if ( *((_DWORD *)a2 + 4) == 3 )
    v4 = *((_DWORD *)this + 859);
  else
    v4 = *((_DWORD *)this + 858);
  v8 = 0;
  v9 = v4;
  v5 = *((_QWORD *)a2 + 1);
  v7 = 4;
  v6 = *(_QWORD *)(v5 + 8);
  SendMessageTo(19LL, (__int64)&v6, 24LL, a4);
}
