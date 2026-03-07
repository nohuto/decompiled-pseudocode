struct HOBJ__ *__fastcall GreCreateRectRgnIndirect(struct _RECTL *a1)
{
  struct _RECTL *v1; // r14
  struct HOBJ__ *v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rdi
  char *v6; // rbx
  _QWORD *v7; // r13
  __int64 *v8; // rbp
  __int64 v9; // rbx
  ULONG v10; // r8d
  ULONG ClearBits; // eax
  ULONG v12; // r12d
  ULONG v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // rax
  LONG left; // eax
  LONG right; // ecx
  LONG top; // eax
  LONG bottom; // ecx
  unsigned int v24; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r14
  struct _ERESOURCE *v32; // rbp
  __int64 v33; // rbp
  int v34; // edx
  __int64 v35; // rcx
  int v36; // r8d
  __int64 v37; // rcx
  GdiHandleManager *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdi
  __int64 v43; // rbp
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // r8d
  struct _ERESOURCE *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rcx
  void *v51; // r8
  void *v52; // rax
  _QWORD *v53; // rdi
  __int64 v54; // rbx
  _QWORD *v55; // rcx
  unsigned int *v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  char EtwGdiHandleType; // al
  int v60; // ecx
  int v61; // r8d
  int v62; // r8d
  int v63; // r9d
  unsigned int v64[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v65; // [rsp+48h] [rbp-60h] BYREF
  _QWORD *v66; // [rsp+50h] [rbp-58h] BYREF
  __int64 v67; // [rsp+58h] [rbp-50h] BYREF
  __int128 v68; // [rsp+60h] [rbp-48h]

  v1 = a1;
  if ( (a1->left & 0xF8000000) != 0 && (a1->left & 0xF8000000) != -134217728
    || (a1->bottom & 0xF8000000) != 0 && (a1->bottom & 0xF8000000) != -134217728
    || (a1->right & 0xF8000000) != 0 && (a1->right & 0xF8000000) != -134217728
    || (LOBYTE(a1) = (a1->top & 0xF8000000) != 0, ((unsigned __int8)a1 & ((v1->top & 0xF8000000) != -134217728)) != 0) )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  v3 = 0LL;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL) + 56LL);
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 36) )
    {
      v6 = (char *)ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)(v4 + 24));
    }
    else
    {
      v5 = *(_QWORD *)(v4 + 16);
      v6 = 0LL;
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v5, 0LL);
      v7 = *(_QWORD **)v4;
      if ( *(_QWORD *)v4 != v4 )
      {
        while ( 1 )
        {
          v8 = (__int64 *)v7[4];
          v9 = *v8;
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v9, 0LL);
          v10 = 0;
          if ( *((_DWORD *)v8 + 8) < 0x100u )
            v10 = *((_DWORD *)v8 + 8);
          ClearBits = RtlFindClearBits((PRTL_BITMAP)(v8[3] ^ v8[2]), 1u, v10);
          v12 = ClearBits;
          if ( ClearBits != -1 )
          {
            v13 = ClearBits;
            v14 = *((_DWORD *)v8 + 9);
            v15 = v13 >> 5;
            if ( v14 >= 8 || v15 < v14 )
            {
              v66 = v8 + 1;
              v64[0] = v15 << 12;
              goto LABEL_14;
            }
            v50 = v15 << 12;
            v51 = (void *)(v50 + (v8[1] ^ v8[2]));
            *(_QWORD *)v64 = v50;
            v66 = v8 + 1;
            v65 = v51;
            if ( (int)MmCommitSessionMappedView(v51, 4096LL) >= 0 )
            {
              memset(v65, 0, 0x1000uLL);
              ++*((_DWORD *)v8 + 9);
LABEL_14:
              RtlTestBit((PRTL_BITMAP)(v8[3] ^ v8[2]), v12);
              RtlSetBit((PRTL_BITMAP)(v8[3] ^ v8[2]), v12);
              if ( ++*((_DWORD *)v8 + 8) >= 0x100u )
                *((_DWORD *)v8 + 8) = 0;
              v16 = v64[0] + (*v66 ^ v8[2]);
              ExReleasePushLockExclusiveEx(v9, 0LL);
              KeLeaveCriticalRegion();
              v6 = (char *)(v16 + ((unsigned __int8)(v12 & 0x1F) << 7));
              if ( v6 )
              {
                ExReleasePushLockSharedEx(v5, 0LL);
                KeLeaveCriticalRegion();
                goto LABEL_18;
              }
              goto LABEL_42;
            }
          }
          ExReleasePushLockExclusiveEx(v9, 0LL);
          KeLeaveCriticalRegion();
LABEL_42:
          v7 = (_QWORD *)*v7;
          if ( v7 == (_QWORD *)v4 )
          {
            v6 = 0LL;
            break;
          }
        }
      }
      ExReleasePushLockSharedEx(v5, 0LL);
      KeLeaveCriticalRegion();
      v52 = NSInstrumentation::CSectionEntry<32768,128>::Create();
      v53 = v52;
      if ( v52 )
      {
        v65 = (void *)NSInstrumentation::CSectionBitmapAllocator<32768,128>::Allocate(*((__int64 **)v52 + 4));
        v6 = (char *)v65;
        if ( v65 )
        {
          v54 = *(_QWORD *)(v4 + 16);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v54, 0LL);
          v55 = *(_QWORD **)(v4 + 8);
          if ( *v55 != v4 )
            __fastfail(3u);
          v53[1] = v55;
          *v53 = v4;
          *v55 = v53;
          *(_DWORD *)(v4 + 32) += 256;
          *(_QWORD *)(v4 + 8) = v53;
          ExReleasePushLockExclusiveEx(v54, 0LL);
          KeLeaveCriticalRegion();
          v6 = (char *)v65;
        }
        else
        {
          NSInstrumentation::CSectionEntry<24576,96>::~CSectionEntry<24576,96>(v53);
          ExFreePoolWithTag(v53, 0);
        }
      }
    }
LABEL_18:
    if ( v6 )
    {
      v18 = SGDGetSessionState(v17);
      v19 = NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
              *(NSInstrumentation::CLeakTrackingAllocator **)(v18 + 24),
              *(void **)(*(_QWORD *)(v18 + 24) + 6376LL));
      *((_QWORD *)v6 + 4) = v19;
      if ( v19 )
      {
        *((_DWORD *)v6 + 12) = 16;
        *((_DWORD *)v6 + 13) = 1;
        *(_OWORD *)(v6 + 56) = 0LL;
        *v19 = 0;
        v19[1] = 0x80000000;
        *((_QWORD *)v19 + 1) = 0x7FFFFFFFLL;
        *((_QWORD *)v6 + 5) = v19 + 4;
        *((_DWORD *)v6 + 6) = 112;
        *((_QWORD *)v6 + 12) = v6 + 88;
        *((_QWORD *)v6 + 11) = v6 + 88;
        *((_QWORD *)v6 + 9) = 0LL;
        *((_DWORD *)v6 + 20) = 0;
        left = v1->left;
        right = v1->right;
        v68 = 0LL;
        if ( left > right )
        {
          v1->left = right;
          v1->right = left;
        }
        top = v1->top;
        bottom = v1->bottom;
        if ( top > bottom )
        {
          v1->top = bottom;
          v1->bottom = top;
        }
        v65 = v6 + 24;
        RGNCOREOBJ::vSet((RGNCOREOBJ *)&v65, v1);
        v24 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
        {
          v26 = *ThreadWin32Thread;
          if ( *ThreadWin32Thread )
          {
            v27 = *(_QWORD *)(v26 + 72);
            if ( v27 )
              v24 = *(_DWORD *)(v27 + 8);
          }
        }
        v28 = *(_QWORD *)(SGDGetSessionState(v26) + 24);
        v31 = *(_QWORD *)(SGDGetSessionState(v29) + 24);
        v32 = *(struct _ERESOURCE **)(v31 + 1912);
        if ( v32 )
        {
          PsEnterPriorityRegion(v30);
          ExEnterCriticalRegionAndAcquireResourceExclusive(v32);
        }
        v33 = *(_QWORD *)(v31 + 1912);
        v35 = *(_QWORD *)(SGDGetSessionState(v30) + 24);
        if ( *(_DWORD *)(v35 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pqz_EtwWriteTransfer(v35, v34, v36, v33, 17, (__int64)L"GreBaseGlobals.hsemHmgr");
        if ( (unsigned int)HmgIncProcessHandleCountEx(v24, v34, 0) )
        {
          v38 = *(GdiHandleManager **)(v28 + 8008);
          v64[0] = 0;
          if ( GdiHandleManager::AcquireEntryIndex(v38, v64) )
          {
            v3 = ENTRYOBJ::hSetup((struct OBJECT *)v6, 4u, 1u, v64[0]);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000000LL) != 0 )
            {
              v56 = (unsigned int *)SGDGetUserSessionState(v37, v39, v40, v41);
              LOBYTE(v57) = 4;
              EtwGdiHandleType = GetEtwGdiHandleType(v57, v58, *v56);
              McTemplateK0pqqq_EtwWriteTransfer(
                v60,
                (unsigned int)&GdiCreateHandle,
                v61,
                (_DWORD)v3,
                EtwGdiHandleType,
                v61,
                v24);
            }
          }
          else
          {
            HmgDecProcessHandleCount(v24);
            if ( !*(_BYTE *)(v28 + 8096) )
            {
              v37 = *(_QWORD *)(v28 + 8008);
              if ( *(_DWORD *)(v37 + 4) >= *(_DWORD *)(v37 + 8) )
              {
                *(_BYTE *)(v28 + 8096) = 1;
                if ( (unsigned int)dword_1C02C93D8 > 5 && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
                {
                  LODWORD(v66) = *(_DWORD *)(v28 + 1904);
                  v67 = 0x1000000LL;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                    (unsigned int)&dword_1C02C93D8,
                    (unsigned int)&unk_1C02955A9,
                    v62,
                    v63,
                    (__int64)&v66,
                    (__int64)&v67);
                }
              }
            }
          }
        }
        v42 = *(_QWORD *)(SGDGetSessionState(v37) + 24);
        v43 = *(_QWORD *)(v42 + 1912);
        v45 = *(_QWORD *)(SGDGetSessionState(v44) + 24);
        if ( *(_DWORD *)(v45 + 180) && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          McTemplateK0pz_EtwWriteTransfer(
            v45,
            (unsigned int)&LockRelease,
            v46,
            v43,
            (__int64)L"GreBaseGlobals.hsemHmgr");
        v47 = *(struct _ERESOURCE **)(v42 + 1912);
        if ( v47 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v47);
          PsLeavePriorityRegion(v49, v48);
        }
        if ( v3 )
          _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
        else
          REGION::vDeleteREGION(v6);
        return v3;
      }
      REGION::vDeleteREGION(v6);
    }
  }
  EngSetLastError(8u);
  return v3;
}
