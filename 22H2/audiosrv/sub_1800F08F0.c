/*
 * XREFs of sub_1800F08F0 @ 0x1800F08F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800EFE6C @ 0x1800EFE6C (sub_1800EFE6C.c)
 *     sub_1800F05E0 @ 0x1800F05E0 (sub_1800F05E0.c)
 *     sub_1800F07B4 @ 0x1800F07B4 (sub_1800F07B4.c)
 *     sub_1800F16AC @ 0x1800F16AC (sub_1800F16AC.c)
 */

void __fastcall sub_1800F08F0(__int64 a1, __int64 **a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  __int64 **v4; // rdx
  __int64 v5; // rsi
  __int64 **v6; // rbp
  __int64 **v7; // rbx
  __int64 **v8; // rdi
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 **v10; // [rsp+58h] [rbp+10h]
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v4 = v10;
  v5 = (*v10)[1];
  v9 = v5;
  v6 = *(__int64 ***)(v5 + 56);
  v7 = *(__int64 ***)(v5 + 48);
  if ( v7 != v6 )
  {
    do
    {
      if ( *v7 == *v10 )
        break;
      ++v7;
    }
    while ( v7 != v6 );
    if ( v7 != v6 )
    {
      v8 = v7 + 1;
      if ( v7 + 1 != v6 )
      {
        do
        {
          if ( *v8 != *v4 )
          {
            sub_1800F07B4(v7++, v8);
            v4 = v10;
          }
          ++v8;
        }
        while ( v8 != v6 );
        v5 = v9;
      }
    }
  }
  sub_1800EFE6C(v7, *(__int64 ***)(v5 + 56));
  *(_QWORD *)(v5 + 56) = v7;
  if ( ((*(_QWORD *)(v9 + 56) - *(_QWORD *)(v9 + 48)) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
  {
    sub_1800F05E0(&v11, *(_QWORD **)(a1 + 56), *(_QWORD **)(a1 + 64), &v9);
    sub_1800F16AC(a1 + 56, &v11, v11, *(_QWORD *)(a1 + 64));
  }
  *v10 = 0LL;
  if ( v3 )
    LeaveCriticalSection(v3);
}
