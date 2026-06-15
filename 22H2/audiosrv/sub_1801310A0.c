/*
 * XREFs of sub_1801310A0 @ 0x1801310A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_1801310A0(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  void *v8; // rbx
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  signed int v13; // ebx
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF
  HANDLE TargetHandle; // [rsp+48h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  TargetHandle = 0LL;
  if ( !*(_QWORD *)(a1 + 40) || !lpCriticalSection )
    return 2147942487LL;
  if ( !a4
    || (v8 = *(void **)&lpCriticalSection[2].LockCount,
        CurrentProcess = GetCurrentProcess(),
        DuplicateHandle(CurrentProcess, a4, v8, &TargetHandle, 0, 0, 2u)) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 40) + 48LL))(
            *(_QWORD *)(a1 + 40),
            a2,
            a3);
  }
  else
  {
    LastError = GetLastError();
    v13 = LastError;
    if ( LastError > 0 )
      v13 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( v13 < 0 && (unsigned int)dword_18019C4B8 > 2 )
  {
    LODWORD(v18) = v13;
    v17 = (__int64)"CAPOWrapperClient::GetEffectsList";
    LODWORD(v15) = 226;
    sub_180109778(
      (__int64)&dword_18019C4B8,
      byte_18016C251,
      v11,
      v12,
      (const CHAR **)&v17,
      (__int64)&v15,
      (__int64)&v18);
  }
  return (unsigned int)v13;
}
