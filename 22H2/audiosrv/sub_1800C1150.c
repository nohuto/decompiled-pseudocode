/*
 * XREFs of sub_1800C1150 @ 0x1800C1150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C1150(__int64 a1, unsigned int a2, float a3, __int64 a4, _DWORD *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v8; // edx
  float *v9; // rax
  __int64 v10; // rax
  float *v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  float *v14; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  float v17; // [rsp+50h] [rbp+8h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( a2 >= *(_DWORD *)(a1 + 124) )
  {
    v8 = 615;
LABEL_11:
    v13 = -2147024809;
    sub_18004BD84((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", -2147024809);
    goto LABEL_12;
  }
  v9 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), a2);
  v17 = sub_18005C878(v9);
  v10 = sub_18005D19C((_QWORD *)(a1 + 88), a2);
  if ( *(float *)(v10 + 8) > a3 || a3 > *(float *)(v10 + 12) )
  {
    v8 = 620;
    goto LABEL_11;
  }
  v11 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), a2);
  sub_18005C8A4(v11, a3);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, a2);
  v13 = v12;
  if ( v12 >= 0 )
  {
    sub_18005D1C0(a1);
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 136) + 40LL))(*(_QWORD *)(a1 + 136), 0LL, a4);
    if ( a5 )
      *a5 = v17 == a3;
    v13 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 632, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v12);
    v14 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), a2);
    sub_18005C8A4(v14, v17);
  }
LABEL_12:
  if ( v5 )
    LeaveCriticalSection(v5);
  return v13;
}
