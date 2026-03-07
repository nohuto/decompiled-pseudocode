__int64 __fastcall EtwpRegTraceCallback(PVOID CallbackContext, PVOID Argument1, int *Argument2)
{
  char v4; // si
  _DWORD *v5; // r13
  PCUNICODE_STRING v6; // r12
  unsigned int v7; // edi
  unsigned __int16 *v8; // r15
  unsigned __int16 v9; // r9
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  __int128 v17; // xmm0
  __int64 v18; // rdx
  PVOID v19; // rax
  __int64 v20; // r8
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  PVOID *v26; // rax
  __int128 v27; // xmm0
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  unsigned __int16 **v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  PVOID v37; // rax
  _DWORD *v38; // rax
  char v39; // bl
  __int64 **v40; // rax
  __int64 *v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  ULONGLONG Buffer; // rax
  ULONG Length; // r8d
  __int64 v48; // rcx
  __int64 v49; // rax
  ULONG v50; // edi
  ULONGLONG v51; // rax
  ULONG v52; // r8d
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned int v57; // ecx
  __int64 v58; // rax
  __int64 v59; // rax
  ULONG v60; // edx
  __int64 v61; // rax
  __int64 v62; // rcx
  bool v63; // sf
  int v65; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int16 v66; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v67; // [rsp+40h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+50h] [rbp-B8h] BYREF
  PVOID P; // [rsp+58h] [rbp-B0h] BYREF
  int v71; // [rsp+60h] [rbp-A8h] BYREF
  int v72; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v73; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v74; // [rsp+70h] [rbp-98h] BYREF
  PCUNICODE_STRING ObjectName[4]; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v77[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v78; // [rsp+B8h] [rbp-50h] BYREF

  memset(ObjectName, 0, 24);
  v4 = 0;
  v5 = 0LL;
  v71 = 0;
  v6 = 0LL;
  v69 = 0LL;
  LODWORD(v67) = 0;
  v7 = 3;
  Object = 0LL;
  v8 = 0LL;
  v74 = 0LL;
  v9 = 0;
  P = 0LL;
  LODWORD(v73) = 0;
  v72 = 0;
  LOWORD(v65) = 0;
  v66 = 0;
  if ( (int)Argument1 > 22 )
  {
    v28 = (_DWORD)Argument1 - 23;
    if ( !v28 )
    {
      v21 = (__int64)Argument2;
      v36 = *((_QWORD *)Argument2 + 2);
      v4 = 113;
      v37 = *(PVOID *)Argument2;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_VALUE_KEY;
      v8 = *(unsigned __int16 **)(v36 + 8);
      Object = v37;
      LODWORD(v69) = *(_DWORD *)(v36 + 16);
      v38 = *(_DWORD **)(v36 + 40);
      v20 = (unsigned int)*v38;
      LODWORD(v67) = *v38;
      if ( (EtwpRegTraceOptions & 2) == 0 || Argument2[2] < 0 )
        goto LABEL_53;
      v22 = *(_QWORD *)(v36 + 24);
LABEL_52:
      LOWORD(v65) = EtwpCaptureRegistryData(&P, v22, v20, 0LL);
      v9 = v65;
      goto LABEL_53;
    }
    v29 = v28 - 1;
    if ( !v29 )
    {
      v35 = *((_QWORD *)Argument2 + 2);
      v21 = (__int64)Argument2;
      v4 = 40;
      Object = *(PVOID *)Argument2;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_MULTIPLE_VALUE_KEY;
      HIDWORD(v69) = *(_DWORD *)(v35 + 16);
      LODWORD(v67) = **(_DWORD **)(v35 + 32);
      goto LABEL_53;
    }
    v30 = v29 - 3;
    if ( v30 )
    {
      v31 = v30 - 2;
      if ( v31 )
      {
        v32 = v31 - 2;
        if ( v32 )
        {
          v33 = v32 - 6;
          if ( v33 )
          {
            if ( v33 != 2 )
              return 0LL;
            v27 = ETW_REGISTRY_EVENT_SET_SECURITY_KEY;
          }
          else
          {
            v27 = ETW_REGISTRY_EVENT_QUERY_SECURITY_KEY;
          }
        }
        else
        {
          v27 = ETW_REGISTRY_EVENT_FLUSH_KEY;
        }
        v21 = (__int64)Argument2;
        goto LABEL_41;
      }
      v21 = (__int64)Argument2;
      v34 = (unsigned __int16 **)*((_QWORD *)Argument2 + 2);
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_OPEN_KEY;
      Object = v34[1];
      if ( Argument2[2] >= 0 )
        goto LABEL_46;
    }
    else
    {
      v21 = (__int64)Argument2;
      v34 = (unsigned __int16 **)*((_QWORD *)Argument2 + 2);
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_CREATE_KEY;
      Object = v34[1];
      if ( Argument2[2] >= 0 )
      {
        v71 = *(_DWORD *)v34[8];
LABEL_46:
        v74 = *(PVOID *)Argument2;
      }
    }
    v8 = *v34;
    v4 = 7;
    goto LABEL_53;
  }
  if ( (_DWORD)Argument1 == 22 )
  {
    v18 = *((_QWORD *)Argument2 + 2);
    Object = *(PVOID *)Argument2;
    *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_QUERY_KEY;
    LODWORD(v69) = *(_DWORD *)(v18 + 8);
    v20 = **(unsigned int **)(v18 + 32);
    goto LABEL_18;
  }
  v10 = (_DWORD)Argument1 - 1;
  if ( v10 )
  {
    v11 = v10 - 13;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 )
      {
        v26 = (PVOID *)*((_QWORD *)Argument2 + 2);
        v21 = (__int64)Argument2;
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_DELETE_KEY;
        Object = *v26;
        goto LABEL_53;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        v21 = (__int64)Argument2;
        v24 = *((_QWORD *)Argument2 + 2);
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_SET_VALUE_KEY;
        v8 = *(unsigned __int16 **)(v24 + 8);
        LODWORD(v69) = *(_DWORD *)(v24 + 20);
        Object = *(PVOID *)Argument2;
        v25 = *(unsigned int *)(v24 + 32);
        LODWORD(v67) = *(_DWORD *)(v24 + 32);
        if ( (EtwpRegTraceOptions & 2) != 0 && Argument2[2] >= 0 )
        {
          v9 = EtwpCaptureRegistryData(&P, *(_QWORD *)(v24 + 24), v25, 0LL);
          LOWORD(v65) = v9;
        }
        v5 = (_DWORD *)*((_QWORD *)Argument2 + 4);
        v4 = -15;
        goto LABEL_53;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            if ( v16 != 1 )
              return 0LL;
            v17 = ETW_REGISTRY_EVENT_ENUMERATE_VALUE_KEY;
          }
          else
          {
            v17 = ETW_REGISTRY_EVENT_ENUMERATE_KEY;
          }
          v18 = *((_QWORD *)Argument2 + 2);
          v4 = 120;
          v19 = *(PVOID *)Argument2;
          *(_OWORD *)&ObjectName[1] = v17;
          Object = v19;
          HIDWORD(v69) = *(_DWORD *)(v18 + 8);
          LODWORD(v69) = *(_DWORD *)(v18 + 12);
          v20 = **(unsigned int **)(v18 + 32);
          goto LABEL_13;
        }
        v18 = *((_QWORD *)Argument2 + 2);
        Object = *(PVOID *)Argument2;
        *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_SET_INFORMATION_KEY;
        LODWORD(v69) = *(_DWORD *)(v18 + 8);
        v20 = *(unsigned int *)(v18 + 24);
LABEL_18:
        v4 = 112;
LABEL_13:
        v21 = (__int64)Argument2;
        LODWORD(v67) = v20;
        if ( (EtwpRegTraceOptions & 2) == 0 || Argument2[2] < 0 )
          goto LABEL_53;
        v22 = *(_QWORD *)(v18 + 16);
        goto LABEL_52;
      }
      v23 = *((_QWORD *)Argument2 + 2);
      v21 = (__int64)Argument2;
      v4 = 1;
      *(_OWORD *)&ObjectName[1] = ETW_REGISTRY_EVENT_DELETE_VALUE_KEY;
      v8 = *(unsigned __int16 **)(v23 + 8);
LABEL_20:
      Object = *(PVOID *)Argument2;
LABEL_53:
      if ( (EtwpRegTraceOptions & 1) != 0 )
      {
        v39 = 1;
        if ( Object )
        {
          CmCallbackGetKeyObjectID(&EtwpRegTraceCookie, Object, 0LL, ObjectName);
          v9 = v65;
          v6 = ObjectName[0];
        }
      }
      else
      {
        v39 = 0;
      }
      UserData.Ptr = (ULONGLONG)&Object;
      *(_QWORD *)&UserData.Size = 8LL;
      if ( (v4 & 4) != 0 )
      {
        v77[1] = 8LL;
        v77[0] = &v74;
        v40 = (__int64 **)&v78;
      }
      else
      {
        v7 = 2;
        v40 = (__int64 **)v77;
      }
      v41 = &EtwpNull;
      if ( v21 != 1 )
        v41 = (__int64 *)(v21 + 8);
      *v40 = v41;
      v40[1] = (__int64 *)4;
      if ( (v4 & 8) != 0 )
      {
        v42 = 2LL * v7++;
        *(&UserData.Ptr + v42) = (ULONGLONG)&v69 + 4;
        *((_QWORD *)&UserData.Size + v42) = 4LL;
      }
      if ( (v4 & 0x10) != 0 )
      {
        v43 = 2LL * v7++;
        *(&UserData.Ptr + v43) = (ULONGLONG)&v69;
        *((_QWORD *)&UserData.Size + v43) = 4LL;
      }
      if ( (v4 & 2) != 0 )
      {
        v44 = 2LL * v7++;
        *(&UserData.Ptr + v44) = (ULONGLONG)&v71;
        *((_QWORD *)&UserData.Size + v44) = 4LL;
      }
      if ( (v4 & 0x20) != 0 )
      {
        v45 = 2LL * v7++;
        *(&UserData.Ptr + v45) = (ULONGLONG)&v67;
        *((_QWORD *)&UserData.Size + v45) = 4LL;
      }
      if ( v39 )
      {
        if ( v6 )
        {
          Buffer = (ULONGLONG)v6->Buffer;
          if ( Buffer )
          {
            Length = v6->Length;
            if ( (_WORD)Length )
            {
              v48 = 2LL * v7;
              *(&UserData.Size + 2 * v48) = Length;
              *(&UserData.Reserved + 2 * v48) = 0;
              ++v7;
              *(&UserData.Ptr + v48) = Buffer;
            }
          }
        }
      }
      v49 = 2LL * v7;
      v50 = v7 + 1;
      *(&UserData.Ptr + v49) = (ULONGLONG)&EtwpNull;
      *((_QWORD *)&UserData.Size + v49) = 2LL;
      if ( (v4 & 1) != 0 )
      {
        if ( v8 )
        {
          v51 = *((_QWORD *)v8 + 1);
          if ( v51 )
          {
            v52 = *v8;
            if ( (_WORD)v52 )
            {
              v53 = 2LL * v50;
              *(&UserData.Size + 2 * v53) = v52;
              *(&UserData.Reserved + 2 * v53) = 0;
              ++v50;
              *(&UserData.Ptr + v53) = v51;
            }
          }
        }
        v54 = 2LL * v50++;
        *(&UserData.Ptr + v54) = (ULONGLONG)&EtwpNull;
        *((_QWORD *)&UserData.Size + v54) = 2LL;
      }
      if ( (v4 & 0x40) != 0 )
      {
        v55 = 2LL * v50++;
        *(&UserData.Ptr + v55) = (ULONGLONG)&v65;
        *((_QWORD *)&UserData.Size + v55) = 2LL;
        if ( v9 )
        {
          v56 = 2LL * v50++;
          *(&UserData.Ptr + v56) = (ULONGLONG)P;
          *(&UserData.Size + 2 * v56) = v9;
          *(&UserData.Reserved + 2 * v56) = 0;
        }
      }
      if ( v4 < 0 )
      {
        if ( v5 )
        {
          v57 = v5[2];
          LODWORD(v73) = v57;
          v72 = v5[1];
          v66 = 2048;
          if ( v57 <= 0x800 )
            v66 = v57;
        }
        v58 = 2LL * v50;
        *(&UserData.Ptr + v58) = (ULONGLONG)&v72;
        *((_QWORD *)&UserData.Size + v58) = 4LL;
        v59 = 2LL * (v50 + 1);
        *(&UserData.Ptr + v59) = (ULONGLONG)&v73;
        *((_QWORD *)&UserData.Size + v59) = 4LL;
        v60 = v66;
        v61 = v50 + 2;
        v50 += 3;
        v61 *= 2LL;
        *(&UserData.Ptr + v61) = (ULONGLONG)&v66;
        *((_QWORD *)&UserData.Size + v61) = 2LL;
        if ( (_WORD)v60 )
        {
          v62 = 2LL * v50++;
          *(&UserData.Ptr + v62) = (ULONGLONG)(v5 + 3);
          *(&UserData.Size + 2 * v62) = v60;
          *(&UserData.Reserved + 2 * v62) = 0;
        }
      }
      if ( v21 == 1 || (v63 = *(int *)(v21 + 8) < 0, BYTE4(ObjectName[1]) = 1, !v63) )
        BYTE4(ObjectName[1]) = 2;
      EtwWrite(EtwpRegTraceHandle, (PCEVENT_DESCRIPTOR)&ObjectName[1], 0LL, v50, &UserData);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v5 )
        ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    v27 = ETW_REGISTRY_EVENT_CLOSE_KEY;
    v21 = 1LL;
LABEL_41:
    *(_OWORD *)&ObjectName[1] = v27;
    goto LABEL_20;
  }
  if ( (EtwpRegTraceOptions & 4) != 0 )
    EtwpCapturePreviousRegistryData(Argument2, 4LL, 0LL, 0LL);
  return 0LL;
}
