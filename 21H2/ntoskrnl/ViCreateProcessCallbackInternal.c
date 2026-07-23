/*
 * XREFs of ViCreateProcessCallbackInternal @ 0x1409DDAA4
 * Callers:
 *     ViCreateProcessCallback @ 0x14024AA00 (ViCreateProcessCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402CE500 (KeReleaseSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlUpcaseUnicodeString @ 0x14067B110 (RtlUpcaseUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14067B25C (PsGetAllocatedFullProcessImageName.c)
 *     PsLookupProcessByProcessId @ 0x14068F4F0 (PsLookupProcessByProcessId.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ViFaultsGetBaseImageName @ 0x1409DDF78 (ViFaultsGetBaseImageName.c)
 *     ViFaultsIsAppTarget @ 0x1409DE224 (ViFaultsIsAppTarget.c)
 */

void __fastcall ViCreateProcessCallbackInternal(void *a1, char a2)
{
  volatile signed __int32 *p_Lock; // rbx
  PVOID v3; // rdi
  KIRQL v4; // si
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PEPROCESS Process; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  if ( a2 )
  {
    Process = 0LL;
    P = 0LL;
    SourceString = 0LL;
    if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    {
      p_Lock = &Process->Header.Lock;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
      {
        v3 = P;
        ViFaultsGetBaseImageName(P, &SourceString);
        RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
        v4 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
        if ( (unsigned int)ViFaultsIsAppTarget(&SourceString) )
        {
          _InterlockedOr(p_Lock + 280, 0x10000u);
          p_Lock = &Process->Header.Lock;
          v3 = P;
        }
        KeReleaseSpinLock(&ViFaultInjectionLock, v4);
        ExFreePoolWithTag(v3, 0);
      }
      ObfDereferenceObjectWithTag((PVOID)p_Lock, 0x746C6644u);
    }
  }
}
