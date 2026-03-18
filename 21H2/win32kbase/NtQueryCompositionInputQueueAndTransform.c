/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C0095C00
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0093F40 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0095DA0 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0095E04 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, unsigned int a2, unsigned __int64 a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  int Transform; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v16[4]; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+70h] [rbp-68h] BYREF
  __int128 v18; // [rsp+80h] [rbp-58h]
  __int128 v19; // [rsp+90h] [rbp-48h]
  __int64 v20; // [rsp+A0h] [rbp-38h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v16, 0, sizeof(v16));
  Transform = 0;
  if ( !UserIsCurrentProcessDwm(v9, v8, v10, v11) )
    Transform = -1073741790;
  if ( Transform >= 0 )
  {
    Object = 0LL;
    LOBYTE(v12) = 1;
    Transform = CompositionInputObject::ResolveHandle(a1, 1LL, v12, (struct CompositionInputObject **)&Object);
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryInputQueueForInputType(Object, a2, &v17);
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryTransform(
                    (CompositionInputObject *)Object,
                    (struct tagINPUT_TRANSFORM *)v16);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( Transform >= 0 )
    {
      if ( a3 + 56 < a3 || a3 + 56 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = v17;
      *(_OWORD *)(a3 + 16) = v18;
      *(_OWORD *)(a3 + 32) = v19;
      *(_QWORD *)(a3 + 48) = v20;
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v16[0];
      a4[1] = v16[1];
      a4[2] = v16[2];
      a4[3] = v16[3];
    }
  }
  return (unsigned int)Transform;
}
