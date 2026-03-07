__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcess; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // r12
  PSLIST_ENTRY v16; // rcx
  struct _SLIST_ENTRY *Next; // r8
  PSLIST_ENTRY v18; // rdx
  PSLIST_ENTRY *v19; // r13
  _QWORD *v20; // rcx
  PSLIST_ENTRY v21; // rbx
  PSLIST_ENTRY *v22; // r14
  __int64 v23; // rbp
  char *v24; // rcx
  PSLIST_ENTRY v26; // rdi
  struct _SLIST_ENTRY *v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rbp
  __int64 v30; // rdx
  struct _SLIST_ENTRY *v31; // rax
  __int64 v32; // rdi
  struct _SLIST_ENTRY *v33; // rax
  char v34; // di
  __int64 v35; // rax
  _QWORD *p_Next; // r9
  PSLIST_ENTRY *v37; // rax
  struct _SLIST_ENTRY *v38; // rax
  void *v39; // rcx
  DirectComposition::CEvent *v40; // rcx
  struct _SLIST_ENTRY *v41; // rdi
  struct _ERESOURCE *v42; // rbx
  int v43; // eax
  __int64 v44; // rdi
  DirectComposition::CConnection **v45; // r14
  struct _ERESOURCE *v46; // rbx
  struct _ERESOURCE *v47; // rbx
  struct _ERESOURCE *v48; // rbx
  struct _ERESOURCE *v49; // rbx
  bool v50; // zf
  char v51; // cl
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp-58h] BYREF
  int v53; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v54; // [rsp+B8h] [rbp+10h] BYREF
  unsigned __int64 *v55; // [rsp+C0h] [rbp+18h]
  struct _SLIST_ENTRY *v56; // [rsp+C8h] [rbp+20h] BYREF

  v55 = a3;
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
      v42 = *(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v42, 1u);
      v43 = DirectComposition::CSystemChannel::BoostCompositorClock(
              *((DirectComposition::CSystemChannel **)this + 19),
              1);
      v44 = *((_QWORD *)this + 19);
      *((_BYTE *)this + 248) = v43 >= 0;
      ExReleaseResourceLite(*(PERESOURCE *)(v44 + 32));
      KeLeaveCriticalRegion();
      v45 = (DirectComposition::CConnection **)(v44 + 40);
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 24), 2, 1) == 1 )
        {
          v46 = *(struct _ERESOURCE **)(v44 + 32);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v46, 1u);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v44 + 48LL))(v44, 0LL);
          v47 = (struct _ERESOURCE *)*((_QWORD *)*v45 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v47, 1u);
          if ( DirectComposition::CConnection::IsConnected(*v45) )
            *(_DWORD *)(v44 + 24) = 4;
          ExReleaseResourceLite(*(PERESOURCE *)(v44 + 32));
          KeLeaveCriticalRegion();
          ExReleaseResourceLite(*((PERESOURCE *)*v45 + 1));
          KeLeaveCriticalRegion();
        }
        else
        {
          v45 = (DirectComposition::CConnection **)(v44 + 40);
        }
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v44 + 24), 5, 4) == 4 )
        {
          v48 = *(struct _ERESOURCE **)(v44 + 32);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v48, 1u);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 56LL))(v44);
          v49 = (struct _ERESOURCE *)*((_QWORD *)*v45 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v49, 1u);
          if ( !DirectComposition::CConnection::IsConnected(*v45) )
            *(_DWORD *)(v44 + 24) = 1;
          ExReleaseResourceLite(*(PERESOURCE *)(v44 + 32));
          KeLeaveCriticalRegion();
          ExReleaseResourceLite(*((PERESOURCE *)*v45 + 1));
          KeLeaveCriticalRegion();
        }
        else
        {
          v45 = (DirectComposition::CConnection **)(v44 + 40);
        }
      }
      while ( *(_DWORD *)(v44 + 24) == 1 );
    }
    DirectComposition::CPushLockCriticalSection::Release((DirectComposition::CConnection *)((char *)this + 224));
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
  if ( !DirectComposition::CConnection::s_pDwmRenderThread
    && CurrentProcess == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
  {
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  }
  if ( !*((_DWORD *)this + 37) )
  {
    v13 = -1073741300;
    goto LABEL_18;
  }
  v11 = (_QWORD *)((char *)this + 184);
  if ( *((_QWORD *)this + 23)
    || (v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 33) + 168LL))(
                *((_QWORD *)this + 33),
                (char *)this + 184),
        v13 >= 0) )
  {
    v12 = *((_QWORD *)this + 33);
    v54 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, const struct COMPOSITION_FRAME_INFO *, __int64 *))(*(_QWORD *)v12 + 176LL))(
            v12,
            a2,
            &v54);
    if ( v13 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 16LL))(*((_QWORD *)this + 33));
      v14 = v54;
      *((_QWORD *)this + 20) = *(_QWORD *)a2;
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 72LL))(v14);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
      {
        v13 = -1073740024;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33));
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 32LL))(v54);
        goto LABEL_17;
      }
      v16 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
      v18 = 0LL;
      if ( v16 )
      {
        do
        {
          v35 = *((_QWORD *)&v16[1].Next + 1);
          Next = v16->Next;
          if ( v35 )
          {
            p_Next = *(_QWORD **)(v35 + 24);
            *(_QWORD *)(v35 + 24) = 0LL;
            v16->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v16[1].Next + 1);
            *((_QWORD *)&v16[1].Next + 1) = 0LL;
          }
          else
          {
            p_Next = &v16->Next;
          }
          *p_Next = v18;
          v18 = v16;
          v16 = Next;
        }
        while ( Next );
      }
      v19 = (PSLIST_ENTRY *)((char *)this + 136);
      v56 = v18;
      v20 = (_QWORD *)*((_QWORD *)this + 17);
      if ( v20 )
      {
        do
        {
          *(_BYTE *)(v20[1] + 49LL) = 0;
          v37 = (PSLIST_ENTRY *)v20;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
        v21 = *v19;
        *v19 = 0LL;
        *v37 = v18;
        v18 = v21;
        v56 = v21;
      }
      else
      {
        v21 = v18;
      }
      v22 = &v56;
      if ( !v21 )
        goto LABEL_12;
      v26 = v21;
      do
      {
        v27 = v26[6].Next;
        if ( v27 )
        {
          if ( BYTE1(v27[2].Next) )
          {
            v50 = ((__int64)v26[2].Next & 0x20) == 0;
            v53 = 0;
            if ( !v50
              && (!DirectComposition::CBatch::ShouldDefer(
                     (DirectComposition::CBatch *)v26,
                     *((_QWORD *)this + 20),
                     0,
                     0LL,
                     (enum DirectComposition::CBatch::DeferReason *)&v53)
               || v53 == 6) )
            {
              _InterlockedDecrement((volatile signed __int32 *)&v27[2].Next + 1);
              LOBYTE(v26[2].Next) &= ~0x20u;
            }
          }
        }
        v26 = v26->Next;
      }
      while ( v26 );
      while ( 1 )
      {
        v28 = *((_QWORD *)&v21->Next + 1);
        *((_QWORD *)&v21[3].Next + 1) = v15;
        v29 = *((_QWORD *)this + 10);
        v30 = *((_QWORD *)this + 20);
        if ( *(_BYTE *)(v28 + 49) )
        {
          v34 = 1;
          goto LABEL_46;
        }
        if ( *(_BYTE *)(*((_QWORD *)&v21->Next + 1) + 242LL) )
          break;
        v31 = v21[4].Next;
        if ( v31 && v30 && (__int64)v31 - v30 > 0 )
        {
          v34 = 3;
          if ( v29 )
            goto LABEL_35;
          goto LABEL_46;
        }
        if ( *((_QWORD *)&v21[2].Next + 1) && SLODWORD(v21[3].Next) > 0 )
        {
          v34 = 4;
          goto LABEL_46;
        }
        v32 = *((_QWORD *)&v21[6].Next + 1);
        if ( v32 )
        {
          while ( 1 )
          {
            v39 = *(void **)(v32 + 8);
            Timeout.QuadPart = 0LL;
            if ( KeWaitForSingleObject(v39, UserRequest, 0, 0, &Timeout) )
              break;
            v40 = (DirectComposition::CEvent *)*((_QWORD *)&v21[6].Next + 1);
            v32 = *(_QWORD *)v40;
            if ( v40 )
              DirectComposition::CEvent::`scalar deleting destructor'(v40, v30);
            *((_QWORD *)&v21[6].Next + 1) = v32;
            if ( !v32 )
              goto LABEL_27;
          }
          v34 = 5;
          if ( !v29 )
            goto LABEL_46;
          goto LABEL_35;
        }
LABEL_27:
        v33 = v21[6].Next;
        if ( v33 )
        {
          v51 = BYTE1(v33[2].Next);
          if ( !v51 || SHIDWORD(v33[2].Next) > 0 )
          {
            v34 = 6;
            if ( !v29 || v51 )
              goto LABEL_46;
            goto LABEL_35;
          }
        }
        if ( ((__int64)v21[2].Next & 8) != 0 )
        {
          *(_BYTE *)(*((_QWORD *)&v21->Next + 1) + 242LL) = 1;
          if ( ((__int64)v21[2].Next & 0x10) != 0 )
          {
            v41 = v21->Next;
            v21->Next = 0LL;
            if ( v41 )
            {
              *v19 = v41;
              do
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  McTemplateK0qpqxxq_EtwWriteTransfer(
                    *((_QWORD *)&v41->Next + 1),
                    v30,
                    (_DWORD)Next,
                    *(_DWORD *)(*((_QWORD *)&v41->Next + 1) + 28LL),
                    (char)v41,
                    (char)v41[1].Next,
                    (char)v41[4].Next,
                    *((_QWORD *)this + 20),
                    7);
                *((_QWORD *)&v41[3].Next + 1) = 0LL;
                v41 = v41->Next;
              }
              while ( v41 );
              KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 10) + 8LL), 1, 0);
            }
LABEL_31:
            v18 = v56;
            v11 = (_QWORD *)((char *)this + 184);
LABEL_12:
            v13 = 0;
            *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
            *((_QWORD *)this + 22) = *((_QWORD *)a2 + 3);
            if ( v18 )
              (*(void (__fastcall **)(__int64, struct _SLIST_ENTRY **))(*(_QWORD *)v54 + 56LL))(v54, &v18[7].Next + 1);
            (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 33) + 72LL))(*((_QWORD *)this + 33), v54);
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v11 + 16LL))(*v11, v54);
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 24LL))(*((_QWORD *)this + 33));
            v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v54 + 72LL))(v54);
            ExAcquirePushLockExclusiveEx((char *)this + 344, 0LL);
            *((_BYTE *)this + 352) = 1;
            v24 = (char *)this + 344;
            *((_QWORD *)this + 46) = v23;
            if ( *((_BYTE *)this + 352) )
              ExReleasePushLockExclusiveEx(v24, 0LL);
            else
              ExReleasePushLockSharedEx(v24, 0LL);
            *v55 = v23;
LABEL_17:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 8LL))(v54);
            goto LABEL_18;
          }
        }
        v22 = &v21->Next;
LABEL_30:
        v21 = *v22;
        if ( !*v22 )
          goto LABEL_31;
      }
      v34 = 2;
      if ( !v29 )
        goto LABEL_46;
LABEL_35:
      KeSetEvent(*(PRKEVENT *)(v29 + 8), 1, 0);
LABEL_46:
      *(_BYTE *)(*((_QWORD *)&v21->Next + 1) + 49LL) = 1;
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0qpqxxq_EtwWriteTransfer(
          *((_QWORD *)&v21->Next + 1),
          v30,
          (_DWORD)Next,
          *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 28LL),
          (char)v21,
          (char)v21[1].Next,
          (char)v21[4].Next,
          *((_QWORD *)this + 20),
          v34);
      v38 = v21->Next;
      *((_QWORD *)&v21[3].Next + 1) = 0LL;
      *v22 = v38;
      *v19 = v21;
      v19 = &v21->Next;
      v21->Next = 0LL;
      goto LABEL_30;
    }
  }
LABEL_18:
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v13;
}
