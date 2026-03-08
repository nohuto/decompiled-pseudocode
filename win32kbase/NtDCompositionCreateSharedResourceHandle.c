/*
 * XREFs of NtDCompositionCreateSharedResourceHandle @ 0x1C00A18F0
 * Callers:
 *     <none>
 * Callees:
 *     CreateSharedResourceObject @ 0x1C00A19E4 (CreateSharedResourceObject.c)
 */

__int64 __fastcall NtDCompositionCreateSharedResourceHandle(__int64 a1, _QWORD *a2)
{
  NTSTATUS v3; // ebx
  PVOID v4; // rsi
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  Object = 0LL;
  if ( (_DWORD)a1 != 19 && (_DWORD)a1 != 142 && (_DWORD)a1 != 196 )
    v3 = -1073741811;
  if ( v3 >= 0 )
  {
    v3 = CreateSharedResourceObject(a1, &Object);
    v4 = Object;
    if ( v3 >= 0 )
    {
      Handle = (HANDLE)-1LL;
      v3 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 3u, ExCompositionObjectType, 0, &Handle);
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
