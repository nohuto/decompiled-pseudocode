void __fastcall SepLogTokenSidManagement(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r10d
  __int64 v7; // r9
  _DWORD *v8; // r9
  __int64 v9; // r8
  int v10; // edx
  unsigned __int64 v11; // rax
  void *v12; // rcx
  void *v13; // r9
  int v14; // r10d
  void *v15; // rax
  int v16; // r9d
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  void *SidValuesDump; // r14
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ebx
  int v24; // ecx
  __int64 v25; // rax
  ULONG v26; // ebx
  void *v27; // rdi
  __int64 v28; // rax
  ULONG v29; // ecx
  __int64 v30; // rdx
  ULONG v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v44; // [rsp+80h] [rbp-80h]
  int v45; // [rsp+88h] [rbp-78h]
  int v46; // [rsp+8Ch] [rbp-74h]
  void *v47; // [rsp+90h] [rbp-70h]
  int v48; // [rsp+98h] [rbp-68h]
  int v49; // [rsp+9Ch] [rbp-64h]
  void *v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  __int64 *v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  __int64 *v55; // [rsp+C0h] [rbp-40h]
  __int64 v56; // [rsp+C8h] [rbp-38h]
  int *v57; // [rsp+D0h] [rbp-30h]
  __int64 v58; // [rsp+D8h] [rbp-28h]
  int *v59; // [rsp+E0h] [rbp-20h]
  __int64 v60; // [rsp+E8h] [rbp-18h]
  int *v61; // [rsp+F0h] [rbp-10h]
  __int64 v62; // [rsp+F8h] [rbp-8h]
  __int64 *v63; // [rsp+100h] [rbp+0h]
  __int64 v64; // [rsp+108h] [rbp+8h]
  int *v65; // [rsp+110h] [rbp+10h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  void *v67; // [rsp+120h] [rbp+20h]
  int v68; // [rsp+128h] [rbp+28h]
  int v69; // [rsp+12Ch] [rbp+2Ch]

  v6 = a1;
  v31 = 0;
  v35 = 0;
  v36 = 0;
  if ( EtwKernelProvRegHandle && SepTokenSidManagementLoggingEnabled )
  {
    if ( a4 )
    {
      v39 = RtlConvertLuidToUlonglong(a4 + 16);
      v40 = RtlConvertLuidToUlonglong(v7 + 24);
      v32 = v8[48];
      v33 = v8[49];
      v34 = v8[50];
    }
    else
    {
      v39 = 0LL;
      v40 = 0LL;
      v32 = 0;
      v33 = 0;
      v34 = 0;
    }
    UserData.Ptr = (ULONGLONG)SepGetSidManagementActionName(v6, &v31);
    v10 = 2;
    UserData.Size = v31;
    UserData.Reserved = 0;
    v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[2];
    v12 = &unk_140D1BC28;
    if ( v11 && *(_WORD *)v11 )
    {
      v13 = *(void **)(v11 + 8);
      v14 = *(unsigned __int16 *)(v11 + 2);
    }
    else
    {
      v13 = &unk_140D1BC28;
      v14 = 2;
    }
    v44 = v13;
    v45 = v14;
    v46 = 0;
    if ( v9 && *(_WORD *)(v9 + 56) )
    {
      v15 = *(void **)(v9 + 64);
      v16 = *(unsigned __int16 *)(v9 + 58);
    }
    else
    {
      v15 = &unk_140D1BC28;
      v16 = 2;
    }
    v47 = v15;
    v48 = v16;
    v49 = 0;
    if ( v9 && *(_WORD *)(v9 + 72) )
    {
      v12 = *(void **)(v9 + 80);
      v10 = *(unsigned __int16 *)(v9 + 74);
    }
    v50 = v12;
    v53 = &v39;
    v55 = &v40;
    v57 = &v32;
    v59 = &v33;
    v61 = &v34;
    v51 = v10;
    v52 = 0;
    v54 = 8LL;
    v56 = 8LL;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    if ( a2 )
      v17 = *(_QWORD *)(a2 + 8);
    else
      v17 = 0LL;
    v41 = v17;
    v63 = &v41;
    v64 = 8LL;
    if ( a2 )
      v18 = *(_DWORD *)(a2 + 16);
    else
      v18 = 0;
    v37 = v18;
    v65 = &v37;
    v19 = 11;
    v66 = 4LL;
    SidValuesDump = 0LL;
    if ( a2 && v18 )
    {
      SidValuesDump = (void *)SepGetSidValuesDump((_DWORD *)a2, &v35);
      v68 = v35;
      v19 = 12;
      v67 = SidValuesDump;
      v69 = 0;
    }
    if ( a3 )
      v21 = *(_QWORD *)(a3 + 8);
    else
      v21 = 0LL;
    v42 = v21;
    v22 = v19;
    v23 = v19 + 1;
    v22 *= 2LL;
    *(&UserData.Ptr + v22) = (ULONGLONG)&v42;
    *((_QWORD *)&UserData.Size + v22) = 8LL;
    if ( !a3 || a2 == a3 )
      v24 = 0;
    else
      v24 = *(_DWORD *)(a3 + 16);
    v25 = 2LL * v23;
    v38 = v24;
    v26 = v23 + 1;
    v27 = 0LL;
    *(&UserData.Ptr + v25) = (ULONGLONG)&v38;
    *((_QWORD *)&UserData.Size + v25) = 4LL;
    if ( a3 && v24 )
    {
      v28 = SepGetSidValuesDump((_DWORD *)a3, &v36);
      v29 = v36;
      v27 = (void *)v28;
      v30 = 2LL * v26++;
      *(&UserData.Ptr + v30) = v28;
      *(&UserData.Size + 2 * v30) = v29;
      *(&UserData.Reserved + 2 * v30) = 0;
    }
    EtwWrite(EtwKernelProvRegHandle, &TokenSidManagementLog, 0LL, v26, &UserData);
    if ( SidValuesDump )
      ExFreePoolWithTag(SidValuesDump, 0);
    if ( v27 )
      ExFreePoolWithTag(v27, 0);
  }
}
