__int64 __fastcall CanPointStartResize(struct tagWND *a1, struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx

  v3 = *((_QWORD *)a1 + 5);
  v4 = 1;
  if ( (*(_BYTE *)(v3 + 31) & 1) != 0
    || (*(_BYTE *)(v3 + 30) & 4) == 0
    || !(unsigned int)DoesPointSnapToBorder(a1, a2, a3) )
  {
    return 0;
  }
  return v4;
}
