/*
 * XREFs of HvlpEndSecurePageListIteration @ 0x14054A1F8
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x1405467A8 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x1405468D4 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140547538 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x140547F60 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     HvlpEndPageListIteration @ 0x14054A1CC (HvlpEndPageListIteration.c)
 *     VslEndSecurePageIteration @ 0x14054AE00 (VslEndSecurePageIteration.c)
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
    v6 = (const void **)&unk_140C5F388;
    result = (__int16 *)&unk_140C5F382;
  }
  else
  {
    v6 = (const void **)&unk_140C5F368;
    result = (__int16 *)&unk_140C5F362;
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
