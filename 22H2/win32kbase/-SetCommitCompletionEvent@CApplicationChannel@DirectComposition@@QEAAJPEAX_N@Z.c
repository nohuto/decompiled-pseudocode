/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C0021018
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0020FA0 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0022500 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C00235FC (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        void *a2,
        char a3)
{
  struct _ERESOURCE *v3; // rdi
  struct _ERESOURCE *v6; // rax
  unsigned int v7; // edx
  NTSTATUS v8; // ebx
  DirectComposition::CEvent *v10; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  if ( *((_QWORD *)this + 45) )
    return (unsigned int)-1073741790;
  if ( !a3 )
    goto LABEL_6;
  if ( (*((_BYTE *)this + 240) & 8) != 0 )
    return (unsigned int)-1073741790;
  v6 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              0x44uLL,
                              0x68uLL,
                              0x73634344u);
  v3 = v6;
  if ( !v6 )
    return (unsigned int)-1073741801;
  memset(v6, 0, sizeof(struct _ERESOURCE));
LABEL_6:
  v8 = DirectComposition::CEvent::Create(a2, (int)a2, &v10);
  if ( v8 < 0 )
  {
    if ( !v3 )
      goto LABEL_14;
  }
  else if ( !v3 || (v8 = ExInitializeResourceLite(v3), v8 >= 0) )
  {
    *((_QWORD *)this + 45) = v10;
    *((_QWORD *)this + 46) = v3;
    return (unsigned int)v8;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
LABEL_14:
  if ( v10 )
    DirectComposition::CEvent::`scalar deleting destructor'(v10, v7);
  return (unsigned int)v8;
}
