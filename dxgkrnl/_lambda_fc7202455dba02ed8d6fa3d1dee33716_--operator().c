/*
 * XREFs of _lambda_fc7202455dba02ed8d6fa3d1dee33716_::operator() @ 0x1C03C5858
 * Callers:
 *     ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C5F48 (-QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CON.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AA90 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0014BA0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

char __fastcall lambda_fc7202455dba02ed8d6fa3d1dee33716_::operator()(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  int v3; // r10d
  int *v4; // rax
  int v5; // ecx
  __int64 v6; // rax
  int v7; // ecx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  int v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+50h] [rbp-19h] BYREF
  int *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  int *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]
  int *v20; // [rsp+A0h] [rbp+37h]
  __int64 v21; // [rsp+A8h] [rbp+3Fh]

  v1 = *a1;
  if ( (unsigned int)dword_1C013A8A8 > 5 )
  {
    LOBYTE(v1) = tlgKeywordOn((__int64)&dword_1C013A8A8, 0x8000LL);
    if ( (_BYTE)v1 )
    {
      v4 = *(int **)(v2 + 24);
      v9 = v3;
      v21 = 4LL;
      v19 = 4LL;
      v5 = *v4;
      v6 = *(_QWORD *)(v2 + 16);
      v10 = v5;
      v17 = 8LL;
      v15 = 4LL;
      v12 = *(_QWORD *)(*(_QWORD *)v6 + 404LL);
      v7 = **(_DWORD **)(v2 + 8);
      v20 = &v9;
      v18 = &v10;
      v16 = &v12;
      v14 = &v11;
      v11 = v7;
      LOBYTE(v1) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_1C013A8A8,
                     (unsigned __int8 *)dword_1C00A1B67,
                     0LL,
                     0LL,
                     6u,
                     &v13);
    }
  }
  return v1;
}
