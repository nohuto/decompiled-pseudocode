/*
 * XREFs of HmgAlloc @ 0x1C0052E60
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C00EEC00 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C017F048 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 * Callees:
 *     GreReleaseHmgrSemaphore @ 0x1C0049700 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0049780 (GreAcquireHmgrSemaphore.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     HmgDecProcessHandleCount @ 0x1C004FDA0 (HmgDecProcessHandleCount.c)
 *     HmgIncProcessHandleCountEx @ 0x1C004FEB0 (HmgIncProcessHandleCountEx.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C00510C0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C005168C (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C0051F60 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     AllocateObject @ 0x1C0052FA0 (AllocateObject.c)
 *     EtwTraceGdiCreateHandle @ 0x1C005365C (EtwTraceGdiCreateHandle.c)
 *     FreeObject @ 0x1C00597F0 (FreeObject.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(__int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  unsigned int v5; // ebx
  unsigned int v6; // edi
  void *Object; // r15
  unsigned __int64 v8; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rcx
  struct HOBJ__ *v14; // rbx
  unsigned int EtwGdiHandleType; // eax
  __int64 v16; // rcx
  unsigned int v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h]

  v5 = a1;
  v19 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v6 = 0;
  Object = (void *)AllocateObject(v5);
  if ( !Object )
    return 0LL;
  v8 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( (a3 & 0x10) == 0 )
    {
      v11 = *(_QWORD *)(ThreadWin32Thread + 72);
      if ( v11 )
        LODWORD(v8) = *(_DWORD *)(v11 + 8);
    }
  }
  GreAcquireHmgrSemaphore(v10);
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountEx((unsigned int)v8, v12, 0) )
  {
LABEL_17:
    GreReleaseHmgrSemaphore(v13);
    FreeObject(Object);
    return 0LL;
  }
  v18 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(*(GdiHandleManager **)(v19 + 8008), &v18) )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount(v8);
    goto LABEL_17;
  }
  v14 = ENTRYOBJ::hSetup((struct OBJECT *)Object, a2, a3, v18);
  if ( (a3 & 8) == 0 )
    v6 = v8;
  EtwGdiHandleType = GetEtwGdiHandleType(a2);
  EtwTraceGdiCreateHandle(v14, EtwGdiHandleType, v6);
  if ( (a3 & 3) != 0 )
    v14 = (struct HOBJ__ *)Object;
  GreReleaseHmgrSemaphore(v16);
  return v14;
}
