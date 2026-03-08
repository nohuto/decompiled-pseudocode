/*
 * XREFs of ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x180244A88
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18001707C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

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
