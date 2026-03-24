/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C007ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C007F008 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00AB19C (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(struct HDCOMPOSITIONCONNECTION__ *a1, __int64 *a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edx
  __int64 v5; // rcx
  int v6; // eax
  struct DirectComposition::CConnection *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rcx
  signed int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  struct DirectComposition::CConnection *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v3 = *a2;
    v11 = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    KeEnterCriticalRegion();
    v11 = DirectComposition::CConnection::ReferenceHandle(a1, &v13);
    if ( v11 >= 0 )
    {
      v5 = 0LL;
      v12 = 0LL;
      v6 = -1073741275;
      v7 = v13;
      v8 = *((_QWORD *)v13 + 23);
      if ( v8 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v8 + 32LL))(
               *((_QWORD *)v13 + 23),
               v3,
               &v12);
        v5 = v12;
      }
      v11 = v6;
      if ( v6 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      }
      v9 = *((_QWORD *)v7 + 23);
      if ( v9 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v3);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v13, v4);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v11;
}
