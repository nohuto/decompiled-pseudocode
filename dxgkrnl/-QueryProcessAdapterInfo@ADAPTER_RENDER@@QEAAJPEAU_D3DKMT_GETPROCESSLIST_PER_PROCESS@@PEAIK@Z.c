__int64 __fastcall ADAPTER_RENDER::QueryProcessAdapterInfo(
        ADAPTER_RENDER *this,
        void **a2,
        unsigned int *a3,
        ACCESS_MASK a4)
{
  unsigned int v4; // r15d
  char *v5; // rbp
  unsigned int *v6; // rbx
  __int64 v9; // rsi
  _QWORD *v10; // r14
  _QWORD *v11; // rdi
  void *v12; // r12
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v14; // eax

  v4 = 0;
  v5 = (char *)this + 72;
  v6 = a3;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v5, 0LL);
  *((_QWORD *)v5 + 1) = KeGetCurrentThread();
  LODWORD(v9) = *((_DWORD *)this + 78);
  if ( (unsigned int)v9 <= *v6 && a2 )
  {
    v10 = (_QWORD *)((char *)this + 296);
    v9 = 0LL;
    v11 = (_QWORD *)*v10;
    if ( (_QWORD *)*v10 != v10 )
    {
      do
      {
        if ( *((_BYTE *)v11 + 21) )
        {
          v12 = *(void **)(*(v11 - 3) + 56LL);
          ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(v12);
          v14 = ObOpenObjectByPointer(v12, 0x400u, 0LL, a4, ObjectType, 1, &a2[v9]);
          if ( v14 >= 0 )
            v9 = (unsigned int)(v9 + 1);
          else
            WdLogSingleEntry2(3LL, v12, v14);
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v10 );
      v4 = 0;
      v6 = a3;
    }
  }
  else
  {
    v4 = -1073741789;
  }
  *v6 = v9;
  *((_QWORD *)v5 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
