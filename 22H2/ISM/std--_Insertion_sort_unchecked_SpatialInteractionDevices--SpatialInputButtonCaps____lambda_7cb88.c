/*
 * XREFs of std::_Insertion_sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C883C
 * Callers:
 *     std::_Sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___ @ 0x1800C8EC8 (std--_Sort_unchecked_SpatialInteractionDevices--SpatialInputButtonCaps____lambda_7cb88ca86370cec.c)
 * Callees:
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     _lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator() @ 0x1800C92B8 (_lambda_7cb88ca86370cec64ac2ea824bd2a3de_--operator().c)
 */

char *__fastcall std::_Insertion_sort_unchecked_SpatialInteractionDevices::SpatialInputButtonCaps____lambda_7cb88ca86370cec64ac2ea824bd2a3de___(
        char *Src,
        char *a2)
{
  char *v4; // rbp
  char *i; // rbx
  int v6; // r14d
  char v7; // al
  char *v8; // rcx
  char *v9; // r8
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp+8h]

  if ( Src != a2 )
  {
    v4 = Src + 12;
    for ( i = Src + 12; i != a2; i += 12 )
    {
      v6 = *((_DWORD *)i + 2);
      v14 = *(_QWORD *)i;
      v12 = *(_QWORD *)i;
      v13 = v6;
      v7 = lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(i, &v12, Src);
      v9 = i;
      if ( v7 )
      {
        memmove_0(v4, Src, i - Src);
        *(_QWORD *)Src = v14;
        *((_DWORD *)Src + 2) = v6;
      }
      else
      {
        while ( (unsigned __int8)lambda_7cb88ca86370cec64ac2ea824bd2a3de_::operator()(v8, &v12, v9 - 12) )
        {
          *(_QWORD *)v10 = *(_QWORD *)v9;
          *(_DWORD *)(v10 + 8) = *((_DWORD *)v9 + 2);
          v8 = v9;
        }
        *(_QWORD *)v10 = v14;
        *(_DWORD *)(v10 + 8) = v6;
      }
    }
  }
  return a2;
}
