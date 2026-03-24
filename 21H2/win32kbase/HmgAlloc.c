/*
 * XREFs of HmgAlloc @ 0x1C0001410
 * Callers:
 *     ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00C7F84 (--0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C013C240 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 * Callees:
 *     EtwTraceGdiCreateHandle @ 0x1C0001540 (EtwTraceGdiCreateHandle.c)
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1C0001560 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     FreeObject @ 0x1C002A7D0 (FreeObject.c)
 *     AllocateObject @ 0x1C002A850 (AllocateObject.c)
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002BB50 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     ?GetEtwGdiHandleType@@YA?AW4EtwGdiHandleType@@E@Z @ 0x1C0032170 (-GetEtwGdiHandleType@@YA-AW4EtwGdiHandleType@@E@Z.c)
 *     HmgDecProcessHandleCount @ 0x1C0032248 (HmgDecProcessHandleCount.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0038C20 (GreReleaseHmgrSemaphore.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0038D70 (GreAcquireHmgrSemaphore.c)
 *     HmgIncProcessHandleCountEx @ 0x1C00C9980 (HmgIncProcessHandleCountEx.c)
 */

struct HOBJ__ *__fastcall HmgAlloc(size_t a1, unsigned __int8 a2, unsigned __int16 a3)
{
  unsigned int v4; // r15d
  struct OBJECT *Object; // r14
  unsigned __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  GdiHandleManager *v10; // rcx
  struct HOBJ__ *v11; // rax
  __int64 v12; // rcx
  struct HOBJ__ *v13; // rbx
  unsigned int EtwGdiHandleType; // eax
  unsigned int v16; // [rsp+58h] [rbp+10h] BYREF

  v4 = a2;
  Object = (struct OBJECT *)AllocateObject(a1);
  if ( !Object )
    return 0LL;
  v6 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (a3 & 0x10) != 0 )
    v8 = 0LL;
  else
    v8 = *(_QWORD *)(ThreadWin32Thread + 72);
  if ( v8 )
    LODWORD(v6) = *(_DWORD *)(v8 + 8);
  GreAcquireHmgrSemaphore();
  if ( (a3 & 8) == 0 && !(unsigned int)HmgIncProcessHandleCountEx((unsigned int)v6, v9, 0LL) )
  {
LABEL_18:
    GreReleaseHmgrSemaphore();
    FreeObject(Object, v4);
    return 0LL;
  }
  v16 = 0;
  if ( !GdiHandleManager::AcquireEntryIndex(v10, &v16) )
  {
    if ( (a3 & 8) == 0 )
      HmgDecProcessHandleCount((unsigned int)v6);
    goto LABEL_18;
  }
  v11 = ENTRYOBJ::hSetup(Object, v4, a3, v16);
  LOBYTE(v12) = v4;
  v13 = v11;
  if ( (a3 & 8) != 0 )
    LODWORD(v6) = 0;
  EtwGdiHandleType = GetEtwGdiHandleType(v12);
  EtwTraceGdiCreateHandle(v13, EtwGdiHandleType, (unsigned int)v6);
  if ( (a3 & 3) != 0 )
    v13 = Object;
  GreReleaseHmgrSemaphore();
  return v13;
}
