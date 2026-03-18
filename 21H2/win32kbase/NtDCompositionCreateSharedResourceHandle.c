/*
 * XREFs of NtDCompositionCreateSharedResourceHandle @ 0x1C0058750
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x1C0058820 (-CreateHandle@CompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     CreateSharedResourceObject @ 0x1C0058874 (CreateSharedResourceObject.c)
 */

__int64 __fastcall NtDCompositionCreateSharedResourceHandle(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  PVOID v4; // rsi
  HANDLE Handle; // [rsp+50h] [rbp+18h] BYREF
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  Object = 0LL;
  Handle = 0LL;
  if ( (_DWORD)a1 != 141 && (_DWORD)a1 != 195 )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = CreateSharedResourceObject(a1, 0x80000000LL, &Object);
    v4 = Object;
    if ( v3 >= 0 )
    {
      v3 = CompositionObject::CreateHandle((CompositionObject *)Object, 1u, 0, 1, &Handle);
      ObfDereferenceObject(v4);
      if ( v3 >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  return (unsigned int)v3;
}
