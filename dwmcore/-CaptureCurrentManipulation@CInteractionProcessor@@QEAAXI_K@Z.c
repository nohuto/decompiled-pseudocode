/*
 * XREFs of ?CaptureCurrentManipulation@CInteractionProcessor@@QEAAXI_K@Z @ 0x1801A9438
 * Callers:
 *     ?CaptureCurrentManipulation@CInteraction@@UEAAXI_K@Z @ 0x180208B60 (-CaptureCurrentManipulation@CInteraction@@UEAAXI_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

void __fastcall CInteractionProcessor::CaptureCurrentManipulation(CInteractionProcessor *this, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // r11d
  int v7; // [rsp+30h] [rbp-29h] BYREF
  __int64 v8; // [rsp+38h] [rbp-21h] BYREF
  __int64 v9; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+50h] [rbp-9h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+17h]
  __int64 v12; // [rsp+78h] [rbp+1Fh]
  int *v13; // [rsp+80h] [rbp+27h]
  __int64 v14; // [rsp+88h] [rbp+2Fh]
  __int64 *v15; // [rsp+90h] [rbp+37h]
  __int64 v16; // [rsp+98h] [rbp+3Fh]

  *((_BYTE *)this + 808) |= 0x20u;
  *((_DWORD *)this + 206) = a2;
  *((_QWORD *)this + 104) = a3;
  if ( (unsigned int)dword_1803E07D0 > 4 )
  {
    if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
    {
      v9 = v4;
      v15 = &v8;
      v8 = v5;
      v13 = &v7;
      v7 = v6;
      v11 = &v9;
      v16 = 8LL;
      v14 = 4LL;
      v12 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18037B2F6, 0LL, 0LL, 5u, &v10);
    }
  }
}
