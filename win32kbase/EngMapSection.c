/*
 * XREFs of EngMapSection @ 0x1C0196F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EngMapSection(__int64 a1, int a2, void *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  NTSTATUS v8; // eax
  PVOID v9; // rdi
  PVOID v11; // rdx
  PVOID Object; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h] BYREF
  __int64 v14; // [rsp+60h] [rbp-18h] BYREF

  v4 = 0;
  v14 = 0LL;
  v13 = 0LL;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a3, 8u, 0LL, 0, &Object, 0LL);
  v9 = Object;
  if ( v8 < 0 )
    return 0LL;
  if ( a2 )
  {
    v11 = Object;
    *a4 = 0LL;
    if ( (int)MmMapViewOfSection(a1, v11, a4, 0LL, 0LL, &v13, &v14, 1, 0, 4) < 0 )
    {
      ObfDereferenceObject(v9);
      *a4 = 0LL;
      return 0LL;
    }
    goto LABEL_7;
  }
  if ( (int)MmUnmapViewOfSection(Object) >= 0 )
LABEL_7:
    v4 = 1;
  ObfDereferenceObject(v9);
  return v4;
}
