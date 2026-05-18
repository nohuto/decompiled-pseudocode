/*
 * XREFs of sub_1800F9D6C @ 0x1800F9D6C
 * Callers:
 *     sub_1800FB310 @ 0x1800FB310 (sub_1800FB310.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_1800AC348 @ 0x1800AC348 (sub_1800AC348.c)
 *     sub_1800AC570 @ 0x1800AC570 (sub_1800AC570.c)
 *     sub_1800AC620 @ 0x1800AC620 (sub_1800AC620.c)
 *     sub_1800AC6E0 @ 0x1800AC6E0 (sub_1800AC6E0.c)
 *     sub_1800FAFA0 @ 0x1800FAFA0 (sub_1800FAFA0.c)
 *     sub_1800FB0F8 @ 0x1800FB0F8 (sub_1800FB0F8.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800F9D6C(__int64 a1)
{
  __int128 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rcx
  int *v5; // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  int *v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // xmm1_4
  unsigned int v18; // xmm2_4
  _DWORD v19[2]; // [rsp+38h] [rbp-39h] BYREF
  __int64 v20; // [rsp+40h] [rbp-31h]
  __int128 v21; // [rsp+48h] [rbp-29h] BYREF
  __int128 v22; // [rsp+58h] [rbp-19h] BYREF
  __int128 v23; // [rsp+68h] [rbp-9h] BYREF
  __int128 v24; // [rsp+78h] [rbp+7h] BYREF
  __int128 v25; // [rsp+88h] [rbp+17h]
  __int128 v26; // [rsp+98h] [rbp+27h] BYREF
  __int64 v27[4]; // [rsp+A8h] [rbp+37h] BYREF

  *(_QWORD *)&v1 = a1;
  v2 = v1;
  if ( *(_DWORD *)(v1 + 1960) )
  {
    v25 = 0LL;
    *((_QWORD *)&v1 + 1) = *(_QWORD *)(v1 + 1920);
    if ( *((_QWORD *)&v1 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v1 + 1) + 8LL));
      *((_QWORD *)&v1 + 1) = *(_QWORD *)(v1 + 1920);
    }
    *(_QWORD *)&v1 = *(_QWORD *)(v1 + 1912);
    v25 = v1;
    v11 = *(unsigned int *)(v2 + 4LL * *(int *)(v2 + 1964) + 1972);
    if ( !(_QWORD)v1
      || ((v12 = *(_QWORD *)(v1 + 136)) == 0 || (v13 = *(int **)(v12 + 128)) == 0LL ? (v14 = 0) : (v14 = *v13),
          v14 != *(_DWORD *)(v2 + 1940)
       || (!v12 || (v15 = *(_QWORD *)(v12 + 128)) == 0 ? (v16 = 0) : (v16 = *(_DWORD *)(v15 + 16)), v16 != (_DWORD)v11)) )
    {
      sub_1800FAFA0(v2, v11);
    }
    v24 = 0LL;
    *(_QWORD *)&v1 = *(_QWORD *)(v2 + 1920);
    if ( (_QWORD)v1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
      *(_QWORD *)&v1 = *(_QWORD *)(v2 + 1920);
    }
    *(_QWORD *)&v24 = *(_QWORD *)(v2 + 1912);
    *((_QWORD *)&v24 + 1) = v1;
    sub_1800AC570(v2, (__int64 *)&v24);
    v26 = 0LL;
    sub_1800AC348(v2, (__int64 *)&v26);
    sub_1800AC620(v2, *(_DWORD *)(v2 + 1928), 0);
    sub_1800AC620(v2, *(_DWORD *)(v2 + 1932), 1);
    sub_1800AC620(v2, *(_DWORD *)(v2 + 1936), 1);
    *(_BYTE *)(v2 + 465) |= 1u;
    v17 = *(_DWORD *)(v2 + 404);
    v18 = *(_DWORD *)(v2 + 408);
    v19[0] = *(_DWORD *)(v2 + 400);
    v19[1] = v17;
    v20 = v18;
    v27[2] = 0LL;
    v27[3] = 0LL;
    sub_18001CDF8(v27, (__int64)&qword_18020BFB8);
    result = sub_1800AC6E0(v2, v27, v19, -1);
    if ( *((_QWORD *)&v1 + 1) )
    {
      result = (unsigned int)_InterlockedExchangeAdd(
                               (volatile signed __int32 *)(*((_QWORD *)&v1 + 1) + 8LL),
                               0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v1 + 1))(*((_QWORD *)&v1 + 1));
        result = (unsigned int)_InterlockedExchangeAdd(
                                 (volatile signed __int32 *)(*((_QWORD *)&v1 + 1) + 12LL),
                                 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v1 + 1) + 8LL))(*((_QWORD *)&v1 + 1));
      }
    }
  }
  else
  {
    v3 = *(_QWORD *)(v1 + 1832);
    if ( !v3
      || ((v4 = *(_QWORD *)(v3 + 112)) == 0 || (v5 = *(int **)(v4 + 128)) == 0LL ? (v6 = 0) : (v6 = *v5),
          v6 != *(_DWORD *)(v2 + 1940)) )
    {
      sub_1800FB0F8(v2);
    }
    v21 = 0LL;
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v2 + 1912), (__int64 *)&v21);
    if ( *((_QWORD *)&v21 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v7 = *((_QWORD *)&v21 + 1);
        (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
      }
    }
    v22 = 0LL;
    v8 = *(_QWORD *)(v2 + 1920);
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = *(_QWORD *)(v2 + 1920);
    }
    *(_QWORD *)&v22 = *(_QWORD *)(v2 + 1912);
    *((_QWORD *)&v22 + 1) = v8;
    sub_1800AC570(v2, (__int64 *)&v22);
    v23 = 0LL;
    v9 = *(_QWORD *)(v2 + 1840);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(v2 + 1840);
    }
    *(_QWORD *)&v23 = *(_QWORD *)(v2 + 1832);
    *((_QWORD *)&v23 + 1) = v9;
    sub_1800AC348(v2, (__int64 *)&v23);
    sub_1800AC620(v2, *(_DWORD *)(v2 + 1928), 1);
    sub_1800AC620(v2, *(_DWORD *)(v2 + 1932), 0);
    result = sub_1800AC620(v2, *(_DWORD *)(v2 + 1936), 0);
    *(_BYTE *)(v2 + 465) &= ~1u;
  }
  return result;
}
