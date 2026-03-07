void __fastcall GreClientRgnDone(Gre::Base *a1)
{
  __int64 v1; // rcx
  __int64 i; // rbx
  int v3; // eax
  struct EWNDOBJ *j; // rdi
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = *((_QWORD *)Gre::Base::Globals(a1) + 7);
  GreAcquireSemaphore(v5);
  for ( i = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v1) + 32) + 23664LL); i; i = *(_QWORD *)(i + 8) )
  {
    v3 = *(_DWORD *)(i + 48);
    if ( (v3 & 0x4000000) != 0 )
    {
      *(_DWORD *)(i + 48) = v3 & 0xFBFFFFFF;
      (*(void (__fastcall **)(_QWORD, __int64))(i + 40))(0LL, 64LL);
    }
    for ( j = *(struct EWNDOBJ **)(i + 24); j; j = (struct EWNDOBJ *)*((_QWORD *)j + 20) )
      vSpWndobjChange(*(HDEV *)(*(_QWORD *)(i + 32) + 48LL), j);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
}
