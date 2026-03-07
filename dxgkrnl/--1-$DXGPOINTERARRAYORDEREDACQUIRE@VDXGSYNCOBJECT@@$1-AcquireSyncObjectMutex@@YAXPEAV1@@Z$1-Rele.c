void __fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>(
        __int64 a1)
{
  unsigned __int64 i; // rdi
  void *v3; // rcx

  if ( *(_QWORD *)a1 )
  {
    if ( !*(_BYTE *)(a1 + 32) )
    {
      if ( *(_BYTE *)(a1 + 33) )
      {
        for ( i = 0LL;
              i < *(unsigned int *)(a1 + 24);
              DXGFASTMUTEX::Release((struct _KTHREAD **)(*(_QWORD *)(*(_QWORD *)a1 + 8 * i++) + 32LL)) )
        {
          ;
        }
      }
    }
  }
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 != a1 + 8 && v3 )
    ExFreePoolWithTag(v3, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
}
