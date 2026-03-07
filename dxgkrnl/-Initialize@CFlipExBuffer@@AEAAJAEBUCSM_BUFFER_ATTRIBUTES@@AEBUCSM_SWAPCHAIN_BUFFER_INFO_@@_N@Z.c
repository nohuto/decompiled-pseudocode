__int64 __fastcall CFlipExBuffer::Initialize(
        CFlipExBuffer *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2,
        const struct CSM_SWAPCHAIN_BUFFER_INFO_ *a3)
{
  NTSTATUS v5; // ebx
  void *v6; // rcx
  void *v7; // r14
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int128 v10; // xmm1
  void (__fastcall ***v11)(PVOID, __int64); // r14
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+50h] [rbp-10h]

  v5 = CFlipExBuffer::InitializeAttributes(this, a2);
  if ( v5 >= 0 )
  {
    v6 = (void *)*((_QWORD *)a3 + 126);
    if ( !v6
      || (Object = 0LL,
          v5 = ObReferenceObjectByHandle(v6, 2u, (POBJECT_TYPE)ExSemaphoreObjectType, 1, &Object, 0LL),
          *((_QWORD *)this + 41) = Object,
          v5 >= 0) )
    {
      v7 = (void *)*((_QWORD *)a3 + 127);
      if ( !v7
        || (SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType(),
            Object = 0LL,
            v5 = ObReferenceObjectByHandle(v7, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL),
            *((_QWORD *)this + 43) = Object,
            v5 >= 0) )
      {
        v15[0] = *(_DWORD *)a3;
        v16 = 0LL;
        v8 = 0;
        v17 = 0LL;
        while ( 1 )
        {
          if ( v8 >= *((_DWORD *)a3 + 1) )
          {
            *((_QWORD *)this + 40) = *((_QWORD *)a3 + 125);
            *((_BYTE *)this + 624) = *(_DWORD *)a3 == 4;
            return (unsigned int)v5;
          }
          Object = 0LL;
          v9 = 32LL * v8;
          v15[1] = v8;
          v10 = *(_OWORD *)((char *)a3 + v9 + 24);
          v16 = *(_OWORD *)((char *)a3 + v9 + 8);
          v17 = v10;
          v5 = CBufferRealization::Create(
                 (const struct CSM_REALIZATION_INFO *)v15,
                 0,
                 (struct CBufferRealization **)&Object);
          if ( v5 < 0 )
            return (unsigned int)v5;
          v11 = (void (__fastcall ***)(PVOID, __int64))Object;
          v5 = (*(__int64 (__fastcall **)(CFlipExBuffer *, PVOID))(*(_QWORD *)this + 216LL))(this, Object);
          if ( v5 < 0 )
            break;
          (*((void (__fastcall **)(void (__fastcall **)(PVOID, __int64)))*v11[9] + 4))(v11[9]);
          ++v8;
        }
        if ( v11 )
          (**v11)(v11, 1LL);
      }
    }
  }
  return (unsigned int)v5;
}
