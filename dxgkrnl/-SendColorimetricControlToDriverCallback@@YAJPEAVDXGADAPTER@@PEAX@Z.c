__int64 __fastcall SendColorimetricControlToDriverCallback(struct DXGADAPTER *this, _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _DXGKARG_CONTROLMODEBEHAVIOR v16; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v17[144]; // [rsp+30h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( *((int *)this + 705) >= 2400 )
    {
      *(_QWORD *)&v16.Request.0 = 0LL;
      v16.NotSatisfied.Value = 0;
      v16.Request.Value = a2[5] != 0 ? 2 : 0;
      if ( (int)DXGADAPTER::DdiControlModeBehavior(this, &v16, v7) >= 0 )
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11, v13, v14) + 24) = this;
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 102);
    v10[5] = *((unsigned int *)this + 101);
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  return v9;
}
