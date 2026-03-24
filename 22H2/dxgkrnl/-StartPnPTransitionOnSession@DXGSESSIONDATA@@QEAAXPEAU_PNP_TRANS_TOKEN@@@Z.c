/*
 * XREFs of ?StartPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C0194A30
 * Callers:
 *     ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C016DAF0 (-CreateSession@DXGSESSIONMGR@@QEAAJXZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C01948D8 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

void __fastcall DXGSESSIONDATA::StartPnPTransitionOnSession(
        DXGSESSIONDATA *this,
        struct _PNP_TRANS_TOKEN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  struct _PNP_TRANS_TOKEN *v7; // r14
  unsigned int v8; // esi
  char v9; // r15
  char v10; // bl
  __int64 CurrentProcess; // rax
  int v12; // eax
  __int64 v13; // rcx
  struct _PNP_TRANS_TOKEN *v14; // rdx
  struct _PNP_TRANS_TOKEN **v15; // rcx
  struct _KEVENT *v16; // rcx
  SIZE_T v17; // rax
  unsigned __int64 v18; // kr00_8
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char *v24; // rbp
  __int64 v25; // rax
  unsigned int v26; // r8d
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // r9
  _QWORD *v30; // rax
  __int64 v31; // rcx
  char *v32; // rax
  char **v33; // rdx
  __int64 v34; // rcx
  char *v35; // rcx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  v4 = *((unsigned int *)this + 4684);
  v6 = 0LL;
  v7 = a2;
  v8 = v4;
  v9 = 1;
  if ( (_DWORD)v4 )
  {
    a4 = *((_QWORD *)this + 2343);
    do
    {
      a2 = *(struct _PNP_TRANS_TOKEN **)(32LL * (unsigned int)v6 + a4 + 8);
      if ( a2 )
      {
        if ( a2 == v7 )
          return;
        v9 = 0;
      }
      else
      {
        v8 = v6;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < (unsigned int)v4 );
  }
  if ( *((_QWORD *)this + 2314) )
  {
    v10 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(v6, a2, v4, a4);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)this )
    {
      v10 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)this + 2329), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)this + 2314));
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
  }
  v12 = *((_DWORD *)this + 4684);
  if ( v8 == v12 )
  {
    *((_DWORD *)this + 4684) = 2 * v12;
    v18 = (unsigned int)(2 * v12);
    v17 = 32 * v18;
    if ( !is_mul_ok(v18, 0x20uLL) )
      v17 = -1LL;
    v19 = (char *)operator new[](v17, 0x4B677844u, PagedPool);
    v24 = v19;
    if ( !v19 )
    {
      v25 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
      *(_QWORD *)(v25 + 24) = *(unsigned int *)this;
      *(_QWORD *)(v25 + 32) = *((unsigned int *)this + 4684);
      WdLogEvent5_WdLowResource(v25);
      *((_DWORD *)this + 4684) >>= 1;
      return;
    }
    memmove(v19, *((const void **)this + 2343), 32LL * v8);
    memset(&v24[32 * v8], 0, 32LL * (*((_DWORD *)this + 4684) - v8));
    v26 = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        v27 = 32LL * v26;
        v28 = (_QWORD *)(v27 + *((_QWORD *)this + 2343) + 16LL);
        v29 = *v28;
        if ( *(_QWORD **)(*v28 + 8LL) != v28 )
          break;
        v30 = (_QWORD *)v28[1];
        if ( (_QWORD *)*v30 != v28 )
          break;
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        v31 = *(_QWORD *)&v24[v27 + 8];
        v32 = &v24[v27 + 16];
        v33 = *(char ***)(v31 + 32);
        v34 = v31 + 24;
        if ( *v33 != (char *)v34 )
          break;
        *(_QWORD *)v32 = v34;
        ++v26;
        *((_QWORD *)v32 + 1) = v33;
        *v33 = v32;
        *(_QWORD *)(v34 + 8) = v32;
        if ( v26 >= v8 )
          goto LABEL_28;
      }
LABEL_31:
      __fastfail(3u);
    }
LABEL_28:
    v35 = (char *)*((_QWORD *)this + 2343);
    if ( v35 != (char *)this + 18752 )
      operator delete[](v35);
    *((_QWORD *)this + 2343) = v24;
  }
  v13 = 32LL * v8;
  *(_QWORD *)(v13 + *((_QWORD *)this + 2343)) = this;
  *(_QWORD *)(v13 + *((_QWORD *)this + 2343) + 8) = v7;
  v14 = (struct _PNP_TRANS_TOKEN *)(v13 + *((_QWORD *)this + 2343) + 16LL);
  v15 = (struct _PNP_TRANS_TOKEN **)*((_QWORD *)v7 + 4);
  if ( *v15 != (struct _PNP_TRANS_TOKEN *)((char *)v7 + 24) )
    goto LABEL_31;
  *(_QWORD *)v14 = (char *)v7 + 24;
  *((_QWORD *)v14 + 1) = v15;
  *v15 = v14;
  *((_QWORD *)v7 + 4) = v14;
  ++*((_DWORD *)v7 + 1);
  v16 = (struct _KEVENT *)*((_QWORD *)this + 2341);
  if ( v16 )
  {
    if ( v9 )
      KeResetEvent(v16);
  }
}
