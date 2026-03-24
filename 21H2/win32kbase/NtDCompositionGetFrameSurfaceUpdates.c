/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C005C470
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C005C904 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00AB19C (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(ULONG64 a1, ULONG64 a2, _DWORD *a3)
{
  _DWORD *v4; // r14
  __int64 v5; // rsi
  unsigned int v6; // edx
  struct DirectComposition::CConnection *DefaultConnection; // rdi
  int v8; // eax
  __int64 v9; // rcx
  signed int v11; // [rsp+30h] [rbp-58h]
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+40h] [rbp-48h]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v15[7]; // [rsp+50h] [rbp-38h] BYREF
  int v16; // [rsp+90h] [rbp+8h] BYREF
  ULONG64 v17; // [rsp+98h] [rbp+10h]
  _DWORD *v18; // [rsp+A0h] [rbp+18h]
  int v19; // [rsp+A8h] [rbp+20h]

  v18 = a3;
  v17 = a2;
  v4 = (_DWORD *)a2;
  v16 = 0;
  v19 = 0;
  v5 = 0LL;
  v13 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v5 = *(_QWORD *)a1;
    v13 = v5;
    a1 = v5 == 0 ? 0xC000000D : 0;
    v11 = v5 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1, a2) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
      if ( DefaultConnection )
      {
        v12 = 0LL;
        v8 = -1073741275;
        v9 = *((_QWORD *)DefaultConnection + 23);
        if ( v9 )
          v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, v5, &v12);
        v11 = v8;
        if ( v8 >= 0 )
        {
          v15[0] = 0LL;
          v14 = 0LL;
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64 *))(**((_QWORD **)DefaultConnection + 31)
                                                                                + 56LL))(
                  *((_QWORD *)DefaultConnection + 31),
                  v15,
                  &v14);
          if ( v11 >= 0 )
            v19 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *))(*(_QWORD *)v12 + 48LL))(
                    v12,
                    v15[0],
                    v14 / 0xC8,
                    &v16);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)DefaultConnection, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(DefaultConnection, v6);
      }
      else
      {
        v11 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v11 = -1073741790;
    }
  }
  if ( v4 + 1 < v4 || (unsigned __int64)(v4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v4 = v16;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v19;
  return (unsigned int)v11;
}
