__int64 __fastcall ClassicIsWindowHit(struct tagWND *a1, struct tagPOINT a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  tagPOINT v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v4 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v4 + 31) & 0x10) == 0 )
    return 0LL;
  v5 = 0;
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v4 + 88, a2)
    || tagWND::PtOutsideClipRgnOrMaxClip(a1, &v7) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) == 0 )
    return 1LL;
  LOBYTE(v5) = LayerHitTest(a1, a2);
  return v5;
}
