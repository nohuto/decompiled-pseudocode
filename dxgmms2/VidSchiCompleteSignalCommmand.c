_QWORD *__fastcall VidSchiCompleteSignalCommmand(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  _QWORD *v9; // r12
  _DWORD *v10; // rsi
  int v11; // eax
  struct _KEVENT *v12; // rcx
  unsigned int i; // ebp
  __int64 v14; // rcx

  v3 = *(_QWORD *)(a2 + 88);
  v5 = *(_QWORD *)(a2 + 792);
  v6 = 0;
  v9 = *(_QWORD **)(v3 + 104);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 800) = *(_QWORD *)(a2 + 800);
  }
  else if ( !*(_QWORD *)(a2 + 800) )
  {
    v10 = (_DWORD *)(a2 + 272);
    v11 = *(_DWORD *)(a2 + 272);
    if ( (v11 & 2) != 0 )
    {
      v12 = *(struct _KEVENT **)(a2 + 536);
      if ( (v11 & 8) != 0 )
      {
        ((void (__fastcall *)(struct _KEVENT *))DxgCoreInterface[69])(v12);
      }
      else
      {
        KeSetEvent(v12, 0, 0);
        ObfDereferenceObject(*(PVOID *)(a2 + 536));
      }
      *(_QWORD *)(a2 + 536) = 0LL;
    }
    else
    {
      for ( i = 0; i < *(_DWORD *)(a2 + 276); ++i )
        VidSchiCompleteSignalSyncObject(
          a1,
          *(_QWORD *)(a2 + 8LL * i + 280),
          (*v10 & 4) != 0,
          (unsigned __int64 *)(a2 + 536 + 8LL * i),
          a3);
    }
    goto LABEL_15;
  }
  v14 = *(_QWORD *)(a2 + 800);
  if ( v14 )
    *(_QWORD *)(v14 + 792) = *(_QWORD *)(a2 + 792);
  *(_QWORD *)(a2 + 792) = 0LL;
  v10 = (_DWORD *)(a2 + 272);
  *(_QWORD *)(a2 + 800) = 0LL;
LABEL_15:
  *(_DWORD *)(a2 + 80) |= 4u;
  if ( (*v10 & 2) == 0 && *(_DWORD *)(a2 + 276) )
  {
    do
      VidSchiReleaseSyncObjectReference(
        *(char **)(a2 + 8LL * v6++ + 280),
        (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)v5);
    while ( v6 < *(_DWORD *)(a2 + 276) );
  }
  return VidSchiCheckPendingDeviceCommand(v9);
}
