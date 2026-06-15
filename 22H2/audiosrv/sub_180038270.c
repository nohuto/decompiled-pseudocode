/*
 * XREFs of sub_180038270 @ 0x180038270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 *     sub_1800C43DC @ 0x1800C43DC (sub_1800C43DC.c)
 */

void __fastcall sub_180038270(__int64 a1, unsigned int a2, int a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  _DWORD *v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // r14
  _QWORD *v8; // rdi
  __int64 v9; // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+10h]
  int v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v15 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v5 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 12LL, &unk_18016E298, v15);
    v5 = off_18019C348;
  }
  v6 = *(_QWORD **)(a1 + 64);
  v7 = a1 + 56;
  v8 = *(_QWORD **)(a1 + 56);
  if ( v8 != v6 )
  {
    do
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
      v10 = MMDevAPI_9(v9);
      if ( v10 == v15 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 24LL))(*v8);
        if ( v11 != v16 )
          break;
      }
      ++v8;
    }
    while ( v8 != v6 );
    v5 = off_18019C348;
  }
  if ( v8 != *(_QWORD **)(a1 + 64) )
  {
    if ( v5 != (_DWORD *)&off_18019C348 && (v5[7] & 0x10000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
    {
      v12 = *v8;
      v13 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 32LL))(*v8);
      sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 13, (unsigned int)&unk_18016E298, v12, v13);
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 264LL))(*v8);
    sub_1800C43DC(v7, &v14, v8);
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
