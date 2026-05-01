/*
 * XREFs of HamConnectForServicing @ 0x1800094A0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionDestroy @ 0x1800021E8 (HampConnectionDestroy.c)
 *     HampConnectionCreate @ 0x1800039B0 (HampConnectionCreate.c)
 */

__int64 __fastcall HamConnectForServicing(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = HampConnectionCreate(0LL, (__int64)&unk_180015BF0, 0, 0LL, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    HampConnectionDestroy(v3);
  return (unsigned int)v2;
}
