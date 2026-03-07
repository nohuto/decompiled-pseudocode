void __fastcall CPrimitiveGroup::AddFilledPolygonToD2DSink(struct ID2D1GeometrySink *a1, struct D2D_POINT_2F *a2)
{
  __int64 v4; // rax

  v4 = *(_QWORD *)a1;
  if ( (float)((float)(a2[2].y - a2[1].y) * (float)(a2[1].x - a2->x)) <= (float)((float)(a2[1].y - a2->y)
                                                                               * (float)(a2[2].x - a2[1].x)) )
  {
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, _QWORD))(v4 + 40))(a1, *(_QWORD *)&a2[3], 0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[2]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[1]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *a2);
  }
  else
  {
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD, _QWORD))(v4 + 40))(a1, *a2, 0LL);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[1]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[2]);
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, _QWORD))(*(_QWORD *)a1 + 80LL))(a1, *(_QWORD *)&a2[3]);
  }
  (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 1LL);
}
