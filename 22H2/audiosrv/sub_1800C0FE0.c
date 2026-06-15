/*
 * XREFs of sub_1800C0FE0 @ 0x1800C0FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_18005D3C0 @ 0x18005D3C0 (sub_18005D3C0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C0FE0(__int64 a1, unsigned int a2, float *a3, __int64 a4, _DWORD *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // r14
  __int64 v7; // r13
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // r9d
  int v13; // ebp
  unsigned int v14; // esi
  float v15; // xmm6_4
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v7 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( a2 >= *(_DWORD *)(a1 + 124) )
  {
    v10 = -2147024809;
    v11 = 816;
    v12 = -2147024809;
    goto LABEL_12;
  }
  v13 = 0;
  v14 = 0;
  if ( !a2 )
  {
LABEL_9:
    sub_18005D1C0(a1);
    v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    v10 = v18;
    if ( v18 < 0 )
    {
      v11 = 843;
      goto LABEL_11;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 136) + 40LL))(*(_QWORD *)(a1 + 136), 0LL, v7);
    if ( a5 )
      *a5 = v13 == 0;
    v10 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    v15 = *a3;
    v16 = sub_18005D19C((_QWORD *)(a1 + 88), v14);
    if ( sub_1800543D0(v16) != v15 )
      break;
LABEL_7:
    ++v14;
    ++a3;
    if ( v14 >= a2 )
    {
      v7 = a4;
      goto LABEL_9;
    }
  }
  v17 = sub_18005D19C((_QWORD *)(a1 + 88), v14);
  v18 = sub_18005D3C0(v17, v15);
  v10 = v18;
  if ( v18 >= 0 )
  {
    ++v13;
    goto LABEL_7;
  }
  v11 = 827;
LABEL_11:
  v12 = v18;
LABEL_12:
  sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v12);
LABEL_17:
  if ( v5 )
    LeaveCriticalSection(v5);
  return v10;
}
