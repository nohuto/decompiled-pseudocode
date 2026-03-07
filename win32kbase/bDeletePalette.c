__int64 __fastcall bDeletePalette(__int64 a1)
{
  unsigned int v1; // ebx
  int *v2; // rax
  unsigned int v3; // ebx
  int *v5; // [rsp+38h] [rbp+10h] BYREF
  HSEMAPHORE v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = a1;
  v6 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 40LL);
  EngAcquireSemaphore(v6);
  v2 = (int *)HmgShareLockCheck(v1, 8);
  v3 = 0;
  v5 = v2;
  if ( v2 )
  {
    v3 = XEPALOBJ::bDeletePaletteInternal((XEPALOBJ *)&v5, 0);
    if ( v5 )
      HmgDecrementShareReferenceCountEx(v5, 0LL);
  }
  SEMOBJ::vUnlock((PERESOURCE *)&v6);
  return v3;
}
