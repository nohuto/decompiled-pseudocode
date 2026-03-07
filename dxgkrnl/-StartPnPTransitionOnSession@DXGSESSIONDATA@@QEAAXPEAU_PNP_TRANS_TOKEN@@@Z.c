void __fastcall DXGSESSIONDATA::StartPnPTransitionOnSession(DXGSESSIONDATA *this, struct _PNP_TRANS_TOKEN *a2)
{
  unsigned int v2; // r8d
  __int64 v4; // rcx
  unsigned int v6; // esi
  char v7; // r12
  _QWORD *i; // r14
  struct _PNP_TRANS_TOKEN *v9; // rdx
  char v10; // di
  __int64 CurrentProcess; // rax
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rdi
  struct _PNP_TRANS_TOKEN **v15; // rdx
  struct _PNP_TRANS_TOKEN *v16; // rcx
  struct _KEVENT *v17; // rcx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // kr00_8
  char *v20; // rax
  char *v21; // rbp
  unsigned int v22; // ecx
  __int64 v23; // r8
  _QWORD *v24; // rdx
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rdx
  char *v28; // rax
  char **v29; // r8
  __int64 v30; // rdx
  char *v31; // rcx
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  v2 = *((_DWORD *)this + 4690);
  v4 = 0LL;
  v6 = v2;
  v7 = 1;
  for ( i = (_QWORD *)((char *)this + 18768); (unsigned int)v4 < v2; v4 = (unsigned int)(v4 + 1) )
  {
    v9 = *(struct _PNP_TRANS_TOKEN **)(32LL * (unsigned int)v4 + *i + 8);
    if ( v9 )
    {
      if ( v9 == a2 )
        return;
      v7 = 0;
    }
    else
    {
      v6 = v4;
    }
  }
  if ( *((_QWORD *)this + 2316) )
  {
    v10 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(v4);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)this )
    {
      v10 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)this + 2331), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)this + 2316));
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
  }
  v12 = *((_DWORD *)this + 4690);
  if ( v6 == v12 )
  {
    *((_DWORD *)this + 4690) = 2 * v12;
    v19 = (unsigned int)(2 * v12);
    v18 = 32 * v19;
    if ( !is_mul_ok(v19, 0x20uLL) )
      v18 = -1LL;
    v20 = (char *)operator new[](v18, 0x4B677844u, 256LL);
    v21 = v20;
    if ( !v20 )
    {
      WdLogSingleEntry2(6LL, *(unsigned int *)this, *((unsigned int *)this + 4690));
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to expend PnP transition record array for session 0x%I64x (new NumRecords = 0x%I64x).",
        *(unsigned int *)this,
        *((unsigned int *)this + 4690),
        0LL,
        0LL,
        0LL);
      *((_DWORD *)this + 4690) >>= 1;
      return;
    }
    v13 = v6;
    memmove(v20, *((const void **)this + 2346), 32LL * v6);
    v22 = 0;
    if ( v6 )
    {
      while ( 1 )
      {
        v23 = 32LL * v22;
        v24 = (_QWORD *)(v23 + *((_QWORD *)this + 2346) + 16LL);
        v25 = *v24;
        if ( *(_QWORD **)(*v24 + 8LL) != v24 )
          break;
        v26 = (_QWORD *)v24[1];
        if ( (_QWORD *)*v26 != v24 )
          break;
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        v27 = *(_QWORD *)&v21[v23 + 8];
        v28 = &v21[v23 + 16];
        v29 = *(char ***)(v27 + 32);
        v30 = v27 + 24;
        if ( *v29 != (char *)v30 )
          break;
        *(_QWORD *)v28 = v30;
        ++v22;
        *((_QWORD *)v28 + 1) = v29;
        *v29 = v28;
        *(_QWORD *)(v30 + 8) = v28;
        if ( v22 >= v6 )
          goto LABEL_28;
      }
LABEL_31:
      __fastfail(3u);
    }
LABEL_28:
    v31 = (char *)*((_QWORD *)this + 2346);
    if ( v31 != (char *)this + 18776 )
      operator delete(v31);
    *((_QWORD *)this + 2346) = v21;
  }
  else
  {
    v13 = v6;
  }
  v14 = 32 * v13;
  *(_QWORD *)(v14 + *i) = this;
  *(_QWORD *)(*i + v14 + 8) = a2;
  v15 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)a2 + 4);
  v16 = (struct _PNP_TRANS_TOKEN *)(v14 + *i + 16LL);
  if ( *v15 != (struct _PNP_TRANS_TOKEN *)((char *)a2 + 24) )
    goto LABEL_31;
  *(_QWORD *)v16 = (char *)a2 + 24;
  *((_QWORD *)v16 + 1) = v15;
  *v15 = v16;
  *((_QWORD *)a2 + 4) = v16;
  ++*((_DWORD *)a2 + 1);
  v17 = (struct _KEVENT *)*((_QWORD *)this + 2344);
  if ( v17 )
  {
    if ( v7 )
      KeResetEvent(v17);
  }
}
