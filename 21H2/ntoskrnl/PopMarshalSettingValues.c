/*
 * XREFs of PopMarshalSettingValues @ 0x140600520
 * Callers:
 *     PopGetSettingValue @ 0x14060048C (PopGetSettingValue.c)
 *     PopDispatchNotificationsToList @ 0x14066F714 (PopDispatchNotificationsToList.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopMarshalSettingValues(__int64 a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 i; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rax
  void *v12; // rax
  __int64 j; // rbx
  _DWORD *v14; // rdx
  unsigned int v15; // r14d
  unsigned int v16; // edi
  __int64 k; // rbx
  _DWORD *v18; // rcx
  PVOID P[2]; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+40h] [rbp-28h]

  *(_OWORD *)P = 0LL;
  v22 = 0LL;
  v7 = 0;
  v8 = dword_140C2332C;
  for ( i = 0LL; (unsigned int)i < 3; i = (unsigned int)(i + 1) )
  {
    v10 = (unsigned int)i;
    if ( (*(_DWORD *)(a1 + 52) & 8) != 0 )
    {
      P[i] = *(PVOID *)(a1 + 8 * v8 + 64);
    }
    else
    {
      v12 = *(void **)(a1 + 8 * i + 64);
      P[i] = v12;
      v10 = (unsigned int)i;
      if ( (_DWORD)i == 2 )
      {
        v10 = 2LL;
        if ( !v12 )
          P[i] = P[1];
      }
    }
    v7 += 8;
    v11 = P[v10];
    if ( v11 )
    {
      ++*v11;
      v7 += v11[1];
    }
  }
  if ( a3 < v7 )
  {
    v16 = -1073741789;
  }
  else
  {
    for ( j = 0LL; (unsigned int)j < 3; j = (unsigned int)(j + 1) )
    {
      v14 = P[j];
      if ( v14 )
      {
        *a2 = v14[2];
        a2[1] = v14[1];
        v15 = v14[1];
        memmove(a2 + 2, v14 + 3, v15);
      }
      else
      {
        *a2 = 0;
        a2[1] = 0;
        v15 = 0;
      }
      a2 = (_DWORD *)((char *)a2 + v15 + 8);
    }
    *a4 = v7;
    v16 = 0;
  }
  for ( k = 0LL; (unsigned int)k < 3; k = (unsigned int)(k + 1) )
  {
    v18 = P[k];
    if ( v18 )
    {
      if ( (*v18)-- == 1 )
        ExFreePoolWithTag(v18, 0x74655350u);
    }
  }
  return v16;
}
