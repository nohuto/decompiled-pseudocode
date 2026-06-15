/*
 * XREFs of sub_18002EBB0 @ 0x18002EBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EE80 @ 0x18002EE80 (sub_18002EE80.c)
 *     sub_18002EF10 @ 0x18002EF10 (sub_18002EF10.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002EBB0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v9; // rbx
  char v10; // bp
  unsigned int v11; // r13d
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  __int64 *v14; // rax
  __int64 *v16; // rax
  __int64 *i; // r8
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  __int64 v22; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v9 = *(_QWORD *)(a1 + 72);
  v10 = 0;
  v11 = *(_DWORD *)(v9 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)v9);
  if ( a2 - 1 <= 1 )
  {
    v12 = *(__int64 **)(v9 + 40);
    v13 = v12;
    v14 = (__int64 *)v12[1];
    if ( *((_BYTE *)v14 + 25) )
      goto LABEL_24;
    do
    {
      if ( *((_DWORD *)v14 + 7) < a4 )
      {
        v14 = (__int64 *)v14[2];
      }
      else
      {
        v13 = v14;
        v14 = (__int64 *)*v14;
      }
    }
    while ( !*((_BYTE *)v14 + 25) );
    if ( v13 == v12 || a4 < *((_DWORD *)v13 + 7) )
LABEL_24:
      v13 = *(__int64 **)(v9 + 40);
    if ( (*((_DWORD *)v13 + 8))-- == 1 )
    {
      v16 = v13;
      if ( *(_BYTE *)(v13[2] + 25) )
      {
        for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v16 != (__int64 *)i[2] )
            break;
          v16 = i;
        }
      }
      v18 = sub_18002EF10(v9 + 40);
      sub_18006A148(v18, 40LL);
    }
  }
  if ( a2 <= 1 && (v19 = sub_18002EE80(v9, a3), v20 = v19, v19 < 0) )
  {
    sub_18004BD84(
      retaddr,
      86LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v19);
    if ( v9 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v9);
  }
  else
  {
    if ( *(_QWORD *)(v9 + 48) )
    {
      v21 = *(_DWORD *)(**(_QWORD **)(v9 + 40) + 28LL);
      if ( v21 != *(_DWORD *)(v9 + 56) )
      {
        v10 = 1;
        *(_DWORD *)(v9 + 56) = v21;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v9);
    v20 = 0;
    if ( v10 )
    {
      v22 = *(_QWORD *)(a1 + 88);
      if ( v22 )
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v22 + 72LL))(
                v22,
                1LL,
                *(unsigned int *)(*(_QWORD *)(a1 + 72) + 56LL),
                v11);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v20;
}
