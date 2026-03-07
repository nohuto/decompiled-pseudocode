void __fastcall MILMatrix3x2::SetProduct(
        MILMatrix3x2 *this,
        const struct MILMatrix3x2 *a2,
        const struct MILMatrix3x2 *a3)
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
