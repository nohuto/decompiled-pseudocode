/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x14073C0DC
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x1402BC348 (PopPowerRequestCreateCommon.c)
 *     PopDiagTraceControlCallback @ 0x14085EC40 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     PoStoreRequester @ 0x1402BCF14 (PoStoreRequester.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopGetCallerContextFromBuffer @ 0x14097D98C (PopGetCallerContextFromBuffer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  __int64 v6; // rcx
  __int64 Pool2; // rax
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // r9d
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  __int64 v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // r9d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  ULONG v28; // r9d
  __int16 v29; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v30; // [rsp+34h] [rbp-CCh] BYREF
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+3Ch] [rbp-C4h] BYREF
  int v33; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+44h] [rbp-BCh] BYREF
  int v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+4Ch] [rbp-B4h] BYREF
  int v37; // [rsp+50h] [rbp-B0h] BYREF
  int v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  int SessionId; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v43[2]; // [rsp+70h] [rbp-90h] BYREF
  char *v44; // [rsp+78h] [rbp-88h]
  __int128 v45; // [rsp+80h] [rbp-80h] BYREF
  __int128 v46; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  int *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  int *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  int *p_SessionId; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  int *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  int *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  int *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  int *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  __int64 v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int64 v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  __int16 *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  __int16 *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  __int64 v72; // [rsp+170h] [rbp+70h]
  int v73; // [rsp+178h] [rbp+78h]
  int v74; // [rsp+17Ch] [rbp+7Ch]
  char v75; // [rsp+1F0h] [rbp+F0h] BYREF

  v42 = a2;
  v29 = 0;
  v30 = 0;
  v45 = 0LL;
  v43[1] = 0;
  v46 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 96);
      v41 = 0LL;
      v43[0] = 1441792;
      v38 = *v5;
      v39 = 0;
      SessionId = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v37 = 0;
      v36 = 0;
      v35 = 0;
      v6 = *(_QWORD *)(a2 + 96);
      v44 = &v75;
      PoStoreRequester(v6, 0LL, &v41, 0);
      Pool2 = ExAllocatePool2(256LL, v41, 1346721364LL);
      v8 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreRequester(*(_QWORD *)(v42 + 96), Pool2, &v41, 0) >= 0 )
        {
          PopGetCallerContextFromBuffer(v8, v43, &v45, &v46);
          v9 = v42;
          if ( v38 )
          {
            v39 = v8[6];
            SessionId = MmGetSessionIdEx(*(_QWORD *)(*(_QWORD *)(v42 + 96) + 8LL));
          }
          v10 = v31;
          if ( !*(_QWORD *)(v9 + 96) )
            v10 = 1;
          v31 = v10;
          v11 = v32;
          v12 = 13;
          if ( (*(_BYTE *)(v9 + 20) & 2) != 0 )
            v11 = 1;
          v32 = v11;
          v13 = v33;
          if ( (*(_BYTE *)(v9 + 20) & 1) != 0 )
            v13 = 1;
          v33 = v13;
          v14 = v34;
          if ( (*(_BYTE *)(v9 + 20) & 4) != 0 )
            v14 = 1;
          v34 = v14;
          v15 = v35;
          if ( (*(_BYTE *)(v9 + 20) & 8) != 0 )
            v15 = 1;
          v35 = v15;
          v16 = v36;
          if ( (*(_BYTE *)(v9 + 20) & 0x10) != 0 )
            v16 = 1;
          v36 = v16;
          v17 = v37;
          if ( (*(_BYTE *)(v9 + 20) & 0x20) != 0 )
            v17 = 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v37 = v17;
          UserData.Ptr = (ULONGLONG)&v42;
          v48 = &v38;
          v50 = &v39;
          p_SessionId = &SessionId;
          v54 = &v31;
          v56 = &v32;
          v58 = &v33;
          v60 = &v34;
          v62 = v9 + 44;
          v64 = v9 + 40;
          v66 = v9 + 48;
          v18 = (unsigned __int16)v46 >> 1;
          v68 = &v29;
          v70 = &v30;
          v29 = (unsigned __int16)v45 >> 1;
          v30 = (unsigned __int16)v46 >> 1;
          v49 = 4LL;
          v51 = 4LL;
          v53 = 4LL;
          v55 = 4LL;
          v57 = 4LL;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v67 = 4LL;
          v69 = 2LL;
          v71 = 2LL;
          if ( (unsigned __int16)v45 >> 1 )
          {
            v12 = 14;
            v72 = *((_QWORD *)&v45 + 1);
            v74 = 0;
            v73 = 2 * ((unsigned __int16)v45 >> 1);
          }
          if ( v18 )
          {
            v19 = 2LL * v12;
            *(&UserData.Ptr + v19) = *((_QWORD *)&v46 + 1);
            *(&UserData.Reserved + 2 * v19) = 0;
            *(&UserData.Size + 2 * v19) = 2 * v18;
            ++v12;
          }
          v20 = 2LL * v12;
          v21 = (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v20) = (ULONGLONG)&v35;
          *((_QWORD *)&UserData.Size + v20) = 4LL;
          v22 = v12 + 1;
          v23 = v12 + 2;
          v22 *= 2LL;
          *(&UserData.Ptr + v22) = (ULONGLONG)&v36;
          *((_QWORD *)&UserData.Size + v22) = 4LL;
          v24 = 2LL * v23;
          *(&UserData.Ptr + v24) = (ULONGLONG)&v37;
          *((_QWORD *)&UserData.Size + v24) = 4LL;
          v25 = v23 + 1;
          v23 += 2;
          v25 *= 2LL;
          *(&UserData.Ptr + v25) = v9 + 52;
          *((_QWORD *)&UserData.Size + v25) = 4LL;
          v26 = 2LL * v23;
          *(&UserData.Ptr + v26) = v9 + 56;
          *((_QWORD *)&UserData.Size + v26) = 4LL;
          v27 = v23 + 1;
          v28 = v23 + 2;
          v27 *= 2LL;
          *(&UserData.Ptr + v27) = v9 + 60;
          *((_QWORD *)&UserData.Size + v27) = 4LL;
          if ( !a1 )
            v21 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v21, 0LL, v28, &UserData);
        }
        ExFreePoolWithTag(v8, 0x50455654u);
      }
    }
  }
}
