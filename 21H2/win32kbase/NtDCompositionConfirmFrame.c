/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C00812D0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059B88 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z @ 0x1C0081570 (-ConfirmFrame@CConnection@DirectComposition@@QEAAJPEAUtagCOMPOSITION_CONFIRM_FRAME_INFO@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     DirectComposition::Memory::Allocate_0 @ 0x1C00EA1F2 (DirectComposition--Memory--Allocate_0.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // rbx
  DirectComposition::CConnection *v6; // r14
  unsigned int v7; // esi
  size_t v8; // r8
  const void *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v16; // rbx
  volatile signed __int32 *v17; // rax
  int v18; // ebx
  int v20; // [rsp+20h] [rbp-238h]
  _BYTE *v21; // [rsp+28h] [rbp-230h]
  __int128 v22; // [rsp+38h] [rbp-220h] BYREF
  __int128 v23; // [rsp+48h] [rbp-210h]
  void *Src[2]; // [rsp+58h] [rbp-200h]
  __int128 v25; // [rsp+68h] [rbp-1F0h]
  __int128 v26; // [rsp+78h] [rbp-1E0h]
  __int128 v27; // [rsp+88h] [rbp-1D0h]
  _BYTE v28[416]; // [rsp+A0h] [rbp-1B8h] BYREF

  v4 = a2;
  v22 = 0LL;
  v23 = 0LL;
  *(_OWORD *)Src = 0LL;
  v21 = 0LL;
  v6 = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) != g_pepDwm )
    return 3221225506LL;
  if ( v4 )
  {
    if ( v4 + 3 < v4 || (unsigned __int64)(v4 + 3) > MmUserProbeAddress )
      v4 = (__int128 *)MmUserProbeAddress;
    v25 = *v4;
    v26 = v4[1];
    v27 = v4[2];
    v22 = v25;
    v23 = v26;
    *(_OWORD *)Src = v27;
    if ( (_QWORD)v25 )
    {
      v7 = (unsigned int)Src[0];
      if ( (unsigned int)v27 > 0x100 )
        v7 = 256;
      LODWORD(Src[0]) = v7;
      if ( v7 <= 4 )
      {
        v21 = v28;
        goto LABEL_10;
      }
      v21 = (_BYTE *)DirectComposition::Memory::Allocate_0(104LL * v7);
      if ( v21 )
      {
LABEL_10:
        v20 = 0;
        v8 = 104LL * v7;
        v9 = Src[1];
        if ( (char *)Src[1] + v8 < Src[1] || (char *)Src[1] + v8 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v21, v9, v8);
        Src[1] = v21;
        goto LABEL_18;
      }
      v20 = -1073741801;
    }
    else
    {
      v20 = -1073741811;
    }
  }
  else
  {
    v20 = -1073741811;
  }
LABEL_18:
  if ( v20 >= 0 )
  {
    KeEnterCriticalRegion();
    v10 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11, v13, v14);
    if ( CurrentProcessWin32Process )
      v10 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v10 )
    {
      v16 = *(struct _ERESOURCE **)(v10 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v16, 1u);
      v17 = *(volatile signed __int32 **)(v10 + 24);
      if ( v17 && a1 == *(_QWORD *)(v10 + 16) )
      {
        _InterlockedIncrement(v17);
        v6 = *(DirectComposition::CConnection **)(v10 + 24);
        v18 = 0;
      }
      else
      {
        v18 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v18 = -1073741823;
    }
    v20 = v18;
    if ( v18 >= 0 )
    {
      v20 = DirectComposition::CConnection::ConfirmFrame(v6, (struct tagCOMPOSITION_CONFIRM_FRAME_INFO *)&v22);
      v21 = 0LL;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      {
        if ( v6 )
          DirectComposition::CConnection::`scalar deleting destructor'(v6);
      }
    }
    KeLeaveCriticalRegion();
  }
  if ( v21 )
  {
    if ( v21 != v28 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        v21);
  }
  return (unsigned int)v20;
}
