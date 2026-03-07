__int64 __fastcall ForceGpupTdrCallback(struct DXGADAPTER *a1, void *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v7[144]; // [rsp+50h] [rbp-A8h] BYREF

  v2 = *((_QWORD *)a1 + 366);
  if ( v2 && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)a1 + 27) + 64LL) + 5016LL) )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, a1, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v7, 0LL) >= 0 )
    {
      v3 = *(_QWORD *)(v2 + 736);
      v4 = *(_QWORD *)(v2 + 744);
      memset(v6, 0, sizeof(v6));
      LODWORD(v6[0]) = 6;
      (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)(v3 + 8) + 64LL))(v4, v6);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  }
  return 0LL;
}
