/*
 * XREFs of HmgAlloc @ 0x1C001E6F0
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00D9094 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C01696D0 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     EtwTraceGdiCreateHandle @ 0x1C001E804 (EtwTraceGdiCreateHandle.c)
 *     HmgDecProcessHandleCount @ 0x1C001ECFC (HmgDecProcessHandleCount.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C001F220 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C001F710 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C001F890 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     AllocateObject @ 0x1C00274B0 (AllocateObject.c)
 *     FreeObject @ 0x1C0027670 (FreeObject.c)
 *     GreAcquireHmgrSemaphore @ 0x1C002DF20 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C002E900 (GreReleaseHmgrSemaphore.c)
 *     HmgIncProcessHandleCountEx @ 0x1C016C18C (HmgIncProcessHandleCountEx.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(unsigned __int64 a1, unsigned __int8 a2, unsigned __int16 a3)
{
  unsigned int v5; // edi
  void *Object; // r15
  unsigned __int64 v7; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  GdiHandleManager *v12; // rcx
  struct HOBJ__ *v13; // rax
  __int64 v14; // rcx
  struct HOBJ__ *v15; // rbx
  unsigned int EtwGdiHandleType; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF

  v5 = 0;
  Object = (void *)AllocateObject(a1);
  if ( !Object )
    return 0LL;
  v7 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( (a3 & 0x10) == 0 )
    {
      v10 = *(_QWORD *)(ThreadWin32Thread + 72);
      if ( v10 )
        LODWORD(v7) = *(_DWORD *)(v10 + 8);
    }
  }
  GreAcquireHmgrSemaphore(v9);
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountEx((unsigned int)v7, v11, 0LL) )
  {
LABEL_17:
    GreReleaseHmgrSemaphore(v12);
    FreeObject(Object);
    return 0LL;
  }
  v19 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v12, &v19) )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount((unsigned int)v7);
    goto LABEL_17;
  }
  v13 = ENTRYOBJ::hSetup((struct OBJECT *)Object, a2, a3, v19);
  LOBYTE(v14) = a2;
  v15 = v13;
  if ( (a3 & 8) == 0 )
    v5 = v7;
  EtwGdiHandleType = GetEtwGdiHandleType(v14);
  EtwTraceGdiCreateHandle(v15, EtwGdiHandleType, v5);
  if ( (a3 & 3) != 0 )
    v15 = (struct HOBJ__ *)Object;
  GreReleaseHmgrSemaphore(v17);
  return v15;
}
