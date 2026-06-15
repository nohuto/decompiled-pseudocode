/*
 * XREFs of ??_GCPBMStreamClassVolumeGainStage@@UEAAPEAXI@Z @ 0x18000D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

CPBMStreamClassVolumeGainStage *__fastcall CPBMStreamClassVolumeGainStage::`scalar deleting destructor'(
        CPBMStreamClassVolumeGainStage *this,
        char a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = (volatile signed __int32 *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  *((_DWORD *)this + 13) = -1073741823;
  *(_QWORD *)this = &CGainStage::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x48);
  return this;
}
