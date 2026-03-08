/*
 * XREFs of ?FinishPnPTransitionOnSession@DXGSESSIONDATA@@QEAAXPEAU_PNP_TRANS_TOKEN@@@Z @ 0x1C02151D0
 * Callers:
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C0214FF4 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C021507C (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 */

void __fastcall DXGSESSIONDATA::FinishPnPTransitionOnSession(DXGSESSIONDATA *this, struct _PNP_TRANS_TOKEN *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  DXGSESSIONDATA *v5; // rdi
  char v6; // si
  __int64 v7; // rdx
  char v8; // bp
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  unsigned int v14; // ebx
  char v15; // dl
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  v2 = *((_DWORD *)this + 4690);
  v3 = 0;
  v5 = this;
  v6 = 1;
  if ( v2 )
  {
    v7 = *((_QWORD *)this + 2346);
    do
    {
      this = *(DXGSESSIONDATA **)(32LL * v3 + v7 + 8);
      if ( this )
      {
        if ( this == a2 )
          break;
        v6 = 0;
      }
      ++v3;
    }
    while ( v3 < v2 );
  }
  if ( *((_QWORD *)v5 + 2316) )
  {
    v8 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    CurrentProcess = PsGetCurrentProcess(this);
    if ( (unsigned int)PsGetProcessSessionIdEx(CurrentProcess) != *(_DWORD *)v5 )
    {
      v8 = 1;
      KeStackAttachProcess(*((PRKPROCESS *)v5 + 2331), &ApcState);
    }
    _InterlockedIncrement(*((volatile signed __int32 **)v5 + 2316));
    if ( v8 )
      KeUnstackDetachProcess(&ApcState);
  }
  if ( v3 < *((_DWORD *)v5 + 4690) )
  {
    v10 = 32LL * v3;
    *(_QWORD *)(v10 + *((_QWORD *)v5 + 2346) + 8) = 0LL;
    v11 = (_QWORD *)(v10 + *((_QWORD *)v5 + 2346) + 16LL);
    v12 = *v11;
    if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
    --*((_DWORD *)a2 + 1);
    if ( *((_QWORD *)v5 + 2344) )
    {
      v14 = v3 + 1;
      if ( v6 )
      {
        while ( 1 )
        {
          v15 = 0;
          if ( v14 >= *((_DWORD *)v5 + 4690) )
            break;
          if ( !*(_QWORD *)(32LL * v14 + *((_QWORD *)v5 + 2346) + 8) )
            v15 = v6;
          ++v14;
          v6 = v15;
          if ( !v15 )
            return;
        }
        KeSetEvent(*((PRKEVENT *)v5 + 2344), 0, 0);
      }
    }
  }
}
