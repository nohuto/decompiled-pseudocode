/*
 * XREFs of sub_1800C12E0 @ 0x1800C12E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_18005D3C0 @ 0x18005D3C0 (sub_18005D3C0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800C12E0(__int64 a1, unsigned int a2, float a3, __int64 a4, _DWORD *a5)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // r9d
  float *v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  float *v15; // rax
  float *v16; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  float v20; // [rsp+60h] [rbp+18h]

  if ( a3 < 0.0 || a3 > 1.0 )
  {
    v8 = -2147024809;
    sub_18004BD84((int)retaddr, 759, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", -2147024809);
    return v8;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( a2 < *(_DWORD *)(a1 + 124) )
  {
    v11 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), a2);
    v20 = sub_18005C878(v11);
    v12 = sub_18005D19C((_QWORD *)(a1 + 88), a2);
    v13 = sub_18005D3C0(v12, a3);
    v8 = v13;
    if ( v13 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 208LL))(a1, a2);
      v8 = v14;
      if ( v14 >= 0 )
      {
        sub_18005D1C0(a1);
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 136) + 40LL))(
          *(_QWORD *)(a1 + 136),
          0LL,
          a4);
        if ( a5 )
        {
          v16 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), a2);
          *a5 = v20 == sub_18005C878(v16);
        }
        v8 = 0;
      }
      else
      {
        sub_18004BD84((int)retaddr, 774, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v14);
        v15 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), a2);
        sub_18005C8A4(v15, v20);
      }
      goto LABEL_13;
    }
    v10 = v13;
    v9 = 768;
  }
  else
  {
    v8 = -2147024809;
    v9 = 763;
    v10 = -2147024809;
  }
  sub_18004BD84((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v10);
LABEL_13:
  if ( v7 )
    LeaveCriticalSection(v7);
  return v8;
}
