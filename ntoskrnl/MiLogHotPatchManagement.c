char __fastcall MiLogHotPatchManagement(int a1, __int64 a2, unsigned __int16 *a3, int a4)
{
  _UNKNOWN **v4; // rax
  __int64 v5; // rbx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r8
  char *v13; // rdx
  int v15; // [rsp+28h] [rbp-99h]
  int v16; // [rsp+30h] [rbp-91h]
  ULONG v17; // [rsp+38h] [rbp-89h]
  int v18; // [rsp+48h] [rbp-79h] BYREF
  int v19; // [rsp+4Ch] [rbp-75h] BYREF
  unsigned int ProcessId; // [rsp+50h] [rbp-71h] BYREF
  __int64 v21; // [rsp+58h] [rbp-69h] BYREF
  __int64 v22; // [rsp+60h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23[2]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int *p_ProcessId; // [rsp+88h] [rbp-39h]
  __int64 v25; // [rsp+90h] [rbp-31h]
  int *v26; // [rsp+98h] [rbp-29h]
  __int64 v27; // [rsp+A0h] [rbp-21h]
  int *v28; // [rsp+A8h] [rbp-19h]
  __int64 v29; // [rsp+B0h] [rbp-11h]
  unsigned int *v30; // [rsp+B8h] [rbp-9h]
  __int64 v31; // [rsp+C0h] [rbp-1h]
  __int64 *v32; // [rsp+C8h] [rbp+7h]
  __int64 v33; // [rsp+D0h] [rbp+Fh]
  __int64 v34; // [rsp+D8h] [rbp+17h]
  int v35; // [rsp+E0h] [rbp+1Fh] BYREF
  int v36; // [rsp+E4h] [rbp+23h]
  __int64 v37; // [rsp+E8h] [rbp+27h]
  int v38; // [rsp+F0h] [rbp+2Fh]
  int v39; // [rsp+F4h] [rbp+33h]
  _UNKNOWN *retaddr; // [rsp+120h] [rbp+5Fh] BYREF

  v4 = &retaddr;
  v5 = *(_QWORD *)&qword_140C69568;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    if ( a1 )
    {
      if ( a1 != 3 )
      {
        if ( a1 == 1 )
        {
          if ( **(_DWORD **)&qword_140C69568 <= 5u )
            return (char)v4;
          LOBYTE(v4) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL);
          if ( !(_BYTE)v4 )
            return (char)v4;
          ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
          v13 = byte_140038B81;
          v25 = 4LL;
          p_ProcessId = &ProcessId;
          v26 = &v19;
          v18 = *(_DWORD *)(a2 + 4);
          v28 = &v18;
          LODWORD(v21) = *(_DWORD *)(a2 + 8);
          v30 = (unsigned int *)&v21;
          v17 = 6;
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
        }
        else
        {
          if ( a1 == 4 )
          {
            if ( **(_DWORD **)&qword_140C69568 <= 5u )
              return (char)v4;
            LOBYTE(v4) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL);
            if ( !(_BYTE)v4 )
              return (char)v4;
            ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
            v13 = byte_140038BD3;
            v31 = 4LL;
            p_ProcessId = &ProcessId;
            v26 = &v19;
            v18 = *(_DWORD *)(a2 + 4);
            v28 = &v18;
            LODWORD(v21) = *(_DWORD *)(a2 + 8);
            v30 = (unsigned int *)&v21;
            v32 = (__int64 *)(a2 + 12);
            v33 = 4 * (unsigned int)*(unsigned __int8 *)(a2 + 13) + 8;
          }
          else
          {
            if ( a1 != 7 )
              return (char)v4;
            if ( **(_DWORD **)&qword_140C69568 <= 5u )
              return (char)v4;
            LOBYTE(v4) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL);
            if ( !(_BYTE)v4 )
              return (char)v4;
            ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
            v13 = (char *)&byte_140038C35;
            v31 = 8LL;
            p_ProcessId = &ProcessId;
            v26 = &v19;
            v18 = *(_DWORD *)(a2 + 4);
            v28 = &v18;
            v21 = *(_QWORD *)(a2 + 16);
            v30 = (unsigned int *)&v21;
            v22 = *(_QWORD *)(a2 + 24);
            v32 = &v22;
            v33 = 8LL;
          }
          v29 = 4LL;
          v17 = 7;
          v27 = 4LL;
          v25 = 4LL;
        }
        v19 = a4;
        LOBYTE(v4) = tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)v13, v12, 1u, v15, v16, v17, v23);
        return (char)v4;
      }
      if ( **(_DWORD **)&qword_140C69568 > 5u )
      {
        LOBYTE(v4) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL);
        if ( (_BYTE)v4 )
        {
          ProcessId = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
          v25 = 4LL;
          p_ProcessId = &ProcessId;
          v19 = a4;
          v26 = &v19;
          v18 = *(_DWORD *)(a2 + 92);
          v28 = &v18;
          LODWORD(v21) = *(_DWORD *)(a2 + 96);
          v30 = (unsigned int *)&v21;
          v32 = (__int64 *)&v35;
          v34 = *((_QWORD *)a3 + 1);
          v35 = *a3;
          v37 = a2 + 24;
          v10 = *(unsigned __int8 *)(a2 + 25);
          v27 = 4LL;
          v29 = 4LL;
          v31 = 4LL;
          v33 = 2LL;
          v38 = 4 * v10 + 8;
          v36 = 0;
          v39 = 0;
          LOBYTE(v4) = tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)&word_140038B16, v11, 1u, v15, v16, 9u, v23);
        }
      }
    }
    else if ( **(_DWORD **)&qword_140C69568 > 5u )
    {
      LOBYTE(v4) = tlgKeywordOn(*(__int64 *)&qword_140C69568, 32LL);
      if ( (_BYTE)v4 )
      {
        LODWORD(v21) = (unsigned int)PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
        v25 = 4LL;
        p_ProcessId = (unsigned int *)&v21;
        v18 = a4;
        v26 = &v18;
        v19 = *(_DWORD *)(a2 + 92);
        v28 = &v19;
        ProcessId = *(_DWORD *)(a2 + 96);
        v30 = &ProcessId;
        v32 = (__int64 *)&v35;
        v34 = *((_QWORD *)a3 + 1);
        v35 = *a3;
        v27 = 4LL;
        v29 = 4LL;
        v31 = 4LL;
        v33 = 2LL;
        v36 = 0;
        LOBYTE(v4) = tlgWriteEx_EtwWriteEx(v5, (unsigned __int8 *)byte_140038ABB, v9, 1u, v15, v16, 8u, v23);
      }
    }
  }
  return (char)v4;
}
