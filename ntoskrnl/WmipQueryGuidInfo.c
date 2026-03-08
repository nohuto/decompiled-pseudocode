/*
 * XREFs of WmipQueryGuidInfo @ 0x140787880
 * Callers:
 *     WmipIoControl @ 0x140787290 (WmipIoControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall WmipQueryGuidInfo(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS v3; // ebx
  PVOID v4; // rdi
  __int64 v5; // rsi
  __int64 ***v6; // rsi
  __int64 **i; // rcx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(void **)a1;
  Object = 0LL;
  v3 = ObReferenceObjectByHandle(v2, 1u, WmipGuidObjectType, 1, &Object, 0LL);
  if ( v3 >= 0 )
  {
    v4 = Object;
    v5 = *((_QWORD *)Object + 7);
    if ( v5 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      v6 = (__int64 ***)(v5 + 56);
      for ( i = *v6; i != (__int64 **)v6; i = (__int64 **)*i )
      {
        if ( ((_DWORD)i[2] & 4) != 0 )
        {
          *(_BYTE *)(a1 + 8) = 1;
          break;
        }
      }
      KeReleaseMutex(&WmipSMMutex, 0);
    }
    else
    {
      v3 = -1073741055;
    }
    ObfDereferenceObject(v4);
  }
  return (unsigned int)v3;
}
