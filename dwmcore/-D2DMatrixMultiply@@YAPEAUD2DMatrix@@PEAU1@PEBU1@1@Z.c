struct D2DMatrix *__fastcall D2DMatrixMultiply(
        struct D2DMatrix *a1,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3)
{
  float *v3; // rax
  char v5; // [rsp+0h] [rbp-58h] BYREF

  if ( a1 == a2 || (v3 = (float *)a1, a1 == a3) )
    v3 = (float *)&v5;
  *v3 = (float)((float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a3 + 4) * *((float *)a2 + 1)))
              + (float)(*((float *)a3 + 8) * *((float *)a2 + 2)))
      + (float)(*((float *)a3 + 12) * *((float *)a2 + 3));
  v3[1] = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(*((float *)a2 + 1) * *((float *)a3 + 5)))
                + (float)(*((float *)a2 + 2) * *((float *)a3 + 9)))
        + (float)(*((float *)a3 + 13) * *((float *)a2 + 3));
  v3[2] = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(*((float *)a3 + 6) * *((float *)a2 + 1)))
                + (float)(*((float *)a2 + 2) * *((float *)a3 + 10)))
        + (float)(*((float *)a3 + 14) * *((float *)a2 + 3));
  v3[3] = (float)((float)((float)(*((float *)a3 + 7) * *((float *)a2 + 1)) + (float)(*((float *)a3 + 3) * *(float *)a2))
                + (float)(*((float *)a3 + 11) * *((float *)a2 + 2)))
        + (float)(*((float *)a2 + 3) * *((float *)a3 + 15));
  v3[4] = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 4)) + (float)(*((float *)a2 + 4) * *(float *)a3))
                + (float)(*((float *)a3 + 8) * *((float *)a2 + 6)))
        + (float)(*((float *)a3 + 12) * *((float *)a2 + 7));
  v3[5] = (float)((float)((float)(*((float *)a3 + 5) * *((float *)a2 + 5))
                        + (float)(*((float *)a3 + 1) * *((float *)a2 + 4)))
                + (float)(*((float *)a2 + 6) * *((float *)a3 + 9)))
        + (float)(*((float *)a2 + 7) * *((float *)a3 + 13));
  v3[6] = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 5))
                        + (float)(*((float *)a2 + 4) * *((float *)a3 + 2)))
                + (float)(*((float *)a3 + 10) * *((float *)a2 + 6)))
        + (float)(*((float *)a2 + 7) * *((float *)a3 + 14));
  v3[7] = (float)((float)((float)(*((float *)a2 + 4) * *((float *)a3 + 3))
                        + (float)(*((float *)a3 + 7) * *((float *)a2 + 5)))
                + (float)(*((float *)a3 + 11) * *((float *)a2 + 6)))
        + (float)(*((float *)a2 + 7) * *((float *)a3 + 15));
  v3[8] = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 4)) + (float)(*((float *)a2 + 8) * *(float *)a3))
                + (float)(*((float *)a3 + 8) * *((float *)a2 + 10)))
        + (float)(*((float *)a2 + 11) * *((float *)a3 + 12));
  v3[9] = (float)((float)((float)(*((float *)a3 + 1) * *((float *)a2 + 8))
                        + (float)(*((float *)a3 + 5) * *((float *)a2 + 9)))
                + (float)(*((float *)a3 + 9) * *((float *)a2 + 10)))
        + (float)(*((float *)a2 + 11) * *((float *)a3 + 13));
  v3[10] = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 9))
                         + (float)(*((float *)a2 + 8) * *((float *)a3 + 2)))
                 + (float)(*((float *)a3 + 10) * *((float *)a2 + 10)))
         + (float)(*((float *)a2 + 11) * *((float *)a3 + 14));
  v3[11] = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 7))
                         + (float)(*((float *)a3 + 3) * *((float *)a2 + 8)))
                 + (float)(*((float *)a3 + 11) * *((float *)a2 + 10)))
         + (float)(*((float *)a2 + 11) * *((float *)a3 + 15));
  v3[12] = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 4))
                         + (float)(*((float *)a2 + 12) * *(float *)a3))
                 + (float)(*((float *)a3 + 8) * *((float *)a2 + 14)))
         + (float)(*((float *)a2 + 15) * *((float *)a3 + 12));
  v3[13] = (float)((float)((float)(*((float *)a3 + 1) * *((float *)a2 + 12))
                         + (float)(*((float *)a3 + 5) * *((float *)a2 + 13)))
                 + (float)(*((float *)a2 + 14) * *((float *)a3 + 9)))
         + (float)(*((float *)a2 + 15) * *((float *)a3 + 13));
  v3[14] = (float)((float)((float)(*((float *)a3 + 6) * *((float *)a2 + 13))
                         + (float)(*((float *)a2 + 12) * *((float *)a3 + 2)))
                 + (float)(*((float *)a2 + 14) * *((float *)a3 + 10)))
         + (float)(*((float *)a3 + 14) * *((float *)a2 + 15));
  v3[15] = (float)((float)((float)(*((float *)a3 + 3) * *((float *)a2 + 12))
                         + (float)(*((float *)a2 + 13) * *((float *)a3 + 7)))
                 + (float)(*((float *)a3 + 11) * *((float *)a2 + 14)))
         + (float)(*((float *)a2 + 15) * *((float *)a3 + 15));
  if ( v3 != (float *)a1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)v3;
    *((_OWORD *)a1 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)v3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)v3 + 3);
  }
  return a1;
}
