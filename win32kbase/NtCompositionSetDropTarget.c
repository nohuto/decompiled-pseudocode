/*
 * XREFs of NtCompositionSetDropTarget @ 0x1C00AB160
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00A7D70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00AB2C4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 */

__int64 __fastcall NtCompositionSetDropTarget(void *a1, ULONG64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  int v4; // edi
  PVOID v5; // r14
  __int64 v6; // rbx
  __int128 v8; // [rsp+20h] [rbp-98h] BYREF
  __int128 v9; // [rsp+30h] [rbp-88h]
  __int128 v10; // [rsp+40h] [rbp-78h]
  __int64 v11; // [rsp+50h] [rbp-68h]
  __int128 v12; // [rsp+58h] [rbp-60h]
  __int128 v13; // [rsp+68h] [rbp-50h]
  __int128 v14; // [rsp+78h] [rbp-40h]
  __int64 v15; // [rsp+88h] [rbp-30h]
  PVOID Object; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v17; // [rsp+D0h] [rbp+18h]
  __int64 v18; // [rsp+D8h] [rbp+20h]

  v17 = a3;
  v3 = (_QWORD *)a3;
  v4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v18 = 0LL;
  Object = 0LL;
  if ( a2 )
  {
    if ( a2 + 56 < a2 || a2 + 56 > MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    v12 = *(_OWORD *)a2;
    v13 = *(_OWORD *)(a2 + 16);
    v14 = *(_OWORD *)(a2 + 32);
    v15 = *(_QWORD *)(a2 + 48);
    v8 = v12;
    v9 = v13;
    v10 = v14;
    v11 = v15;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    LOBYTE(a3) = 1;
    v4 = CompositionInputObject::ResolveHandle(a1, 2LL, a3, (struct CompositionInputObject **)&Object);
    v5 = Object;
    if ( v4 >= 0 )
    {
      v6 = *((_QWORD *)Object + 2);
      v4 = CompositionInputObject::SetDropTarget(Object, (const struct COMPOSITION_INPUT_QUEUE *)&v8);
      ObfDereferenceObject(v5);
      if ( v4 >= 0 )
      {
        if ( v3 )
        {
          if ( v3 + 1 < v3 || (unsigned __int64)(v3 + 1) > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          *v3 = v6;
        }
      }
    }
  }
  return (unsigned int)v4;
}
