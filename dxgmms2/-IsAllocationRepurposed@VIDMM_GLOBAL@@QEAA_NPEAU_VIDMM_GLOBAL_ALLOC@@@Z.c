bool __fastcall VIDMM_GLOBAL::IsAllocationRepurposed(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  bool v2; // bl
  struct _KTHREAD **v6; // rsi
  __int64 v7; // rbp
  PRKPROCESS *v8; // rcx
  __int64 v9; // r9
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-68h] BYREF

  v2 = 0;
  if ( !dword_1C0076574 )
    return 0;
  v6 = (struct _KTHREAD **)((char *)a2 + 296);
  DXGFASTMUTEX::Acquire((struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296));
  if ( *(_WORD *)(*((_QWORD *)a2 + 67) + 4LL) == 3 )
  {
    v7 = *((_QWORD *)a2 + 11);
    v8 = *(PRKPROCESS **)(v7 + 8);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v8, &ApcState);
    if ( dword_1C0076574 == 1 )
    {
      v2 = VIDMM_GLOBAL::QueryLocalAllocationResidency(this, (struct _VIDMM_LOCAL_ALLOC *)v7) == D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
    }
    else if ( dword_1C0076574 == 2 )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL) + 128LL))(
             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL),
             *(_QWORD *)(*((_QWORD *)a2 + 11) + 24LL)) >= 0 )
      {
        LOBYTE(v9) = 1;
        (*(void (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL)
                                                                                      + 120LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 8LL) + 24LL),
          a2,
          *(_QWORD *)(*((_QWORD *)a2 + 11) + 24LL),
          v9);
      }
      else
      {
        v2 = 1;
      }
    }
    KeUnstackDetachProcess(&ApcState);
  }
  DXGFASTMUTEX::Release(v6);
  return v2;
}
