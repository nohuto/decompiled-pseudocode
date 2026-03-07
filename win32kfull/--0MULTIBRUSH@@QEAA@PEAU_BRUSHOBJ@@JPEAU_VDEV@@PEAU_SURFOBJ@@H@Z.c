MULTIBRUSH *__fastcall MULTIBRUSH::MULTIBRUSH(
        MULTIBRUSH *this,
        struct _BRUSHOBJ *a2,
        int a3,
        struct _VDEV *a4,
        struct _SURFOBJ *a5,
        int a6)
{
  void *v9; // rcx

  *((_QWORD *)this + 3) = 0LL;
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = -1LL;
  *((_QWORD *)this + 2) = (unsigned __int64)&a5[-1].pvScan0 & -(__int64)(a5 != 0LL);
  *((_DWORD *)this + 1) = -1;
  if ( a2 )
  {
    *((_QWORD *)this + 4) = a2->pvRbrush;
    if ( a6 && a2->iSolidColor == -1 )
    {
      *((_QWORD *)this + 3) = *(_QWORD *)&a2[3].flColorType;
      if ( !a2->pvRbrush )
      {
        *(_QWORD *)(*((_QWORD *)this + 1) + 8LL) = BRUSHOBJ_pvGetRbrush(a2);
        v9 = *(void **)(*((_QWORD *)this + 1) + 8LL);
        *((_QWORD *)this + 4) = v9;
        if ( v9 )
        {
          memset_0(v9, 0, 16 * a3 + 8);
          **((_DWORD **)this + 4) = *((_DWORD *)a4 + 4);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL) - 8LL) = 1;
        }
        else
        {
          *(_DWORD *)this = 0;
        }
      }
    }
    else
    {
      *((_DWORD *)this + 1) = a2->iSolidColor;
    }
  }
  return this;
}
