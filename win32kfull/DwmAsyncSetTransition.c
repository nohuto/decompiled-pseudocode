/*
 * XREFs of DwmAsyncSetTransition @ 0x1C00EC4B8
 * Callers:
 *     NtUserSetWindowCompositionTransition @ 0x1C00EC250 (NtUserSetWindowCompositionTransition.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall DwmAsyncSetTransition(
        PVOID Object,
        __int64 a2,
        int a3,
        __int128 *a4,
        __int128 *a5,
        __int128 *a6,
        __int128 *a7,
        __int128 *a8)
{
  unsigned int v10; // ebx
  int v14; // [rsp+30h] [rbp-A1h] BYREF
  __int16 v15; // [rsp+34h] [rbp-9Dh]
  int v16; // [rsp+58h] [rbp-79h]
  __int64 v17; // [rsp+5Ch] [rbp-75h]
  int v18; // [rsp+64h] [rbp-6Dh]
  __int128 v19; // [rsp+68h] [rbp-69h]
  __int128 v20; // [rsp+78h] [rbp-59h]
  __int128 v21; // [rsp+88h] [rbp-49h]
  __int128 v22; // [rsp+98h] [rbp-39h]
  __int128 v23; // [rsp+A8h] [rbp-29h]

  v10 = -1073741823;
  if ( Object )
  {
    memset_0(&v14, 0, 0x88uLL);
    v14 = 8912992;
    v15 = 0x8000;
    v17 = a2;
    v18 = a3;
    v16 = 1073741868;
    if ( a4 )
      v19 = *a4;
    if ( a5 )
      v20 = *a5;
    if ( a6 )
      v21 = *a6;
    if ( a7 )
      v22 = *a7;
    if ( a8 )
      v23 = *a8;
    v10 = LpcRequestPort(Object, &v14);
    ObfDereferenceObject(Object);
  }
  return v10;
}
