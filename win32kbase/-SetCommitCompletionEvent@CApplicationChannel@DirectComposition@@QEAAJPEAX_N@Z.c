/*
 * XREFs of ?SetCommitCompletionEvent@CApplicationChannel@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00BF308
 * Callers:
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C00BF290 (NtDCompositionSetChannelCommitCompletionEvent.c)
 * Callees:
 *     ?Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z @ 0x1C005CF5C (-Create@CEvent@DirectComposition@@SAJPEAXHPEAPEAV12@@Z.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C0099740 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::SetCommitCompletionEvent(
        DirectComposition::CApplicationChannel *this,
        NSInstrumentation::CLeakTrackingAllocator *a2,
        char a3)
{
  struct _ERESOURCE *v3; // rdi
  struct _ERESOURCE *v6; // rax
  int v7; // ebx
  DirectComposition::CEvent *v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( *((_QWORD *)this + 45) )
    return (unsigned int)-1073741790;
  if ( !a3 )
    goto LABEL_6;
  if ( (*((_BYTE *)this + 240) & 8) != 0 )
    return (unsigned int)-1073741790;
  v6 = (struct _ERESOURCE *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                              gpLeakTrackingAllocator,
                              68LL,
                              0x68uLL,
                              0x73634344u);
  v3 = v6;
  if ( !v6 )
    return (unsigned int)-1073741801;
  memset(v6, 0, sizeof(struct _ERESOURCE));
LABEL_6:
  v7 = DirectComposition::CEvent::Create(a2, (unsigned __int64)a2, &v9);
  if ( v7 < 0 )
  {
    if ( !v3 )
      goto LABEL_14;
  }
  else if ( !v3 || (v7 = ExInitializeResourceLite(v3), v7 >= 0) )
  {
    *((_QWORD *)this + 45) = v9;
    *((_QWORD *)this + 46) = v3;
    return (unsigned int)v7;
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v3);
LABEL_14:
  if ( v9 )
    DirectComposition::CEvent::`scalar deleting destructor'(v9);
  return (unsigned int)v7;
}
