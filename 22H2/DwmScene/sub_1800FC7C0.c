/*
 * XREFs of sub_1800FC7C0 @ 0x1800FC7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180080DD4 @ 0x180080DD4 (sub_180080DD4.c)
 *     sub_180083A6C @ 0x180083A6C (sub_180083A6C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800FC7C0(__int64 a1)
{
  __int64 v2; // rdx
  _DWORD *v3; // rbx
  int v4; // xmm6_4
  int v5; // xmm7_4
  int v6; // xmm8_4
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rbx
  signed __int32 v13; // eax
  __int128 v14; // [rsp+28h] [rbp-29h] BYREF
  __int64 v15; // [rsp+38h] [rbp-19h] BYREF
  int v16; // [rsp+40h] [rbp-11h]
  __int64 v17; // [rsp+48h] [rbp-9h] BYREF
  int v18; // [rsp+50h] [rbp-1h]
  __int128 v19; // [rsp+58h] [rbp+7h]

  v19 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v2 + 8);
      if ( !v13 )
        break;
      if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v13 + 1, v13) )
      {
        v3 = *(_DWORD **)(a1 + 56);
        v19 = *(_OWORD *)(a1 + 56);
        goto LABEL_3;
      }
    }
  }
  v3 = (_DWORD *)v19;
LABEL_3:
  v4 = qword_18020DBA8;
  v5 = HIDWORD(qword_18020DBA8);
  v6 = dword_18020DBB0;
  sub_180083A6C((__int64)v3);
  v3[36] = v4;
  v3[37] = v5;
  v3[38] = v6;
  v7 = _InterlockedIncrement64(&qword_180208640);
  v8 = v19;
  *(_QWORD *)(v19 + 208) = v7;
  v9 = *(_QWORD *)(v8 + 216);
  if ( v7 >= v9 )
    v9 = v7;
  *(_QWORD *)(v8 + 216) = v9;
  v15 = qword_18020DBC8;
  v16 = dword_18020DBD0;
  v17 = qword_18021AB40;
  v18 = dword_18021AB48;
  sub_180080DD4(v8, (unsigned __int64 *)&v17, (__int64)&v15);
  v14 = 0LL;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), (__int64 *)&v14);
  if ( *((_QWORD *)&v14 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v14 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v11 = *((_QWORD *)&v14 + 1);
      (***((void (__fastcall ****)(_QWORD))&v14 + 1))(*((_QWORD *)&v14 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v14 + 1) + 8LL))(*((_QWORD *)&v14 + 1));
    }
  }
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 124) = qword_18021AB40;
  *(_DWORD *)(a1 + 132) = dword_18021AB48;
  *(_QWORD *)(a1 + 112) = qword_18020DBA8;
  *(_DWORD *)(a1 + 120) = dword_18020DBB0;
  *(_QWORD *)(a1 + 140) = qword_18021AB40;
  *(_DWORD *)(a1 + 148) = dword_18021AB48;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  if ( *((_QWORD *)&v19 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v19 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v12 = *((_QWORD *)&v19 + 1);
      (***((void (__fastcall ****)(_QWORD))&v19 + 1))(*((_QWORD *)&v19 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v19 + 1) + 8LL))(*((_QWORD *)&v19 + 1));
    }
  }
  return result;
}
