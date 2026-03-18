/*
 * XREFs of ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00FA4B8
 * Callers:
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C000B73C (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C0010648 (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00DDC90 (-Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C00DDDA0 (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?LookUp@?$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z @ 0x1C012A0AC (-LookUp@-$CSortedVector@_K_K@NSInstrumentation@@QEAA_NAEB_KPEA_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NSInstrumentation::CPrioritizedWriterLock::ReleaseShared(
        NSInstrumentation::CPrioritizedWriterLock *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) <= 1
    && *((_DWORD *)this + 7)
    && _InterlockedCompareExchange((volatile signed __int32 *)this + 4, 1, 0) == -1 )
  {
    _InterlockedExchange((volatile __int32 *)this + 4, 1);
    KeSetEvent(*((PRKEVENT *)this + 1), 0, 0);
  }
}
