__int64 __fastcall NtQueryCompositionInputSink(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG64 v4; // rdi
  int v6; // esi
  __int64 v7; // r8
  int InputQueueTypes; // ebx
  int *v9; // rax
  ULONG64 v10; // rax
  ULONG64 v11; // rax
  __int128 v12; // xmm0
  __int128 v14; // [rsp+28h] [rbp-40h]
  __int128 v15; // [rsp+38h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = 0;
  LODWORD(Object) = 0;
  InputQueueTypes = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2, a3, a4) )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes < 0 )
    goto LABEL_28;
  v9 = (int *)v4;
  if ( v4 >= MmUserProbeAddress )
    v9 = (int *)MmUserProbeAddress;
  v6 = *v9;
  LODWORD(Object) = v6;
  if ( v6 == 20 )
  {
    v11 = v4;
    if ( v4 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    v14 = *(_OWORD *)v11;
    v15 = *(_OWORD *)v11;
    v16 = *(unsigned int *)(v11 + 16);
  }
  else if ( v6 == 24 )
  {
    v10 = v4;
    if ( v4 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    v14 = *(_OWORD *)v10;
    v15 = *(_OWORD *)v10;
    v16 = *(_QWORD *)(v10 + 16);
  }
  else
  {
    InputQueueTypes = -1073741811;
  }
  if ( InputQueueTypes < 0
    || (Object = 0LL,
        LOBYTE(v7) = 1,
        InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1LL, v7, (struct CompositionInputObject **)&Object),
        InputQueueTypes < 0) )
  {
LABEL_28:
    v12 = v14;
  }
  else
  {
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                        (CompositionInputObject *)Object,
                        (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v15);
    ObfDereferenceObject(Object);
    v12 = v15;
  }
  if ( InputQueueTypes >= 0 )
  {
    if ( v6 == 20 )
    {
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      *(_OWORD *)v4 = v12;
      *(_DWORD *)(v4 + 16) = v16;
    }
    else if ( v6 == 24 )
    {
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      *(_OWORD *)v4 = v12;
      *(_QWORD *)(v4 + 16) = v16;
    }
  }
  return (unsigned int)InputQueueTypes;
}
