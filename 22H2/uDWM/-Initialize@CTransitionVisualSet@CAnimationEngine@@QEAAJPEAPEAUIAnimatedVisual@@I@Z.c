/*
 * XREFs of ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180035B74
 * Callers:
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180035714 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x180035950 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x180035CB8 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::Initialize(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IAnimatedVisual **a2,
        unsigned int a3)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  struct IAnimatedVisual *v13; // rcx
  CAnimationEngine::CTransitionVisual *v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // edx
  __int64 i; // rsi
  CAnimationEngine::CTransitionVisual *v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-28h]

  v6 = 0;
  v7 = 8LL * a3;
  if ( !is_mul_ok(a3, 8uLL) )
    v7 = -1LL;
  v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
         WPF::g_pProcessHeap,
         v7);
  *((_QWORD *)this + 5) = v8;
  if ( v8 )
  {
    v9 = 0;
    *((_DWORD *)this + 5) = a3;
    if ( a3 )
    {
      v10 = 0LL;
      while ( 1 )
      {
        v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                WPF::g_pProcessHeap,
                88LL);
        v12 = v11;
        if ( v11 )
        {
          v13 = a2[v10];
          *(_DWORD *)(v11 + 64) = 0;
          *(_DWORD *)(v11 + 68) = 0;
          *(_DWORD *)(v11 + 72) = 0;
          *(_DWORD *)(v11 + 76) = 0;
          *(_DWORD *)(v11 + 80) = 0;
          *(_DWORD *)(v11 + 84) = 0;
          *(_QWORD *)v11 = v13;
          if ( v13 )
            (*(void (__fastcall **)(struct IAnimatedVisual *))(*(_QWORD *)v13 + 264LL))(v13);
        }
        else
        {
          v12 = 0LL;
        }
        *(_QWORD *)(v10 * 8 + *((_QWORD *)this + 5)) = v12;
        v14 = *(CAnimationEngine::CTransitionVisual **)(v10 * 8 + *((_QWORD *)this + 5));
        if ( !v14 )
        {
          v21 = 1612;
          goto LABEL_21;
        }
        v15 = CAnimationEngine::CTransitionVisual::Initialize(v14);
        v6 = v15;
        if ( v15 < 0 )
          break;
        v16 = (**(__int64 (__fastcall ***)(struct IAnimatedVisual *, _QWORD))a2[v10])(
                a2[v10],
                *((unsigned int *)this + 4));
        v6 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x64Eu);
          goto LABEL_13;
        }
        ++v9;
        ++v10;
        if ( v9 >= a3 )
          goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x64Du);
LABEL_13:
      if ( v6 < 0 )
        goto LABEL_22;
    }
  }
  else
  {
    v21 = 1605;
LABEL_21:
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v21);
LABEL_22:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 5); i = (unsigned int)(i + 1) )
    {
      v20 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 5) + 8 * i);
      if ( v20 )
      {
        CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v20, v17);
        *(_QWORD *)(*((_QWORD *)this + 5) + 8 * i) = 0LL;
      }
    }
    if ( *((_QWORD *)this + 5) )
    {
      (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      *((_QWORD *)this + 5) = 0LL;
    }
    *((_DWORD *)this + 5) = 0;
  }
  return (unsigned int)v6;
}
