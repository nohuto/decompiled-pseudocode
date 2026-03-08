/*
 * XREFs of PoTraceForceIdleReset @ 0x14058EC00
 * Callers:
 *     KiResetForceIdle @ 0x14057ACCC (KiResetForceIdle.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall PoTraceForceIdleReset(int a1)
{
  int v1; // r9d
  REGHANDLE v2; // rbx
  int v3; // [rsp+30h] [rbp-19h] BYREF
  __int64 v4; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+50h] [rbp+7h] BYREF
  int *v7; // [rsp+70h] [rbp+27h]
  int v8; // [rsp+78h] [rbp+2Fh]
  int v9; // [rsp+7Ch] [rbp+33h]
  __int64 *v10; // [rsp+80h] [rbp+37h]
  int v11; // [rsp+88h] [rbp+3Fh]
  int v12; // [rsp+8Ch] [rbp+43h]
  int v13; // [rsp+B0h] [rbp+67h] BYREF

  v13 = a1;
  if ( (unsigned int)dword_140C03928 > 5 && tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
  {
    v9 = 0;
    v12 = 0;
    v7 = &v3;
    v3 = v1;
    v10 = &v4;
    v8 = 4;
    v4 = 0x1000000LL;
    v11 = 8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)&dword_14002E74C, 0LL, 0LL, 4u, &v6);
  }
  if ( PopDiagHandleRegistered )
  {
    v2 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_FORCEIDLE_RESET) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v13;
      UserData.Size = 4;
      EtwWrite(v2, &POP_ETW_FORCEIDLE_RESET, 0LL, 1u, &UserData);
    }
  }
}
