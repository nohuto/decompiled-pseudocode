char __fastcall tagTHREADINFO::RemoveThreadFromQSharingLists(tagTHREADINFO *this, struct tagQ *a2)
{
  char v4; // bl
  char v5; // r8
  char result; // al

  v4 = tagTHREADINFO::RemoveThreadFromListWorker(this, a2, 480LL, 1528LL);
  v5 = tagTHREADINFO::RemoveThreadFromListWorker(this, a2, 488LL, 1536LL);
  result = 0;
  if ( v4 || v5 )
    return 1;
  return result;
}
