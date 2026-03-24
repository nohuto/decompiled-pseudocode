/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C007EE10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C007F008 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00AB19C (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(struct HDCOMPOSITIONCONNECTION__ *a1, __int64 *a2, __int128 *a3)
{
  __int64 v4; // rdi
  unsigned int v5; // edx
  struct DirectComposition::CConnection *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rcx
  signed int v13; // [rsp+20h] [rbp-78h]
  __int64 v14; // [rsp+28h] [rbp-70h] BYREF
  struct DirectComposition::CConnection *v15; // [rsp+30h] [rbp-68h] BYREF
  __int64 v16; // [rsp+38h] [rbp-60h]
  __int128 v17; // [rsp+48h] [rbp-50h]
  __int128 v18; // [rsp+58h] [rbp-40h]
  __int128 v19; // [rsp+68h] [rbp-30h] BYREF
  __int128 v20; // [rsp+78h] [rbp-20h]

  v19 = 0LL;
  v20 = 0LL;
  v4 = 0LL;
  v16 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v4 = *a2;
    v16 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v17 = *a3;
    v18 = a3[1];
    v19 = v17;
    v20 = v18;
    v13 = v4 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 >= 0 )
  {
    v15 = 0LL;
    KeEnterCriticalRegion();
    v13 = DirectComposition::CConnection::ReferenceHandle(a1, &v15);
    if ( v13 >= 0 )
    {
      v6 = v15;
      v7 = *((_QWORD *)v15 + 23);
      if ( v7 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 40LL))(v7, v4);
      v8 = 0LL;
      v14 = 0LL;
      v9 = -1073741275;
      v10 = *((_QWORD *)v6 + 23);
      if ( v10 )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v10 + 32LL))(
               *((_QWORD *)v6 + 23),
               v4,
               &v14);
        v8 = v14;
      }
      v13 = v9;
      if ( v9 >= 0 )
      {
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 24LL))(v8, &v19);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
      v11 = *((_QWORD *)v6 + 23);
      if ( v11 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v15, v5);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
