void __fastcall HmgDecProcessHandleCount(unsigned int a1)
{
  __int64 v1; // rcx
  struct _W32PROCESS *W32ProcessFromId; // rbx
  __int64 v3; // rcx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 && a1 != -2147483630 )
  {
    Object = 0LL;
    W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
    if ( W32ProcessFromId )
    {
      GreAcquireHmgrSemaphore(v1);
      --*((_DWORD *)W32ProcessFromId + 15);
      GreReleaseHmgrSemaphore(v3);
    }
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
