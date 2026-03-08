/*
 * XREFs of PopDirectedDripsDiagRundownBroadcastTrees @ 0x14099B4A4
 * Callers:
 *     PopDirectedDripsDiagNotifySessionStop @ 0x14099B298 (PopDirectedDripsDiagNotifySessionStop.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void PopDirectedDripsDiagRundownBroadcastTrees()
{
  char *v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // ecx
  __int64 v4; // rax
  int v5; // ecx
  REGHANDLE v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdi
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  int v11; // [rsp+3Ch] [rbp-CCh] BYREF
  int v12; // [rsp+40h] [rbp-C8h] BYREF
  int v13; // [rsp+44h] [rbp-C4h] BYREF
  int v14; // [rsp+48h] [rbp-C0h] BYREF
  int v15; // [rsp+4Ch] [rbp-BCh] BYREF
  int v16; // [rsp+50h] [rbp-B8h] BYREF
  int v17; // [rsp+54h] [rbp-B4h] BYREF
  int v18; // [rsp+58h] [rbp-B0h] BYREF
  int v19; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v20; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+70h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v25; // [rsp+A8h] [rbp-60h]
  __int64 v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  __int64 v28; // [rsp+C0h] [rbp-48h]
  int *v29; // [rsp+C8h] [rbp-40h]
  __int64 v30; // [rsp+D0h] [rbp-38h]
  int *v31; // [rsp+D8h] [rbp-30h]
  __int64 v32; // [rsp+E0h] [rbp-28h]
  int *v33; // [rsp+E8h] [rbp-20h]
  __int64 v34; // [rsp+F0h] [rbp-18h]
  int *v35; // [rsp+F8h] [rbp-10h]
  __int64 v36; // [rsp+100h] [rbp-8h]
  int *v37; // [rsp+108h] [rbp+0h]
  __int64 v38; // [rsp+110h] [rbp+8h]
  __int64 *v39; // [rsp+118h] [rbp+10h]
  __int64 v40; // [rsp+120h] [rbp+18h]
  char *v41; // [rsp+128h] [rbp+20h]
  __int64 v42; // [rsp+130h] [rbp+28h]
  char *v43; // [rsp+138h] [rbp+30h]
  __int64 v44; // [rsp+140h] [rbp+38h]
  __int64 *v45; // [rsp+148h] [rbp+40h]
  __int64 v46; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  __int64 v48; // [rsp+168h] [rbp+60h]
  __int64 v49; // [rsp+170h] [rbp+68h]
  __int64 v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  char *v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]
  char *v54; // [rsp+198h] [rbp+90h]
  __int64 v55; // [rsp+1A0h] [rbp+98h]

  v20 = PopWnfCsEnterScenarioId;
  while ( 1 )
  {
    v0 = (char *)PopDirectedDripsDiagSessionContext;
    if ( PopDirectedDripsDiagSessionContext == &PopDirectedDripsDiagSessionContext )
      break;
    v1 = *(_QWORD *)PopDirectedDripsDiagSessionContext;
    if ( *((PVOID **)PopDirectedDripsDiagSessionContext + 1) != &PopDirectedDripsDiagSessionContext
      || *(PVOID *)(v1 + 8) != PopDirectedDripsDiagSessionContext )
    {
      __fastfail(3u);
    }
    PopDirectedDripsDiagSessionContext = *(PVOID *)PopDirectedDripsDiagSessionContext;
    *(_QWORD *)(v1 + 8) = &PopDirectedDripsDiagSessionContext;
    if ( (unsigned int)dword_140D53980 > 5 && tlgKeywordOn((__int64)&dword_140D53980, 0x400000000000LL) )
    {
      v2 = *((_QWORD *)v0 + 2);
      v21 = v20;
      v26 = 8LL;
      v25 = &v21;
      v10 = *(_DWORD *)(v2 + 24);
      v27 = &v10;
      v28 = 4LL;
      v11 = *(_DWORD *)(v2 + 144);
      v29 = &v11;
      v12 = *((_DWORD *)v0 + 8);
      v31 = &v12;
      v13 = *((_DWORD *)v0 + 10);
      v33 = &v13;
      v35 = (int *)(v0 + 56);
      v37 = (int *)(v0 + 80);
      v39 = (__int64 *)(v0 + 192);
      v41 = v0 + 128;
      v43 = v0 + 152;
      v45 = &v22;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 20LL;
      v38 = 40LL;
      v40 = 40LL;
      v42 = 20LL;
      v44 = 40LL;
      v22 = 0x1000000LL;
      v46 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140D53980,
        (unsigned __int8 *)&byte_140031B0F,
        0LL,
        0LL,
        0xDu,
        v24);
    }
    while ( 1 )
    {
      v9 = (_QWORD *)*((_QWORD *)v0 + 3);
      if ( !v9 )
        break;
      if ( (unsigned int)dword_140D53980 > 5 && tlgKeywordOn((__int64)&dword_140D53980, 0x400000000000LL) )
      {
        v21 = v20;
        v26 = 8LL;
        v25 = &v21;
        v3 = *(_DWORD *)(*((_QWORD *)v0 + 2) + 24LL);
        v27 = &v14;
        v15 = *((_DWORD *)v0 + 8);
        v29 = &v15;
        v16 = *((_DWORD *)v0 + 10);
        v31 = &v16;
        v4 = v9[1];
        v14 = v3;
        v28 = 4LL;
        v30 = 4LL;
        v32 = 4LL;
        v5 = *(_DWORD *)(v4 + 24);
        v33 = &v17;
        v18 = *((_DWORD *)v9 + 4);
        v35 = &v18;
        v19 = *((_DWORD *)v9 + 5);
        v37 = &v19;
        v39 = &v23;
        v17 = v5;
        v34 = 4LL;
        v36 = 4LL;
        v38 = 4LL;
        v23 = 0x1000000LL;
        v40 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140D53980,
          (unsigned __int8 *)byte_140031995,
          0LL,
          0LL,
          0xAu,
          v24);
      }
      if ( PopDiagHandleRegistered )
      {
        v6 = PopDiagHandle;
        if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_ERROR_RECORD) )
        {
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = (ULONGLONG)&v20;
          v7 = *((_QWORD *)v0 + 2) + 16LL;
          v49 = 8LL;
          v48 = v7;
          v8 = v9[1];
          v51 = 8LL;
          v50 = v8 + 16;
          v52 = (char *)(v9 + 2);
          v54 = (char *)v9 + 20;
          v53 = 4LL;
          v55 = 4LL;
          EtwWrite(v6, &POP_ETW_EVENT_DIRECTED_DRIPS_ERROR_RECORD, 0LL, 5u, &UserData);
        }
      }
      *((_QWORD *)v0 + 3) = *v9;
      ExFreePoolWithTag(v9, 0x67696450u);
    }
    ExFreePoolWithTag(v0, 0x67696450u);
  }
}
