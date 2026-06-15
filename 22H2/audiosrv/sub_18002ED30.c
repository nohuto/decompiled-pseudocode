/*
 * XREFs of sub_18002ED30 @ 0x18002ED30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002EE80 @ 0x18002EE80 (sub_18002EE80.c)
 *     sub_18002EF10 @ 0x18002EF10 (sub_18002EF10.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002ED30(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // di
  __int64 *v10; // r8
  __int64 *v11; // rdx
  __int64 *v12; // rax
  __int64 *v14; // rax
  __int64 *i; // r8
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  if ( a2 - 1 <= 1 )
  {
    v10 = *(__int64 **)(v4 + 40);
    v11 = v10;
    v12 = (__int64 *)v10[1];
    if ( *((_BYTE *)v12 + 25) )
      goto LABEL_21;
    do
    {
      if ( *((_DWORD *)v12 + 7) < a4 )
      {
        v12 = (__int64 *)v12[2];
      }
      else
      {
        v11 = v12;
        v12 = (__int64 *)*v12;
      }
    }
    while ( !*((_BYTE *)v12 + 25) );
    if ( v11 == v10 || a4 < *((_DWORD *)v11 + 7) )
LABEL_21:
      v11 = *(__int64 **)(v4 + 40);
    if ( (*((_DWORD *)v11 + 8))-- == 1 )
    {
      v14 = v11;
      if ( *(_BYTE *)(v11[2] + 25) )
      {
        for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v14 != (__int64 *)i[2] )
            break;
          v14 = i;
        }
      }
      v16 = sub_18002EF10(v4 + 40);
      sub_18006A148(v16, 40LL);
    }
  }
  if ( a2 <= 1 && (v17 = sub_18002EE80(v4, a3), v18 = v17, v17 < 0) )
  {
    sub_18004BD84(
      retaddr,
      86LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v17);
    if ( v4 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    sub_18004BD84(retaddr, 2122LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v18);
    return v18;
  }
  else
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v19 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v19 != *(_DWORD *)(v4 + 56) )
      {
        v9 = 1;
        *(_DWORD *)(v4 + 56) = v19;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    if ( v9
      && (v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019EE58 + 48LL))(
                  qword_18019EE58,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
                  a1 + 56),
          v21 = v20,
          v20 < 0) )
    {
      sub_18004BD84(
        retaddr,
        2127LL,
        "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (unsigned int)v20);
      return v21;
    }
    else
    {
      return 0LL;
    }
  }
}
