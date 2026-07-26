/*
 * XREFs of ndisValidateNdisVarDataDescInputString @ 0x1C00FF72C
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C012CDB8 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ndisValidateAndConvertWcharStringToUnicodeString @ 0x1C00FF7B0 (ndisValidateAndConvertWcharStringToUnicodeString.c)
 *     ndisValidateEmbeddedBufferBounds @ 0x1C00FF810 (ndisValidateEmbeddedBufferBounds.c)
 */

char __fastcall ndisValidateNdisVarDataDescInputString(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int16 *a3,
        __int64 a4)
{
  int v5; // ebx
  int v6; // r8d
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( (unsigned __int64)a3 >= a1
    && (unsigned __int64)(a3 + 8) <= a1 + a2
    && (v5 = *a3,
        (unsigned __int8)ndisValidateEmbeddedBufferBounds(
                           a1,
                           a2,
                           (_DWORD)a3,
                           16,
                           *((_DWORD *)a3 + 2),
                           v5,
                           2,
                           (__int64)&v8)) )
  {
    return ndisValidateAndConvertWcharStringToUnicodeString(v8, v5, v6, 0, a4);
  }
  else
  {
    return 0;
  }
}
