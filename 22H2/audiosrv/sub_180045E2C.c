/*
 * XREFs of sub_180045E2C @ 0x180045E2C
 * Callers:
 *     sub_180045DC0 @ 0x180045DC0 (sub_180045DC0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B4E60 @ 0x1800B4E60 (sub_1800B4E60.c)
 */

__int64 (__fastcall *__fastcall sub_180045E2C(unsigned __int64 a1, _BYTE *a2, __int64 a3))(_QWORD, _QWORD)
{
  char v3; // bp
  __int64 v4; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 CurrentThreadId; // r10
  __int64 i; // rbx
  _QWORD *v10; // rbx
  __int64 (__fastcall *result)(_QWORD, _QWORD); // rax
  __int64 v12; // rbx
  char v13; // al

  *a2 = 0;
  v3 = 0;
  v4 = qword_18019E3A0;
  v7 = a1;
  if ( qword_18019E3A0 )
  {
    CurrentThreadId = GetCurrentThreadId();
    a1 = 10 * (CurrentThreadId / 0xA);
    for ( i = *(_QWORD *)(v4 + 8 * (CurrentThreadId % 0xA)); i; i = *(_QWORD *)(i + 8) )
    {
      if ( *(_DWORD *)i == (_DWORD)CurrentThreadId )
      {
        v10 = (_QWORD *)(i + 16);
        goto LABEL_5;
      }
    }
  }
  v10 = 0LL;
LABEL_5:
  if ( v10 && *v10 )
  {
    *a2 = 0;
    if ( (unsigned __int8)sub_1800B4E60(v7, *v10, a2, a3) )
      *(_QWORD *)(v7 + 64) = a2;
    v12 = *v10;
    do
    {
      v13 = (***(__int64 (__fastcall ****)(_QWORD, unsigned __int64))(v12 + 8))(*(_QWORD *)(v12 + 8), v7);
      v12 = *(_QWORD *)(v12 + 16);
      v3 |= v13;
    }
    while ( v12 );
  }
  result = qword_18019E5D0;
  if ( qword_18019E5D0 )
  {
    LOBYTE(a1) = v3;
    return (__int64 (__fastcall *)(_QWORD, _QWORD))qword_18019E5D0(a1, v7);
  }
  return result;
}
