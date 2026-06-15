/*
 * XREFs of sub_1800C50AC @ 0x1800C50AC
 * Callers:
 *     sub_1800C5DC0 @ 0x1800C5DC0 (sub_1800C5DC0.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_1800B91F4 @ 0x1800B91F4 (sub_1800B91F4.c)
 *     sub_1800C4DB0 @ 0x1800C4DB0 (sub_1800C4DB0.c)
 *     sub_1800C5024 @ 0x1800C5024 (sub_1800C5024.c)
 *     sub_1800C5260 @ 0x1800C5260 (sub_1800C5260.c)
 *     sub_1800C59F8 @ 0x1800C59F8 (sub_1800C59F8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C50AC(__int64 a1, const WCHAR *a2, int a3, int a4, struct _RTL_CRITICAL_SECTION *a5)
{
  _QWORD *p_DebugInfo; // rsi
  _QWORD *i; // rdi
  __int64 v10; // rbx
  LPVOID v11; // rax
  __int64 v12; // rbx
  int v13; // edi
  __int64 *v14; // rax
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = a1;
  p_DebugInfo = &a5->DebugInfo;
  a5->DebugInfo = 0LL;
  EnterCriticalSection(&stru_18019EF00);
  a5 = &stru_18019EF00;
  for ( i = (_QWORD *)qword_18019EF28; i; i = (_QWORD *)*i )
  {
    v10 = i[2];
    if ( CompareStringOrdinal(a2, -1, *(LPCWCH *)(v10 + 24), -1, 1) == 2
      && a3 == *(_DWORD *)(v10 + 32)
      && a4 == *(_DWORD *)(v10 + 36) )
    {
      if ( ++*(_DWORD *)(v10 + 72) < 0x3FFFFFFFu )
      {
        v13 = 0;
        *p_DebugInfo = v10;
        goto LABEL_22;
      }
      sub_1800C59F8(v10);
      goto LABEL_14;
    }
  }
  v11 = sub_18006A18C(0xE8uLL);
  v16 = (__int64)v11;
  if ( v11 )
    v12 = sub_1800C4DB0((__int64)v11);
  else
    v12 = 0LL;
  v16 = v12;
  if ( !v12 )
  {
LABEL_14:
    v13 = -2147024882;
    goto LABEL_22;
  }
  v13 = sub_1800C5260((PVOID)v12);
  if ( v13 >= 0 )
  {
    v14 = sub_1800B91F4((__int64)&qword_18019EF28, &v16, xmmword_18019EF30);
    if ( (_QWORD)xmmword_18019EF30 )
      *(_QWORD *)xmmword_18019EF30 = v14;
    else
      qword_18019EF28 = (__int64)v14;
    *(_QWORD *)&xmmword_18019EF30 = v14;
    *(_QWORD *)(v12 + 80) = v14;
    ++*(_DWORD *)(v12 + 72);
    *p_DebugInfo = v12;
    v13 = 0;
    v12 = 0LL;
  }
  if ( v12 )
    sub_1800C5024((void *)v12);
LABEL_22:
  LeaveCriticalSection(&stru_18019EF00);
  return (unsigned int)v13;
}
