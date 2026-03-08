/*
 * XREFs of ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800972E4
 * Callers:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180055BE4 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x180097428 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180097F68 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMA.c)
 *     ?Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@CompositionColorSpace@@W4SubchannelMaskType@@E_KW44KeyframeAnimationDelayBehavior@@MW44KeyframeAnimationDirection@@MW44KeyframeAnimationStopBehavior@@IPEAUKeyframeData@@@Z @ 0x180236828 (-Initialize@CKeyframeAnimation@@QEAAJPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4Enum@Comp.c)
 * Callees:
 *     ??1Keyframe@KeyframeSequence@@QEAA@XZ @ 0x1800DF590 (--1Keyframe@KeyframeSequence@@QEAA@XZ.c)
 *     ??_V@YAXPEAX_K@Z @ 0x18010F020 (--_V@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180279008 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall KeyframeSequence::RemoveAllKeyFrames(KeyframeSequence *this)
{
  __int64 v1; // rbp
  __int64 v3; // r15
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // r14
  __int64 v8; // rbx
  KeyframeSequence::Keyframe *i; // rsi
  int v10; // eax
  int v11; // esi
  BOOL v12; // eax
  char v13; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( !*((_DWORD *)this + 28) )
    goto LABEL_10;
  do
  {
    v3 = *((_QWORD *)this + 13);
    v4 = *(volatile signed __int32 **)(v3 + 24 * v1 + 8);
    if ( !v4 )
      goto LABEL_7;
    *(_QWORD *)(v3 + 24 * v1 + 8) = 0LL;
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) != 1 )
      goto LABEL_7;
    if ( *((int *)v4 + 2) >= 0 || !IsDebuggerPresent() && !(unsigned int)IsKernelDebuggerPresent() )
      goto LABEL_5;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = IsKernelDebuggerPresent();
        Response = 63;
        v11 = v10;
        if ( !v10 )
        {
          v12 = IsDebuggerPresent();
          v13 = Response;
          if ( v12 )
            v13 = 103;
          LOBYTE(Response) = v13;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          word_1803392B0,
          word_1803392B0,
          "Function: ",
          L"CMILRefCountImpl::AddReference",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          23);
        if ( v11 )
        {
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        }
        else
        {
          DbgPrintEx(
            0x65u,
            0,
            "(No kernel debugger is present.) Respond with:\n"
            "  g                    -- Go (continue)\n"
            "  eb 0x%p 'p';g  -- terminate Process\n"
            "  eb 0x%p 't';g  -- terminate Thread\n"
            " or regular debugging.\n",
            &Response,
            &Response);
          __debugbreak();
        }
        if ( (char)Response <= 98 )
          break;
        if ( (char)Response == 103 )
          goto LABEL_5;
        if ( (char)Response == 105 )
          goto LABEL_39;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_38;
          goto LABEL_36;
        }
LABEL_37:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_38:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      if ( (char)Response == 98 || (char)Response == 66 )
        break;
      if ( (char)Response == 71 )
        goto LABEL_5;
      if ( (char)Response != 73 )
      {
        if ( (char)Response != 80 )
        {
          if ( (char)Response != 84 )
            goto LABEL_38;
LABEL_36:
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_38;
        }
        goto LABEL_37;
      }
LABEL_39:
      DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
    }
    __debugbreak();
LABEL_5:
    _InterlockedIncrement(v4 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      --*((_DWORD *)v4 + 2);
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 16LL))(v4, 1LL);
    }
LABEL_7:
    v5 = *(_QWORD *)(v3 + 24 * v1 + 16);
    if ( v5 )
    {
      *(_QWORD *)(v3 + 24 * v1 + 16) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    }
    v1 = (unsigned int)(v1 + 1);
  }
  while ( (unsigned int)v1 < *((_DWORD *)this + 28) );
LABEL_10:
  v6 = *((_QWORD *)this + 13);
  if ( v6 )
  {
    v7 = (void *)(v6 - 8);
    v8 = *(_QWORD *)(v6 - 8);
    for ( i = (KeyframeSequence::Keyframe *)(v6 + 24 * v8); v8; --v8 )
    {
      i = (KeyframeSequence::Keyframe *)((char *)i - 24);
      KeyframeSequence::Keyframe::~Keyframe(i);
    }
    operator delete[](v7);
  }
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_BYTE *)this + 140) &= ~4u;
}
