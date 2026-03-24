/*
 * XREFs of DxgkCreateBundleObjectInternal @ 0x1C0278054
 * Callers:
 *     DxgkCreateBundleObject @ 0x1C0277FF0 (DxgkCreateBundleObject.c)
 *     ?CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z @ 0x1C028AAA0 (-CreateBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJKPEAIPEAPEAX0@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C012A790 (-CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012AE78 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C01686E4 (-CreateSharedSyncNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C02773BC (-CreateSharedKeyedMutexNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z.c)
 *     ?CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1C027762C (-CreateSharedProtectedSessionNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAP.c)
 */

__int64 __fastcall DxgkCreateBundleObjectInternal(
        __int64 a1,
        KPROCESSOR_MODE a2,
        __int64 a3,
        __int64 a4,
        ULONG64 a5,
        __int64 a6)
{
  unsigned __int8 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  struct _KTHREAD **Current; // r14
  _QWORD *v14; // rax
  __int64 v15; // rdi
  _OWORD *v16; // rax
  __int64 v17; // rsi
  size_t v18; // r8
  const void *v19; // rdx
  size_t v20; // r8
  const void *v21; // rdx
  const void *v22; // rdi
  size_t v23; // r8
  ACCESS_MASK *v24; // r8
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // r12d
  __int64 v30; // rdx
  unsigned int EntryType; // edi
  unsigned int v32; // r14d
  __int64 v33; // rdx
  unsigned int v34; // edi
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r9
  _QWORD *v42; // rax
  KPROCESSOR_MODE v43; // r14
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  _DWORD *v51; // rsi
  char *v52; // r14
  int v53; // r14d
  NTSTATUS inserted; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  BOOLEAN IsKernelHandle; // al
  __int64 v59; // rax
  _QWORD *v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  _QWORD *v63; // rax
  unsigned int v64; // esi
  unsigned int i; // eax
  PVOID v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v70; // rcx
  __int64 v71; // r8
  PHANDLE Handle; // [rsp+28h] [rbp-2D0h]
  PVOID Object; // [rsp+60h] [rbp-298h] BYREF
  int v75; // [rsp+68h] [rbp-290h] BYREF
  __int64 v76; // [rsp+70h] [rbp-288h]
  char v77; // [rsp+78h] [rbp-280h]
  struct _KTHREAD **v78; // [rsp+80h] [rbp-278h]
  void *Src[2]; // [rsp+90h] [rbp-268h]
  void *v80[2]; // [rsp+A0h] [rbp-258h]
  _BYTE DesiredAccess[48]; // [rsp+B0h] [rbp-248h] BYREF
  HANDLE v82; // [rsp+E0h] [rbp-218h] BYREF
  __int64 v83; // [rsp+E8h] [rbp-210h]
  _BYTE v84[24]; // [rsp+F0h] [rbp-208h] BYREF
  __int128 v85; // [rsp+108h] [rbp-1F0h]
  __int128 v86; // [rsp+118h] [rbp-1E0h]
  __int128 v87; // [rsp+128h] [rbp-1D0h]
  ACCESS_MASK v88[16]; // [rsp+140h] [rbp-1B8h] BYREF
  PVOID v89[16]; // [rsp+180h] [rbp-178h] BYREF
  _DWORD v90[16]; // [rsp+200h] [rbp-F8h] BYREF
  _QWORD v91[16]; // [rsp+240h] [rbp-B8h] BYREF

  v6 = a1;
  v83 = a6;
  v75 = -1;
  v76 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v77 = 1;
    v75 = 2157;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2157);
  }
  else
  {
    v77 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v75, 2157LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7, v9, v10);
  v78 = Current;
  if ( !Current )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    LODWORD(v15) = -1073741811;
    v14[3] = -1073741811LL;
LABEL_112:
    WdLogEvent5_WdError(v14);
    goto LABEL_113;
  }
  if ( v6 == 1 )
  {
    v12 = MmUserProbeAddress;
    v16 = (_OWORD *)a5;
    if ( a5 >= MmUserProbeAddress )
      v16 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)Src = *v16;
    *(_OWORD *)v80 = v16[1];
    *(_OWORD *)DesiredAccess = v16[2];
    *(_OWORD *)&DesiredAccess[16] = v16[3];
    *(_OWORD *)&DesiredAccess[32] = v16[4];
  }
  else
  {
    *(_OWORD *)Src = *(_OWORD *)a5;
    *(_OWORD *)v80 = *(_OWORD *)(a5 + 16);
    *(_OWORD *)DesiredAccess = *(_OWORD *)(a5 + 32);
    *(_OWORD *)&DesiredAccess[16] = *(_OWORD *)(a5 + 48);
    *(_OWORD *)&DesiredAccess[32] = *(_OWORD *)(a5 + 64);
  }
  *(_QWORD *)&DesiredAccess[40] = 0LL;
  v17 = LODWORD(Src[0]);
  if ( (unsigned int)(LODWORD(Src[0]) - 1) > 0xF )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
    v14[3] = LODWORD(Src[0]);
    LODWORD(v15) = -1073741811;
    v14[4] = -1073741811LL;
    goto LABEL_112;
  }
  if ( ((-1 << SLOBYTE(Src[0])) & *(_DWORD *)&DesiredAccess[32]) != 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(LODWORD(Src[0]), v11);
    v14[3] = *(unsigned int *)&DesiredAccess[32];
    v14[4] = LODWORD(Src[0]);
    LODWORD(v15) = -1073741811;
    v14[5] = -1073741811LL;
    goto LABEL_112;
  }
  memset(v90, 0, sizeof(v90));
  memset(v91, 0, sizeof(v91));
  memset(v88, 0, sizeof(v88));
  if ( v6 == 1 )
  {
    v18 = 4LL * LODWORD(Src[0]);
    v19 = Src[1];
    if ( (char *)Src[1] + v18 < Src[1] || (char *)Src[1] + v18 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v90, v19, v18);
    v20 = 8LL * LODWORD(Src[0]);
    v21 = v80[0];
    if ( (char *)v80[0] + v20 < v80[0] || (char *)v80[0] + v20 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v91, v21, v20);
    v22 = v80[1];
    if ( v80[1] )
    {
      v23 = 4LL * LODWORD(Src[0]);
      if ( (char *)v80[1] + v23 < v80[1] || (char *)v80[1] + v23 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v88, v22, v23);
      v22 = v80[1];
    }
    LODWORD(v17) = Src[0];
  }
  else
  {
    memmove(v90, Src[1], 4LL * LODWORD(Src[0]));
    memmove(v91, v80[0], 8 * v17);
    v22 = v80[1];
    if ( v80[1] )
      memmove(v88, v80[1], 4 * v17);
    Current = v78;
  }
  if ( !v22 )
  {
    v24 = v88;
    v25 = (unsigned int)v17;
    if ( (_DWORD)v17 )
    {
      if ( ((unsigned __int8)v88 & 4) != 0 )
      {
        v88[0] = 0x10000000;
        v25 = (unsigned int)v17 - 1LL;
        if ( (unsigned int)v17 == 1LL )
          goto LABEL_38;
        v24 = &v88[1];
      }
      memset64(v24, 0x1000000010000000uLL, v25 >> 1);
      if ( (v25 & 1) != 0 )
        v24[v25 - 1] = 0x10000000;
    }
  }
LABEL_38:
  Object = 0LL;
  memset(v89, 0, sizeof(v89));
  v85 = 0LL;
  v86 = 0LL;
  v87 = 0LL;
  v29 = 0;
  if ( !(_DWORD)v17 )
  {
LABEL_75:
    v43 = a2;
    LOBYTE(v28) = a2;
    LOBYTE(v26) = v6;
    v44 = ObCreateObject(v26, g_pDxgkSharedBundleObjectType, *(_QWORD *)DesiredAccess, v28, 0LL, 248, 0, 0, &Object);
    v15 = v44;
    if ( v44 < 0 )
    {
      v48 = WdLogNewEntry5_WdWarning(v46, v45, v47);
      *(_QWORD *)(v48 + 24) = v78;
      *(_QWORD *)(v48 + 32) = v15;
      WdLogEvent5_WdWarning(v48);
      if ( Object )
      {
        v50 = WdLogNewEntry5_WdAssertion(v49, v38);
        *(_QWORD *)(v50 + 24) = 2016LL;
        WdLogEvent5_WdAssertion(v50);
      }
      goto LABEL_97;
    }
    v51 = Object;
    memset(Object, 0, 0xF8uLL);
    v51[6] = Src[0];
    memmove(v51 + 8, v89, 8LL * LODWORD(Src[0]));
    memmove(v51 + 40, v88, 4LL * LODWORD(Src[0]));
    *(_OWORD *)v51 = *(_OWORD *)&DesiredAccess[12];
    *((_QWORD *)v51 + 2) = *(_QWORD *)&DesiredAccess[28];
    *((_BYTE *)v51 + 224) = a2;
    v52 = (char *)(v51 + 58);
    *((_QWORD *)v51 + 29) = 0LL;
    ExAcquirePushLockExclusiveEx(v51 + 58, 0LL);
    ObfReferenceObject(v51);
    LODWORD(v15) = ObInsertObject(Object, 0LL, *(ACCESS_MASK *)&DesiredAccess[8], 0, 0LL, (PHANDLE)&DesiredAccess[40]);
    if ( (int)v15 >= 0 && v80[1] )
    {
      v53 = 0;
      if ( v51[6] )
      {
        while ( 1 )
        {
          v82 = 0LL;
          ObfReferenceObject(*(PVOID *)&v51[2 * v53 + 8]);
          inserted = ObInsertObject(*(PVOID *)&v51[2 * v53 + 8], 0LL, v88[v53], 0, 0LL, &v82);
          v15 = inserted;
          if ( inserted < 0 )
            break;
          IsKernelHandle = ObIsKernelHandle(v82);
          ObCloseHandle(v82, IsKernelHandle == 0);
          if ( (unsigned int)++v53 >= v51[6] )
            goto LABEL_85;
        }
        v59 = WdLogNewEntry5_WdWarning(v56, v55, v57);
        *(_QWORD *)(v59 + 24) = *(_QWORD *)&v51[2 * v53 + 8];
        *(_QWORD *)(v59 + 32) = v15;
        WdLogEvent5_WdWarning(v59);
      }
LABEL_85:
      v52 = (char *)(v51 + 58);
      if ( (int)v15 < 0 )
        goto LABEL_89;
      *((_BYTE *)v51 + 242) = 1;
      *((_BYTE *)v51 + 240) = 1;
    }
    if ( (int)v15 >= 0 )
      *((_BYTE *)v51 + 243) = 1;
LABEL_89:
    ExReleasePushLockExclusiveEx(v52, 0LL);
    ObfDereferenceObject(v51);
    if ( (int)v15 < 0 )
    {
      if ( !*(_QWORD *)&DesiredAccess[40] )
      {
        v63 = (_QWORD *)WdLogNewEntry5_WdWarning(v61, v60, v62);
        v63[3] = Object;
        v63[4] = v78;
        v63[5] = (int)v15;
        WdLogEvent5_WdWarning(v63);
      }
      Object = 0LL;
      memset(v89, 0, sizeof(v89));
      goto LABEL_74;
    }
    if ( v6 == 1 )
    {
      v60 = (_QWORD *)(a5 + 72);
      if ( a5 + 72 >= MmUserProbeAddress )
        v60 = (_QWORD *)MmUserProbeAddress;
      *v60 = *(_QWORD *)&DesiredAccess[40];
    }
    else
    {
      *(_QWORD *)(a5 + 72) = *(_QWORD *)&DesiredAccess[40];
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75, (__int64)v60);
    if ( v77 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v67, &EventProfilerExit, v68, v75);
    return 0LL;
  }
  while ( 1 )
  {
    v30 = v83;
    if ( v83 && *(_QWORD *)(v83 + 8LL * v29) )
    {
      EntryType = v90[v29];
      v32 = EntryType;
    }
    else
    {
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v84, Current);
      v32 = v90[v29];
      v33 = (v32 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v33 < *((_DWORD *)v78 + 64)
        && (v34 = *((_DWORD *)v78[30] + 4 * (unsigned int)v33 + 2), v90[v29] >> 30 == ((v34 >> 5) & 3))
        && (v34 & 0x2000) == 0
        && (v34 & 0x1F) != 0 )
      {
        EntryType = HMGRTABLE::GetEntryType((__int64)(v78 + 30), v33);
      }
      else
      {
        EntryType = 0;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v84);
      v30 = v83;
    }
    v35 = EntryType - 4;
    if ( EntryType == 4 )
      break;
    v36 = EntryType - 8;
    if ( EntryType != 8 )
    {
      v37 = EntryType - 9;
      if ( EntryType == 9 )
      {
        LODWORD(v37) = v6;
        LODWORD(v15) = CreateSharedKeyedMutexNtObject(v37, v30, v32, v28, v91[v29], (__int64)Handle, &v89[v29]);
        if ( (int)v15 < 0 )
        {
          if ( !v89[v29] )
            goto LABEL_74;
          v39 = WdLogNewEntry5_WdAssertion(v26, v38);
          *(_QWORD *)(v39 + 24) = 1942LL;
          goto LABEL_73;
        }
        goto LABEL_68;
      }
      v36 = EntryType - 11;
      if ( EntryType != 11 )
      {
        if ( EntryType != 14 )
        {
          v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v30, v27);
          v42[3] = v32;
          v42[4] = (int)EntryType;
          LODWORD(v15) = -1073741811;
          v42[5] = -1073741811LL;
          WdLogEvent5_WdWarning(v42);
          goto LABEL_74;
        }
        LOBYTE(v36) = v6;
        LODWORD(v15) = CreateSharedProtectedSessionNtObject(v36, 14LL, v32, v28, v91[v29], 1, &v89[v29]);
        if ( (int)v15 < 0 )
        {
          if ( !v89[v29] )
            goto LABEL_74;
          v39 = WdLogNewEntry5_WdAssertion(v26, v38);
          *(_QWORD *)(v39 + 24) = 1981LL;
          goto LABEL_73;
        }
        goto LABEL_68;
      }
    }
    v40 = 0LL;
    if ( v30 )
      v40 = *(_QWORD *)(v30 + 8LL * v29);
    LOBYTE(v36) = v6;
    LODWORD(v15) = CreateSharedSyncNtObject(v36, EntryType, v32, v40, v91[v29], 1, &v89[v29]);
    if ( (int)v15 < 0 )
    {
      if ( !v89[v29] )
        goto LABEL_74;
      v39 = WdLogNewEntry5_WdAssertion(v26, v38);
      *(_QWORD *)(v39 + 24) = 1962LL;
      goto LABEL_73;
    }
LABEL_68:
    if ( ++v29 >= LODWORD(Src[0]) )
      goto LABEL_75;
    Current = v78;
  }
  v41 = 0LL;
  if ( v30 )
    v41 = *(_QWORD *)(v30 + 8LL * v29);
  LOBYTE(v35) = v6;
  LODWORD(v15) = CreateSharedResourceNtObject(v35, v30, v32, v41, v91[v29], 1, &v89[v29]);
  if ( (int)v15 >= 0 )
    goto LABEL_68;
  if ( !v89[v29] )
    goto LABEL_74;
  v39 = WdLogNewEntry5_WdAssertion(v26, v38);
  *(_QWORD *)(v39 + 24) = 1923LL;
LABEL_73:
  WdLogEvent5_WdAssertion(v39);
LABEL_74:
  v43 = a2;
LABEL_97:
  if ( *(_QWORD *)&DesiredAccess[40] )
  {
    ObCloseHandle(*(HANDLE *)&DesiredAccess[40], v43);
    *(_QWORD *)&DesiredAccess[40] = 0LL;
  }
  else if ( Object )
  {
    ObfDereferenceObject(Object);
    Object = 0LL;
  }
  else
  {
    v64 = 0;
    for ( i = (unsigned int)Src[0]; v64 < i; ++v64 )
    {
      v66 = v89[v64];
      if ( v66 )
      {
        ObfDereferenceObject(v66);
        v89[v64] = 0LL;
        i = (unsigned int)Src[0];
      }
    }
  }
LABEL_113:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v75, v38);
  if ( v77 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v75);
  }
  return (unsigned int)v15;
}
