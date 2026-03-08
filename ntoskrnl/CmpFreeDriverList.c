/*
 * XREFs of CmpFreeDriverList @ 0x140B65798
 * Callers:
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpFreeDriverList(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rbp
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax

  v2 = (_QWORD *)*a2;
  if ( (_QWORD *)*a2 != a2 )
  {
    do
    {
      v5 = v2[16];
      v6 = (_QWORD *)*v2;
      if ( v5 )
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v5, *((unsigned __int16 *)v2 + 60));
      v7 = v2[5];
      if ( v7 )
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v7, *((unsigned __int16 *)v2 + 17));
      v8 = v2[3];
      if ( v8 )
        (*(void (__fastcall **)(__int64, _QWORD))(a1 + 32))(v8, *((unsigned __int16 *)v2 + 9));
      result = (*(__int64 (__fastcall **)(_QWORD *, __int64))(a1 + 32))(v2, 144LL);
      v2 = v6;
    }
    while ( v6 != a2 );
  }
  return result;
}
