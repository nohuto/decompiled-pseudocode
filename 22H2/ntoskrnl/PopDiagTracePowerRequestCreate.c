/*
 * XREFs of PopDiagTracePowerRequestCreate @ 0x1407A7E10
 * Callers:
 *     PopPowerRequestCreateCommon @ 0x14032BB98 (PopPowerRequestCreateCommon.c)
 *     PopDiagTraceControlCallback @ 0x140862C00 (PopDiagTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140257780 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140258300 (EtwEventEnabled.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     PoStoreRequester @ 0x14032CD64 (PoStoreRequester.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     Feature_2932140347__private_IsEnabledDeviceUsage @ 0x140410994 (Feature_2932140347__private_IsEnabledDeviceUsage.c)
 *     PopGetCallerContextFromBuffer @ 0x140980A3C (PopGetCallerContextFromBuffer.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

void __fastcall PopDiagTracePowerRequestCreate(char a1, __int64 a2)
{
  const EVENT_DESCRIPTOR *v4; // rdx
  int *v5; // rax
  __int64 v6; // rcx
  __int64 Pool2; // rax
  _DWORD *v8; // rdi
  __int64 v9; // rbx
  int SessionId; // eax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // r9d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  unsigned __int16 v19; // dx
  __int64 v20; // rcx
  __int64 v21; // rax
  const EVENT_DESCRIPTOR *v22; // rdx
  __int64 v23; // rax
  unsigned int v24; // r9d
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  ULONG v29; // r9d
  __int16 v30; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v31; // [rsp+34h] [rbp-CCh] BYREF
  int v32; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+3Ch] [rbp-C4h] BYREF
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v44[2]; // [rsp+70h] [rbp-90h] BYREF
  char *v45; // [rsp+78h] [rbp-88h]
  __int128 v46; // [rsp+80h] [rbp-80h] BYREF
  __int128 v47; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A0h] [rbp-60h] BYREF
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  int *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  int *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  int *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  int *v57; // [rsp+F0h] [rbp-10h]
  __int64 v58; // [rsp+F8h] [rbp-8h]
  int *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  int *v61; // [rsp+110h] [rbp+10h]
  __int64 v62; // [rsp+118h] [rbp+18h]
  __int64 v63; // [rsp+120h] [rbp+20h]
  __int64 v64; // [rsp+128h] [rbp+28h]
  __int64 v65; // [rsp+130h] [rbp+30h]
  __int64 v66; // [rsp+138h] [rbp+38h]
  __int64 v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  __int16 *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  __int16 *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  __int64 v73; // [rsp+170h] [rbp+70h]
  int v74; // [rsp+178h] [rbp+78h]
  int v75; // [rsp+17Ch] [rbp+7Ch]
  char v76; // [rsp+1F0h] [rbp+F0h] BYREF

  v42 = a2;
  v30 = 0;
  v31 = 0;
  v46 = 0LL;
  v44[1] = 0;
  v47 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    v4 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
    if ( a1 )
      v4 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
    if ( EtwEventEnabled(PopDiagHandle, v4) )
    {
      v5 = *(int **)(a2 + 96);
      v43 = 0LL;
      v44[0] = 1441792;
      v40 = *v5;
      v41 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      v35 = 0;
      v36 = 0;
      v39 = 0;
      v38 = 0;
      v37 = 0;
      v6 = *(_QWORD *)(a2 + 96);
      v45 = &v76;
      PoStoreRequester(v6, 0LL, &v43, 0);
      Pool2 = ExAllocatePool2(256LL, v43, 1346721364LL);
      v8 = (_DWORD *)Pool2;
      if ( Pool2 )
      {
        if ( (int)PoStoreRequester(*(_QWORD *)(v42 + 96), Pool2, &v43, 0) >= 0 )
        {
          PopGetCallerContextFromBuffer(v8, v44, &v46, &v47);
          if ( v40 )
          {
            v41 = v8[6];
            v9 = v42;
            if ( (unsigned int)Feature_2932140347__private_IsEnabledDeviceUsage() )
              SessionId = *(_DWORD *)(v42 + 16);
            else
              SessionId = MmGetSessionIdEx(*(_QWORD *)(*(_QWORD *)(v42 + 96) + 8LL));
            v32 = SessionId;
          }
          else
          {
            v9 = v42;
          }
          v11 = v33;
          if ( !*(_QWORD *)(v9 + 96) )
            v11 = 1;
          v33 = v11;
          v12 = v34;
          v13 = 13;
          if ( (*(_BYTE *)(v9 + 20) & 2) != 0 )
            v12 = 1;
          v34 = v12;
          v14 = v35;
          if ( (*(_BYTE *)(v9 + 20) & 1) != 0 )
            v14 = 1;
          v35 = v14;
          v15 = v36;
          if ( (*(_BYTE *)(v9 + 20) & 4) != 0 )
            v15 = 1;
          v36 = v15;
          v16 = v37;
          if ( (*(_BYTE *)(v9 + 20) & 8) != 0 )
            v16 = 1;
          v37 = v16;
          v17 = v38;
          if ( (*(_BYTE *)(v9 + 20) & 0x10) != 0 )
            v17 = 1;
          v38 = v17;
          v18 = v39;
          if ( (*(_BYTE *)(v9 + 20) & 0x20) != 0 )
            v18 = 1;
          *(_QWORD *)&UserData.Size = 8LL;
          v39 = v18;
          UserData.Ptr = (ULONGLONG)&v42;
          v49 = &v40;
          v51 = &v41;
          v53 = &v32;
          v55 = &v33;
          v57 = &v34;
          v59 = &v35;
          v61 = &v36;
          v63 = v9 + 44;
          v65 = v9 + 40;
          v67 = v9 + 48;
          v19 = (unsigned __int16)v47 >> 1;
          v69 = &v30;
          v71 = &v31;
          v30 = (unsigned __int16)v46 >> 1;
          v31 = (unsigned __int16)v47 >> 1;
          v50 = 4LL;
          v52 = 4LL;
          v54 = 4LL;
          v56 = 4LL;
          v58 = 4LL;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v68 = 4LL;
          v70 = 2LL;
          v72 = 2LL;
          if ( (unsigned __int16)v46 >> 1 )
          {
            v13 = 14;
            v73 = *((_QWORD *)&v46 + 1);
            v75 = 0;
            v74 = 2 * ((unsigned __int16)v46 >> 1);
          }
          if ( v19 )
          {
            v20 = 2LL * v13;
            *(&UserData.Ptr + v20) = *((_QWORD *)&v47 + 1);
            *(&UserData.Reserved + 2 * v20) = 0;
            *(&UserData.Size + 2 * v20) = 2 * v19;
            ++v13;
          }
          v21 = 2LL * v13;
          v22 = &POP_ETW_EVENT_POWER_REQUEST_RUNDOWN;
          *(&UserData.Ptr + v21) = (ULONGLONG)&v37;
          *((_QWORD *)&UserData.Size + v21) = 4LL;
          v23 = v13 + 1;
          v24 = v13 + 2;
          v23 *= 2LL;
          *(&UserData.Ptr + v23) = (ULONGLONG)&v38;
          *((_QWORD *)&UserData.Size + v23) = 4LL;
          v25 = 2LL * v24;
          *(&UserData.Ptr + v25) = (ULONGLONG)&v39;
          *((_QWORD *)&UserData.Size + v25) = 4LL;
          v26 = v24 + 1;
          v24 += 2;
          v26 *= 2LL;
          *(&UserData.Ptr + v26) = v9 + 52;
          *((_QWORD *)&UserData.Size + v26) = 4LL;
          v27 = 2LL * v24;
          *(&UserData.Ptr + v27) = v9 + 56;
          *((_QWORD *)&UserData.Size + v27) = 4LL;
          v28 = v24 + 1;
          v29 = v24 + 2;
          v28 *= 2LL;
          *(&UserData.Ptr + v28) = v9 + 60;
          *((_QWORD *)&UserData.Size + v28) = 4LL;
          if ( !a1 )
            v22 = &POP_ETW_EVENT_CREATE_POWER_REQUEST;
          EtwWrite(PopDiagHandle, v22, 0LL, v29, &UserData);
        }
        ExFreePoolWithTag(v8, 0x50455654u);
      }
    }
  }
}
