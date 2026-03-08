/*
 * XREFs of PopDiagTracePowerTransitionEnd @ 0x14098DF28
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwWriteEndScenario @ 0x140842920 (EtwWriteEndScenario.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140984674 (PopQueryMostRecentWakeSourceInfo.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerTransitionEnd(int a1)
{
  PVOID v1; // rdi
  PVOID v2; // rbx
  _WORD v3[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v4; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v5; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v6; // [rsp+54h] [rbp-B4h] BYREF
  int v7; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING v8; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v9; // [rsp+70h] [rbp-98h] BYREF
  __int128 v10; // [rsp+78h] [rbp-90h] BYREF
  __int128 v11; // [rsp+88h] [rbp-80h] BYREF
  PVOID P[2]; // [rsp+98h] [rbp-70h] BYREF
  PVOID v13[2]; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v15; // [rsp+C8h] [rbp-40h]
  __int64 v16; // [rsp+D0h] [rbp-38h]
  __int16 *v17; // [rsp+D8h] [rbp-30h]
  __int64 v18; // [rsp+E0h] [rbp-28h]
  __int16 *v19; // [rsp+E8h] [rbp-20h]
  __int64 v20; // [rsp+F0h] [rbp-18h]
  __int16 *v21; // [rsp+F8h] [rbp-10h]
  __int64 v22; // [rsp+100h] [rbp-8h]
  int *v23; // [rsp+108h] [rbp+0h]
  __int64 v24; // [rsp+110h] [rbp+8h]
  __int64 v25; // [rsp+118h] [rbp+10h]
  int v26; // [rsp+120h] [rbp+18h]
  int v27; // [rsp+124h] [rbp+1Ch]
  __int64 v28; // [rsp+128h] [rbp+20h]
  int v29; // [rsp+130h] [rbp+28h]
  int v30; // [rsp+134h] [rbp+2Ch]
  PVOID v31; // [rsp+138h] [rbp+30h]
  int v32; // [rsp+140h] [rbp+38h]
  int v33; // [rsp+144h] [rbp+3Ch]
  PVOID v34; // [rsp+148h] [rbp+40h]
  int v35; // [rsp+150h] [rbp+48h]
  int v36; // [rsp+154h] [rbp+4Ch]
  char v37; // [rsp+158h] [rbp+50h] BYREF
  int v38; // [rsp+188h] [rbp+80h] BYREF

  v38 = a1;
  v3[0] = 0;
  *(_DWORD *)(&v8.MaximumLength + 1) = 0;
  *(_OWORD *)v13 = 0LL;
  *(_OWORD *)P = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v9 = MEMORY[0xFFFFF78000000014];
    v8.Buffer = (wchar_t *)&v37;
    *(_DWORD *)&v8.Length = 1441792;
    PopQueryMostRecentWakeSourceInfo(
      &v8,
      (__int64)&v10,
      (__int64)&v11,
      (UNICODE_STRING *)P,
      (PUNICODE_STRING)v13,
      v3,
      (_BYTE *)v3 + 1);
    v1 = P[1];
    v2 = v13[1];
    v14.Ptr = (ULONGLONG)&v38;
    v15 = &v9;
    v17 = &v4;
    v19 = &v5;
    v21 = &v6;
    v23 = &v7;
    v25 = *((_QWORD *)&v10 + 1);
    v4 = (unsigned __int16)v10 >> 1;
    v5 = (unsigned __int16)v11 >> 1;
    v6 = LOWORD(P[0]) >> 1;
    LOWORD(v7) = LOWORD(v13[0]) >> 1;
    v28 = *((_QWORD *)&v11 + 1);
    v26 = 2 * ((unsigned __int16)v10 >> 1);
    v29 = 2 * ((unsigned __int16)v11 >> 1);
    v32 = 2 * (LOWORD(P[0]) >> 1);
    v35 = 2 * (LOWORD(v13[0]) >> 1);
    *(_QWORD *)&v14.Size = 4LL;
    v16 = 8LL;
    v18 = 2LL;
    v20 = 2LL;
    v22 = 2LL;
    v24 = 2LL;
    v27 = 0;
    v30 = 0;
    v31 = P[1];
    v33 = 0;
    v34 = v13[1];
    v36 = 0;
    EtwWriteEndScenario((ULONG_PTR *)PopDiagHandle, &POP_ETW_EVENT_POWERTRANSITION_END, &PopDiagActivityId, 0xAu, &v14);
    if ( LOBYTE(v3[0]) )
      ExFreePoolWithTag(v1, 0x67696450u);
    if ( HIBYTE(v3[0]) )
      ExFreePoolWithTag(v2, 0x67696450u);
  }
}
