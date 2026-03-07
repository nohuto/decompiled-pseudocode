__int64 __fastcall DpiPdoIsChildConnected(__int64 a1, int a2, char a3, char a4, char *a5, bool *a6)
{
  char v6; // r12
  __int64 v9; // r14
  __int64 ChildStatus; // r15
  _QWORD *ChildDescriptor; // rax
  int v12; // edx
  __int64 v13; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  bool v16; // cf
  __int64 v17; // r13
  int v18; // r12d
  __int64 v19; // r9
  __int64 v20; // r8
  char v21; // al
  __int64 v22; // rax
  _DWORD v27[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v28; // [rsp+50h] [rbp-59h]
  _DWORD v29[2]; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v30[24]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v31; // [rsp+80h] [rbp-29h]
  int v32; // [rsp+88h] [rbp-21h]
  int v33; // [rsp+8Ch] [rbp-1Dh]
  int v34; // [rsp+90h] [rbp-19h]
  int v35; // [rsp+94h] [rbp-15h]
  int v36; // [rsp+98h] [rbp-11h]
  int v37; // [rsp+9Ch] [rbp-Dh]
  __int64 v38; // [rsp+A0h] [rbp-9h]

  v6 = 0;
  v9 = *(_QWORD *)(a1 + 64);
  LODWORD(ChildStatus) = 0;
  *a5 = 0;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v9 + 3320), 1u);
  ChildDescriptor = DpiFdoGetChildDescriptor(v9, a2);
  v14 = ChildDescriptor;
  if ( !ChildDescriptor )
  {
    WdLogSingleEntry1(2LL, 0LL);
    v18 = a2;
    goto LABEL_16;
  }
  if ( *(_DWORD *)ChildDescriptor == 1
    && (*((_DWORD *)ChildDescriptor + 1) == 15 || (unsigned int)(*((_DWORD *)ChildDescriptor + 1) - 16) < 2) )
  {
    v6 = 1;
  }
  switch ( *((_DWORD *)ChildDescriptor + 4) )
  {
    case 1:
      *a5 = 1;
      break;
    case 3:
LABEL_10:
      v28 = 0LL;
      v15 = *(_QWORD *)(v9 + 3912);
      v16 = v6 != 0;
      v17 = *(_QWORD *)(v9 + 40);
      v18 = v12;
      v27[1] = v12;
      v27[0] = v16 ? 3 : 1;
      DxgkAcquireAdapterCoreSync(v15, 1, v13);
      KeWaitForSingleObject((PVOID)v14[9], Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v9 + 3912), 1LL);
      LOBYTE(v19) = a4;
      ChildStatus = (int)DpiDxgkDdiQueryChildStatus(v17, *(_QWORD *)(v9 + 48), v27, v19);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v9 + 3912));
      KeReleaseMutex((PRKMUTEX)v14[9], 0);
      DxgkReleaseAdapterCoreSync(*(_QWORD *)(v9 + 3912), 1u, v20);
      if ( (int)ChildStatus < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v17 + 208), ChildStatus);
        goto LABEL_16;
      }
      *a5 = v28;
      goto LABEL_12;
    case 4:
      if ( (!v6 || *((_DWORD *)ChildDescriptor + 1) != 15 || *(_QWORD *)(v9 + 3248)) && a3 )
        goto LABEL_10;
      *a5 = *((_BYTE *)ChildDescriptor + 65);
      break;
    default:
      WdLogSingleEntry1(2LL, 0LL);
      v18 = a2;
      goto LABEL_12;
  }
  v18 = v12;
LABEL_12:
  v21 = *a5;
  if ( !*a5 && *((_BYTE *)v14 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v9 + 3424), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, v14);
    KeReleaseMutex((PRKMUTEX)(v9 + 3424), 0);
    v21 = *a5;
  }
  *a6 = v21 == (v14[6] == 0LL);
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(v9 + 3320));
  KeLeaveCriticalRegion();
  memset(v30, 0, sizeof(v30));
  v33 = 0;
  v22 = *(_QWORD *)(v9 + 2672);
  v32 = 0;
  v31 = 0LL;
  v37 = (unsigned __int8)*a5;
  v29[0] = 30;
  v29[1] = 72;
  memset(v30, 0, sizeof(v30));
  v34 = 38;
  v35 = v18;
  v36 = ChildStatus;
  v38 = v22;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v29, *(_QWORD *)(v9 + 5744));
  return (unsigned int)ChildStatus;
}
