/*
 * XREFs of ??1?$CAutoExclusiveCReaderWriterLock@VCPrioritizedWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C026A828
 * Callers:
 *     ?Insert@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z @ 0x1C0080554 (-Insert@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K0@Z.c)
 *     ?Remove@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z @ 0x1C0080D84 (-Remove@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_K@Z.c)
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C00A225C (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?Insert@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@@Z @ 0x1C0114828 (-Insert@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIAEBQEAU_FONTFILEVIEW@@.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPrioritizedWriterLock>(
        __int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  _InterlockedDecrement((volatile signed __int32 *)(v1 + 28));
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
