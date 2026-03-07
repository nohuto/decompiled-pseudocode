__int64 __fastcall VidSchiEnsureHwFlipQueueLog(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // rdi
  int v8; // ecx
  __int64 v9; // rbx
  __int64 Pool2; // rax
  __int64 v11; // rcx
  int v12; // eax
  ADAPTER_RENDER *v13; // rcx
  _BYTE v14[40]; // [rsp+30h] [rbp-28h] BYREF

  v6 = *((_QWORD *)a1 + a2 + 400);
  if ( !v6 )
    return 0LL;
  v8 = 0;
  v9 = 288LL * a3;
  if ( !*(_QWORD *)(v9 + v6 + 432) )
  {
    *(_DWORD *)(v9 + v6 + 376) = 0;
    *(_DWORD *)(v9 + v6 + 372) = 64;
    Pool2 = ExAllocatePool2(64LL, 1024LL, 845310294LL);
    *(_QWORD *)(v9 + v6 + 432) = Pool2;
    v11 = Pool2;
    if ( !Pool2 )
    {
      WdLogSingleEntry0(3LL);
      return 3221225495LL;
    }
    v12 = *(_DWORD *)(v9 + v6 + 372);
    *(_DWORD *)&v14[12] = 0;
    *(_QWORD *)&v14[16] = v11;
    v13 = (ADAPTER_RENDER *)*((_QWORD *)a1 + 1);
    *(_DWORD *)v14 = a2;
    *(_DWORD *)&v14[4] = a3;
    *(_DWORD *)&v14[8] = v12;
    v8 = ADAPTER_RENDER::DdiSetFlipQueueLogBuffer(
           v13,
           (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v14);
    if ( v8 >= 0 )
      return (unsigned int)VidSchiSetInterruptTargetPresentId(a1, a2, a3, 0LL, 1, 0);
  }
  return (unsigned int)v8;
}
