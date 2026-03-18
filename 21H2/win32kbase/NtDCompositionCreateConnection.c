/*
 * XREFs of NtDCompositionCreateConnection @ 0x1C02113F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00953E0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00DD2FC (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 */

__int64 __fastcall NtDCompositionCreateConnection(
        void *a1,
        struct HDCOMPOSITIONCONNECTION__ **a2,
        __int64 a3,
        __int64 a4)
{
  struct HDCOMPOSITIONCONNECTION__ *v5; // rdx
  signed int v6; // ebx
  struct HDCOMPOSITIONCONNECTION__ *v8; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v8 = 0LL;
  v6 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    v6 = DirectComposition::CConnection::Create(a1, &v8, a3, a4);
    v5 = v8;
  }
  if ( v6 >= 0 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v5;
  }
  return (unsigned int)v6;
}
