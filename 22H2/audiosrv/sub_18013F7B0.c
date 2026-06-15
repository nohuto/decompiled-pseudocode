/*
 * XREFs of sub_18013F7B0 @ 0x18013F7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013FDDC @ 0x18013FDDC (sub_18013FDDC.c)
 *     sub_180140028 @ 0x180140028 (sub_180140028.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18013F7B0(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  _DWORD *v8; // rbx
  int v9; // eax
  _DWORD *v10; // rax
  char v11; // al
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v14; // [rsp+28h] [rbp-8h]
  int v15; // [rsp+70h] [rbp+40h] BYREF
  __int64 v16; // [rsp+78h] [rbp+48h] BYREF
  _DWORD *v17; // [rsp+88h] [rbp+58h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 136));
  v6 = 0;
  v7 = 0LL;
  v16 = 0LL;
  v8 = 0LL;
  v17 = 0LL;
  v15 = 0;
  if ( !a2 || !a3 )
  {
    v6 = -2147467261;
    goto LABEL_19;
  }
  if ( *(int *)a2 >= 3 )
    goto LABEL_5;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a1 + 96LL))(a1, a2, &v15);
  if ( v9 < 0 )
    goto LABEL_7;
  if ( !v15 )
    goto LABEL_5;
  v10 = sub_180055F40(0x438uLL);
  v8 = v10;
  v17 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = off_18014B3E0;
    *((_QWORD *)v10 + 1) = *(_QWORD *)a2;
    v10[4] = 0;
    v10[5] = 0;
    v10[268] = 2;
    memset(v10 + 6, 0, 0x418uLL);
    *(_QWORD *)v8 = off_1801563B0;
  }
  else
  {
    v8 = 0LL;
  }
  v17 = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
    goto LABEL_19;
  }
  if ( (unsigned int)sub_18013FDDC(a1, v8) )
  {
    *a3 = v8[4];
    goto LABEL_19;
  }
  v11 = sub_180140028(a1 + 184, *(unsigned int *)(a2 + 4), &v16);
  v7 = v16;
  if ( !v11 )
  {
LABEL_5:
    v6 = -2147024809;
    goto LABEL_19;
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v16 + 40LL))(v16, a3);
  if ( v9 < 0 )
LABEL_7:
    v6 = v9;
LABEL_19:
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v8 + 8LL))(v8, 1LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
