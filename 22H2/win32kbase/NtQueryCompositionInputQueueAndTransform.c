/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C005DAF0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0048F20 (UserIsCurrentProcessDwm.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C005DC90 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C005DCF8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0083A80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, unsigned int a2, unsigned __int64 a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Transform; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v13[4]; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+70h] [rbp-68h] BYREF
  __int128 v15; // [rsp+80h] [rbp-58h]
  __int128 v16; // [rsp+90h] [rbp-48h]
  __int64 v17; // [rsp+A0h] [rbp-38h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(v13, 0, sizeof(v13));
  Transform = 0;
  if ( !UserIsCurrentProcessDwm(v9, v8) )
    Transform = -1073741790;
  if ( Transform >= 0 )
  {
    Object = 0LL;
    Transform = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryInputQueueForInputType(Object, a2, &v14);
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryTransform(
                    (CompositionInputObject *)Object,
                    (struct tagINPUT_TRANSFORM *)v13);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( Transform >= 0 )
    {
      if ( a3 + 56 < a3 || a3 + 56 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = v14;
      *(_OWORD *)(a3 + 16) = v15;
      *(_OWORD *)(a3 + 32) = v16;
      *(_QWORD *)(a3 + 48) = v17;
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v13[0];
      a4[1] = v13[1];
      a4[2] = v13[2];
      a4[3] = v13[3];
    }
  }
  return (unsigned int)Transform;
}
