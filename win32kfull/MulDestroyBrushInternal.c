void __fastcall MulDestroyBrushInternal(void *a1)
{
  struct _BRUSHOBJ v1; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v2[64]; // [rsp+48h] [rbp-40h] BYREF

  if ( a1 )
  {
    *(&v1.iSolidColor + 1) = 0;
    *(_QWORD *)&v1.flColorType = 0LL;
    v1.iSolidColor = -1;
    v1.pvRbrush = a1;
    MULTIBRUSH::MULTIBRUSH((MULTIBRUSH *)v2, &v1, -1, 0LL, 0LL, 1);
    MULTIBRUSH::DestroyTable((MULTIBRUSH *)v2);
  }
}
