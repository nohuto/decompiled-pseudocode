/*
 * XREFs of DwmChildRectChange @ 0x1C00AD03C
 * Callers:
 *     OffsetWindow @ 0x1C004C918 (OffsetWindow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0068640 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C007E644 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BE8C0 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C00A3890 (ScaleDPIRect.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00AD290 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00AD734 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

LONG_PTR __fastcall DwmChildRectChange(struct tagWND *a1)
{
  __int64 v1; // rax
  __m128i v3; // xmm1
  _QWORD *ThreadWin32Thread; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rcx
  void *v17; // rbx
  __int64 v18; // rcx
  LONG_PTR result; // rax
  __int64 v20; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  INT v22; // edi
  INT a[2]; // [rsp+38h] [rbp-89h] BYREF
  __int64 v24; // [rsp+40h] [rbp-81h]
  __m128i v25; // [rsp+48h] [rbp-79h] BYREF
  __m128i v26; // [rsp+58h] [rbp-69h] BYREF
  __m128i v27; // [rsp+68h] [rbp-59h] BYREF
  struct tagRECT v28; // [rsp+78h] [rbp-49h] BYREF
  int v29; // [rsp+88h] [rbp-39h] BYREF
  __int16 v30; // [rsp+8Ch] [rbp-35h]
  int v31; // [rsp+B0h] [rbp-11h]
  __int64 v32; // [rsp+B4h] [rbp-Dh]
  __m128i v33; // [rsp+BCh] [rbp-5h]
  __m128i v34; // [rsp+CCh] [rbp+Bh]
  __m128i v35; // [rsp+DCh] [rbp+1Bh]
  INT v36; // [rsp+ECh] [rbp+2Bh]

  v1 = *((_QWORD *)a1 + 5);
  a[0] = 0;
  v3 = *(__m128i *)(v1 + 104);
  v25 = *(__m128i *)(v1 + 88);
  v26 = v3;
  v27 = *(__m128i *)CalculateContentRect(&v28, a1, a);
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    v6 = SGDGetUserSessionState(v5);
    if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v6 + 8)) )
    {
      LODWORD(v24) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
    }
    v7 = 0LL;
    v8 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v8 )
      v7 = *v8;
    if ( *(_QWORD *)(v7 + 456) )
    {
      v10 = SGDGetUserSessionState(v9);
      if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 8)) )
      {
        LODWORD(v24) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
      }
      v11 = 0LL;
      v12 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v12 )
        v11 = *v12;
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v11 + 456) + 8LL) + 64LL) & 1) != 0 )
      {
        v13 = *((_QWORD *)a1 + 5);
        v14 = *(_DWORD *)(v13 + 288);
        if ( (v14 & 0xF) == 0 && (v14 & 0x40000000) != 0 )
        {
          v20 = *(unsigned __int16 *)(v13 + 284);
          if ( (_WORD)v20 != 96 )
          {
            v24 = 0LL;
            ScaledLogPixels = GreGetScaledLogPixels(v20);
            v22 = ScaledLogPixels;
            ScaleDPIRect(&v25, &v25, ScaledLogPixels, 0x60u, 0LL, 0LL);
            ScaleDPIRect(&v26, &v26, v22, 0x60u, 0LL, 0LL);
            ScaleDPIRect(&v27, &v27, v22, 0x60u, 0LL, 0LL);
            a[0] = EngMulDiv(a[0], v22, 96);
          }
        }
      }
    }
  }
  WindowMargins::CheckForChanges(a1, 5LL);
  v15 = *(_QWORD *)a1;
  v17 = (void *)ReferenceDwmApiPort(v16);
  result = SGDGetSessionState(v18);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 32) + 13248LL));
  if ( v17 )
  {
    memset_0(&v29, 0, 0x68uLL);
    v30 = 0x8000;
    v33 = v25;
    v29 = 6815808;
    v31 = 1073741845;
    v32 = v15;
    v35 = v27;
    v36 = a[0];
    v34 = v26;
    EtwUpdateEvent(v15, 1073741845LL);
    LpcRequestPort(v17, &v29);
    return ObfDereferenceObject(v17);
  }
  return result;
}
