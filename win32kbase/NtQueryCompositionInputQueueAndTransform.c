/*
 * XREFs of NtQueryCompositionInputQueueAndTransform @ 0x1C006AB50
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C006ACF0 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C006AEA4 (-QueryTransform@CompositionInputObject@@QEBAJPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00A7D70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 __fastcall NtQueryCompositionInputQueueAndTransform(void *a1, unsigned int a2, unsigned __int64 a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int Transform; // ebx
  PVOID Object; // [rsp+20h] [rbp-B8h] BYREF
  _OWORD v15[4]; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+70h] [rbp-68h] BYREF
  __int128 v17; // [rsp+80h] [rbp-58h]
  __int128 v18; // [rsp+90h] [rbp-48h]
  __int64 v19; // [rsp+A0h] [rbp-38h]

  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  memset(v15, 0, sizeof(v15));
  Transform = 0;
  if ( !UserIsCurrentProcessDwm(v9, v8, v10, v11) )
    Transform = -1073741790;
  if ( Transform >= 0 )
  {
    Object = 0LL;
    Transform = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryInputQueueForInputType(Object, a2, &v16);
    if ( Transform >= 0 )
      Transform = CompositionInputObject::QueryTransform(
                    (CompositionInputObject *)Object,
                    (struct tagINPUT_TRANSFORM *)v15);
    if ( Object )
      ObfDereferenceObject(Object);
    if ( Transform >= 0 )
    {
      if ( a3 + 56 < a3 || a3 + 56 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *(_OWORD *)a3 = v16;
      *(_OWORD *)(a3 + 16) = v17;
      *(_OWORD *)(a3 + 32) = v18;
      *(_QWORD *)(a3 + 48) = v19;
      if ( a4 + 4 < a4 || (unsigned __int64)(a4 + 4) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a4 = v15[0];
      a4[1] = v15[1];
      a4[2] = v15[2];
      a4[3] = v15[3];
    }
  }
  return (unsigned int)Transform;
}
