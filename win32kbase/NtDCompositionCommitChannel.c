/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C005FC90
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1C00600B0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatc.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C00615C0 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0064C54 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0249BB4 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     ?ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@AEAAJPEAXI@Z @ 0x1C024B604 (-ValidateAndTranslateCommandBlock@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(
        unsigned __int64 a1,
        ULONG64 a2,
        ULONG64 a3,
        char a4,
        void *a5,
        unsigned __int64 a6,
        char *Src,
        unsigned int a8)
{
  int v8; // esi
  __int64 v9; // r14
  _QWORD *v10; // rdx
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r12
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v15; // rdi
  struct _RTL_GENERIC_TABLE *v16; // rcx
  _QWORD *v17; // rax
  struct _ERESOURCE *v18; // rdi
  _QWORD *v19; // rdx
  unsigned int *v20; // r9
  struct DirectComposition::SynchronizationObject *v21; // r15
  unsigned int v22; // edi
  _QWORD *v23; // rcx
  int v24; // eax
  bool v25; // r12
  char v26; // r8
  _DWORD *v27; // rcx
  _BYTE *v28; // r8
  __int64 CurrentProcess; // rax
  int v31; // edx
  unsigned __int64 v32; // r15
  __int128 *v33; // r8
  ULONG64 v34; // r8
  _QWORD *v35; // rax
  _QWORD *v36; // r12
  __int64 v37; // rax
  ULONG64 v38; // rcx
  size_t v39; // rdi
  unsigned int *Quota; // r9
  _QWORD *v41; // rsi
  _QWORD *v42; // rbx
  char v43; // [rsp+40h] [rbp-138h]
  bool v44; // [rsp+41h] [rbp-137h]
  _QWORD *v45; // [rsp+48h] [rbp-130h]
  unsigned int *v46; // [rsp+50h] [rbp-128h]
  void *v47; // [rsp+58h] [rbp-120h] BYREF
  _QWORD *v48; // [rsp+60h] [rbp-118h]
  struct DirectComposition::SynchronizationObject *v49; // [rsp+68h] [rbp-110h] BYREF
  int v50; // [rsp+70h] [rbp-108h]
  __int64 v51; // [rsp+78h] [rbp-100h]
  void **v52; // [rsp+80h] [rbp-F8h]
  struct DirectComposition::CBatch *v53; // [rsp+88h] [rbp-F0h] BYREF
  struct DirectComposition::CBatch *v54; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v55; // [rsp+98h] [rbp-E0h]
  size_t Size; // [rsp+A8h] [rbp-D0h]
  __int128 v57; // [rsp+B0h] [rbp-C8h]
  int Buffer; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+C4h] [rbp-B4h]
  int v60; // [rsp+CCh] [rbp-ACh]
  __int64 v61; // [rsp+D0h] [rbp-A8h] BYREF
  _QWORD *v62; // [rsp+D8h] [rbp-A0h]
  _QWORD *v63; // [rsp+E0h] [rbp-98h]
  int v64; // [rsp+E8h] [rbp-90h]
  _QWORD *v65; // [rsp+F0h] [rbp-88h]
  int v66; // [rsp+F8h] [rbp-80h]
  __int64 v67; // [rsp+100h] [rbp-78h]
  int v68; // [rsp+108h] [rbp-70h]
  __int128 v69; // [rsp+110h] [rbp-68h]
  NSInstrumentation::CLeakTrackingAllocator *v70; // [rsp+120h] [rbp-58h]
  __int128 v71; // [rsp+130h] [rbp-48h]
  int v72; // [rsp+180h] [rbp+8h]

  v72 = a1;
  v8 = 0;
  v9 = 0LL;
  v50 = 0;
  v44 = 0;
  v10 = 0LL;
  v45 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  if ( a3 )
  {
    if ( a6 || Src || a8 )
    {
      CurrentProcess = PsGetCurrentProcess(a1, 0LL, a3, 0LL);
      a1 = CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
      v31 = -1073741811;
      if ( CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
        v31 = 0;
      v48 = 0LL;
      v52 = &v47;
      v32 = 0LL;
      v51 = 0LL;
      v8 = v31;
      if ( CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels && a6 )
      {
        v33 = (__int128 *)a6;
        a1 = a6 + 16;
        if ( a6 + 16 < a6 || a1 > MmUserProbeAddress )
          v33 = (__int128 *)MmUserProbeAddress;
        v71 = *v33;
        v57 = v71;
        v32 = v71;
        v51 = v71;
        v8 = v31;
        v10 = 0LL;
      }
      else
      {
        v10 = 0LL;
      }
      while ( v8 >= 0 )
      {
        if ( v32 == a6 )
        {
          if ( Src && a8 )
          {
            v39 = 4LL * a8;
            if ( v39 < a8 )
            {
              v8 = -1073741811;
              goto LABEL_52;
            }
            Quota = (unsigned int *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                      (NSInstrumentation::CLeakTrackingAllocator *)a1,
                                      0x104uLL,
                                      4LL * a8,
                                      0x66624344u);
            v46 = Quota;
            if ( !Quota )
            {
              v8 = -1073741801;
              goto LABEL_89;
            }
            if ( &Src[v39] < Src || (unsigned __int64)&Src[v39] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(Quota, Src, v39);
          }
          break;
        }
        v55 = 0LL;
        Size = 0LL;
        v34 = v32;
        if ( v32 + 24 < v32 || v32 + 24 > MmUserProbeAddress )
          v34 = MmUserProbeAddress;
        v69 = *(_OWORD *)v34;
        v70 = *(NSInstrumentation::CLeakTrackingAllocator **)(v34 + 16);
        v55 = v69;
        Size = (size_t)v70;
        a1 = (unsigned __int64)v70;
        if ( (BYTE4(v70) & 3) != 0 || HIDWORD(v70) < 8 )
          v8 = -1073741811;
        if ( v8 >= 0 )
        {
          v35 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(v70, 0x104uLL, HIDWORD(Size) + 24, 0x66624344u);
          v36 = v35;
          v48 = v35;
          v10 = v45;
          if ( v35 )
          {
            *v52 = v35;
            v52 = (void **)v35;
            *v35 = 0LL;
            v35[1] = 0LL;
            *((_DWORD *)v35 + 4) = 0;
            v37 = HIDWORD(Size);
            *((_DWORD *)v36 + 5) = HIDWORD(Size);
            v38 = v32 + 24 + v37;
            if ( v38 < v32 + 24 || v38 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v36 + 3, (const void *)(v32 + 24), (unsigned int)v37);
            v10 = v47;
            v45 = v47;
          }
          else
          {
            v8 = -1073741801;
          }
        }
        v32 = v55;
        v51 = v55;
      }
    }
    if ( v8 < 0 )
      goto LABEL_89;
    v11 = 0LL;
    v8 = 0;
    v12 = 0LL;
    v13 = 0LL;
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
    {
      if ( !*CurrentProcessWin32Process )
        CurrentProcessWin32Process = 0LL;
      if ( CurrentProcessWin32Process )
        v13 = CurrentProcessWin32Process[32];
    }
    if ( v13 )
    {
      v15 = *(struct _ERESOURCE **)(v13 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v15, 1u);
      v16 = *(struct _RTL_GENERIC_TABLE **)v13;
      Buffer = v72;
      v59 = 0LL;
      v60 = 0;
      v17 = RtlLookupElementGenericTable(v16, &Buffer);
      if ( v17 )
        v12 = v17[1];
      if ( v12 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        v45 = v47;
      }
      else
      {
        v8 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v13 + 8));
      KeLeaveCriticalRegion();
    }
    else
    {
      v8 = -1073741823;
    }
    if ( v12 )
    {
      v18 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v18, 1u);
      v11 = v12;
    }
    if ( v8 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) == 1 )
      {
        v9 = v11;
      }
      else
      {
        v8 = -1073741811;
        (**(void (__fastcall ***)(__int64))v11)(v11);
      }
    }
    v19 = v45;
    v20 = v46;
    if ( v8 < 0 )
      goto LABEL_89;
    v21 = 0LL;
    v49 = 0LL;
    if ( a5 )
    {
      DirectComposition::SynchronizationObject::ResolveHandle(a5, 1u, 1, &v49);
      v21 = v49;
      v19 = v45;
      v20 = v46;
    }
    v43 = 0;
    v22 = *(_DWORD *)(v9 + 384) + 1;
    *(_DWORD *)(v9 + 384) = v22;
    v61 = v9;
    v23 = v19;
    v62 = v19;
    v63 = 0LL;
    v64 = 0;
    v65 = 0LL;
    v66 = 0;
    v67 = 0LL;
    v68 = 0;
    v24 = 0;
    if ( v19 || v20 )
    {
      if ( (*(_BYTE *)(v9 + 241) & 0x20) != 0 )
      {
        v41 = v19;
        do
        {
          if ( !v41 )
            break;
          v24 = DirectComposition::CApplicationChannel::CMilCommandBatchParser::ValidateAndTranslateCommandBlock(
                  (DirectComposition::CApplicationChannel::CMilCommandBatchParser *)&v61,
                  v41 + 3,
                  *((_DWORD *)v41 + 5));
          v41 = (_QWORD *)*v41;
        }
        while ( v24 >= 0 );
        v23 = v62;
      }
      else
      {
        v24 = -1073741790;
      }
    }
    v8 = 0;
    if ( v24 < 0 )
      v8 = v24;
    LODWORD(v48) = v8;
    if ( v8 >= 0 )
    {
      if ( (a4 & 2) != 0 )
        *(_BYTE *)(v9 + 240) |= 0x30u;
      if ( v23 )
      {
        v63 = v23;
        v64 = *((_DWORD *)v23 + 5);
        v65 = v23 + 3;
        v66 = *((_DWORD *)v23 + 6);
      }
      do
      {
        v53 = 0LL;
        v54 = 0LL;
        v25 = DirectComposition::CApplicationChannel::BuildBatch(
                (DirectComposition::CApplicationChannel *)v9,
                &v53,
                &v54,
                v22,
                a4 & 1,
                (struct DirectComposition::CApplicationChannel::CMilCommandBatchParser *)&v61,
                v46,
                a8);
        if ( v53 )
        {
          DirectComposition::CApplicationChannel::SubmitBatch(
            (DirectComposition::CApplicationChannel *)v9,
            v53,
            v54,
            *(_BYTE *)(v9 + 48) & 1,
            v21);
          v26 = 1;
          v43 = 1;
        }
        else
        {
          v26 = v43;
        }
      }
      while ( !v25 );
      v8 = (int)v48;
      if ( (int)v48 >= 0 )
      {
        if ( !v26 )
        {
          *(_QWORD *)&v57 = v22;
          *((_QWORD *)&v57 + 1) = *(_QWORD *)(v9 + 376);
          *(_OWORD *)(v9 + 16LL * (v22 & 0x7F) + 536) = v57;
        }
        v44 = *(_DWORD *)(v9 + 524) != 0;
        if ( v8 >= 0 )
          v50 = *(_DWORD *)(v9 + 384);
      }
    }
    if ( v21 )
      ObfDereferenceObject(v21);
    (**(void (__fastcall ***)(__int64))v9)(v9);
    if ( v8 < 0 )
    {
LABEL_89:
      v10 = v45;
    }
    else
    {
      v27 = (_DWORD *)a2;
      if ( a2 )
      {
        if ( a2 >= MmUserProbeAddress )
          v27 = (_DWORD *)MmUserProbeAddress;
        *v27 = v50;
      }
      v28 = (_BYTE *)a3;
      if ( a3 >= MmUserProbeAddress )
        v28 = (_BYTE *)MmUserProbeAddress;
      *v28 = v44;
      v10 = v45;
    }
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_52:
  while ( v10 )
  {
    v42 = (_QWORD *)*v10;
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v10);
    v10 = v42;
  }
  if ( v46 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v46);
  return (unsigned int)v8;
}
