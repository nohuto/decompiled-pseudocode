/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C019BC58
 * Callers:
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C019BB34 (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C019BBD0 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 */

void __fastcall DXGSESSIONDATA::FinishPnPTransitionOnSession(
        DXGSESSIONDATA *this,
        struct _PNP_TRANS_TOKEN *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // ebx
  struct _PNP_TRANS_TOKEN *v6; // r14
  DXGSESSIONDATA *v7; // rdi
  char v8; // si
  char v9; // bp
  __int64 CurrentProcess; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KEVENT *v15; // rcx
  unsigned int v16; // ebx
  char v17; // r8
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v4 = *((unsigned int *)this + 4684);
  v5 = 0;
  v6 = a2;
  v7 = this;
  v8 = 1;
  if ( (_DWORD)v4 )
  {
    a2 = (struct _PNP_TRANS_TOKEN *)*((_QWORD *)this + 2343);
    do
    {
      this = (DXGSESSIONDATA *)*((_QWORD *)a2 + 4 * v5 + 1);
      if ( this )
      {
        if ( this == v6 )
          break;
        v8 = 0;
      }
      ++v5;
    }
    while ( v5 < (unsigned int)v4 );
  }
  if ( *((_QWORD *)v7 + 2314) )
  {
    v9 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(this, a2, v4, a4);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)v7 )
    {
      v9 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)v7 + 2329), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)v7 + 2314));
    if ( v9 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( v5 < *((_DWORD *)v7 + 4684) )
  {
    v11 = 32LL * v5;
    *(_QWORD *)(v11 + *((_QWORD *)v7 + 2343) + 8) = 0LL;
    v12 = (_QWORD *)(v11 + *((_QWORD *)v7 + 2343) + 16LL);
    v13 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
    --*((_DWORD *)v6 + 1);
    v15 = (struct _KEVENT *)*((_QWORD *)v7 + 2341);
    if ( v15 )
    {
      v16 = v5 + 1;
      if ( v8 )
      {
        do
        {
          if ( v16 >= *((_DWORD *)v7 + 4684) )
            break;
          v17 = 0;
          if ( !*(_QWORD *)(32LL * v16 + *((_QWORD *)v7 + 2343) + 8) )
            v17 = v8;
          ++v16;
          v8 = v17;
        }
        while ( v17 );
        if ( v8 )
          KeSetEvent(v15, 0, 0);
      }
    }
  }
}
