/*
 * XREFs of DwmChildRectChange @ 0x1C00EDE40
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0035320 (xxxCreateWindowEx.c)
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C005A330 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     OffsetWindow @ 0x1C00F1570 (OffsetWindow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0122B94 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C00D1E80 (ScaleDPIRect.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00EE150 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EE714 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C0138C00 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 */

LONG_PTR __fastcall DwmChildRectChange(struct tagWND *a1)
{
  __int64 v1; // rax
  __m128i v3; // xmm1
  _QWORD *ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PERESOURCE *v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PERESOURCE *v16; // rax
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  INT v23; // edi
  __int64 v24; // rdi
  __int64 v25; // rcx
  void *v26; // rbx
  __int64 v27; // rcx
  LONG_PTR result; // rax
  INT a[2]; // [rsp+38h] [rbp-89h] BYREF
  __int64 v30; // [rsp+40h] [rbp-81h]
  __m128i v31; // [rsp+48h] [rbp-79h] BYREF
  __m128i v32; // [rsp+58h] [rbp-69h] BYREF
  __m128i v33; // [rsp+68h] [rbp-59h] BYREF
  struct tagRECT v34; // [rsp+78h] [rbp-49h] BYREF
  int v35; // [rsp+88h] [rbp-39h] BYREF
  __int16 v36; // [rsp+8Ch] [rbp-35h]
  int v37; // [rsp+B0h] [rbp-11h]
  __int64 v38; // [rsp+B4h] [rbp-Dh]
  __m128i v39; // [rsp+BCh] [rbp-5h]
  __m128i v40; // [rsp+CCh] [rbp+Bh]
  __m128i v41; // [rsp+DCh] [rbp+1Bh]
  INT v42; // [rsp+ECh] [rbp+2Bh]

  v1 = *((_QWORD *)a1 + 5);
  a[0] = 0;
  v3 = *(__m128i *)(v1 + 104);
  v31 = *(__m128i *)(v1 + 88);
  v32 = v3;
  v33 = *(__m128i *)CalculateContentRect(&v34, a1, a);
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    v9 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v6, v5, v7, v8);
    if ( !ExIsResourceAcquiredSharedLite(*v9) )
    {
      LODWORD(v30) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    }
    v10 = 0LL;
    v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v11 )
      v10 = *v11;
    if ( *(_QWORD *)(v10 + 456) )
    {
      v16 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v13, v12, v14, v15);
      if ( !ExIsResourceAcquiredSharedLite(*v16) )
      {
        LODWORD(v30) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      }
      v17 = 0LL;
      v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v18 )
        v17 = *v18;
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v17 + 456) + 8LL) + 64LL) & 1) != 0 )
      {
        v19 = *((_QWORD *)a1 + 5);
        v20 = *(_DWORD *)(v19 + 288);
        if ( (v20 & 0xF) == 0 && (v20 & 0x40000000) != 0 )
        {
          v21 = *(unsigned __int16 *)(v19 + 284);
          if ( (_WORD)v21 != 96 )
          {
            v30 = 0LL;
            ScaledLogPixels = GreGetScaledLogPixels(v21);
            v23 = ScaledLogPixels;
            ScaleDPIRect(&v31, &v31, ScaledLogPixels, 0x60u, 0LL, 0LL);
            ScaleDPIRect(&v32, &v32, v23, 0x60u, 0LL, 0LL);
            ScaleDPIRect(&v33, &v33, v23, 0x60u, 0LL, 0LL);
            a[0] = EngMulDiv(a[0], v23, 96);
          }
        }
      }
    }
  }
  WindowMargins::CheckForChanges(a1, 5LL);
  v24 = *(_QWORD *)a1;
  v26 = (void *)ReferenceDwmApiPort(v25);
  result = SGDGetSessionState(v27);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 32) + 13248LL));
  if ( v26 )
  {
    memset_0(&v35, 0, 0x68uLL);
    v36 = 0x8000;
    v39 = v31;
    v35 = 6815808;
    v37 = 1073741845;
    v38 = v24;
    v41 = v33;
    v42 = a[0];
    v40 = v32;
    EtwUpdateEvent(v24, 1073741845LL);
    LpcRequestPort(v26, &v35);
    return ObfDereferenceObject(v26);
  }
  return result;
}
