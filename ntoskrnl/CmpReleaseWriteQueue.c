__int64 __fastcall CmpReleaseWriteQueue(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a2[1];
  LOBYTE(a1) = 6;
  a2[1] = 0LL;
  *a2 = 0LL;
  CmpMarkLockReleased(a1);
  return v2;
}
