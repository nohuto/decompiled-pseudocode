/*
 * XREFs of DxgkExtractBundleObjectInternal @ 0x1C0278CE8
 * Callers:
 *     DxgkExtractBundleObject @ 0x1C0278C90 (DxgkExtractBundleObject.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C028B4F0 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall DxgkExtractBundleObjectInternal(__int64 a1, KPROCESSOR_MODE a2, struct _KPROCESS *a3, ULONG64 a4)
{
  char v6; // r14
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  char v10; // di
  ULONG64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  const void *v16; // r14
  __int64 v17; // rax
  char *v18; // rcx
  KPROCESSOR_MODE v19; // r9
  HANDLE v20; // r13
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int128 *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  char v43; // r13
  struct _KPROCESS *v44; // r14
  __int64 v45; // rcx
  __int64 v46; // r14
  DWORD v47; // r9d
  int v48; // eax
  __int64 ObjectType; // rax
  void *v50; // rcx
  NTSTATUS inserted; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int128 v59; // xmm1
  HANDLE *v60; // xmm0_8
  size_t v61; // r8
  ULONG64 v62; // r9
  _DWORD *v63; // rcx
  _OWORD *v64; // rcx
  unsigned int i; // r14d
  HANDLE v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  char v70; // [rsp+41h] [rbp-1C7h]
  char v71; // [rsp+42h] [rbp-1C6h]
  int v72; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v73; // [rsp+50h] [rbp-1B8h]
  char v74; // [rsp+58h] [rbp-1B0h]
  DWORD AccessMask; // [rsp+60h] [rbp-1A8h] BYREF
  int v76; // [rsp+64h] [rbp-1A4h]
  PVOID Object; // [rsp+68h] [rbp-1A0h] BYREF
  HANDLE *v78; // [rsp+70h] [rbp-198h]
  PRKPROCESS PROCESS[2]; // [rsp+78h] [rbp-190h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+88h] [rbp-180h] BYREF
  ULONG64 v81; // [rsp+90h] [rbp-178h]
  char *v82; // [rsp+98h] [rbp-170h]
  HANDLE Handle[2]; // [rsp+A0h] [rbp-168h]
  void *Src[2]; // [rsp+B0h] [rbp-158h]
  __int128 v85; // [rsp+C0h] [rbp-148h]
  HANDLE *v86; // [rsp+D0h] [rbp-138h]
  struct _KPROCESS *v87; // [rsp+D8h] [rbp-130h]
  struct _KAPC_STATE ApcState; // [rsp+E0h] [rbp-128h] BYREF
  _DWORD v89[16]; // [rsp+110h] [rbp-F8h] BYREF
  HANDLE v90[16]; // [rsp+150h] [rbp-B8h] BYREF

  v81 = a4;
  PROCESS[0] = a3;
  v6 = a1;
  v71 = a1;
  v87 = a3;
  v72 = -1;
  v73 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v74 = 1;
    v72 = 2158;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 2158);
  }
  else
  {
    v74 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v72, 2158LL);
  v10 = 0;
  v70 = 0;
  if ( v6 == 1 )
  {
    v8 = MmUserProbeAddress;
    v11 = a4;
    if ( a4 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    *(_OWORD *)Handle = *(_OWORD *)v11;
    *(_OWORD *)Src = *(_OWORD *)(v11 + 16);
    v85 = *(_OWORD *)(v11 + 32);
    v86 = *(HANDLE **)(v11 + 48);
  }
  else
  {
    *(_OWORD *)Handle = *(_OWORD *)a4;
    *(_OWORD *)Src = *(_OWORD *)(a4 + 16);
    v85 = *(_OWORD *)(a4 + 32);
    v86 = *(HANDLE **)(a4 + 48);
  }
  v12 = LODWORD(Handle[1]);
  if ( LODWORD(Handle[1]) > 0x10 )
  {
    v13 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v13 + 24) = v12;
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v13 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_33;
  }
  v16 = Src[0];
  if ( !LODWORD(Handle[1]) )
  {
    if ( Src[0] || Src[1] )
    {
      v17 = WdLogNewEntry5_WdWarning(v8, v7, v9);
      *(_QWORD *)(v17 + 24) = v16;
      *(void **)(v17 + 32) = Src[1];
      LODWORD(v14) = -1073741811;
      *(_QWORD *)(v17 + 40) = -1073741811LL;
LABEL_32:
      WdLogEvent5_WdWarning(v17);
LABEL_33:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72, v15);
      if ( v74 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v72);
      }
      return (unsigned int)v14;
    }
    v10 = 1;
    v70 = 1;
  }
  memset(v89, 0, sizeof(v89));
  if ( !v10 && Src[0] )
  {
    if ( v71 == 1 )
    {
      v18 = (char *)Src[0] + 4 * LODWORD(Handle[1]);
      if ( v18 < Src[0] || (unsigned __int64)v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v89, v16, 4 * v12);
    }
    else
    {
      memmove(v89, Src[0], 4LL * LODWORD(Handle[1]));
    }
  }
  memset(v90, 0, sizeof(v90));
  HandleInformation = 0LL;
  Object = 0LL;
  v19 = a2;
  v20 = Handle[0];
  v21 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedBundleObjectType, v19, &Object, &HandleInformation);
  v14 = v21;
  if ( v21 == -1073741788 )
  {
    v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v25 + 24) = v20;
    *(_QWORD *)(v25 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v25);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72, v26);
    if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v72);
    return 3221225508LL;
  }
  if ( v21 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v17 + 24) = v20;
    *(_QWORD *)(v17 + 32) = v14;
    goto LABEL_32;
  }
  v32 = (__int128 *)Object;
  if ( !*((_BYTE *)Object + 243) )
  {
    v33 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v33 + 24) = v20;
    WdLogEvent5_WdWarning(v33);
    ObfDereferenceObject(v32);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72, v34);
    if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v72);
    LODWORD(v14) = -1073741811;
    return (unsigned int)v14;
  }
  v82 = (char *)Object + 232;
  ExAcquirePushLockExclusiveEx((char *)Object + 232, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  v40 = *((unsigned int *)v32 + 6);
  LOBYTE(v41) = v70;
  if ( v70 )
  {
    LODWORD(v12) = *((_DWORD *)v32 + 6);
    LODWORD(Handle[1]) = v12;
  }
  else if ( (_DWORD)v12 != (_DWORD)v40 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v37, v38);
    v42[3] = v12;
    v42[4] = *((unsigned int *)v32 + 6);
    v42[5] = v20;
    LODWORD(v14) = -1073741811;
    v42[6] = -1073741811LL;
    goto LABEL_50;
  }
  if ( !v70 )
  {
    if ( *((_BYTE *)v32 + 241) && !*((_BYTE *)v32 + 240) )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v37, v38);
      v42[3] = v20;
      LODWORD(v14) = -1073741811;
      v42[4] = -1073741811LL;
LABEL_50:
      WdLogEvent5_WdWarning(v42);
      v43 = 0;
      goto LABEL_91;
    }
    if ( !v16 )
      memmove(v89, v32 + 10, 4 * v40);
    v44 = PROCESS[0];
    if ( !PROCESS[0] || v44 == (struct _KPROCESS *)PsGetCurrentProcess(v41, v37, v38, v39) )
    {
      v43 = 0;
    }
    else
    {
      KeStackAttachProcess(v44, &ApcState);
      v43 = 1;
    }
    v45 = 0LL;
    v76 = 0;
    if ( *((_DWORD *)v32 + 6) )
    {
      while ( 1 )
      {
        v46 = (unsigned int)v45;
        v47 = v89[(unsigned int)v45];
        AccessMask = v47;
        v48 = *((_DWORD *)v32 + 5);
        if ( _bittest(&v48, v45) )
        {
          if ( (v47 & 0xF0000000) != 0 )
          {
            ObjectType = ObGetObjectType(*((_QWORD *)v32 + (unsigned int)v45 + 4));
            RtlMapGenericMask(&AccessMask, (PGENERIC_MAPPING)(ObjectType + 76));
            v47 = AccessMask;
          }
          v47 &= HandleInformation.GrantedAccess;
          AccessMask = v47;
        }
        v78 = &v90[v46];
        v50 = (void *)*((_QWORD *)v32 + v46 + 4);
        if ( *((_BYTE *)v32 + 242) )
        {
          inserted = ObOpenObjectByPointer(v50, 0, 0LL, v47, 0LL, 0, &v90[v46]);
        }
        else
        {
          ObfReferenceObject(v50);
          inserted = ObInsertObject(*((PVOID *)v32 + v46 + 4), 0LL, AccessMask, 0, 0LL, &v90[v46]);
        }
        LODWORD(v14) = inserted;
        if ( inserted < 0 )
          break;
        if ( ObIsKernelHandle(*v78) )
        {
          v56 = WdLogNewEntry5_WdAssertion(v55, v37);
          *(_QWORD *)(v56 + 24) = 2487LL;
          WdLogEvent5_WdAssertion(v56);
        }
        v45 = (unsigned int)(v76 + 1);
        v76 = v45;
        if ( (unsigned int)v45 >= *((_DWORD *)v32 + 6) )
          goto LABEL_72;
      }
      v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54);
      v57[3] = *((_QWORD *)v32 + v46 + 4);
      v57[4] = *((unsigned __int8 *)v32 + 242);
      v57[5] = (int)v14;
      WdLogEvent5_WdWarning(v57);
    }
LABEL_72:
    if ( v43 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)v14 < 0 )
    {
      v58 = WdLogNewEntry5_WdWarning(v45, v37, v38);
      *(_QWORD *)(v58 + 24) = (int)v14;
      WdLogEvent5_WdWarning(v58);
LABEL_91:
      if ( v90[0] )
      {
        if ( v43 )
          KeStackAttachProcess(PROCESS[0], &ApcState);
        for ( i = 0; i < *((_DWORD *)v32 + 6); v90[i++] = 0LL )
        {
          v66 = v90[i];
          if ( !v66 )
            break;
          ObCloseHandle(v66, 1);
        }
        if ( v43 )
          KeUnstackDetachProcess(&ApcState);
      }
      ExReleasePushLockExclusiveEx(v82, 0LL);
      ObfDereferenceObject(v32);
      goto LABEL_33;
    }
    *(_WORD *)((char *)v32 + 241) = 257;
    LOBYTE(v41) = 0;
  }
  v59 = *v32;
  *(_OWORD *)PROCESS = v59;
  v85 = v59;
  v60 = (HANDLE *)*((_QWORD *)v32 + 2);
  v78 = v60;
  v86 = v60;
  if ( v71 == 1 )
  {
    if ( (_BYTE)v41 )
    {
      v62 = v81;
      v63 = (_DWORD *)(v81 + 8);
      if ( v81 + 12 > MmUserProbeAddress || v81 + 12 <= (unsigned __int64)v63 )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v63 = v12;
    }
    else
    {
      v61 = 8LL * (unsigned int)v12;
      if ( (char *)Src[1] + v61 > (void *)MmUserProbeAddress || (char *)Src[1] + v61 <= Src[1] )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Src[1], v90, v61);
      v59 = *(_OWORD *)PROCESS;
      v60 = v78;
      v62 = v81;
    }
    v64 = (_OWORD *)(v62 + 32);
    if ( v62 + 56 > MmUserProbeAddress || v62 + 56 <= (unsigned __int64)v64 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *v64 = v59;
    *(_QWORD *)(v62 + 48) = v60;
  }
  else if ( !(_BYTE)v41 )
  {
    memmove(Src[1], v90, 8LL * (unsigned int)v12);
  }
  ExReleasePushLockExclusiveEx(v82, 0LL);
  ObfDereferenceObject(v32);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v72, v67);
  if ( v74 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v68, &EventProfilerExit, v69, v72);
  return 0LL;
}
