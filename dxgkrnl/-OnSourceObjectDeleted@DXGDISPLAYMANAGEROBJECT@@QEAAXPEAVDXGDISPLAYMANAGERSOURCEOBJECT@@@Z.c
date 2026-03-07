void __fastcall DXGDISPLAYMANAGEROBJECT::OnSourceObjectDeleted(
        DXGDISPLAYMANAGEROBJECT *this,
        struct DXGDISPLAYMANAGERSOURCEOBJECT *a2)
{
  DXGDISPLAYMANAGEROBJECT *v4; // rcx
  struct DXGDISPLAYMANAGERSOURCEOBJECT *v5; // rcx
  DXGDISPLAYMANAGEROBJECT *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( a2 )
  {
    v4 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 19);
    if ( v4 != (DXGDISPLAYMANAGEROBJECT *)((char *)this + 152) )
    {
      v5 = (DXGDISPLAYMANAGEROBJECT *)((char *)v4 - 8);
      if ( v5 )
      {
        while ( v5 != a2 )
        {
          v6 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)v5 + 1);
          v5 = (DXGDISPLAYMANAGEROBJECT *)((char *)v6 - 8);
          if ( v6 == (DXGDISPLAYMANAGEROBJECT *)((char *)this + 152) )
            v5 = 0LL;
          if ( !v5 )
            goto LABEL_8;
        }
        v7 = (_QWORD *)((char *)a2 + 8);
        v8 = *((_QWORD *)a2 + 1);
        if ( *(struct DXGDISPLAYMANAGERSOURCEOBJECT **)(v8 + 8) != (struct DXGDISPLAYMANAGERSOURCEOBJECT *)((char *)a2 + 8)
          || (v9 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v9 != v7) )
        {
          __fastfail(3u);
        }
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        *((_QWORD *)a2 + 2) = 0LL;
        --*((_QWORD *)this + 21);
      }
    }
  }
LABEL_8:
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10);
}
