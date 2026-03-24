/*
 * XREFs of ReadSystemIO @ 0x1C0027528
 * Callers:
 *     AccessBaseField @ 0x1C0001970 (AccessBaseField.c)
 *     DebugInPort @ 0x1C0066040 (DebugInPort.c)
 * Callees:
 *     CheckSystemIOAddressValidity @ 0x1C0027590 (CheckSystemIOAddressValidity.c)
 */

__int64 __fastcall ReadSystemIO(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // r8
  unsigned __int16 v6; // di
  __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned __int32 v9; // eax
  unsigned int v11; // ebx
  unsigned __int32 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0;
  v5 = a2;
  v6 = a1;
  v7 = (unsigned int)a1;
  LOBYTE(a1) = 1;
  if ( !(unsigned __int8)CheckSystemIOAddressValidity(a1, v7, v5, &v12) )
  {
LABEL_5:
    v9 = v12;
    return a3 & v9;
  }
  v8 = a2 - 1;
  if ( v8 )
  {
    v11 = v8 - 1;
    if ( !v11 )
    {
      LOWORD(v9) = __inword(v6);
      v9 = (unsigned __int16)v9;
      return a3 & v9;
    }
    if ( v11 == 2 )
    {
      v9 = __indword(v6);
      return a3 & v9;
    }
    goto LABEL_5;
  }
  LOBYTE(v9) = __inbyte(v6);
  v9 = (unsigned __int8)v9;
  return a3 & v9;
}
