/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C005A310
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00478C0 (UserIsCurrentProcessDwm.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C005AAA4 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0082B80 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, __int64 a2)
{
  ULONG64 v2; // rdi
  int v4; // esi
  int InputQueueTypes; // ebx
  int *v6; // rax
  ULONG64 v7; // rax
  ULONG64 v8; // rax
  __int128 v9; // xmm0
  __int128 v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-20h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v2 = a2;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v4 = 0;
  LODWORD(Object) = 0;
  InputQueueTypes = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2) )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes < 0 )
    goto LABEL_28;
  v6 = (int *)v2;
  if ( v2 >= MmUserProbeAddress )
    v6 = (int *)MmUserProbeAddress;
  v4 = *v6;
  LODWORD(Object) = v4;
  if ( v4 == 20 )
  {
    v8 = v2;
    if ( v2 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    v11 = *(_OWORD *)v8;
    v12 = *(_OWORD *)v8;
    v13 = *(unsigned int *)(v8 + 16);
  }
  else if ( v4 == 24 )
  {
    v7 = v2;
    if ( v2 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v11 = *(_OWORD *)v7;
    v12 = *(_OWORD *)v7;
    v13 = *(_QWORD *)(v7 + 16);
  }
  else
  {
    InputQueueTypes = -1073741811;
  }
  if ( InputQueueTypes < 0
    || (Object = 0LL,
        InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object),
        InputQueueTypes < 0) )
  {
LABEL_28:
    v9 = v11;
  }
  else
  {
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                        (CompositionInputObject *)Object,
                        (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v12);
    ObfDereferenceObject(Object);
    v9 = v12;
  }
  if ( InputQueueTypes >= 0 )
  {
    if ( v4 == 20 )
    {
      if ( v2 >= MmUserProbeAddress )
        v2 = MmUserProbeAddress;
      *(_OWORD *)v2 = v9;
      *(_DWORD *)(v2 + 16) = v13;
    }
    else if ( v4 == 24 )
    {
      if ( v2 >= MmUserProbeAddress )
        v2 = MmUserProbeAddress;
      *(_OWORD *)v2 = v9;
      *(_QWORD *)(v2 + 16) = v13;
    }
  }
  return (unsigned int)InputQueueTypes;
}
