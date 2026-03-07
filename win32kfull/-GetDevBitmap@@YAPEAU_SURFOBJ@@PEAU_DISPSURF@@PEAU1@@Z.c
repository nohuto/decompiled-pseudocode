struct _SURFOBJ *__fastcall GetDevBitmap(struct _DISPSURF *a1, struct _SURFOBJ *a2)
{
  USHORT iType; // dx
  int hsurf; // eax
  HDEV hdev; // rax

  if ( !a2 )
    return a2;
  iType = a2->iType;
  if ( !iType )
    return a2;
  hsurf = (int)a2[1].hsurf;
  if ( (hsurf & 0x800) != 0 )
  {
    if ( *(_QWORD *)&a2[2].lDelta )
      return a2;
  }
  if ( (hsurf & 0x10) != 0 )
    return a2;
  hdev = a2->hdev;
  if ( !hdev || ((_DWORD)hdev[10] & 0x20000) == 0 )
    return a2;
  if ( iType == 3 )
    return *(struct _SURFOBJ **)(*((_QWORD *)a2->dhsurf + 1) + 8LL * *((unsigned int *)a1 + 4));
  if ( iType == 1 )
    return (struct _SURFOBJ *)((*(_QWORD *)(*((_QWORD *)a1 + 6) + 2528LL) + 24LL) & -(__int64)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 2528LL) != 0LL));
  else
    return a2;
}
