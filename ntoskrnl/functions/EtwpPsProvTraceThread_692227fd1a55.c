NTSTATUS __fastcall EtwpPsProvTraceThread(__int64 a1, __int64 a2, char a3)
{
  _DWORD *CurrentThreadTeb; // rdx
  _KPROCESS *Process; // rax
  __int16 v8; // cx
  char v9; // al
  int v10; // eax
  __int64 v11; // rcx
  _KPROCESS *v12; // rdx
  __int16 v13; // r8
  char v14; // al
  int v15; // eax
  __int64 v16; // rcx
  ULONG v17; // r9d
  int v19; // [rsp+30h] [rbp-118h] BYREF
  int v20; // [rsp+34h] [rbp-114h] BYREF
  int v21; // [rsp+38h] [rbp-110h] BYREF
  __int64 v22; // [rsp+40h] [rbp-108h]
  __int64 v23; // [rsp+48h] [rbp-100h] BYREF
  __int64 v24; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-E8h] BYREF
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-E0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-D8h] BYREF
  int *v29; // [rsp+80h] [rbp-C8h]
  int v30; // [rsp+88h] [rbp-C0h]
  int v31; // [rsp+8Ch] [rbp-BCh]
  __int64 v32; // [rsp+90h] [rbp-B8h]
  int v33; // [rsp+98h] [rbp-B0h]
  int v34; // [rsp+9Ch] [rbp-ACh]
  __int64 v35; // [rsp+A0h] [rbp-A8h]
  int v36; // [rsp+A8h] [rbp-A0h]
  int v37; // [rsp+ACh] [rbp-9Ch]
  __int64 *v38; // [rsp+B0h] [rbp-98h]
  int v39; // [rsp+B8h] [rbp-90h]
  int v40; // [rsp+BCh] [rbp-8Ch]
  __int64 *v41; // [rsp+C0h] [rbp-88h]
  int v42; // [rsp+C8h] [rbp-80h]
  int v43; // [rsp+CCh] [rbp-7Ch]
  __int64 *v44; // [rsp+D0h] [rbp-78h]
  int v45; // [rsp+D8h] [rbp-70h]
  int v46; // [rsp+DCh] [rbp-6Ch]
  __int64 *v47; // [rsp+E0h] [rbp-68h]
  int v48; // [rsp+E8h] [rbp-60h]
  int v49; // [rsp+ECh] [rbp-5Ch]
  __int64 v50; // [rsp+F0h] [rbp-58h]
  int v51; // [rsp+F8h] [rbp-50h]
  int v52; // [rsp+FCh] [rbp-4Ch]
  int *v53; // [rsp+100h] [rbp-48h]
  int v54; // [rsp+108h] [rbp-40h]
  int v55; // [rsp+10Ch] [rbp-3Ch]
  __int64 *v56; // [rsp+110h] [rbp-38h]
  int v57; // [rsp+118h] [rbp-30h]
  int v58; // [rsp+11Ch] [rbp-2Ch]

  v22 = a1;
  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v19 = 0;
  if ( a3 )
  {
    EventDescriptor = &ThreadStart;
    CurrentThreadTeb = PsGetCurrentThreadTeb();
    if ( CurrentThreadTeb )
    {
      Process = KeGetCurrentThread()->Process;
      if ( Process[1].Affinity.StaticBitmap[30]
        && ((v8 = WORD2(Process[2].Affinity.StaticBitmap[20]), v8 == 332) || v8 == 452 ? (v9 = 1) : (v9 = 0), v9) )
      {
        v10 = CurrentThreadTeb[3032];
      }
      else
      {
        v10 = CurrentThreadTeb[1480];
      }
      v19 = v10;
    }
  }
  else
  {
    EventDescriptor = (PCEVENT_DESCRIPTOR)ThreadStop;
    v11 = *(_QWORD *)(a1 + 240);
    if ( v11 )
    {
      v12 = KeGetCurrentThread()->Process;
      if ( v12[1].Affinity.StaticBitmap[30]
        && ((v13 = WORD2(v12[2].Affinity.StaticBitmap[20]), v13 == 332) || v13 == 452 ? (v14 = 1) : (v14 = 0), v14) )
      {
        v15 = *(_DWORD *)(v11 + 12128);
      }
      else
      {
        v15 = *(_DWORD *)(v11 + 5920);
      }
      v19 = v15;
    }
  }
  v20 = *(_DWORD *)(a1 + 1224);
  UserData.Ptr = (ULONGLONG)&v20;
  UserData.Size = 4;
  UserData.Reserved = 0;
  v21 = *(_DWORD *)(a1 + 1232);
  v29 = &v21;
  v30 = 4;
  v31 = 0;
  v32 = a1 + 56;
  v33 = 8;
  v34 = 0;
  v35 = a1 + 48;
  v36 = 8;
  v37 = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      v23 = *(_QWORD *)(a2 + 16);
      v24 = *(_QWORD *)(a2 + 24);
    }
  }
  else
  {
    v16 = *(_QWORD *)(a1 + 240);
    if ( v16 )
    {
      v23 = *(_QWORD *)(v16 + 8);
      v24 = *(_QWORD *)(v16 + 16);
    }
  }
  v38 = &v23;
  v39 = 8;
  v40 = 0;
  v41 = &v24;
  v42 = 8;
  v43 = 0;
  PsQueryThreadStartAddress(a1, 1);
  v44 = &v25;
  v45 = 8;
  v46 = 0;
  v25 = *(_QWORD *)(a1 + 1312);
  v47 = &v25;
  v48 = 8;
  v49 = 0;
  v50 = a1 + 240;
  v51 = 8;
  v52 = 0;
  v53 = &v19;
  v54 = 4;
  v55 = 0;
  v17 = 10;
  if ( !a3 )
  {
    v26 = *(_QWORD *)(a1 + 72);
    v56 = &v26;
    v57 = 8;
    v58 = 0;
    v17 = 11;
  }
  return EtwWrite(EtwpPsProvRegHandle, EventDescriptor, 0LL, v17, &UserData);
}
