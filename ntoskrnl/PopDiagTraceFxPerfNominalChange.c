/*
 * XREFs of PopDiagTraceFxPerfNominalChange @ 0x14059141C
 * Callers:
 *     PopFxUpdateComponentPerfStateNominalChange @ 0x140589C50 (PopFxUpdateComponentPerfStateNominalChange.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxPerfNominalChange(__int64 *a1, unsigned __int8 a2, int a3, unsigned int a4, __int64 a5)
{
  _UNKNOWN **v5; // rax
  int v8; // esi
  REGHANDLE v9; // rbx
  __int64 v10; // rcx
  int v12; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-31h] BYREF
  __int64 v14; // [rsp+68h] [rbp-21h]
  int v15; // [rsp+70h] [rbp-19h]
  int v16; // [rsp+74h] [rbp-15h]
  int *v17; // [rsp+78h] [rbp-11h]
  int v18; // [rsp+80h] [rbp-9h]
  int v19; // [rsp+84h] [rbp-5h]
  int *v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+90h] [rbp+7h]
  int v22; // [rsp+94h] [rbp+Bh]
  int *v23; // [rsp+98h] [rbp+Fh]
  int v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A4h] [rbp+1Bh]
  __int64 v26; // [rsp+A8h] [rbp+1Fh]
  int v27; // [rsp+B0h] [rbp+27h]
  int v28; // [rsp+B4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+57h] BYREF
  int v30; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned int v31; // [rsp+100h] [rbp+77h] BYREF

  v5 = &retaddr;
  v31 = a4;
  v30 = a3;
  v8 = a2;
  if ( PopDiagHandleRegistered )
  {
    v9 = PopDiagHandle;
    LOBYTE(v5) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE);
    if ( (_BYTE)v5 )
    {
      v10 = *a1;
      v5 = *(_UNKNOWN ***)(*a1 + 80);
      UserData.Reserved = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      UserData.Ptr = (ULONGLONG)(v5 + 6);
      v14 = v10 + 16;
      v15 = 4;
      v17 = &v12;
      v20 = &v30;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      v23 = (int *)&v31;
      LOBYTE(v5) = -1;
      UserData.Size = 8;
      v12 = v8;
      if ( 16 * (unsigned __int64)a4 <= 0xFFFFFFFF )
      {
        v28 = 0;
        v26 = a5;
        v27 = 16 * a4;
        LOBYTE(v5) = EtwWriteEx(
                       v9,
                       &POP_ETW_EVENT_COMPONENT_PERFORMANCE_STATE_NOMINAL_CHANGE,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       6u,
                       &UserData);
      }
    }
  }
  return (char)v5;
}
