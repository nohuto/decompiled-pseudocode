/*
 * XREFs of ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x1C002BDC0
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x1C0022824 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C0025408 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C00255A0 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C002A750 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C002B290 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1C0033940 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C0141FB0 (EngUpdateDeviceSurface.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vSwap(RGNOBJ *this, struct RGNOBJ *a2)
{
  int v4; // r10d
  int v5; // r9d
  __int64 v6; // rbx
  __int64 v7; // rcx
  bool v8; // zf
  _QWORD *v9; // rbx
  __int64 v10; // r13
  __int64 v11; // r15
  _QWORD *v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v23; // rbp
  __int64 v24; // r12
  _QWORD *v25; // rdi
  __int64 v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  _QWORD *v33; // rdi
  struct _KTHREAD *v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 *v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rbp
  __int64 v40; // rax
  int v41; // edi
  __int64 v42; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rax
  struct _KTHREAD *v49; // [rsp+50h] [rbp+8h]

  v4 = *(_DWORD *)(*(_QWORD *)this + 32LL);
  *(_DWORD *)(*(_QWORD *)this + 32LL) = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  *(_DWORD *)(*(_QWORD *)a2 + 32LL) = v4;
  v5 = *(_DWORD *)(*(_QWORD *)this + 36LL);
  *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  *(_DWORD *)(*(_QWORD *)a2 + 36LL) = v5;
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)a2;
  v8 = v6 == -48;
  v9 = (_QWORD *)(v6 + 48);
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v11 = *(_QWORD *)a2 + 48LL;
  v12 = (_QWORD *)*v9;
  if ( !v8 )
  {
    KeEnterCriticalRegion();
    v13 = (_QWORD *)*v9;
    if ( *(_QWORD **)(*v9 + 8LL) != v9 )
      goto LABEL_40;
    v14 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v14 != v9 )
      goto LABEL_40;
    *v14 = v13;
    v13[1] = v14;
    v9[1] = v9;
    *v9 = v9;
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)a2;
  }
  v15 = (_QWORD *)(v7 + 48);
  if ( v7 != -48 )
  {
    KeEnterCriticalRegion();
    v16 = *v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 )
      goto LABEL_40;
    v17 = (_QWORD *)v15[1];
    if ( (_QWORD *)*v17 != v15 )
      goto LABEL_40;
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v15[1] = v15;
    *v15 = v15;
    KeLeaveCriticalRegion();
    v7 = *(_QWORD *)a2;
  }
  v18 = *(_QWORD *)this;
  *(_QWORD *)this = v7;
  *(_QWORD *)a2 = v18;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (v40 = PsGetCurrentProcess(v21, v20),
        v41 = PsGetProcessSessionIdEx(v40),
        v42 = PsGetCurrentThreadProcess(),
        v41 == (unsigned int)PsGetProcessSessionIdEx(v42)) )
  {
    ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
    {
      if ( *ThreadWin32Thread )
      {
        v23 = 0LL;
        if ( v12 != v9 )
        {
          v24 = *(_QWORD *)this;
          v25 = (_QWORD *)(*(_QWORD *)this + 48LL);
          if ( *(_QWORD *)this != -48LL )
          {
            KeEnterCriticalRegion();
            v26 = 0LL;
            v49 = KeGetCurrentThread();
            if ( !(unsigned __int8)KeIsAttachedProcess()
              || (CurrentProcess = PsGetCurrentProcess(v28, v27),
                  ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                  CurrentThreadProcess = PsGetCurrentThreadProcess(),
                  ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
            {
              v29 = (__int64 *)PsGetThreadWin32Thread(v49);
              if ( v29 )
                v26 = *v29;
            }
            v25[2] = v24;
            v25[3] = CleanUpRegion;
            if ( v26 )
            {
              v30 = *(_QWORD *)(v26 + 88);
              v31 = (_QWORD *)(v26 + 88);
              if ( *(_QWORD *)(v30 + 8) != v26 + 88 )
                goto LABEL_40;
              *v25 = v30;
              v25[1] = v31;
              *(_QWORD *)(v30 + 8) = v25;
              *v31 = v25;
            }
            else
            {
              v25[1] = v25;
              *v25 = v25;
            }
            KeLeaveCriticalRegion();
          }
        }
        if ( v10 == v11 )
          return;
        v32 = *(_QWORD **)a2;
        v33 = v32 + 6;
        if ( v32 == (_QWORD *)-48LL )
          return;
        KeEnterCriticalRegion();
        v34 = KeGetCurrentThread();
        if ( !(unsigned __int8)KeIsAttachedProcess()
          || (v46 = PsGetCurrentProcess(v36, v35),
              v47 = PsGetProcessSessionIdEx(v46),
              v48 = PsGetCurrentThreadProcess(),
              v47 == (unsigned int)PsGetProcessSessionIdEx(v48)) )
        {
          v37 = (__int64 *)PsGetThreadWin32Thread(v34);
          if ( v37 )
            v23 = *v37;
        }
        v32[8] = v32;
        v32[9] = CleanUpRegion;
        if ( !v23 )
        {
          v32[7] = v32 + 6;
          *v33 = v33;
          goto LABEL_31;
        }
        v38 = *(_QWORD *)(v23 + 88);
        v39 = (_QWORD *)(v23 + 88);
        if ( *(_QWORD **)(v38 + 8) == v39 )
        {
          *v33 = v38;
          v32[7] = v39;
          *(_QWORD *)(v38 + 8) = v33;
          *v39 = v33;
LABEL_31:
          KeLeaveCriticalRegion();
          return;
        }
LABEL_40:
        __fastfail(3u);
      }
    }
  }
}
