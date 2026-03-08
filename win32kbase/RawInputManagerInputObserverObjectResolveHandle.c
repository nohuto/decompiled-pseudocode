/*
 * XREFs of RawInputManagerInputObserverObjectResolveHandle @ 0x1C01BF998
 * Callers:
 *     rimObsAddInputObserver @ 0x1C01DADB0 (rimObsAddInputObserver.c)
 *     rimObsObserveNextInput @ 0x1C01DC7C8 (rimObsObserveNextInput.c)
 *     rimObsUpdateInputObserverRegistration @ 0x1C01DD920 (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerInputObserverObjectResolveHandle(char *a1, __int64 a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 3u, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 3 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
