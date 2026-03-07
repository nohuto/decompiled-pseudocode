__int64 __fastcall CBspNode::PushPolygon(CBspNode *this, struct CPolygon *a2, char a3)
{
  int v3; // edi
  struct CPolygon *v6; // rbx
  CPolygon **v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  struct CPolygon *v10; // r14
  CBspNode *v11; // rax
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // eax
  CBspNode *v15; // rax
  unsigned int v17; // [rsp+20h] [rbp-20h]
  struct CPolygon *v18; // [rsp+30h] [rbp-10h] BYREF
  int v19; // [rsp+70h] [rbp+30h] BYREF
  struct CPolygon *v20; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v20 = 0LL;
  v18 = 0LL;
  v6 = a2;
  v19 = 0;
  v7 = (CPolygon **)*((_QWORD *)this + 4);
  if ( v7 == *((CPolygon ***)this + 5) )
  {
    CBspNode::AddPolygon(this, a2);
    return (unsigned int)v3;
  }
  v8 = CPolygon::CompareAndSplit(*v7, a2, (enum D2DVectorHelper::Relation *)&v19, &v20, &v18);
  v3 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x80u, 0LL);
    v10 = v20;
    v6 = v18;
    goto LABEL_31;
  }
  if ( v19 )
  {
    if ( v19 == 1 )
    {
      v10 = v6;
    }
    else
    {
      v10 = v20;
      if ( v19 == 2 )
        goto LABEL_11;
    }
  }
  else
  {
    CBspNode::AddPolygon(this, v6);
    v10 = v20;
  }
  v6 = v18;
LABEL_11:
  if ( !v10 )
    goto LABEL_22;
  v11 = (CBspNode *)*((_QWORD *)this + 2);
  if ( v11 )
    goto LABEL_19;
  v11 = (CBspNode *)CBspNode::operator new();
  if ( v11 )
    v11 = CBspNode::CBspNode(v11, a3);
  *((_QWORD *)this + 2) = v11;
  if ( v11 )
  {
LABEL_19:
    v14 = CBspNode::PushPolygon(v11, v10, a3);
    v3 = v14;
    if ( v14 < 0 )
    {
      v17 = 155;
      goto LABEL_21;
    }
LABEL_22:
    if ( !v6 )
      goto LABEL_31;
    v15 = (CBspNode *)*((_QWORD *)this + 3);
    if ( !v15 )
    {
      v15 = (CBspNode *)CBspNode::operator new();
      if ( v15 )
        v15 = CBspNode::CBspNode(v15, a3);
      *((_QWORD *)this + 3) = v15;
      if ( !v15 )
      {
        v17 = 163;
        goto LABEL_17;
      }
    }
    v14 = CBspNode::PushPolygon(v15, v6, a3);
    v3 = v14;
    if ( v14 >= 0 )
      goto LABEL_31;
    v17 = 165;
LABEL_21:
    v13 = v14;
    goto LABEL_18;
  }
  v17 = 153;
LABEL_17:
  v13 = -2147024882;
  v3 = -2147024882;
LABEL_18:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v13, v17, 0LL);
LABEL_31:
  if ( v19 == 3 )
  {
    if ( v10 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v6 )
      (*(void (__fastcall **)(struct CPolygon *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  if ( v3 < 0 )
  {
    ReleaseInterface<CBspNode>((__int64 *)this + 2);
    ReleaseInterface<CBspNode>((__int64 *)this + 3);
  }
  return (unsigned int)v3;
}
