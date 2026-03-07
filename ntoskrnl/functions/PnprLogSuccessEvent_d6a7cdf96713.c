NTSTATUS PnprLogSuccessEvent()
{
  int v0; // edx
  int v1; // ecx
  int v2; // eax
  _QWORD **v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  ULONG v6; // ecx
  int *v7; // rdi
  __int64 v8; // r10
  int *v9; // r11
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  ULONG v13; // r9d
  __int64 v14; // r14
  __int64 v15; // r8
  int *v16; // rbx
  int *v17; // rsi
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // edx
  __int64 v24; // rcx
  int v26; // [rsp+38h] [rbp-D0h] BYREF
  int v27; // [rsp+3Ch] [rbp-CCh] BYREF
  int v28; // [rsp+40h] [rbp-C8h] BYREF
  int v29; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-B0h] BYREF
  int *v33; // [rsp+68h] [rbp-A0h]
  __int64 v34; // [rsp+70h] [rbp-98h]
  __int64 *v35; // [rsp+78h] [rbp-90h]
  __int64 v36; // [rsp+80h] [rbp-88h]
  _QWORD **v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  __int64 v39; // [rsp+98h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-68h]
  __int64 v41; // [rsp+A8h] [rbp-60h]
  __int64 v42; // [rsp+B0h] [rbp-58h]
  __int64 v43; // [rsp+B8h] [rbp-50h]
  int v44; // [rsp+C0h] [rbp-48h]
  int v45; // [rsp+C4h] [rbp-44h]
  int *v46; // [rsp+C8h] [rbp-40h]
  __int64 v47; // [rsp+D0h] [rbp-38h]
  __int64 v48; // [rsp+D8h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-28h]
  __int64 v50; // [rsp+E8h] [rbp-20h]
  __int64 v51; // [rsp+F0h] [rbp-18h]
  __int64 v52; // [rsp+F8h] [rbp-10h]
  __int64 v53; // [rsp+100h] [rbp-8h]
  int *v54; // [rsp+108h] [rbp+0h]
  __int64 v55; // [rsp+110h] [rbp+8h]
  int *v56; // [rsp+118h] [rbp+10h]
  __int64 v57; // [rsp+120h] [rbp+18h]
  int *v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  __int64 *v60; // [rsp+138h] [rbp+30h]
  __int64 v61; // [rsp+140h] [rbp+38h]
  char *v62; // [rsp+148h] [rbp+40h]
  int v63; // [rsp+150h] [rbp+48h]
  int v64; // [rsp+154h] [rbp+4Ch]

  LOWORD(v26) = 0;
  v0 = *(_DWORD *)(PnprContext + 33316);
  v1 = *(_DWORD *)(PnprContext + 33320);
  v27 = *(_DWORD *)(PnprContext + 33328);
  v28 = v0 - *(_DWORD *)(PnprContext + 33312);
  v2 = v1 - v0;
  v3 = *(_QWORD ***)(PnprContext + 16);
  v29 = v2;
  LODWORD(v30) = *(_DWORD *)(PnprContext + 33324) - v1;
  v4 = *(_QWORD *)PnprContext;
  v31 = **v3;
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(unsigned __int16 *)(v5 + 40);
  v7 = (int *)(v3 + 2);
  v8 = *(_QWORD *)(PnprContext + 24);
  UserData.Ptr = *(_QWORD *)(v5 + 48);
  v33 = &v26;
  v35 = &v31;
  UserData.Size = v6;
  v41 = v8 + 8;
  v9 = (int *)(v8 + 4);
  v10 = *(_QWORD *)(PnprContext + 32);
  UserData.Reserved = 0;
  v34 = 2LL;
  v36 = 8LL;
  v37 = v3 + 2;
  v38 = 4LL;
  v39 = v8 + 4;
  v40 = 4LL;
  v42 = 8LL;
  if ( v10 )
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 312) + 40LL);
  else
    v11 = 0LL;
  v12 = *(unsigned __int16 *)(v11 + 40);
  v13 = 15;
  v14 = *(_QWORD *)(PnprContext + 48);
  v15 = *(_QWORD *)(PnprContext + 56);
  v43 = *(_QWORD *)(v11 + 48);
  v46 = &v26;
  v16 = (int *)(v14 + 16);
  v44 = v12;
  v45 = 0;
  v52 = v15 + 8;
  v17 = (int *)(v15 + 4);
  v47 = 2LL;
  v54 = &v27;
  v56 = &v28;
  v58 = &v29;
  v60 = &v30;
  v48 = v14 + 16;
  v49 = 4LL;
  v50 = v15 + 4;
  v51 = 4LL;
  v53 = 8LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v18 = *v7;
  if ( *v7 )
  {
    v64 = 0;
    v62 = (char *)v3 + 20;
    v13 = 16;
    v63 = 4 * v18;
  }
  v19 = *v9;
  if ( *v9 )
  {
    v20 = 2LL * v13++;
    *(&UserData.Ptr + v20) = v8 + 16;
    *(&UserData.Size + 2 * v20) = 16 * v19;
    *(&UserData.Reserved + 2 * v20) = 0;
  }
  v21 = *v16;
  if ( *v16 )
  {
    v22 = 2LL * v13++;
    *(&UserData.Ptr + v22) = v14 + 20;
    *(&UserData.Size + 2 * v22) = 4 * v21;
    *(&UserData.Reserved + 2 * v22) = 0;
  }
  v23 = *v17;
  if ( *v17 )
  {
    v24 = 2LL * v13++;
    *(&UserData.Ptr + v24) = v15 + 16;
    *(&UserData.Size + 2 * v24) = 16 * v23;
    *(&UserData.Reserved + 2 * v24) = 0;
  }
  return EtwWrite(PnpEtwHandle, &PNP_EVT_DP_REPLACE_SUCCESS, 0LL, v13, &UserData);
}
