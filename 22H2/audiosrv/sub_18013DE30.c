/*
 * XREFs of sub_18013DE30 @ 0x18013DE30
 * Callers:
 *     sub_18013D0B0 @ 0x18013D0B0 (sub_18013D0B0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18013DE30(__int64 a1)
{
  __int64 v2; // rcx
  char *v3; // rcx
  __int64 v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx

  if ( *(_DWORD *)(a1 + 48) )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 80LL))(v2, a1 + 8);
    *(_DWORD *)(a1 + 48) = 0;
  }
  v3 = *(char **)(a1 + 216);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    SetEvent(v3);
    WaitForSingleObject(*(HANDLE *)(a1 + 224), 0xFFFFFFFF);
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(char **)(a1 + 208);
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v5);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v6 = *(char **)(a1 + 216);
  if ( (unsigned __int64)(v6 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v6);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
  v7 = *(char **)(a1 + 224);
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v7);
    *(_QWORD *)(a1 + 224) = 0LL;
  }
  return sub_18013DD70((__int64 *)(a1 + 120));
}
