__int64 __fastcall DpiGdoDispatchCreate(__int64 a1, IRP *a2)
{
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rsi
  int v5; // ecx
  unsigned int v6; // ebx

  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL);
  if ( a2->RequestorMode || (a2->Tail.Overlay.CurrentStackLocation->Flags & 1) != 0 )
  {
    v6 = -1073741790;
  }
  else if ( *(_BYTE *)(v3 + 1154) && *(_BYTE *)(v3 + 480) )
  {
    v6 = dword_1C013B7F0 != 4 ? 0xC0000001 : 0;
  }
  else if ( *(_BYTE *)(v3 + 5469) )
  {
    v6 = -1073741823;
  }
  else
  {
    KeEnterCriticalRegion();
    v4 = (struct _ERESOURCE *)(v3 + 3808);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3808), 1u);
    v5 = *(_DWORD *)(v3 + 236);
    if ( v5 == 2 || *(_DWORD *)(v3 + 240) == 2 && ((v5 - 3) & 0xFFFFFFFC) == 0 && v5 != 4 )
      v6 = 0;
    else
      v6 = -1073741823;
    ExReleaseResourceLite(v4);
    KeLeaveCriticalRegion();
  }
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 1);
  return v6;
}
