__int64 __fastcall PiDqIrpQueryCreate(_QWORD *a1)
{
  _QWORD *v1; // r13
  __int64 v2; // r14
  __int64 v3; // rsi
  char v4; // r15
  struct _LIST_ENTRY *v5; // r12
  _QWORD *v6; // rdi
  struct _KTHREAD *CurrentThread; // rax
  int v8; // eax
  int v9; // eax
  int ValidateQueryData; // edi
  unsigned int v11; // r8d
  struct _KTHREAD *v12; // rax
  _DWORD *v13; // r14
  PVOID v15; // r13
  PVOID v16; // r12
  __int64 v17; // r15
  int v18; // edx
  int v19; // r8d
  const wchar_t *v20; // rax
  void *v21; // rax
  int v22; // eax
  void *v23; // rax
  unsigned int v24; // eax
  void *v25; // rax
  unsigned int v26; // edx
  _WORD *v27; // rcx
  void *v28; // rax
  int v29; // eax
  void *v30; // rax
  void *v31; // rax
  int v32; // eax
  int CurrentThreadProcessId; // eax
  __int64 v34; // rdx
  unsigned int v35; // eax
  void *Pool2; // rax
  unsigned int v37; // ecx
  PVOID v38; // r8
  _WORD *v39; // rdx
  __int64 v40; // [rsp+20h] [rbp-128h]
  char v41; // [rsp+60h] [rbp-E8h]
  unsigned int v42; // [rsp+64h] [rbp-E4h] BYREF
  char v43; // [rsp+68h] [rbp-E0h]
  PVOID P; // [rsp+70h] [rbp-D8h]
  PVOID v45; // [rsp+78h] [rbp-D0h]
  unsigned int v46; // [rsp+80h] [rbp-C8h] BYREF
  PVOID v47; // [rsp+88h] [rbp-C0h]
  PVOID v48; // [rsp+90h] [rbp-B8h]
  unsigned int v49; // [rsp+98h] [rbp-B0h] BYREF
  PVOID v50; // [rsp+A0h] [rbp-A8h]
  __int64 v51; // [rsp+A8h] [rbp-A0h]
  PVOID v52; // [rsp+B0h] [rbp-98h]
  const wchar_t *v53; // [rsp+B8h] [rbp-90h]
  struct _LIST_ENTRY *v54; // [rsp+C0h] [rbp-88h]
  _QWORD *v55; // [rsp+C8h] [rbp-80h]
  __int64 v56; // [rsp+D0h] [rbp-78h] BYREF
  _DWORD *v57; // [rsp+D8h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-68h]
  _QWORD *v59; // [rsp+E8h] [rbp-60h]
  __int64 v60; // [rsp+F0h] [rbp-58h]
  __int128 v61; // [rsp+F8h] [rbp-50h] BYREF
  struct _LIST_ENTRY v62; // [rsp+108h] [rbp-40h] BYREF

  v1 = a1;
  v55 = a1;
  v47 = a1;
  v2 = a1[23];
  v51 = v2;
  v52 = (PVOID)v2;
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 32LL);
  v56 = v3;
  v60 = v3;
  v4 = 0;
  v5 = 0LL;
  v54 = 0LL;
  v62 = 0LL;
  v41 = 0;
  v46 = 0;
  v49 = 0;
  v61 = 0LL;
  if ( !v3 )
  {
    ValidateQueryData = -1073741637;
    goto LABEL_17;
  }
  v6 = a1 + 3;
  v59 = a1 + 3;
  if ( !a1[3] )
  {
    ValidateQueryData = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v3 + 64;
  ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
  v57 = (_DWORD *)(v3 + 216);
  v8 = *(_DWORD *)(v3 + 216);
  if ( (v8 & 8) != 0 )
  {
    ValidateQueryData = -1073741536;
    goto LABEL_13;
  }
  if ( (v8 & 0x10) != 0 || (v9 = v8 | 0x10, *(_DWORD *)(v3 + 216) = v9, v4 = 1, v43 = 1, (v9 & 4) != 0) )
  {
    ValidateQueryData = -1073741637;
    goto LABEL_13;
  }
  if ( *(_DWORD *)(v2 + 8) < 0x10u )
  {
    ValidateQueryData = -1073741789;
    goto LABEL_13;
  }
  ValidateQueryData = MesDecodeBufferHandleCreate(*v6, *(unsigned int *)(v2 + 16), v3 + 16);
  if ( ValidateQueryData < 0 )
    goto LABEL_13;
  NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_140001BD0, &off_140C02F08, 0, v3 + 24);
  ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
  if ( ValidateQueryData < 0 )
    goto LABEL_13;
  if ( !PnpIsNullGuid(*(void **)(v3 + 24)) )
  {
    v62 = *(struct _LIST_ENTRY *)*(_QWORD *)(v3 + 24);
    v5 = IoSetActivityIdThread(&v62);
    v54 = v5;
    v41 = 1;
  }
  if ( (byte_140C0E10A & 0x40) != 0 )
  {
    v15 = 0LL;
    v45 = 0LL;
    v52 = 0LL;
    v56 = 0LL;
    v48 = 0LL;
    v16 = 0LL;
    v50 = 0LL;
    v47 = 0LL;
    v17 = *(_QWORD *)(v3 + 24);
    if ( (int)PiDqConvertObjectTypeToString(*(unsigned int *)(v17 + 16), &v56) < 0 )
      goto LABEL_86;
    v18 = 0;
    v53 = 0LL;
    v19 = *(_DWORD *)(v17 + 20);
    if ( v19 )
    {
      if ( v19 == 1 )
      {
        v20 = L"Instance";
      }
      else
      {
        if ( v19 != 2 )
        {
          v18 = -1073741811;
          goto LABEL_40;
        }
        v20 = L"Instances";
      }
    }
    else
    {
      v20 = L"Type";
    }
    v53 = v20;
LABEL_40:
    if ( v18 < 0 )
      goto LABEL_86;
    if ( v19 == 1 )
    {
      v52 = *(PVOID *)(v17 + 24);
    }
    else if ( v19 == 2 )
    {
      v35 = *(_DWORD *)(v17 + 24);
      if ( v35 <= 2 )
        goto LABEL_86;
      Pool2 = (void *)ExAllocatePool2(256LL, 2LL * v35, 1483763280LL);
      v47 = Pool2;
      if ( !Pool2 )
        goto LABEL_86;
      memmove(Pool2, *(const void **)(v17 + 32), 2LL * *(unsigned int *)(v17 + 24));
      v37 = *(_DWORD *)(v17 + 24) - 2;
      v38 = v47;
      if ( *(_DWORD *)(v17 + 24) != 2 )
      {
        v39 = (char *)v47 + 2 * v37;
        do
        {
          if ( !*v39 )
            *v39 = 32;
          --v39;
          --v37;
        }
        while ( v37 );
      }
      v52 = v38;
    }
    v42 = 512;
    v21 = (void *)ExAllocatePool2(256LL, 512LL, 1483763280LL);
    P = v21;
    if ( !v21 )
    {
      v16 = 0LL;
      goto LABEL_86;
    }
    v22 = PiDqConvertQueryFlagsToString(*(unsigned int *)(v17 + 40), v21, 512LL, &v42);
    if ( v22 == -1073741789 )
    {
      ExFreePoolWithTag(P, 0x58706E50u);
      v23 = (void *)ExAllocatePool2(256LL, v42, 1483763280LL);
      P = v23;
      if ( !v23 )
      {
        v16 = 0LL;
        v15 = 0LL;
        goto LABEL_86;
      }
      v22 = PiDqConvertQueryFlagsToString(*(unsigned int *)(v17 + 40), v23, v42, &v42);
    }
    if ( v22 < 0 )
      goto LABEL_84;
    if ( (*(_DWORD *)(v17 + 40) & 4) != 0 )
    {
      v24 = *(_DWORD *)(v17 + 48);
      if ( v24 <= 2 )
        goto LABEL_84;
      v25 = (void *)ExAllocatePool2(256LL, 2LL * v24, 1483763280LL);
      v48 = v25;
      if ( !v25 )
        goto LABEL_84;
      memmove(v25, *(const void **)(v17 + 56), 2LL * *(unsigned int *)(v17 + 48));
      v26 = *(_DWORD *)(v17 + 48) - 2;
      if ( *(_DWORD *)(v17 + 48) != 2 )
      {
        v27 = (char *)v48 + 2 * v26;
        do
        {
          if ( !*v27 )
            *v27 = 32;
          --v27;
          --v26;
        }
        while ( v26 );
      }
    }
    if ( !*(_DWORD *)(v17 + 64) )
      goto LABEL_62;
    v42 = 512;
    v28 = (void *)ExAllocatePool2(256LL, 512LL, 1483763280LL);
    v50 = v28;
    if ( v28 )
    {
      v29 = PnpConvertDevpropcompkeyArrayToString(
              *(_QWORD *)(v17 + 72),
              *(_DWORD *)(v17 + 64),
              (_DWORD)v28,
              512,
              (__int64)&v42);
      if ( v29 == -1073741789 )
      {
        ExFreePoolWithTag(v50, 0x58706E50u);
        v30 = (void *)ExAllocatePool2(256LL, v42, 1483763280LL);
        v50 = v30;
        if ( !v30 )
          goto LABEL_84;
        v29 = PnpConvertDevpropcompkeyArrayToString(
                *(_QWORD *)(v17 + 72),
                *(_DWORD *)(v17 + 64),
                (_DWORD)v30,
                v42,
                (__int64)&v42);
      }
      if ( v29 >= 0 )
      {
LABEL_62:
        if ( !*(_DWORD *)(v17 + 80) )
          goto LABEL_68;
        v42 = 512;
        v31 = (void *)ExAllocatePool2(256LL, 512LL, 1483763280LL);
        v45 = v31;
        if ( v31 )
        {
          v32 = FilterConvertToString(*(_DWORD *)(v17 + 80), *(_QWORD *)(v17 + 88), 512, (_DWORD)v31, (__int64)&v42);
          if ( v32 != -1073741789 )
            goto LABEL_67;
          ExFreePoolWithTag(v45, 0x58706E50u);
          v31 = (void *)ExAllocatePool2(256LL, v42, 1483763280LL);
          v45 = v31;
          if ( v31 )
          {
            v32 = FilterConvertToString(*(_DWORD *)(v17 + 80), *(_QWORD *)(v17 + 88), v42, (_DWORD)v31, (__int64)&v42);
LABEL_67:
            if ( v32 < 0 )
            {
LABEL_83:
              v15 = v45;
              goto LABEL_85;
            }
LABEL_68:
            if ( (byte_140C0E10A & 0x40) != 0 )
            {
              CurrentThreadProcessId = PsGetCurrentThreadProcessId();
              v15 = v45;
              v16 = P;
              LODWORD(v40) = CurrentThreadProcessId;
              McTemplateK0pqzzzzzzz_EtwWriteTransfer(
                v56,
                v34,
                (const GUID *)v17,
                v3,
                v40,
                v56,
                v53,
                v52,
                P,
                v48,
                v50,
                v45);
LABEL_86:
              if ( v47 )
                ExFreePoolWithTag(v47, 0x58706E50u);
              if ( v16 )
                ExFreePoolWithTag(v16, 0x58706E50u);
              if ( v48 )
                ExFreePoolWithTag(v48, 0x58706E50u);
              if ( v50 )
                ExFreePoolWithTag(v50, 0x58706E50u);
              if ( v15 )
                ExFreePoolWithTag(v15, 0x58706E50u);
              v5 = v54;
              goto LABEL_12;
            }
            goto LABEL_83;
          }
        }
        v15 = v31;
LABEL_85:
        v16 = P;
        goto LABEL_86;
      }
    }
LABEL_84:
    v15 = 0LL;
    goto LABEL_85;
  }
LABEL_12:
  *v57 |= 4u;
  v2 = v51;
  v4 = v43;
LABEL_13:
  ExReleasePushLockEx((__int64 *)BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( ValidateQueryData >= 0 )
  {
    v11 = *(_DWORD *)(v2 + 8);
    if ( v11 <= 0x10 )
      v46 = 16;
    else
      ValidateQueryData = PiDqQuerySerializeActionQueue(v3, *v59, v11, (unsigned int)&v46, (__int64)&v49);
  }
  v1 = v55;
LABEL_17:
  if ( v4 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
    if ( ValidateQueryData < 0 )
    {
      v13 = (_DWORD *)(v3 + 216);
      *(_DWORD *)(v3 + 216) |= 1u;
      PiDqQueryFreeActiveData(v3);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(v3, *(unsigned int *)(v2 + 8), v49, &v61);
      v13 = (_DWORD *)(v60 + 216);
    }
    *v13 &= ~0x10u;
    ExReleasePushLockEx((__int64 *)(v3 + 64), 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete(v1, (unsigned int)ValidateQueryData, v46, &v61);
  if ( v41 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
