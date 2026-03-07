__int64 __fastcall IopCheckUnloadDriver(_QWORD *Object, char *a2)
{
  KIRQL v4; // al
  __int64 v5; // r8
  _DWORD *v6; // r9
  unsigned int v7; // ebx
  char v8; // cl

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = Object[1];
  v6 = Object + 2;
  v7 = 0;
  if ( !v5 && (*v6 & 1) != 0 || (*v6 & 0x80u) == 0 && v5 && (*(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) & 1) != 0 )
    goto LABEL_14;
  if ( (*v6 & 0x10) == 0 )
  {
    v7 = -1073741808;
LABEL_14:
    KeReleaseQueuedSpinLock(0xAuLL, v4);
    ObfDereferenceObject(Object);
    return v7;
  }
  *a2 = 1;
  v8 = 1;
  if ( v5 )
  {
    do
    {
      *(_DWORD *)(*(_QWORD *)(v5 + 312) + 32LL) |= 1u;
      if ( *(_DWORD *)(v5 + 4) || *(_QWORD *)(v5 + 24) )
        *a2 = 0;
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v5 );
    v8 = *a2;
  }
  if ( (*v6 & 0x80u) != 0 && Object[1] )
  {
    *a2 = 0;
  }
  else if ( v8 )
  {
    *v6 |= 1u;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v4);
  return 3221225473LL;
}
