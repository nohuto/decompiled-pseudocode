void __fastcall DXGDEVICE::RemoveAllocationsWithoutDestroy(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        struct DXGALLOCATION *a3,
        int a4)
{
  __int64 v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  _BYTE v14[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, this + 26, 0);
  v12 = 0LL;
  v13 = 0;
  if ( a2 )
  {
    DXGAUTOMUTEX::Initialize((DXGAUTOMUTEX *)&v12, (struct DXGRESOURCE *)((char *)a2 + 80), 1);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v12);
  }
  else
  {
    DXGPUSHLOCK::AcquireExclusive(v15);
    v16 = 2;
  }
  v8 = (unsigned int)(a4 - 1);
  v9 = (_QWORD *)((char *)a3 + 56);
  v10 = *((_QWORD *)a3 + 7);
  if ( a4 != 1 )
  {
    do
    {
      a3 = (struct DXGALLOCATION *)*((_QWORD *)a3 + 8);
      --v8;
    }
    while ( v8 );
  }
  v11 = *((_QWORD *)a3 + 8);
  if ( v10 )
  {
    *v9 = 0LL;
    *((_QWORD *)a3 + 8) = 0LL;
    *(_QWORD *)(v10 + 64) = v11;
    if ( v11 )
      *(_QWORD *)(v11 + 56) = v10;
  }
  else
  {
    if ( a2 )
      *((_QWORD *)a2 + 3) = v11;
    else
      this[6] = (struct _KTHREAD *)v11;
    *((_QWORD *)a3 + 8) = 0LL;
    if ( v11 )
      *(_QWORD *)(v11 + 56) = 0LL;
  }
  if ( v13 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v12);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
}
