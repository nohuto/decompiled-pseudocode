/*
 * XREFs of ObpDestroyStackAndObjectTables @ 0x140979AD4
 * Callers:
 *     ObpStopRuntimeStackTrace @ 0x14097AA20 (ObpStopRuntimeStackTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ObpDestroyStackAndObjectTables(_WORD *a1, _QWORD **a2, _QWORD *a3)
{
  _QWORD **v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rcx
  _QWORD *v9; // rbx
  unsigned __int16 v10; // bx
  void *v11; // rcx

  v6 = a2;
  v7 = 401LL;
  do
  {
    v8 = *v6;
    if ( *v6 )
    {
      do
      {
        v9 = (_QWORD *)v8[1];
        ExFreePoolWithTag(v8, 0x7452624Fu);
        v8 = v9;
      }
      while ( v9 );
    }
    ++v6;
    --v7;
  }
  while ( v7 );
  ExFreePoolWithTag(a2, 0x7452624Fu);
  v10 = 0;
  if ( (a1[1] & 0xFC00) != 0 )
  {
    do
      ExFreePoolWithTag(*(PVOID *)&a1[4 * v10++ + 4], 0x7452624Fu);
    while ( v10 < (unsigned __int16)(a1[1] >> 10) );
  }
  v11 = a1;
  while ( 1 )
  {
    ExFreePoolWithTag(v11, 0x7452624Fu);
    if ( !a3 )
      break;
    v11 = a3;
    a3 = (_QWORD *)*a3;
  }
}
