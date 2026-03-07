__int64 __fastcall DxgkExtractBundleObjectInternal(__int64 a1, KPROCESSOR_MODE a2, struct _KPROCESS *a3, ULONG64 a4)
{
  char v6; // r13
  char v7; // si
  ULONG64 v8; // rax
  __int64 v9; // r15
  int v10; // esi
  const void *v11; // r14
  char *v12; // rcx
  KPROCESSOR_MODE v13; // r9
  HANDLE v14; // r12
  NTSTATUS v15; // eax
  __int128 *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  char v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int *v27; // r12
  struct _KPROCESS *v28; // r14
  unsigned int v29; // ecx
  __int64 v30; // r14
  DWORD v31; // r9d
  int v32; // eax
  __int64 ObjectType; // rax
  void *v34; // rcx
  NTSTATUS inserted; // eax
  __int128 v36; // xmm1
  HANDLE *v37; // xmm0_8
  unsigned __int64 *v38; // rsi
  size_t v39; // r8
  ULONG64 v40; // rdx
  _DWORD *v41; // rcx
  _OWORD *v42; // rcx
  unsigned int i; // r14d
  HANDLE v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // r8
  char v47; // [rsp+50h] [rbp-1E8h]
  char v48; // [rsp+52h] [rbp-1E6h]
  int v49; // [rsp+58h] [rbp-1E0h] BYREF
  __int64 v50; // [rsp+60h] [rbp-1D8h]
  char v51; // [rsp+68h] [rbp-1D0h]
  DWORD AccessMask; // [rsp+70h] [rbp-1C8h] BYREF
  unsigned int v53; // [rsp+74h] [rbp-1C4h]
  unsigned int *v54; // [rsp+78h] [rbp-1C0h]
  HANDLE *v55; // [rsp+80h] [rbp-1B8h]
  PRKPROCESS PROCESS[2]; // [rsp+88h] [rbp-1B0h]
  PVOID Object; // [rsp+98h] [rbp-1A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+A0h] [rbp-198h] BYREF
  ULONG64 v59; // [rsp+A8h] [rbp-190h]
  char *v60; // [rsp+B0h] [rbp-188h]
  HANDLE Handle[2]; // [rsp+B8h] [rbp-180h]
  void *Src[2]; // [rsp+C8h] [rbp-170h]
  __int128 v63; // [rsp+D8h] [rbp-160h]
  HANDLE *v64; // [rsp+E8h] [rbp-150h]
  PVOID v65; // [rsp+F0h] [rbp-148h]
  struct _KPROCESS *v66; // [rsp+F8h] [rbp-140h]
  struct _KAPC_STATE ApcState; // [rsp+100h] [rbp-138h] BYREF
  _DWORD v68[16]; // [rsp+130h] [rbp-108h] BYREF
  HANDLE v69[16]; // [rsp+170h] [rbp-C8h] BYREF

  v59 = a4;
  PROCESS[0] = a3;
  v6 = a1;
  v48 = a1;
  v66 = a3;
  v49 = -1;
  v50 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v51 = 1;
    v49 = 2158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2158);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 2158);
  v7 = 0;
  v47 = 0;
  if ( v6 == 1 )
  {
    v8 = a4;
    if ( a4 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v8;
    *(_OWORD *)Src = *(_OWORD *)(v8 + 16);
    v63 = *(_OWORD *)(v8 + 32);
    v64 = *(HANDLE **)(v8 + 48);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a4;
    *(_OWORD *)Src = *(_OWORD *)(a4 + 16);
    v63 = *(_OWORD *)(a4 + 32);
    v64 = *(HANDLE **)(a4 + 48);
  }
  v9 = LODWORD(Handle[1]);
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v10 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Input handle count (0x%I64x) is out of range. Returning 0x%I64x",
      v9,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_32;
  }
  v11 = Src[0];
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v10 = -1073741811;
      WdLogSingleEntry3(3LL, Src[0], Src[1], -1073741811LL);
      goto LABEL_32;
    }
    v7 = 1;
    v47 = 1;
  }
  memset(v68, 0, sizeof(v68));
  if ( !v7 && Src[0] )
  {
    if ( v6 == 1 )
    {
      v12 = (char *)Src[0] + 4 * LODWORD(Handle[1]);
      if ( v12 < Src[0] || (unsigned __int64)v12 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v68, v11, 4 * v9);
    }
    else
    {
      memmove(v68, Src[0], 4LL * LODWORD(Handle[1]));
    }
  }
  memset(v69, 0, sizeof(v69));
  HandleInformation = 0LL;
  Object = 0LL;
  v13 = a2;
  v14 = Handle[0];
  v15 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, v13, &Object, &HandleInformation);
  v10 = v15;
  v16 = (__int128 *)Object;
  v65 = Object;
  if ( v15 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, v14, -1073741788LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v49);
    return 3221225508LL;
  }
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(3LL, v14, v15);
LABEL_32:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v49);
    }
    return (unsigned int)v10;
  }
  if ( !*((_BYTE *)Object + 243) )
  {
    WdLogSingleEntry1(3LL, v14);
    ObfDereferenceObject(v16);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
    if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v49);
    return (unsigned int)-1073741811;
  }
  v60 = (char *)Object + 232;
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  v24 = 0;
  v54 = (unsigned int *)v16 + 6;
  v25 = *((unsigned int *)v16 + 6);
  LOBYTE(v26) = v47;
  if ( v47 )
  {
    LODWORD(v9) = *((_DWORD *)v16 + 6);
    LODWORD(Handle[1]) = v9;
  }
  else if ( (_DWORD)v9 != (_DWORD)v25 )
  {
    v10 = -1073741811;
    WdLogSingleEntry4(3LL, v9, *((unsigned int *)v16 + 6), v14, -1073741811LL);
    goto LABEL_49;
  }
  if ( !v47 )
  {
    if ( *((_BYTE *)v16 + 241) && !*((_BYTE *)v16 + 240) )
    {
      v10 = -1073741811;
      WdLogSingleEntry2(3LL, v14, -1073741811LL);
LABEL_49:
      v27 = v54;
      goto LABEL_89;
    }
    if ( !v11 )
      memmove(v68, v16 + 10, 4 * v25);
    v28 = PROCESS[0];
    if ( PROCESS[0] && v28 != (struct _KPROCESS *)PsGetCurrentProcess(v26) )
    {
      KeStackAttachProcess(v28, &ApcState);
      v24 = 1;
    }
    v29 = 0;
    v53 = 0;
    v27 = v54;
    if ( *v54 )
    {
      while ( 1 )
      {
        v30 = v29;
        v31 = v68[v29];
        AccessMask = v31;
        v32 = *((_DWORD *)v16 + 5);
        if ( _bittest(&v32, v29) )
        {
          if ( (v31 & 0xF0000000) != 0 )
          {
            ObjectType = ObGetObjectType(*((_QWORD *)v16 + v29 + 4));
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
            v31 = AccessMask;
          }
          v31 &= HandleInformation.GrantedAccess;
          AccessMask = v31;
        }
        v55 = &v69[v30];
        v34 = (void *)*((_QWORD *)v16 + v30 + 4);
        if ( *((_BYTE *)v16 + 242) )
        {
          inserted = ObOpenObjectByPointer(v34, 0, 0LL, v31, 0LL, 0, &v69[v30]);
        }
        else
        {
          ObfReferenceObject(v34);
          inserted = ObInsertObject(*((PVOID *)v16 + v30 + 4), 0LL, AccessMask, 0, 0LL, &v69[v30]);
        }
        v10 = inserted;
        if ( inserted < 0 )
          break;
        if ( ObIsKernelHandle(*v55) )
        {
          WdLogSingleEntry1(1LL, 2708LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"false == ObIsKernelHandle(hNtHandles[i])",
            2708LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v29 = v53 + 1;
        v53 = v29;
        if ( v29 >= *v27 )
          goto LABEL_70;
      }
      WdLogSingleEntry3(3LL, *((_QWORD *)v16 + v30 + 4), *((unsigned __int8 *)v16 + 242), inserted);
    }
LABEL_70:
    if ( v24 )
      KeUnstackDetachProcess(&ApcState);
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(3LL, v10);
LABEL_89:
      if ( v69[0] )
      {
        if ( v24 )
          KeStackAttachProcess(PROCESS[0], &ApcState);
        for ( i = 0; i < *v27; v69[i++] = 0LL )
        {
          v44 = v69[i];
          if ( !v44 )
            break;
          ObCloseHandle(v44, 1);
        }
        if ( v24 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx(v60, 0LL);
      ObfDereferenceObject(v16);
      goto LABEL_32;
    }
    *(_WORD *)((char *)v16 + 241) = 257;
    LOBYTE(v26) = 0;
  }
  v36 = *v16;
  *(_OWORD *)PROCESS = v36;
  v63 = v36;
  v37 = (HANDLE *)*((_QWORD *)v16 + 2);
  v55 = v37;
  v64 = v37;
  if ( v48 == 1 )
  {
    v38 = (unsigned __int64 *)MmUserProbeAddress;
    if ( (_BYTE)v26 )
    {
      v40 = v59;
      v41 = (_DWORD *)(v59 + 8);
      if ( v59 + 12 > MmUserProbeAddress || v59 + 12 <= (unsigned __int64)v41 )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v38 = (unsigned __int64 *)MmUserProbeAddress;
      }
      *v41 = v9;
    }
    else
    {
      v39 = 8LL * (unsigned int)v9;
      if ( (char *)Src[1] + v39 > (void *)MmUserProbeAddress || (char *)Src[1] + v39 <= Src[1] )
      {
        *(_BYTE *)MmUserProbeAddress = 0;
        v38 = (unsigned __int64 *)MmUserProbeAddress;
      }
      memmove(Src[1], v69, v39);
      v36 = *(_OWORD *)PROCESS;
      v37 = v55;
      v40 = v59;
    }
    v42 = (_OWORD *)(v40 + 32);
    if ( v40 + 56 > *v38 || v40 + 56 <= (unsigned __int64)v42 )
      *(_BYTE *)*v38 = 0;
    *v42 = v36;
    *(_QWORD *)(v40 + 48) = v37;
  }
  else if ( !(_BYTE)v26 )
  {
    memmove(Src[1], v69, 8LL * (unsigned int)v9);
  }
  ExReleasePushLockExclusiveEx(v60, 0LL);
  ObfDereferenceObject(v16);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v49);
  return 0LL;
}
