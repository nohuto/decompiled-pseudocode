char __fastcall AlpcpExposeTokenAttribute(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rcx
  char v14; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rbx
  __int64 v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+28h] [rbp-80h]
  _QWORD v20[10]; // [rsp+50h] [rbp-58h] BYREF

  memset(v20, 0, 0x44uLL);
  v8 = 0;
  v9 = 0LL;
  LODWORD(v10) = *(_DWORD *)(a2 + 40);
  if ( (v10 & 0x80u) != 0LL )
    return v10;
  v10 = *(_QWORD *)(a2 + 136);
  if ( v10 )
  {
    if ( *(int *)(v10 + 36) < 1 )
      return v10;
    v9 = *(_QWORD *)(v10 + 48);
    v14 = 0;
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(a2 + 24);
  LOBYTE(v10) = *(_DWORD *)(a1 + 416) & 6;
  if ( (_BYTE)v10 != 2 )
    return v10;
  if ( !v11 )
    return v10;
  v12 = *(_DWORD *)(v11 + 416);
  LOBYTE(v10) = v12 & 6;
  if ( (v12 & 6) != 4 )
    return v10;
  if ( (v12 & 0x400) == 0 )
  {
    v9 = *(_QWORD *)(v11 + 80);
    if ( !v9 )
      return v10;
    goto LABEL_17;
  }
  v13 = *(_QWORD *)(a2 + 32);
  if ( !v13 )
    return v10;
  LODWORD(v10) = SeCreateClientSecurityEx(v13, (int)v11 + 260, 0, (__int64)v20);
  v8 = v10;
  if ( (int)v10 < 0 )
  {
LABEL_17:
    v14 = 0;
    if ( v8 < 0 )
      return v10;
    goto LABEL_10;
  }
  v9 = v20[2];
  v14 = 1;
LABEL_10:
  v19 = *(_QWORD *)(v9 + 24);
  v18 = *(_QWORD *)(v9 + 16);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v9 + 48), 1u);
  v16 = *(_QWORD *)(v9 + 56);
  ExReleaseResourceLite(*(PERESOURCE *)(v9 + 48));
  KeLeaveCriticalRegion();
  if ( v14 )
    SeDeleteClientSecurity((__int64)v20);
  *a3 = v18;
  LOBYTE(v10) = v19;
  a3[1] = v19;
  a3[2] = v16;
  *a4 |= 0x8000000u;
  return v10;
}
