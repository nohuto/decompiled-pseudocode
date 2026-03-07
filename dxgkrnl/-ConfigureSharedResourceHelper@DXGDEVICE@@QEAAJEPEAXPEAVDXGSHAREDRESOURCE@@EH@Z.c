__int64 __fastcall DXGDEVICE::ConfigureSharedResourceHelper(
        DXGDEVICE *this,
        char a2,
        void *a3,
        struct DXGSHAREDRESOURCE *a4,
        unsigned __int8 a5,
        int a6)
{
  __int64 v10; // rbp
  PVOID v11; // rbx
  unsigned int v12; // esi
  __int64 *v13; // rdi
  DXGPROCESSSHAREDACCESS *v14; // rcx
  __int64 *i; // rdx
  char v16; // r8
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  NTSTATUS v21; // eax
  DXGPROCESSSHAREDACCESS *v22; // r8
  DXGPROCESSSHAREDACCESS **v23; // rdx
  _BYTE v24[16]; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+90h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 5511LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 5511LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( a4 )
  {
    v10 = *((_QWORD *)a4 + 19);
    if ( v10 && (!a6 || *(DXGDEVICE **)(v10 + 80) == this) )
    {
      v11 = 0LL;
      v12 = 0;
      if ( !a2 )
      {
        Object = 0LL;
        v21 = ObReferenceObjectByHandle(a3, 0x1000u, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
        v11 = Object;
        v12 = v21;
        if ( v21 < 0 )
        {
          WdLogSingleEntry1(3LL, a3);
          return v12;
        }
      }
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(v10 + 8), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
      v13 = (__int64 *)(v10 + 56);
      v14 = 0LL;
      for ( i = *(__int64 **)(v10 + 56); i != v13; i = (__int64 *)*i )
      {
        v16 = *((_BYTE *)i + 16);
        if ( a2 )
        {
          if ( v16 )
            goto LABEL_14;
        }
        else if ( !v16 && (PVOID)i[3] == v11 )
        {
LABEL_14:
          v14 = (DXGPROCESSSHAREDACCESS *)(i - 1);
          break;
        }
      }
      if ( a5 )
      {
        if ( v14 )
        {
LABEL_20:
          if ( v11 )
            ObfDereferenceObject(v11);
          if ( v24[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
          return v12;
        }
        v17 = operator new[](0x28uLL, 0x4B677844u, 256LL);
        if ( !v17 )
        {
          v12 = -1073741801;
          WdLogSingleEntry1(6LL, -1073741801LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262145,
            -1,
            (__int64)L"Out of memory allocating DXGPROCESSSHAREDACCESS class, returning 0x%I64x",
            -1073741801LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_20;
        }
        *(_BYTE *)(v17 + 24) = a2;
        *(_QWORD *)(v17 + 32) = v11;
        v18 = (_QWORD *)(v17 + 8);
        v19 = *v13;
        if ( *(__int64 **)(*v13 + 8) == v13 )
        {
          *v18 = v19;
          v11 = 0LL;
          v18[1] = v13;
          *(_QWORD *)(v19 + 8) = v18;
          *v13 = (__int64)v18;
          goto LABEL_20;
        }
      }
      else
      {
        if ( !v14 )
          goto LABEL_20;
        v22 = (DXGPROCESSSHAREDACCESS *)*((_QWORD *)v14 + 1);
        if ( *((DXGPROCESSSHAREDACCESS **)v22 + 1) == (DXGPROCESSSHAREDACCESS *)((char *)v14 + 8) )
        {
          v23 = (DXGPROCESSSHAREDACCESS **)*((_QWORD *)v14 + 2);
          if ( *v23 == (DXGPROCESSSHAREDACCESS *)((char *)v14 + 8) )
          {
            *v23 = v22;
            *((_QWORD *)v22 + 1) = v23;
            DXGPROCESSSHAREDACCESS::`scalar deleting destructor'(v14);
            goto LABEL_20;
          }
        }
      }
      __fastfail(3u);
    }
    WdLogSingleEntry3(3LL, this, a4, -1073741811LL);
  }
  else
  {
    WdLogSingleEntry3(3LL, this, 0LL, -1073741811LL);
  }
  return 3221225485LL;
}
