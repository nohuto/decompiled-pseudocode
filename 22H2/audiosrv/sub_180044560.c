/*
 * XREFs of sub_180044560 @ 0x180044560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180044560(__int64 a1, _DWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // ebx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+80h] [rbp+30h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  int v12; // [rsp+98h] [rbp+48h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v5 = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( *(_DWORD *)(a1 + 512) )
  {
    if ( a2 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 416) + 32LL))(*(_QWORD *)(a1 + 416), &v12);
      v7 = v6;
      if ( v6 < 0 )
      {
        if ( (unsigned int)dword_18019C480 > 2 )
        {
          LODWORD(v10) = v6;
          LODWORD(v11) = 855;
          v9[0] = (__int64)"SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
          sub_180109778((int)&dword_18019C480, (__int64)v9, (__int64)&v11, (__int64)&v10);
        }
      }
      else
      {
        if ( !v12 )
          v5 = *(_DWORD *)(a1 + 500);
        *a2 = v5;
      }
    }
    else
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        LODWORD(v10) = -2147024809;
        v9[0] = (__int64)"SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
        LODWORD(v11) = 851;
        sub_180109778((int)&dword_18019C480, (__int64)v9, (__int64)&v11, (__int64)&v10);
      }
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v10) = -2147418113;
      v9[0] = (__int64)"SpatialAudioDevicePropertyReader::GetVirtualSurroundEffectMode";
      LODWORD(v11) = 850;
      sub_180109778((int)&dword_18019C480, (__int64)v9, (__int64)&v11, (__int64)&v10);
    }
    return (unsigned int)-2147418113;
  }
  return v7;
}
