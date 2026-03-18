/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0021F80
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0021CE0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x1C0065C58 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0087334 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qpqxxq_EtwWriteTransfer @ 0x1C013D48C (McTemplateK0qpqxxq_EtwWriteTransfer.c)
 *     ?BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z @ 0x1C020D0D0 (-BoostCompositorClock@CSystemChannel@DirectComposition@@QEAAJ_N@Z.c)
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C020D3B8 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // r12
  PSLIST_ENTRY v15; // rcx
  struct _SLIST_ENTRY *Next; // r8
  PSLIST_ENTRY v17; // rdx
  PSLIST_ENTRY *v18; // r13
  _QWORD *v19; // rcx
  PSLIST_ENTRY v20; // rbx
  PSLIST_ENTRY *v21; // r14
  __int64 v22; // rbp
  char *v23; // rcx
  PSLIST_ENTRY v25; // rdi
  struct _SLIST_ENTRY *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // rdx
  struct _SLIST_ENTRY *v30; // rax
  __int64 v31; // rdi
  struct _SLIST_ENTRY *v32; // rax
  char v33; // di
  __int64 v34; // rax
  _QWORD *p_Next; // r9
  PSLIST_ENTRY *v36; // rax
  struct _SLIST_ENTRY *v37; // rax
  void *v38; // rcx
  DirectComposition::CEvent *v39; // rcx
  struct _SLIST_ENTRY *v40; // rdi
  struct _ERESOURCE *v41; // rbx
  int v42; // eax
  __int64 v43; // rdi
  DirectComposition::CConnection **v44; // r14
  struct _ERESOURCE *v45; // rbx
  struct _ERESOURCE *v46; // rbx
  struct _ERESOURCE *v47; // rbx
  struct _ERESOURCE *v48; // rbx
  bool v49; // zf
  char v50; // cl
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-58h] BYREF
  int v52; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v53; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 *v54; // [rsp+C0h] [rbp+18h]
  struct _SLIST_ENTRY *v55; // [rsp+C8h] [rbp+20h] BYREF

  v54 = a3;
  *a3 = 0LL;
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v5, 1u);
  if ( !*((_DWORD *)a2 + 12) || *((_DWORD *)this + 84) )
  {
    *((_OWORD *)this + 20) = *((_OWORD *)a2 + 2);
    *((_DWORD *)this + 84) = *((_DWORD *)a2 + 12);
  }
  else
  {
    *((_OWORD *)this + 20) = *((_OWORD *)a2 + 2);
    *((_DWORD *)this + 84) = *((_DWORD *)a2 + 12);
    ExAcquirePushLockSharedEx((char *)this + 224, 0LL);
    *((_BYTE *)this + 232) = 0;
    if ( !*((_BYTE *)this + 248) && *((_DWORD *)this + 61) )
    {
      v41 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v41, 1u);
      v42 = DirectComposition::CSystemChannel::BoostCompositorClock(
              *((DirectComposition::CSystemChannel **)this + 19),
              1);
      v43 = *((_QWORD *)this + 19);
      *((_BYTE *)this + 248) = v42 >= 0;
      ExReleaseResourceLite(*(PERESOURCE *)(v43 + 32));
      KeLeaveCriticalRegion();
      v44 = (DirectComposition::CConnection **)(v43 + 40);
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 24), 2, 1) == 1 )
        {
          v45 = *(struct _ERESOURCE **)(v43 + 32);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v45, 1u);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 48LL))(v43, 0LL);
          v46 = (struct _ERESOURCE *)*((_QWORD *)*v44 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v46, 1u);
          if ( DirectComposition::CConnection::IsConnected(*v44) )
            *(_DWORD *)(v43 + 24) = 4;
          ExReleaseResourceLite(*(PERESOURCE *)(v43 + 32));
          KeLeaveCriticalRegion();
          ExReleaseResourceLite(*((PERESOURCE *)*v44 + 1));
          KeLeaveCriticalRegion();
        }
        else
        {
          v44 = (DirectComposition::CConnection **)(v43 + 40);
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 24), 5, 4) == 4 )
        {
          v47 = *(struct _ERESOURCE **)(v43 + 32);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v47, 1u);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 56LL))(v43);
          v48 = (struct _ERESOURCE *)*((_QWORD *)*v44 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v48, 1u);
          if ( !DirectComposition::CConnection::IsConnected(*v44) )
            *(_DWORD *)(v43 + 24) = 1;
          ExReleaseResourceLite(*(PERESOURCE *)(v43 + 32));
          KeLeaveCriticalRegion();
          ExReleaseResourceLite(*((PERESOURCE *)*v44 + 1));
          KeLeaveCriticalRegion();
        }
        else
        {
          v44 = (DirectComposition::CConnection **)(v43 + 40);
        }
      }
      while ( *(_DWORD *)(v43 + 24) == 1 );
    }
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 224));
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
  if ( !DirectComposition::CConnection::s_pDwmRenderThread
    && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  }
  if ( !*((_DWORD *)this + 37) )
  {
    v12 = -1073741300;
    goto LABEL_18;
  }
  v10 = (_QWORD *)((char *)this + 184);
  if ( *((_QWORD *)this + 23)
    || (v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 33) + 168LL))(
                *((_QWORD *)this + 33),
                (char *)this + 184),
        v12 >= 0) )
  {
    v11 = *((_QWORD *)this + 33);
    v53 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, const struct COMPOSITION_FRAME_INFO *, __int64 *))(*(_QWORD *)v11 + 176LL))(
            v11,
            a2,
            &v53);
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 16LL))(*((_QWORD *)this + 33));
      v13 = v53;
      *((_QWORD *)this + 20) = *(_QWORD *)a2;
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 72LL))(v13);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
      {
        v12 = -1073740024;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 32LL))(v53);
        goto LABEL_17;
      }
      v15 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
      v17 = 0LL;
      if ( v15 )
      {
        do
        {
          v34 = *((_QWORD *)&v15[1].Next + 1);
          Next = v15->Next;
          if ( v34 )
          {
            p_Next = *(_QWORD **)(v34 + 24);
            *(_QWORD *)(v34 + 24) = 0LL;
            v15->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v15[1].Next + 1);
            *((_QWORD *)&v15[1].Next + 1) = 0LL;
          }
          else
          {
            p_Next = &v15->Next;
          }
          *p_Next = v17;
          v17 = v15;
          v15 = Next;
        }
        while ( Next );
      }
      v18 = (PSLIST_ENTRY *)((char *)this + 136);
      v55 = v17;
      v19 = (_QWORD *)*((_QWORD *)this + 17);
      if ( v19 )
      {
        do
        {
          *(_BYTE *)(v19[1] + 49LL) = 0;
          v36 = (PSLIST_ENTRY *)v19;
          v19 = (_QWORD *)*v19;
        }
        while ( v19 );
        v20 = *v18;
        *v18 = 0LL;
        *v36 = v17;
        v17 = v20;
        v55 = v20;
      }
      else
      {
        v20 = v17;
      }
      v21 = &v55;
      if ( !v20 )
        goto LABEL_12;
      v25 = v20;
      do
      {
        v26 = v25[6].Next;
        if ( v26 )
        {
          if ( BYTE1(v26[2].Next) )
          {
            v49 = ((__int64)v25[2].Next & 0x20) == 0;
            v52 = 0;
            if ( !v49
              && (!DirectComposition::CBatch::ShouldDefer(
                     (DirectComposition::CBatch *)v25,
                     *((_QWORD *)this + 20),
                     0,
                     0LL,
                     (enum DirectComposition::CBatch::DeferReason *)&v52)
               || v52 == 6) )
            {
              _InterlockedDecrement((volatile signed __int32 *)&v26[2].Next + 1);
              LOBYTE(v25[2].Next) &= ~0x20u;
            }
          }
        }
        v25 = v25->Next;
      }
      while ( v25 );
      while ( 1 )
      {
        v27 = *((_QWORD *)&v20->Next + 1);
        *((_QWORD *)&v20[3].Next + 1) = v14;
        v28 = *((_QWORD *)this + 10);
        v29 = *((_QWORD *)this + 20);
        if ( *(_BYTE *)(v27 + 49) )
        {
          v33 = 1;
          goto LABEL_46;
        }
        if ( *(_BYTE *)(*((_QWORD *)&v20->Next + 1) + 242LL) )
          break;
        v30 = v20[4].Next;
        if ( v30 && v29 && (__int64)v30 - v29 > 0 )
        {
          v33 = 3;
          if ( v28 )
            goto LABEL_35;
          goto LABEL_46;
        }
        if ( *((_QWORD *)&v20[2].Next + 1) && SLODWORD(v20[3].Next) > 0 )
        {
          v33 = 4;
          goto LABEL_46;
        }
        v31 = *((_QWORD *)&v20[6].Next + 1);
        if ( v31 )
        {
          while ( 1 )
          {
            v38 = *(void **)(v31 + 8);
            Timeout.QuadPart = 0LL;
            if ( KeWaitForSingleObject(v38, UserRequest, 0, 0, &Timeout) )
              break;
            v39 = (DirectComposition::CEvent *)*((_QWORD *)&v20[6].Next + 1);
            v31 = *(_QWORD *)v39;
            if ( v39 )
              DirectComposition::CEvent::`scalar deleting destructor'(v39, v29);
            *((_QWORD *)&v20[6].Next + 1) = v31;
            if ( !v31 )
              goto LABEL_27;
          }
          v33 = 5;
          if ( !v28 )
            goto LABEL_46;
          goto LABEL_35;
        }
LABEL_27:
        v32 = v20[6].Next;
        if ( v32 )
        {
          v50 = BYTE1(v32[2].Next);
          if ( !v50 || SHIDWORD(v32[2].Next) > 0 )
          {
            v33 = 6;
            if ( !v28 || v50 )
              goto LABEL_46;
            goto LABEL_35;
          }
        }
        if ( ((__int64)v20[2].Next & 8) != 0 )
        {
          *(_BYTE *)(*((_QWORD *)&v20->Next + 1) + 242LL) = 1;
          if ( ((__int64)v20[2].Next & 0x10) != 0 )
          {
            v40 = v20->Next;
            v20->Next = 0LL;
            if ( v40 )
            {
              *v18 = v40;
              do
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  McTemplateK0qpqxxq_EtwWriteTransfer(
                    *((_QWORD *)&v40->Next + 1),
                    v29,
                    (_DWORD)Next,
                    *(_DWORD *)(*((_QWORD *)&v40->Next + 1) + 28LL),
                    (char)v40,
                    (char)v40[1].Next,
                    (char)v40[4].Next,
                    *((_QWORD *)this + 20),
                    7);
                *((_QWORD *)&v40[3].Next + 1) = 0LL;
                v40 = v40->Next;
              }
              while ( v40 );
              KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 8LL), 1, 0);
            }
LABEL_31:
            v17 = v55;
            v10 = (_QWORD *)((char *)this + 184);
LABEL_12:
            v12 = 0;
            *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
            *((_QWORD *)this + 22) = *((_QWORD *)a2 + 3);
            if ( v17 )
              (*(void (__fastcall **)(__int64, struct _SLIST_ENTRY **))(*(_QWORD *)v53 + 56LL))(v53, &v17[7].Next + 1);
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 33) + 72LL))(*((_QWORD *)this + 33), v53);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v10 + 16LL))(*v10, v53);
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33));
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v53 + 72LL))(v53);
            ExAcquirePushLockExclusiveEx((char *)this + 344, 0LL);
            *((_BYTE *)this + 352) = 1;
            v23 = (char *)this + 344;
            *((_QWORD *)this + 46) = v22;
            if ( *((_BYTE *)this + 352) )
              ExReleasePushLockExclusiveEx(v23, 0LL);
            else
              ExReleasePushLockSharedEx(v23, 0LL);
            *v54 = v22;
LABEL_17:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 8LL))(v53);
            goto LABEL_18;
          }
        }
        v21 = &v20->Next;
LABEL_30:
        v20 = *v21;
        if ( !*v21 )
          goto LABEL_31;
      }
      v33 = 2;
      if ( !v28 )
        goto LABEL_46;
LABEL_35:
      KeSetEvent(*(PRKEVENT *)(v28 + 8), 1, 0);
LABEL_46:
      *(_BYTE *)(*((_QWORD *)&v20->Next + 1) + 49LL) = 1;
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0qpqxxq_EtwWriteTransfer(
          *((_QWORD *)&v20->Next + 1),
          v29,
          (_DWORD)Next,
          *(_DWORD *)(*((_QWORD *)&v20->Next + 1) + 28LL),
          (char)v20,
          (char)v20[1].Next,
          (char)v20[4].Next,
          *((_QWORD *)this + 20),
          v33);
      v37 = v20->Next;
      *((_QWORD *)&v20[3].Next + 1) = 0LL;
      *v21 = v37;
      *v18 = v20;
      v18 = &v20->Next;
      v20->Next = 0LL;
      goto LABEL_30;
    }
  }
LABEL_18:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v12;
}
