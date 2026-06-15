/*
 * XREFs of sub_180127860 @ 0x180127860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180127860(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( a2 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(a1 + 416) + 48LL))(*(_QWORD *)(a1 + 416), a2);
    if ( (int)result < 0 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 200LL))(a1, a2);
    v8 = -*a2;
    if ( !*a2 )
      v8 = -a2[1];
    if ( !v8 )
      return (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 200LL))(a1, a2);
  }
  else
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v9) = -2147024809;
      v11 = (__int64)"SpatialAudioDevicePropertyReader::GetCurrentSpatialAudioEncoderId";
      LODWORD(v10) = 805;
      sub_180109778((__int64)&dword_18019C480, byte_18016C12C, v5, v6, (const CHAR **)&v11, (__int64)&v10, (__int64)&v9);
    }
    return 2147942487LL;
  }
  return result;
}
