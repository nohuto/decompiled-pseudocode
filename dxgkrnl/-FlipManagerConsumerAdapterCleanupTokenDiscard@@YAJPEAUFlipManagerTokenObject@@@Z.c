__int64 __fastcall FlipManagerConsumerAdapterCleanupTokenDiscard(char *Object)
{
  int v2; // edi
  struct CFlipManagerToken *v3; // rbx
  struct CFlipManagerToken *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = FlipManagerTokenObject::LockForWrite(Object, &v5);
  if ( v2 >= 0 )
  {
    v3 = v5;
    v2 = FlipManagerObject::NotifyAdapterCleanupTokenDiscard(*((FlipManagerObject **)v5 + 9), *((_QWORD *)v5 + 10));
    CPushLock::ReleaseLock((struct CFlipManagerToken *)((char *)v3 + 40));
    ObfDereferenceObject((char *)v3 - 32);
  }
  ObfDereferenceObject(Object);
  return (unsigned int)v2;
}
