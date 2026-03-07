__int64 __fastcall DxgkGetPresentStats(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdi
  struct DXGPROCESS *Current; // rax
  struct _KTHREAD **v9; // rbx
  struct DXGADAPTER *v10; // rsi
  __int64 v11; // rbx
  int v12; // eax
  const wchar_t *v13; // r9
  __int64 v14; // rax
  struct DXGADAPTER *v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[16]; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v18; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF

  v5 = (unsigned int)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  v9 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    LODWORD(v5) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)v5;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    LODWORD(v5) = -1073741790;
    WdLogSingleEntry2(3LL, v9, -1073741790LL);
    return (unsigned int)v5;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(v9 + 13), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v16 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v18, v5, v9, &v16, 1);
  v10 = v16;
  if ( v16 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v19, v16, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v19, 0LL);
    v5 = v12;
    if ( v12 >= 0 )
    {
      if ( !*((_BYTE *)v10 + 2833) )
      {
        v14 = *((_QWORD *)v10 + 366);
        if ( v14 )
        {
          LODWORD(v5) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v14 + 736)
                                                                                               + 8LL)
                                                                                   + 496LL))(
                          *(_QWORD *)(v14 + 744),
                          a2,
                          a3,
                          a4);
LABEL_14:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v19);
          goto LABEL_15;
        }
      }
      v5 = -1073741811LL;
      WdLogSingleEntry2(2LL, v10, -1073741811LL);
      v13 = L"DXGADAPTER 0x%I64x is not an active render adapter, returning 0x%I64x";
    }
    else
    {
      WdLogSingleEntry2(2LL, v10, v12);
      v13 = L"Failed to acquire shared access for DXGADAPTER 0x%I64x, returning 0x%I64x";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, (__int64)v10, v5, 0LL, 0LL, 0LL);
    goto LABEL_14;
  }
  v11 = v5;
  LODWORD(v5) = -1073741811;
  WdLogSingleEntry2(2LL, v11, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid hAdapter (0x%I64x) specified, returning 0x%I64x",
    v11,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_15:
  if ( v18 )
    DXGADAPTER::ReleaseReference(v18);
  if ( v17[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  return (unsigned int)v5;
}
