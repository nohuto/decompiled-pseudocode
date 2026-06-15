/*
 * XREFs of sub_180006A60 @ 0x180006A60
 * Callers:
 *     sub_180005E08 @ 0x180005E08 (sub_180005E08.c)
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 * Callees:
 *     sub_180006C80 @ 0x180006C80 (sub_180006C80.c)
 *     sub_180007620 @ 0x180007620 (sub_180007620.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800D5648 @ 0x1800D5648 (sub_1800D5648.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_180006A60(__int64 a1, __int64 a2, int a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  DWORD LengthSid; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  __int64 v14; // rcx

  if ( !*(_BYTE *)(a2 + 76) || !IsValidSid((PSID)(a2 + 8)) )
    return 0;
  if ( *(_BYTE *)(a1 + 16) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
    *(_BYTE *)(a1 + 16) = 0;
  }
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = &off_180146488;
    v6[1] = off_180146480;
    *((_BYTE *)v6 + 84) = *(_BYTE *)(a2 + 76);
    *((_DWORD *)v6 + 22) = *(_DWORD *)(a2 + 80);
    v6[12] = sub_180006C80(*(_QWORD *)(a2 + 88) - 24LL) + 24;
    v7[13] = sub_180006C80(*(_QWORD *)(a2 + 96) - 24LL) + 24;
    v7[14] = sub_180006C80(*(_QWORD *)(a2 + 104) - 24LL) + 24;
    v7[15] = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
    if ( *(_BYTE *)(a2 + 76) )
    {
      if ( !IsValidSid((PSID)(a2 + 8)) )
        sub_1800B8610(2147942487LL);
      LengthSid = GetLengthSid((PSID)(a2 + 8));
      if ( !CopySid(LengthSid, v7 + 2, (PSID)(a2 + 8)) )
      {
        v14 = (unsigned int)sub_1800D5648(v10, v9, v11);
        sub_1800B8610(v14);
      }
    }
    *((_DWORD *)v7 + 32) = a3;
    *((_BYTE *)v7 + 132) = 0;
    v7[17] = 0LL;
    *v7 = off_1801464C0;
    *((_BYTE *)v7 + 144) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7
    || (v12 = *(_QWORD *)(a1 + 32), v12 >= *(_QWORD *)(a1 + 40)) && !(unsigned __int8)sub_180007620(a1 + 24, v12 + 1) )
  {
    sub_1800B8610(2147942414LL);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v12) = v7;
  ++*(_QWORD *)(a1 + 32);
  _o_free(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return 1;
}
