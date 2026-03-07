__int64 __fastcall UserDCompositionCreateSynchronizationObject(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v4 = 0LL;
  if ( (int)DCompositionCreateSynchronizationObject(&v4) >= 0 )
  {
    v2 = 1;
    *a1 = v4;
  }
  return v2;
}
