void __fastcall CHolographicManager::RemoveInteropTexture(RTL_SRWLOCK *this, struct CHolographicInteropTexture *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct CHolographicInteropTexture **i; // rcx
  CHolographicInteropTaskQueue *Ptr; // rcx
  __int64 v7; // rdi
  int v8; // eax
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+48h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp+7h] BYREF
  int *v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]

  v2 = this + 13;
  AcquireSRWLockExclusive(this + 13);
  for ( i = (struct CHolographicInteropTexture **)this[18].Ptr; i != this[19].Ptr; ++i )
  {
    if ( *i == a2 )
    {
      memmove_0(i, i + 1, (char *)this[19].Ptr - (char *)(i + 1));
      this[19].Ptr = (char *)this[19].Ptr - 8;
      Ptr = (CHolographicInteropTaskQueue *)this[6].Ptr;
      if ( Ptr && LOBYTE(this[30].Ptr) )
        CHolographicInteropTaskQueue::PostMessageW(
          Ptr,
          3u,
          (struct IUnknown *)(((unsigned __int64)a2 + 80) & -(__int64)(a2 != 0LL)),
          0LL,
          0LL,
          0LL,
          0LL);
      v7 = *((_QWORD *)this[3].Ptr + 34);
      if ( v7 )
      {
        v8 = *((_DWORD *)a2 + 56);
        v15 = (struct _RTL_CRITICAL_SECTION *)(v7 + 96);
        v14 = v8;
        EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 96));
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::erase(
          v7 + 328,
          &v14);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
        v15 = (struct _RTL_CRITICAL_SECTION *)(v7 + 40);
        EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 40));
        std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::erase(
          v7 + 80,
          &v14);
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v15);
      }
      v9 = *((_DWORD *)a2 + 56);
      if ( CompositorTracing::IsEnabled((__int64)Ptr) )
      {
        wil::details::static_lazy<CompositorTracing>::get(
          v10,
          (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_);
        v12 = (_DWORD *)wil::details::static_lazy<CompositorTracing>::get(
                          v11,
                          (void (__cdecl *)())_lambda_54eb6a81c7e2c53bee8fa6139f2800b5_::_lambda_invoker_cdecl_)[1];
        if ( *v12 > 4u )
        {
          if ( tlgKeywordOn((__int64)v12, 0x400000000000LL) )
          {
            v19 = 0;
            v17 = &v14;
            v14 = v9;
            v18 = 4;
            tlgWriteTransfer_EventWriteTransfer(v13, (unsigned __int8 *)dword_18037F8AB, 0LL, 0LL, 3u, &v16);
          }
        }
      }
      CResource::InternalRelease(a2);
      break;
    }
  }
  ReleaseSRWLockExclusive(v2);
}
