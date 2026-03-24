/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0059F80
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0059D40 (NtDCompositionBeginFrame.c)
 * Callees:
 *     ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C005A340 (-ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qpqxxq_EtwWriteTransfer @ 0x1C0126700 (McTemplateK0qpqxxq_EtwWriteTransfer.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r14
  const struct COMPOSITION_FRAME_INFO *v4; // r13
  bool v6; // zf
  struct _ERESOURCE *v7; // rbx
  BOOL v8; // edi
  __int64 v9; // rcx
  int v10; // ebx
  __int64 *v11; // rcx
  PSLIST_ENTRY v12; // rcx
  PSLIST_ENTRY v13; // rdi
  PSLIST_ENTRY *v14; // r12
  _QWORD *v15; // r14
  PSLIST_ENTRY v16; // rbx
  PSLIST_ENTRY *v17; // r15
  __int64 v18; // rax
  PSLIST_ENTRY v20; // rdi
  struct _SLIST_ENTRY *v21; // r14
  __int64 v22; // r13
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rax
  struct _SLIST_ENTRY *Next; // r8
  _QWORD *p_Next; // rdx
  struct _SLIST_ENTRY *v28; // rax
  __int64 v29; // r13
  __int64 v30; // r15
  PSLIST_ENTRY *v31; // rax
  LARGE_INTEGER *v32; // rbx
  __int64 *v33; // [rsp+50h] [rbp-28h] BYREF
  struct _SLIST_ENTRY *v34; // [rsp+58h] [rbp-20h] BYREF
  __int64 v35; // [rsp+60h] [rbp-18h]
  int v36; // [rsp+C0h] [rbp+48h] BYREF
  const struct COMPOSITION_FRAME_INFO *v37; // [rsp+C8h] [rbp+50h]
  unsigned __int64 *v38; // [rsp+D0h] [rbp+58h]
  int v39; // [rsp+D8h] [rbp+60h] BYREF

  v38 = a3;
  v37 = a2;
  v3 = a3;
  v4 = a2;
  v6 = PsGetCurrentProcess(this, a2) == (_QWORD)g_pepDwm;
  *v3 = 0LL;
  v7 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
  v8 = v6;
  DirectComposition::CConnection::s_capabilityInfo = *(_OWORD *)((char *)v4 + 28);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v7, 1u);
  if ( v8 && !DirectComposition::CConnection::s_pDwmRenderThread )
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  if ( *((_DWORD *)this + 37) )
  {
    if ( *((_QWORD *)this + 23)
      || (v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 160LL))(*((_QWORD *)this + 31)), v10 >= 0) )
    {
      v9 = *((_QWORD *)this + 31);
      v33 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, const struct COMPOSITION_FRAME_INFO *, __int64 **))(*(_QWORD *)v9 + 168LL))(
              v9,
              v4,
              &v33);
      if ( v10 >= 0 )
      {
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 16LL))(*((_QWORD *)this + 31));
        v11 = v33;
        *((_QWORD *)this + 20) = *(_QWORD *)v4;
        v35 = (*(__int64 (__fastcall **)(__int64 *))(*v11 + 72))(v11);
        if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 2, 0) )
        {
          v10 = -1073740024;
        }
        else
        {
          v12 = ExpInterlockedFlushSList((PSLIST_HEADER)this + 6);
          v13 = 0LL;
          if ( v12 )
          {
            do
            {
              v25 = *((_QWORD *)&v12[1].Next + 1);
              Next = v12->Next;
              if ( v25 )
              {
                p_Next = *(_QWORD **)(v25 + 24);
                *(_QWORD *)(v25 + 24) = 0LL;
                v12->Next = (struct _SLIST_ENTRY *)*((_QWORD *)&v12[1].Next + 1);
                *((_QWORD *)&v12[1].Next + 1) = 0LL;
              }
              else
              {
                p_Next = &v12->Next;
              }
              *p_Next = v13;
              v13 = v12;
              v12 = Next;
            }
            while ( Next );
          }
          v14 = (PSLIST_ENTRY *)((char *)this + 136);
          v34 = v13;
          v15 = (_QWORD *)*((_QWORD *)this + 17);
          if ( v15 )
          {
            v29 = v35;
            do
            {
              v30 = v15[1];
              if ( *(_BYTE *)(v30 + 49) )
              {
                if ( (*(_BYTE *)(v30 + 241) & 4) != 0 )
                {
                  v32 = *(LARGE_INTEGER **)(v30 + 720);
                  v32[5].QuadPart = v29;
                  v32[6] = KeQueryPerformanceCounter(0LL);
                }
                *(_BYTE *)(v30 + 49) = 0;
              }
              v31 = (PSLIST_ENTRY *)v15;
              v15 = (_QWORD *)*v15;
            }
            while ( v15 );
            v16 = *v14;
            *v14 = 0LL;
            v4 = v37;
            *v31 = v13;
            v13 = v16;
            v34 = v16;
          }
          else
          {
            v16 = v13;
          }
          v17 = &v34;
          if ( v16 )
          {
            v20 = v16;
            do
            {
              v21 = v20[6].Next;
              if ( v21 )
              {
                if ( BYTE1(v21[2].Next) )
                {
                  v36 = 0;
                  if ( ((__int64)v20[2].Next & 0x10) != 0
                    && (!DirectComposition::CBatch::ShouldDefer(
                           (DirectComposition::CBatch *)v20,
                           *((_QWORD *)this + 20),
                           0,
                           0LL,
                           (enum DirectComposition::CBatch::DeferReason *)&v36)
                     || v36 == 6) )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)&v21[2].Next + 1);
                    LOBYTE(v20[2].Next) &= ~0x10u;
                  }
                }
              }
              v20 = v20->Next;
            }
            while ( v20 );
            v22 = v35;
            do
            {
              v39 = 0;
              *((_QWORD *)&v16[3].Next + 1) = v22;
              if ( DirectComposition::CBatch::ShouldDefer(
                     (DirectComposition::CBatch *)v16,
                     *((_QWORD *)this + 20),
                     1,
                     *((struct DirectComposition::CEvent **)this + 10),
                     (enum DirectComposition::CBatch::DeferReason *)&v39) )
              {
                if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  McTemplateK0qpqxxq_EtwWriteTransfer(
                    *((_QWORD *)&v16->Next + 1),
                    v23,
                    v24,
                    *(_DWORD *)(*((_QWORD *)&v16->Next + 1) + 28LL),
                    (char)v16,
                    (char)v16[1].Next,
                    (char)v16[4].Next,
                    *((_QWORD *)this + 20),
                    v39);
                v28 = v16->Next;
                *((_QWORD *)&v16[3].Next + 1) = 0LL;
                *v17 = v28;
                *v14 = v16;
                v14 = &v16->Next;
                v16->Next = 0LL;
              }
              else
              {
                if ( ((__int64)v16[2].Next & 8) != 0 )
                  *(_BYTE *)(*((_QWORD *)&v16->Next + 1) + 242LL) = 1;
                v17 = &v16->Next;
              }
              v16 = *v17;
            }
            while ( *v17 );
            v13 = v34;
            v4 = v37;
          }
          *((_QWORD *)this + 21) = *((_QWORD *)v4 + 1);
          v10 = 0;
          *((_DWORD *)this + 44) = *((_DWORD *)v4 + 5);
          *((_DWORD *)this + 45) = *((_DWORD *)v4 + 6);
          if ( v13 )
            (*(void (__fastcall **)(__int64 *, struct _SLIST_ENTRY **))(*v33 + 56))(v33, &v13[7].Next + 1);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 31) + 72LL))(*((_QWORD *)this + 31), v33);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 23) + 16LL))(*((_QWORD *)this + 23), v33);
          v3 = v38;
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 31) + 24LL))(*((_QWORD *)this + 31));
        v18 = *v33;
        if ( v10 < 0 )
          (*(void (**)(void))(v18 + 32))();
        else
          *v3 = (*(__int64 (**)(void))(v18 + 72))();
        (*(void (__fastcall **)(__int64 *))(*v33 + 8))(v33);
      }
    }
  }
  else
  {
    v10 = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return (unsigned int)v10;
}
