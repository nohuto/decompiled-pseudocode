/*
 * XREFs of TtmiLogInitiateModernStandbyTransitionStart @ 0x1409A58F0
 * Callers:
 *     TtmpInitiateModernStandbyTransition @ 0x1409A23F0 (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall TtmiLogInitiateModernStandbyTransitionStart(char a1, int a2)
{
  int ProcessSessionId; // eax
  char v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  int v7; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+40h] [rbp-9h] BYREF
  int *v9; // [rsp+60h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+1Fh]
  int v11; // [rsp+6Ch] [rbp+23h]
  char *v12; // [rsp+70h] [rbp+27h]
  int v13; // [rsp+78h] [rbp+2Fh]
  int v14; // [rsp+7Ch] [rbp+33h]
  int *v15; // [rsp+80h] [rbp+37h]
  int v16; // [rsp+88h] [rbp+3Fh]
  int v17; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned int)dword_140D53948 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140D53948, 1LL) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
      v11 = 0;
      v14 = 0;
      v17 = 0;
      v6 = ProcessSessionId;
      v10 = 4;
      v9 = &v6;
      v12 = &v5;
      v15 = &v7;
      v16 = 4;
      v5 = a1;
      v13 = 1;
      v7 = a2;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D53948,
        (unsigned __int8 *)&dword_140033054,
        0LL,
        0LL,
        5u,
        &v8);
    }
  }
}
