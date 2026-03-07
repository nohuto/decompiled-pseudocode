void __fastcall D2D1::Matrix3x2F::SetProduct(
        D2D1::Matrix3x2F *this,
        const struct D2D1::Matrix3x2F *a2,
        const struct D2D1::Matrix3x2F *a3)
{
  *(float *)this = (float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a3 + 2) * *((float *)a2 + 1));
  *((float *)this + 1) = (float)(*((float *)a3 + 3) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 1) * *(float *)a2);
  *((float *)this + 2) = (float)(*((float *)a2 + 2) * *(float *)a3) + (float)(*((float *)a3 + 2) * *((float *)a2 + 3));
  *((float *)this + 3) = (float)(*((float *)a2 + 2) * *((float *)a3 + 1))
                       + (float)(*((float *)a3 + 3) * *((float *)a2 + 3));
  *((float *)this + 4) = (float)((float)(*((float *)a2 + 4) * *(float *)a3)
                               + (float)(*((float *)a3 + 2) * *((float *)a2 + 5)))
                       + *((float *)a3 + 4);
  *((float *)this + 5) = (float)((float)(*((float *)a2 + 4) * *((float *)a3 + 1))
                               + (float)(*((float *)a3 + 3) * *((float *)a2 + 5)))
                       + *((float *)a3 + 5);
}
