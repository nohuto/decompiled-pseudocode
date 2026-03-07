__int64 __fastcall RGNOBJ::bExpand(RGNOBJ *this, unsigned int a2)
{
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  PVOID Entry; // [rsp+40h] [rbp+18h] BYREF

  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&Entry, a2);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&Entry);
  v3 = Entry;
  if ( Entry )
  {
    RGNOBJ::vCopy((RGNOBJ *)&Entry, this);
    RGNOBJ::vSwap(this, (struct RGNOBJ *)&Entry);
    v3 = Entry;
    v4 = 1;
  }
  else
  {
    EngSetLastError(8u);
    v4 = 0;
  }
  if ( v3 )
    PopThreadGuardedObject(v3 + 11);
  REGION::vDeleteREGION((unsigned __int64)v3);
  return v4;
}
