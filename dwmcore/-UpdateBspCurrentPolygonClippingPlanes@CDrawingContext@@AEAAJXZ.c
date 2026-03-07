__int64 __fastcall CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(CDrawingContext *this)
{
  void (__fastcall ***v2)(_QWORD, _DWORD *); // rcx
  int v3; // ebx
  int v4; // r11d
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _DWORD v9[4]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v10[64]; // [rsp+40h] [rbp-78h] BYREF
  int v11; // [rsp+80h] [rbp-38h]
  int v12; // [rsp+90h] [rbp-28h]
  int v13; // [rsp+94h] [rbp-24h]
  int v14; // [rsp+98h] [rbp-20h]
  int v15; // [rsp+9Ch] [rbp-1Ch]

  v2 = (void (__fastcall ***)(_QWORD, _DWORD *))(*((_QWORD *)this + 4)
                                               + 8LL
                                               + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL));
  (**v2)(v2, v9);
  v3 = v9[1];
  v11 = 0;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 400), (struct CMILMatrix *)v10);
  v12 = 0;
  v13 = 0;
  v14 = v4;
  v15 = v3;
  v5 = ClipPlaneIterator::ClipToPolygon((CDrawingContext *)((char *)this + 3432));
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1334u, 0LL);
  return v7;
}
