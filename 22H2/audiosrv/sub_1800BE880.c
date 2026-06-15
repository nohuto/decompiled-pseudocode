/*
 * XREFs of sub_1800BE880 @ 0x1800BE880
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800BE880(__int64 a1, int a2)
{
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+64h] [rbp+Ch]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h]

  v4 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x1Bu, (__int64)&unk_18016DA10, a1, a2);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v13 = a1 + 56;
  *(_DWORD *)(a1 + 24) = a2;
  v6 = *(_QWORD *)(a1 + 48);
  if ( !v6 )
    goto LABEL_13;
  v12 = 50000LL;
  LOBYTE(v5) = a2 != 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(
         v6,
         v5,
         0LL,
         1LL,
         &v12);
  v4 = v7;
  if ( v7 == -2147417848 || v7 == -2147023174 )
  {
    sub_180071C14((_QWORD *)(a1 + 48));
    v4 = 0;
  }
  if ( v4 < 0 )
  {
    sub_18005E8F8((__int64)"CMuteSoftware::SetMuteValue", 884, v4);
  }
  else
  {
LABEL_13:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x1Cu, (__int64)&unk_18016DA10, a1);
    }
    *(_BYTE *)(a1 + 104) = 1;
    v10 = -10000000;
    v11 = -1;
    if ( qword_18019E640 )
      (*(void (__fastcall **)(__int64, _QWORD, int *, _QWORD, _DWORD))(*(_QWORD *)qword_18019E640 + 24LL))(
        qword_18019E640,
        *(_QWORD *)(a1 + 96),
        &v10,
        0LL,
        0);
  }
  if ( a1 != -56 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  return (unsigned int)v4;
}
