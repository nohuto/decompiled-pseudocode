/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x140547D58
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140544308 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140544434 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140545098 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x140545AC0 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvlpEndPageListIteration @ 0x140547D2C (HvlpEndPageListIteration.c)
 *     VslEndSecurePageIteration @ 0x140548960 (VslEndSecurePageIteration.c)
 */

__int16 *__fastcall HvlpEndSecurePageListIteration(__int64 a1, void *a2, _DWORD *a3)
{
  int v5; // ebx
  const void **v6; // rsi
  __int16 *result; // rax
  unsigned int v8; // eax
  size_t Size; // [rsp+30h] [rbp+8h] BYREF

  LODWORD(Size) = 0;
  v5 = a1;
  if ( (_DWORD)a1 )
  {
    v6 = (const void **)&unk_140C5EF28;
    result = (__int16 *)&unk_140C5EF22;
  }
  else
  {
    v6 = (const void **)&unk_140C5EF08;
    result = (__int16 *)&unk_140C5EF02;
  }
  if ( *(_BYTE *)result )
  {
    LOBYTE(a1) = (_DWORD)a1 == 0;
    VslEndSecurePageIteration(a1, &Size);
    if ( a3 )
    {
      v8 = Size;
      if ( (unsigned int)Size <= *a3 )
      {
        *a3 = Size;
        if ( v8 )
          memmove(a2, *v6, v8);
      }
    }
    return HvlpEndPageListIteration(v5);
  }
  return result;
}
